#include <stdio.h>
#include "headers/user.h"
#include <string.h>


void __doc__(User user) {
  printf("Username: %s\n", user.uname);
  printf("Password: %s\n", user.pass);
  printf("Secret_Code: %d\n", user.secret_code);
}
