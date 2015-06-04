#ifndef __TomiOS__display__
#define __TomiOS__display__

#include "defines.h"
#include "lib.h"

// Optional initializer
void kInitializeDisplay();

// Erase content
void kclearScreen(void);

// Handle scrolling
void kscrollDown(int n);

// Handle text cursor
void kputNewLine();
void kforwardCursor();
void ksetBackspaceLimit();
void kbackspaceCursor();
void kcursorTick();

// Insert text
void kputChar(char c);
void kputString(char* str);

// Screen height and width in number of lines
int kgetScreenHeight();
int kgetScreenWidth();

// Theming
void ksetBackgroundColor(Color color);
void ksetDefaultTextColor(Color color);
void ksetCursorStyle(unsigned char style);

#endif
