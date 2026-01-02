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
    cout << "1. X-axis\n2. Y-axis\n3. Origin\n4. y = x\n5. y = -x\n";  // Add y = -x option
    cin >> choice;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Get screen center
    int cx = getmaxx() / 2;
    int cy = getmaxy() / 2;

    // Draw X and Y axes
    setcolor(WHITE);
    // X-axis (horizontal line)
    line(0, cy, getmaxx(), cy);
    // Y-axis (vertical line)
    line(cx, 0, cx, getmaxy());

    // Translate coordinates to center-based system
    x1 += cx; y1 = cy - y1;
    x2 += cx; y2 = cy - y2;
    x3 += cx; y3 = cy - y3;

    // Draw original triangle
    setcolor(WHITE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Translate back to math coordinates for reflection
    x1 -= cx; y1 = cy - y1;
    x2 -= cx; y2 = cy - y2;
    x3 -= cx; y3 = cy - y3;

    // Reflected coordinates
    int x1r, y1r, x2r, y2r, x3r, y3r;

    switch (choice) {
        case 1: // X-axis
            x1r = x1; y1r = -y1;
            x2r = x2; y2r = -y2;
            x3r = x3; y3r = -y3;
            break;
        case 2: // Y-axis
            x1r = -x1; y1r = y1;
            x2r = -x2; y2r = y2;
            x3r = -x3; y3r = y3;
            break;
        case 3: // Origin
            x1r = -x1; y1r = -y1;
            x2r = -x2; y2r = -y2;
            x3r = -x3; y3r = -y3;
            break;
        case 4: // y = x (Reflection over the line y = x)
            x1r = y1; y1r = x1;
            x2r = y2; y2r = x2;
            x3r = y3; y3r = x3;
            break;
        case 5: // y = -x (Reflection over the line y = -x)
            x1r = -y1; y1r = -x1;
            x2r = -y2; y2r = -x2;
            x3r = -y3; y3r = -x3;
            break;
        default:
            cout << "Invalid choice!";
            closegraph();
            return 0;
    }

    // Convert reflected points to screen coordinates again
    x1r += cx; y1r = cy - y1r;
    x2r += cx; y2r = cy - y2r;
    x3r += cx; y3r = cy - y3r;

    // Draw reflected triangle
    setcolor(YELLOW);
    line(x1r, y1r, x2r, y2r);
    line(x2r, y2r, x3r, y3r);
    line(x3r, y3r, x1r, y1r);

    getch();
    closegraph();
    return 0;
}

