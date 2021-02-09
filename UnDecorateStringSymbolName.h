
#ifdef _MSC_VER && !defined(restrict) && !defined(__STDC_VERSION__)
#define restrict __restrict 
#endif

#ifdef __cplusplus
extern "C"
#endif // __cplusplus
uint32_t UnDecorateStringSymbolName(
    const char* restrict name,
    unsigned char* restrict outputString,
    uint32_t maxStringLength,
    _Bool* restrict pisUtf16BE);
