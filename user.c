#include <stdio.h>
#include "headers/user.h"
#include <string.h>
int main(void)
{
  struct User user;
  strcpy(user.uname, "Xurshid");
  strcpy(user.pass, "passwd12");
  user.secret_code = 1522;
  return 0;
}
