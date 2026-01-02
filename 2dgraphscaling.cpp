#include <iostream>
#include <graphics.h>
#include <math.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    double sx, sy;
    
    cout << "Enter coordinates of first vertex (x y): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second vertex (x y): ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of third vertex (x y): ";
    cin >> x3 >> y3;

    cout << "Enter scaling factors (x,y): ";
    cin >> sx >> sy;
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setcolor(BLUE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
    
    int x1r = floor(x1 * sx);
    int y1r = floor(y1 * sy);

    int x2r = floor(x2 * sx);
    int y2r = floor(y2 * sy);

    int x3r = floor(x3 * sx);
    int y3r = floor(y3 * sy);
    
    setcolor(YELLOW);
    line(x1r, y1r, x2r, y2r);
    line(x2r, y2r, x3r, y3r);
    line(x3r, y3r, x1r, y1r);

    getch();
    closegraph();
    return 0;
}
