#pragma once

#define NN 20	//Length of username

typedef struct
{
	int max, min;
	char rname[NN];
}rock;

void send_data(rock);