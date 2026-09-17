#include <iostream>
//#include <cstring>

int searchind(char c)
{
    const char *alpha = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZаАбБвВгГдДеЕёЁжЖзЗиИйЙкКлЛмМнНоОпПрРсСтТуУфФхХцЦчЧшШщЩъЪыЫьЬэЭюЮяЯ";
    for (int i = 0; alpha[i] != '\0'; i++)
    {
        if (c == alpha[i])
            return i / 2;
    }
    return -1;
}

int my_strcoll(const char* lhs, const char* rhs)
{
    for (; (*lhs != '\0' && *rhs != '\0'); lhs++, rhs++)
    {
        int wlhs = searchind(*lhs);
        int wrhs = searchind(*rhs);
        if (wlhs == wrhs)
            continue;
        else if (wlhs < wrhs)
            return -1;
        else
            return 1;
    }
    if (*lhs != '\0') return 1;
    if (*rhs != '\0') return -1;
    return 0;
}

int main()
{
    std::cout << my_strcoll("Яблоко", "Абрикос");
    return 0;
}