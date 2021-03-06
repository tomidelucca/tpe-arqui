#ifndef __TomiOS__LIB__
#define __TomiOS__LIB__

#include "libasm.h"
#include "defines.h"
#include <stdarg.h>

// Printing
void printf(char* fmt, ...);
void putChar(char c);

// Clear screen
void clearScreen();

// Reading
void scanf(char* fmt, ...);
void read(char* buffer, char delimiter);
char getChar();

// Time
void getTime(DATE * date);
void setTime(DATE * date);
void setScreenSaverTime(int miliseconds);

// Helpers
void split(char* buffer, char* command, char* arguments);
int numberLength (int i);
int strlen(char* str);
void itoa(int n, char* s);
void itoa_d(int n, char* s);
int atoi(const char * str);
bool strEquals(char* str1, char* str2);
char* strcut(char* str, int start, int end);
char* firstWord(char* str);
int numWords(char* str);
char* strcat(char* str1, const char* str2);
void moveToBegining(char* buffer, int index);
void clean(char* buffer, int size);

#endif
