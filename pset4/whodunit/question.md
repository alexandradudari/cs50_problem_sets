# Questions

## What's `stdint.h`?

'stdint.h' is a header file in C standard library that allows programmers to write more portable code by providing a set of typedefs.

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

The point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program is to specify exact-width integer types.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

A 'BYTE' is 1 byte value, a 'DWORD' is a 4 bytes integer, a 'LONG' is a 4 bytes integer and a 'WORD' is a 2 bytes integer.

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

The first two bytes of any BMP file must containt ASCII 'B' and ASCII 'M'.

## What's the difference between `bfSize` and `biSize`?

'bfSize' is the size, in bytes, of the bitmap file. Otherwise, 'biSize' is the number of bytes required by the structure.

## What does it mean if `biHeight` is negative?

If 'biHeight' is negative, the bitmap is a top-down DIB and its origin is the upper-left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

The biBitCount member of the BITMAPINFOHEADER structure determines the number of bits that define each pixel and the maximum number of colors in the bitmap.

## Why might `fopen` return `NULL` in lines 24 and 32 of `copy.c`?

'fopen' might return 'NULL' if the file does not exists.

## Why is the third argument to `fread` always `1` in our code?

The third argument to 'fread' is always '1' because it specifies how many elements you want to read, and we're always reading a struct so we only need 1 struct.

## What value does line 63 of `copy.c` assign to `padding` if `bi.biWidth` is `3`?

The value assign to 'padding' is 3 because (4 - (3 x 3 bytes) % 4) % 4 = (4 - 9 % 4) % 4 = (4 - 1) % 4 = 3 % 4 = 3.

## What does `fseek` do?

The C library function int fseek(FILE *stream, long int offset, int whence) sets the file position of the stream to the given offset.

## What is `SEEK_CUR`?

SEEK_CUR is a constant value of 1. It moves the file pointer position to given location.
