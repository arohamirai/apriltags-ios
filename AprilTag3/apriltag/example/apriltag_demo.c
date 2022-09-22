/* Copyright (C) 2013-2016, The Regents of The University of Michigan.
All rights reserved.
This software was developed in the APRIL Robotics Lab under the
direction of Edwin Olson, ebolson@umich.edu. This software may be
available under alternative licensing terms; contact the address above.
Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
The views and conclusions contained in the software and documentation are those
of the authors and should not be interpreted as representing official policies,
either expressed or implied, of the Regents of The University of Michigan.
*/

#include <stdio.h>

#include "apriltag.h"
#include "tag36h10.h"
#include "apriltag_family.h"

int main(int argc, char* argv[])
{
  apriltag_detector_t* td_ = apriltag_detector_create();

  td_->quad_decimate = 2.0; // Decimate input image by this factor
  td_->quad_sigma = 0.0;    // Apply low-pass blur to input
  td_->nthreads = 1;        // Use this many CPU threads
  td_->debug = 0;           // Enable debugging output (slow)
  td_->refine_edges = 1;    // Spend more time trying to align edges of tags
  td_->qtp.min_white_black_diff = 5;

  apriltag_family_t* tf_ = apriltag_family_create("tag36h10");
  apriltag_detector_add_family(td_, tf_);

  double total_time = 0.;
  int cnt = 0;
  for (int i = 105; i < 200; i++)
  {
    cnt++;
    char path[100];
    snprintf(path, sizeof(path), "%d.pnm", i);

    image_u8_t *im = NULL;
    im = image_u8_create_from_pnm(path);

    if (im == NULL) {
        printf("couldn't load %s\n", path);
        continue;
    }

    // Make an image_u8_t header for the Mat data
//    image_u8_t im = {.width = gray.cols,
//                     .height = gray.rows,
//                     .stride = gray.cols,
//                     .buf = gray.data};

    int64_t t1, t2;
    t1 = utime_now();
    zarray_t* detections = apriltag_detector_detect(td_, &im);
    t2 = utime_now();

    printf("%d tags detected.\n", zarray_size(detections));

    double diff = (t2 - t1) / 1000.;
    total_time += diff;
    printf("average time: %.2lf.\n", total_time/cnt);

    apriltag_detections_destroy(detections);
  }

  apriltag_detector_destroy(td_);
  apriltag_family_destroy(tf_);

  return 0;
}
