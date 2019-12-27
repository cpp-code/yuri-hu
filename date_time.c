#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    time_t start_t, end_t;
    time_t first_t, second_t;
    start_t = time(NULL);
    struct tm *machine_t = localtime(&end_t);
    first_t = time(NULL);
    sleep(4);
    second_t = time(NULL);

    printf("the calender time: %smachine time: %sThe difference is: %f second", ctime(&start_t), asctime(machine_t), difftime(second_t, first_t));

    return 0;
}
