typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;

typedef unsigned char uchar;
typedef signed char schar;

u32 crc32(u8 *, size_t len);
u32 crc32_tab[256];
