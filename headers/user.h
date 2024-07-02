#ifndef USER_H
#define USER_H
#include <stdio.h>
#include <string.h>
#include <ctype.h>
typedef struct {
  char uname[100];
  char pass[100];
  int secret_code;
} User;

void create_user(char * uname, char * pass, int secret_code);
void __doc__(User user);
#endif // !USER_H
