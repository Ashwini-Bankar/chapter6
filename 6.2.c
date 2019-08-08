#include<stdio.h>
#include<stdlib.h>
#include <shadow.h>

int main(void)       /* Linux/Solaris version */
{
    struct spwd *ptr;
    //ptr=getspnam("ashwini");

    if ((ptr = getspnam("ashwini")) == NULL)
        printf("getspnam error");
    printf("sp_pwdp = %s\n", ptr->sp_pwdp == NULL || ptr->sp_pwdp[0] == 0 ?  "(null)" : ptr->sp_pwdp);
    exit(0);
}

