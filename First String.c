#include <stdio.h>
int main()
{
    char str1[] = "Bangla", str2[] = "desh", str3[10];
    int i, j, length1 = 6, length2 = 4;

    for(i = 0, j = 0;i < length1; i++, j++)
    {
        str3[j] = str1[i];
    }
    for(i = 0; i < length2; i++, j++)
    {
        str3[j] = str2[i];
    }

    str3[j] = '\0';

    printf("%s", str3);

    return 0;
}
