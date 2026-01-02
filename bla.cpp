#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main(){
	int gd = DETECT, gm, i;
	float p,x,y, dx, dy, steps;
	int x0, x1, y0, y1;
	initgraph(& gd, &gm,"");
	x0 = 20, y0 = 10, x1 = 300, y1 = 180;
	
	dx = (float) (x1-x0);
	dy = (float) (y1-y0);
	
	x = x0;
	y = y0;
	p = 2 * dy - dx;
	while (x < x1){
		if (p >= 0){
			putpixel(x, y, 7);
			y = y + 1;
			p = p + 2*dy;
		} else {
			putpixel(x, y, 7);
			p = p + 2 * dy;
		}
		x = x + 1;
		printf("(%f and %f)\n",x,y);
	}
	getch();
	closegraph();
}
