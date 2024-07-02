#include <stdio.h>
#include "headers/user.h"
int main(void) 
{
  User user;
  strcpy(user.uname, "Xurshid");
  strcpy(user.pass, "passwd12");
  user.secret_code = 1522;

  __doc__(user);

  return 0;
}
