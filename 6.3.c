#include <stdio.h>
#include <sys/utsname.h>

int main ()
{
 struct utsname u;
 uname (&u);
 printf ("%s on %s release %s (version %s) on %s \n", u.sysname, u.nodename,u.release, u.version, u.machine);
 return 0;
}
