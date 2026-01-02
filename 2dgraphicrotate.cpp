#include <iostream>
#include <graphics.h>
#include <math.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    double angle, rad, s, c;

    cout << "Enter coordinates of first vertex (x y): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second vertex (x y): ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of third vertex (x y): ";
    cin >> x3 >> y3;

    cout << "Enter rotation angle (in degrees): ";
    cin >> angle;

    // Convert angle to radians
    rad = angle * M_PI / 180;
    c = cos(rad);
    s = sin(rad);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setcolor(BLUE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Rotated coordinates about origin
    int x1r = floor(x1 * c - y1 * s);
    int y1r = floor(x1 * s + y1 * c);

    int x2r = floor(x2 * c - y2 * s);
    int y2r = floor(x2 * s + y2 * c);

    int x3r = floor(x3 * c - y3 * s);
    int y3r = floor(x3 * s + y3 * c);

    setcolor(YELLOW);
    line(x1r, y1r, x2r, y2r);
    line(x2r, y2r, x3r, y3r);
    line(x3r, y3r, x1r, y1r);

    getch();
    closegraph();
    return 0;
}

