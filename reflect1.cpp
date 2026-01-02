#include <iostream>
#include <graphics.h>
#include <math.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;
    int choice;

    cout << "Enter coordinates of first vertex (x y): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second vertex (x y): ";
    cin >> x2 >> y2;

    cout << "Enter coordinates of third vertex (x y): ";
    cin >> x3 >> y3;

    cout << "Choose axis of reflection:\n";
    cout << "1. X-axis\n2. Y-axis\n3. Origin\n";
    cin >> choice;
    
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Draw original triangle
    setcolor(BLUE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Reflected coordinates
    int x1r, y1r, x2r, y2r, x3r, y3r;
// Assuming window size 640x480
int width = 640;
int height = 480;
int cx = width / 2;
int cy = height / 2;

switch (choice) {
    case 1: // Reflection about X-axis
        x1r = x1;
        y1r = 2*cy - y1;
        x2r = x2;
        y2r = 2*cy - y2;
        x3r = x3;
        y3r = 2*cy - y3;
        break;
    case 2: // Reflection about Y-axis
        x1r = 2*cx - x1;
        y1r = y1;
        x2r = 2*cx - x2;
        y2r = y2;
        x3r = 2*cx - x3;
        y3r = y3;
        break;
    case 3: // Reflection about Origin
        x1r = 2*cx - x1;
        y1r = 2*cy - y1;
        x2r = 2*cx - x2;
        y2r = 2*cy - y2;
        x3r = 2*cx - x3;
        y3r = 2*cy - y3;
        break;

        default:
            cout << "Invalid choice!";
            closegraph();
            return 0;
    }

    // Draw reflected triangle
    setcolor(YELLOW);
    line(x1r, y1r, x2r, y2r);
    line(x2r, y2r, x3r, y3r);
    line(x3r, y3r, x1r, y1r);

    getch();
    closegraph();
    return 0;
}
