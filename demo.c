//Copyright (C) 2014-2015  Corwin Hansen
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ascii.h>

#define W 80

int main(int argc, char *argv[]){
	char data[W * 24];
	memset(data, 'x', W*24);
	int i = 0;
	setvbuf(stdin, NULL, _IONBF, 0);
	raw_stdin();
	while(1){
		data[i * W + i] = 'O';
		display(data, W, 24, W, 24, 0, 0);//display
		getchar();
		i++;
		if(i >= 24) break;
	}
	cooked_stdin();
}

