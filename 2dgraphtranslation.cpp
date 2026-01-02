#include <iostream>
#include <graphics.h>
#include <conio.h> 

#define MAX_VERTICES 3

int main() {

    
    int x1, y1, x2, y2, x3, y3, tx, ty;

    std::cout << "Enter coordinates of first vertex (x y): ";
    std::cin >> x1 >> y1;

    std::cout << "Enter coordinates of second vertex (x y): ";
    std::cin >> x2 >> y2;

    std::cout << "Enter coordinates of third vertex (x y): ";
    std::cin >> x3 >> y3;
    
    
    std::cout << "Enter translation distances (tx, ty): ";
    std::cin >> tx >> ty;
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");


    setcolor(BLUE);  
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    x1 += tx;
    y1 += ty;
    x2 += tx;
    y2 += ty;
    x3 += tx;
    y3 += ty;

    setcolor(YELLOW); 
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();
    closegraph();

    return 0;
}


