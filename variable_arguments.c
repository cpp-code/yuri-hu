#include<stdio.h>
#include<stdarg.h>

int max(const int num, ...)
{
    va_list args;
    va_start(args, num);
    int i = 0;
    int max = va_arg(args, int);
    
    while (i < num) {
        int tmp = va_arg(args, int);

        if (max < tmp) {
            max = tmp;
        }

        i++;
    }

    return max;
    va_end(args);
}

int main()
{
    printf("max: %d", max(5, 33, 44, 55, 44, 22));
    return 0;
}
