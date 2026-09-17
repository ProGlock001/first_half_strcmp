#include <iostream>

char* strncpy( char* dest, const char* src, std::size_t count ) {
    std::size_t i = 0;

    for (i; i < count && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    if (src[i] == '\0') {
        for (i; i < count; i++) {
            dest[i] = '\0';
        }
    }

    return dest;

}