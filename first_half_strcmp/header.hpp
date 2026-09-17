#ifndef MY_CSTRING_HPP
#define MY_CSTRING_HPP

#include <cstddef> // Для std::size_t

namespace mystd {

    // === Копирование и конкатенация строк ===
    char* strcpy(char* dest, const char* src);
    char* strncpy(char* dest, const char* src, std::size_t count);
    char* strcat(char* dest, const char* src);
    char* strncat(char* dest, const char* src, std::size_t count);

    // === Измерение и сравнение строк ===
    std::size_t strlen(const char* str);
    int strcmp(const char* lhs, const char* rhs);
    int strncmp(const char* lhs, const char* rhs, std::size_t count);
    int strcoll(const char* lhs, const char* rhs);
    std::size_t strxfrm(char* dest, const char* src, std::size_t count);

    // === Поиск в строках ===
    const char* strchr(const char* str, int ch);  //fadey
          char* strchr(      char* str, int ch);

    const char* strrchr(const char* str, int ch);
          char* strrchr(      char* str, int ch);

    std::size_t strspn(const char* dest, const char* src);
    std::size_t strcspn(const char* dest, const char* src);

    const char* strpbrk(const char* dest, const char* breakset);
          char* strpbrk(      char* dest, const char* breakset);

    const char* strstr(const char* dest, const char* src);
          char* strstr(      char* dest, const char* src);

    char* strtok(char* str, const char* delim);

    // === Работа с сырой памятью ===
    void* memset(void* dest, int ch, std::size_t count);
    void* memcpy(void* dest, const void* src, std::size_t count);
    void* memmove(void* dest, const void* src, std::size_t count);
    int memcmp(const void* lhs, const void* rhs, std::size_t count);

    const void* memchr(const void* ptr, int ch, std::size_t count);
          void* memchr(      void* ptr, int ch, std::size_t count);

    // === Разное / Ошибки ===
    char* strerror(int errnum);

} // namespace mystd

#endif // MY_CSTRING_HPP
