#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(void)
{
    time_t      caltime;
    struct tm   *tm;
    char        line[100];

    if ((caltime = time(NULL)) == -1)
        printf("time error");
    if ((tm = localtime(&caltime)) == NULL)
        printf("localtime error");
    if (strftime(line, 50, "%a %b %d %X %Z %Y\n", tm) == 0)
        printf("strftime error");
    fputs(line, stdout);
    exit(0);
}
