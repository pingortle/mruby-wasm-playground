/* dumped in little endian order.
   use `mrbc -E` option for big endian CPU. */
#include <stdint.h>
extern const uint8_t test[];
const uint8_t
#if defined __GNUC__
__attribute__((aligned(4)))
#elif defined _MSC_VER
__declspec(align(4))
#endif
test[] = {
0x45,0x54,0x49,0x52,0x30,0x30,0x30,0x36,0x63,0x15,0x00,0x00,0x00,0x9e,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x00,0x64,0x30,0x30,
0x30,0x32,0x00,0x00,0x00,0x59,0x00,0x01,0x00,0x03,0x00,0x01,0x00,0x00,0x00,0x0e,
0x61,0x01,0x56,0x02,0x00,0x5d,0x01,0x00,0x0e,0x01,0x00,0x37,0x01,0x67,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x04,0x6d,0x61,0x69,0x6e,0x00,0x00,0x00,0x00,
0x5d,0x00,0x03,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x0f,0x00,0x33,0x04,0x00,0x00,
0x10,0x03,0x01,0x04,0x01,0x2e,0x03,0x00,0x01,0x37,0x03,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x01,0x00,0x04,0x70,0x75,0x74,0x73,0x00,0x4c,0x56,0x41,0x52,0x00,0x00,
0x00,0x1c,0x00,0x00,0x00,0x02,0x00,0x03,0x61,0x72,0x67,0x00,0x01,0x26,0x00,0x00,
0x00,0x01,0x00,0x01,0x00,0x02,0x45,0x4e,0x44,0x00,0x00,0x00,0x00,0x08,
};
