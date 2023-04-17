#include "screen.h"
#include <stdio.h>

void resetScreen(void)
{
	printf("\033[0m");
	fflush(stdout); //Linux command
}

void setColors(int fg, int bg)
{
	printf("\033[1;%d;%dm", fg, bg + 10);
	fflush(stdout); //Linux command
}

void clearScreen(void)
{
	printf("\033[2J");
	fflush(stdout); //Linux command
}