#include <stdio.h>
#include "headers/user.h"
#include <string.h>


void __doc__(User user) {
  printf("Username: %s\n", user.uname);
  printf("Password: %s\n", user.pass);
  printf("Secret_Code: %d\n", user.secret_code);
}

void setUname(User user, char * uname) {
  strcpy(user.uname, uname);
}

void setPass(User user, char * pass) {
  strcpy(user.pass, pass);
}

void setSecretCode(User user, int secret_code) {
  user.secret_code = secret_code;
}

char * getUname(User user) {
  return user.uname;
} 

char * getPass(User user){
  return user.pass;
}

int getSecretCode(User user) {
  return user.secret_code;
}

User create_user(char * uname, char * pass, int secret_code) {
  User user;
  strcpy(user.uname, uname);
  strcpy(user.pass, pass);
  user.secret_code = secret_code;
  return user;
}
