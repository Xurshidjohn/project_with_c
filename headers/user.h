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

User create_user(char * uname, char * pass, int secret_code);
void __doc__(User user);
void setUname(User user, char * name);
void setPass(User user, char * pass);
void setSecretCode(User, int secret_code);
char * getUname(User user);
char * getPass(User user);
int getSecretCode(User user);
#endif // !USER_H
