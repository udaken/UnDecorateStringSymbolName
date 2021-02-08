#include <stdio.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
#endif // __cplusplus
uint32_t UnDecorateStringSymbolName(
    const char* restrict name,
    unsigned char* restrict outputString,
    uint32_t maxStringLength,
    _Bool* restrict pisDoubleBytes);

int main()
{
    _Bool isDoubleBytes;
    char buf[256] = { 0 };
    UnDecorateStringSymbolName(
        "??_C@_0BN@OHAHGLIK@?5?$CFu?3?5wFuncFlags?3?50x?$CF08X?$DM?$CFs?$DO?6@",
        buf, sizeof(buf), &isDoubleBytes);

    puts(buf);
}

