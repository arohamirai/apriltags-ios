#include <stdlib.h>
#include "tagStandard32h11.h"

apriltag_family_t *tagStandard32h11_create()
{
   apriltag_family_t *tf = calloc(1, sizeof(apriltag_family_t));
   tf->name = strdup("tagStandard32h11");
   tf->h = 11;
   tf->ncodes = 117;
   tf->codes = calloc(117, sizeof(uint64_t));
   tf->codes[0] = 0x0000000080d8c65dUL;
   tf->codes[1] = 0x00000000bb67cc22UL;
   tf->codes[2] = 0x000000003085d7acUL;
   tf->codes[3] = 0x000000006b14dd71UL;
   tf->codes[4] = 0x00000000a5a3e336UL;
   tf->codes[5] = 0x000000008fdffa4aUL;
   tf->codes[6] = 0x00000000ca6f000fUL;
   tf->codes[7] = 0x000000007a1c115eUL;
   tf->codes[8] = 0x00000000b4ab1723UL;
   tf->codes[9] = 0x0000000064582872UL;
   tf->codes[10] = 0x000000009ee72e37UL;
   tf->codes[11] = 0x00000000fe4150d5UL;
   tf->codes[12] = 0x00000000e87d67e9UL;
   tf->codes[13] = 0x00000000d2b97efdUL;
   tf->codes[14] = 0x00000000b638e112UL;
   tf->codes[15] = 0x000000003a5e2089UL;
   tf->codes[16] = 0x0000000083f45a3bUL;
   tf->codes[17] = 0x00000000f91265c5UL;
   tf->codes[18] = 0x000000001ddd829eUL;
   tf->codes[19] = 0x0000000092fb8e28UL;
   tf->codes[20] = 0x000000002ce4b68bUL;
   tf->codes[21] = 0x0000000060b70751UL;
   tf->codes[22] = 0x00000000faa02fb4UL;
   tf->codes[23] = 0x000000008053391aUL;
   tf->codes[24] = 0x000000006daae40cUL;
   tf->codes[25] = 0x00000000b7411dbeUL;
   tf->codes[26] = 0x000000008bb94be6UL;
   tf->codes[27] = 0x000000009403cad4UL;
   tf->codes[28] = 0x000000002f7abd26UL;
   tf->codes[29] = 0x000000006eb320b8UL;
   tf->codes[30] = 0x00000000f252d2ecUL;
   tf->codes[31] = 0x000000009614442cUL;
   tf->codes[32] = 0x000000009dd935d7UL;
   tf->codes[33] = 0x000000008b30e0c9UL;
   tf->codes[34] = 0x00000000ce0a657cUL;
   tf->codes[35] = 0x00000000373cd0f7UL;
   tf->codes[36] = 0x00000000ade8a670UL;
   tf->codes[37] = 0x00000000b7c0ef4dUL;
   tf->codes[38] = 0x00000000b5ad981bUL;
   tf->codes[39] = 0x000000008bb39032UL;
   tf->codes[40] = 0x000000002f750172UL;
   tf->codes[41] = 0x00000000c2134e05UL;
   tf->codes[42] = 0x000000006b03aa55UL;
   tf->codes[43] = 0x000000009cc2a3e9UL;
   tf->codes[44] = 0x00000000cbe8b908UL;
   tf->codes[45] = 0x000000001d43e465UL;
   tf->codes[46] = 0x00000000e75e3c6dUL;
   tf->codes[47] = 0x0000000050083ccbUL;
   tf->codes[48] = 0x00000000a5845ad8UL;
   tf->codes[49] = 0x00000000ffaf9266UL;
   tf->codes[50] = 0x0000000057c494e8UL;
   tf->codes[51] = 0x00000000d5afcec9UL;
   tf->codes[52] = 0x00000000103ed48eUL;
   tf->codes[53] = 0x000000005bd73256UL;
   tf->codes[54] = 0x00000000dbd5c369UL;
   tf->codes[55] = 0x00000000964c6b71UL;
   tf->codes[56] = 0x000000007ffd398eUL;
   tf->codes[57] = 0x00000000af9d6488UL;
   tf->codes[58] = 0x0000000008299f0bUL;
   tf->codes[59] = 0x000000009cad6530UL;
   tf->codes[60] = 0x0000000006e80d57UL;
   tf->codes[61] = 0x0000000000f76222UL;
   tf->codes[62] = 0x0000000044c234b1UL;
   tf->codes[63] = 0x000000005d76b1b5UL;
   tf->codes[64] = 0x00000000b8f93c04UL;
   tf->codes[65] = 0x00000000cb0514ffUL;
   tf->codes[66] = 0x00000000acf3cf4bUL;
   tf->codes[67] = 0x00000000c67733f3UL;
   tf->codes[68] = 0x000000000266a85bUL;
   tf->codes[69] = 0x000000005f9962d1UL;
   tf->codes[70] = 0x00000000a602d589UL;
   tf->codes[71] = 0x00000000576d3e7eUL;
   tf->codes[72] = 0x00000000598f6d46UL;
   tf->codes[73] = 0x0000000022dd1015UL;
   tf->codes[74] = 0x000000008c1ca30fUL;
   tf->codes[75] = 0x0000000093afab7dUL;
   tf->codes[76] = 0x000000003c39d9cdUL;
   tf->codes[77] = 0x00000000060eb9f6UL;
   tf->codes[78] = 0x00000000b2aada45UL;
   tf->codes[79] = 0x0000000093588531UL;
   tf->codes[80] = 0x00000000b1e97359UL;
   tf->codes[81] = 0x0000000037680ee1UL;
   tf->codes[82] = 0x000000007b48fbb6UL;
   tf->codes[83] = 0x000000002453a704UL;
   tf->codes[84] = 0x0000000038ae8ec2UL;
   tf->codes[85] = 0x000000007a8b5c37UL;
   tf->codes[86] = 0x00000000dc76ac4cUL;
   tf->codes[87] = 0x00000000da7871bbUL;
   tf->codes[88] = 0x00000000a3094292UL;
   tf->codes[89] = 0x00000000761b8487UL;
   tf->codes[90] = 0x000000000e5ac1ceUL;
   tf->codes[91] = 0x00000000a427a881UL;
   tf->codes[92] = 0x0000000058644af3UL;
   tf->codes[93] = 0x000000001dba44b5UL;
   tf->codes[94] = 0x00000000aa293175UL;
   tf->codes[95] = 0x00000000e4ec91fdUL;
   tf->codes[96] = 0x0000000070c36174UL;
   tf->codes[97] = 0x00000000c461e6ffUL;
   tf->codes[98] = 0x00000000495c0cc5UL;
   tf->codes[99] = 0x00000000426ae6c1UL;
   tf->codes[100] = 0x0000000052f02b6eUL;
   tf->codes[101] = 0x00000000b29c8afeUL;
   tf->codes[102] = 0x000000006d59131bUL;
   tf->codes[103] = 0x00000000b23c0785UL;
   tf->codes[104] = 0x000000004a0d2920UL;
   tf->codes[105] = 0x0000000096e1f821UL;
   tf->codes[106] = 0x000000000c924923UL;
   tf->codes[107] = 0x000000000a8390cdUL;
   tf->codes[108] = 0x00000000f4d0688cUL;
   tf->codes[109] = 0x00000000ef1bd8beUL;
   tf->codes[110] = 0x00000000cfb74702UL;
   tf->codes[111] = 0x000000009af3f7d1UL;
   tf->codes[112] = 0x00000000624e1ea6UL;
   tf->codes[113] = 0x000000009f92f104UL;
   tf->codes[114] = 0x00000000b817f37bUL;
   tf->codes[115] = 0x0000000018ea25feUL;
   tf->codes[116] = 0x00000000954cf188UL;
   tf->nbits = 32;
   tf->bit_x = calloc(32, sizeof(uint32_t));
   tf->bit_y = calloc(32, sizeof(uint32_t));
   tf->bit_x[0] = -2;
   tf->bit_y[0] = -2;
   tf->bit_x[1] = -1;
   tf->bit_y[1] = -2;
   tf->bit_x[2] = 0;
   tf->bit_y[2] = -2;
   tf->bit_x[3] = 1;
   tf->bit_y[3] = -2;
   tf->bit_x[4] = 2;
   tf->bit_y[4] = -2;
   tf->bit_x[5] = 3;
   tf->bit_y[5] = -2;
   tf->bit_x[6] = 4;
   tf->bit_y[6] = -2;
   tf->bit_x[7] = 1;
   tf->bit_y[7] = 1;
   tf->bit_x[8] = 5;
   tf->bit_y[8] = -2;
   tf->bit_x[9] = 5;
   tf->bit_y[9] = -1;
   tf->bit_x[10] = 5;
   tf->bit_y[10] = 0;
   tf->bit_x[11] = 5;
   tf->bit_y[11] = 1;
   tf->bit_x[12] = 5;
   tf->bit_y[12] = 2;
   tf->bit_x[13] = 5;
   tf->bit_y[13] = 3;
   tf->bit_x[14] = 5;
   tf->bit_y[14] = 4;
   tf->bit_x[15] = 2;
   tf->bit_y[15] = 1;
   tf->bit_x[16] = 5;
   tf->bit_y[16] = 5;
   tf->bit_x[17] = 4;
   tf->bit_y[17] = 5;
   tf->bit_x[18] = 3;
   tf->bit_y[18] = 5;
   tf->bit_x[19] = 2;
   tf->bit_y[19] = 5;
   tf->bit_x[20] = 1;
   tf->bit_y[20] = 5;
   tf->bit_x[21] = 0;
   tf->bit_y[21] = 5;
   tf->bit_x[22] = -1;
   tf->bit_y[22] = 5;
   tf->bit_x[23] = 2;
   tf->bit_y[23] = 2;
   tf->bit_x[24] = -2;
   tf->bit_y[24] = 5;
   tf->bit_x[25] = -2;
   tf->bit_y[25] = 4;
   tf->bit_x[26] = -2;
   tf->bit_y[26] = 3;
   tf->bit_x[27] = -2;
   tf->bit_y[27] = 2;
   tf->bit_x[28] = -2;
   tf->bit_y[28] = 1;
   tf->bit_x[29] = -2;
   tf->bit_y[29] = 0;
   tf->bit_x[30] = -2;
   tf->bit_y[30] = -1;
   tf->bit_x[31] = 1;
   tf->bit_y[31] = 2;
   tf->width_at_border = 4;
   tf->total_width = 8;
   tf->reversed_border = true;
   return tf;
}

void tagStandard32h11_destroy(apriltag_family_t *tf)
{
   free(tf->codes);
   free(tf->bit_x);
   free(tf->bit_y);
   free(tf->name);
   free(tf);
}