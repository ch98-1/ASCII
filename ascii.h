//Copyright (C) 2015  Corwin Hansen
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void display(char *data, unsigned long xs, unsigned long ys, unsigned long w, unsigned long h, unsigned long x, unsigned long y);//display ascii text in data of size xs*ys starting from x and y positionon a screen the size of w, h.

void display_n(char *data, unsigned long xs, unsigned long ys, unsigned long w, unsigned long h, unsigned long x, unsigned long y);//display ascii text in data of size xs*ys starting from x and y positionon a screen the size of w, h with Line feed added at end of each line.

void display_r(char *data, unsigned long xs, unsigned long ys, unsigned long w, unsigned long h, unsigned long x, unsigned long y);//display ascii text in data of size xs*ys starting from x and y positionon a screen the size of w, h with Carriage return added at end of each line.

void display_rn(char *data, unsigned long xs, unsigned long ys, unsigned long w, unsigned long h, unsigned long x, unsigned long y);//display ascii text in data of size xs*ys starting from x and y positionon a screen the size of w, h with Carriage return and Line feed added at end of each line.