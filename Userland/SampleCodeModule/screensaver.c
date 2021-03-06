#include "screensaver.h"

void handleSS(char* key, char* value);

int screensaver(char* args){

  if(strlen(args) == 0){
    printf("See screensaver -help for command list.");
    return 0;
  }

  char key[MAX_KEY_SIZE];
  char value[MAX_VALUE_SIZE];

  while(strlen(args)!=0){

    clean(value, MAX_VALUE_SIZE);

    int code = split_args(args,key,value);

    if(code == ERROR){
      printf("All values must have keys. ");
      return 0;
    }

    handleSS(key, value);
  }

  return 0;

}

void handleSS(char* key, char* value){

  if(strEquals(key, "-timeout")){
    if(strlen(value)==0){
      printf("No value entered.");
      return;
    }
    unsigned int timeout = (unsigned int) atoi(value);
    if(timeout == -1){
      printf("The value entered is not a number.");
      return;
    }
    if(timeout>MAX_SCREENSAVER_TIME){
      printf("The time is too long.");
      return;
    }
    if(timeout<MIN_SCREENSAVER_TIME){
      printf("The time is too short.");
      return;
    }
    setScreenSaverTime(timeout);
    printf("The screensaver timeout was changed to %d milliseconds.", timeout);
  } else if(strEquals(key, "-help")){
    printf("The available commands are: \n\n");
    printf("\t-timeout\t\tMilliseconds before the screensaver starts.");
    printf("\n");
  } else {
    printf("%s key is unsupported. See -help. ", key);
  }

}
