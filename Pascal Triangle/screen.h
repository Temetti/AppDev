#pragma once

enum COLORS { black=30, red, green, yellow, blue, magenta, cyan, white };

void clearScreen(void);
void setColors(int fg, int bg);
void resetScreen(void);