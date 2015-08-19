//Copyright (C) 2015  Corwin Hansen
#include <ascii.h>

void display_n(char *data, unsigned long xs, unsigned long ys, unsigned long w, unsigned long h, unsigned long x, unsigned long y){
/*display ascii text in data of size xs*ys starting from x and y position
 on a screen the size of w, h with Line feed added at end of each line.
 data is a array of characters made of y number of strings x in size
 example: for displaying
 111
 222
 333
 You do
 data = 111122223333
 xs = 4
 ys = 3
 w = 3
 h = 3
 x = 0
 y = 0
 */
	w = w > xs ? xs : w;//make sure everything fits
	h = h > ys ? ys : h;
	x = x + w > xs ? xs - w : x;
	y = y + h > ys ? ys - h : y;
	char *mem = malloc((size_t)((w * h + w - 1)*sizeof(char)));//allocate memory for display
	unsigned long i;
	const unsigned long rw = w + 1;//calculate real width
	for (i = 0; i < h; i++){
		memcpy(mem + rw * i, (size_t)data + xs * (i + y) + x, w);//copy memory
		if(i + 1 < h)mem[rw * i + w] = '\n';//set newline character if not at end
	}
	putchar('\n');//start from newline
	fwrite(mem, w + 1, h, stdout);//write to stdout
	return;
}

void display_r(char *data, unsigned long xs, unsigned long ys, unsigned long w, unsigned long h, unsigned long x, unsigned long y){
	/*display ascii text in data of size xs*ys starting from x and y position
	 on a screen the size of w, h with Carriage return added at end of each line.
	 data is a array of characters made of y number of strings x in size
	 example: for displaying
	 111
	 222
	 333
	 You do
	 data = 111122223333
	 xs = 4
	 ys = 3
	 w = 3
	 h = 3
	 x = 0
	 y = 0
	 */
	w = w > xs ? xs : w;//make sure everything fits
	h = h > ys ? ys : h;
	x = x + w > xs ? xs - w : x;
	y = y + h > ys ? ys - h : y;
	char *mem = malloc((size_t)((w * h + w - 1)*sizeof(char)));//allocate memory for display
	unsigned long i;
	const unsigned long rw = w + 1;//calculate real width
	for (i = 0; i < h; i++){
		memcpy(mem + rw * i, (size_t)data + xs * (i + y) + x, w);//copy memory
		if(i + 1 < h)mem[rw * i + w] = '\r';//set newline character if not at end
	}
	putchar('\r');//start from newline
	fwrite(mem, w + 1, h, stdout);//write to stdout
	return;
}

void display_rn(char *data, unsigned long xs, unsigned long ys, unsigned long w, unsigned long h, unsigned long x, unsigned long y){
	/*display ascii text in data of size xs*ys starting from x and y position
	 on a screen the size of w, h with Carriage return and Line feed added at end of each line.
	 data is a array of characters made of y number of strings x in size
	 example: for displaying
	 111
	 222
	 333
	 You do
	 data = 111122223333
	 xs = 4
	 ys = 3
	 w = 3
	 h = 3
	 x = 0
	 y = 0
	 */
	w = w > xs ? xs : w;//make sure everything fits
	h = h > ys ? ys : h;
	x = x + w > xs ? xs - w : x;
	y = y + h > ys ? ys - h : y;
	char *mem = malloc((size_t)((w * h + w - 2)*sizeof(char)));//allocate memory for display
	unsigned long i;
	const unsigned long rw = w + 2;//calculate real width
	for (i = 0; i < h; i++){
		memcpy(mem + rw * i, (size_t)data + xs * (i + y) + x, w);//copy memory
		if(i + 1 < h){
			mem[rw * i + w] = '\r';//set newline character if not at end
			mem[rw * i + w + 1] = '\n';//set newline character if not at end
		}
	}
	putchar('\r');//start from newline
	putchar('\n');//start from newline
	fwrite(mem, w + 2, h, stdout);//write to stdout
	return;
}

void display(char *data, unsigned long xs, unsigned long ys, unsigned long w, unsigned long h, unsigned long x, unsigned long y){
	/*display ascii text in data of size xs*ys starting from x and y position
	 on a screen the size of w, h.
	 data is a array of characters made of y number of strings x in size
	 example: for displaying
	 111
	 222
	 333
	 You do
	 data = 111122223333
	 xs = 4
	 ys = 3
	 w = 3
	 h = 3
	 x = 0
	 y = 0
	 */
	w = w > xs ? xs : w;//make sure everything fits
	h = h > ys ? ys : h;
	x = x + w > xs ? xs - w : x;
	y = y + h > ys ? ys - h : y;
	char *mem = malloc((size_t)((w * h)*sizeof(char)));//allocate memory for display
	unsigned long i;
	for (i = 0; i < h; i++){
		memcpy(mem + w * i, (size_t)data + xs * (i + y) + x, w);//copy memory
	}
	fwrite(mem, w, h, stdout);//write to stdout
	return;
}