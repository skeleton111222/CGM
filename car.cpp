# include <stdio.h>
# include <graphics.h>

int main(){
	int gd = DETECT,gm;
	initgraph (&gd,&gm,"");
        //line(x1,y1,x2,y2);
	line (100,10,50,50);
	line (100,10,400,10);
	line (400,10,500,50);
	line (500,50,600,50);
	line (600,50,600,100);
	line (50,50,50,100);
	//line (50,100,600,100);
	line (50,100,125,100);
	line (175,100,525,100);
	line (575,100,600,100);
        //circle(x,y,c);
	circle(150,100,25);
	circle(550,100,25);
	
	getch();
	closegraph();
	return 0;
}
