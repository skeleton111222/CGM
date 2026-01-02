#include <graphics.h>
#include <conio.h>
#include <iostream>

using namespace std;

// Function to plot a point
void plotPoint(int x, int y, int color) {
    putpixel(x, y, color);
}

// Function to reflect point (x, y) over the X-axis
void reflectX(int x, int y) {
    plotPoint(x, -y, RED); // Reflected point
}

// Function to reflect point (x, y) over the Y-axis
void reflectY(int x, int y) {
    plotPoint(-x, y, GREEN); // Reflected point
}

// Function to reflect point (x, y) through the origin
void reflectOrigin(int x, int y) {
    plotPoint(-x, -y, BLUE); // Reflected point
}

// Function to reflect point (x, y) over the line y = x
void reflectLineXY(int x, int y) {
    plotPoint(y, x, YELLOW); // Reflected point
}

int main() {

    int x, y, choice;



    // Take user input for coordinates and reflection type
    cout << "Enter the coordinates of the point (x y): ";
    cin >> x >> y;

    cout << "Choose the reflection type: \n";
    cout << "1. Reflect over X-axis\n";
    cout << "2. Reflect over Y-axis\n";
    cout << "3. Reflect through the Origin\n";
    cout << "4. Reflect over the line y = x\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;
        int gd = DETECT, gm;
    // Initialize graphics mode
    initgraph(&gd, &gm, "");
    // Draw the original point (white)
    plotPoint(x, y, WHITE);

    // Perform the selected reflection
    switch(choice) {
        case 1:
            reflectX(x, y);
            cout << "Point reflected over the X-axis.\n";
            break;
        case 2:
            reflectY(x, y);
            cout << "Point reflected over the Y-axis.\n";
            break;
        case 3:
            reflectOrigin(x, y);
            cout << "Point reflected through the Origin.\n";
            break;
        case 4:
            reflectLineXY(x, y);
            cout << "Point reflected over the line y = x.\n";
            break;
        default:
            cout << "Invalid choice!\n";
            break;
    }

    // Wait for user input before closing the graphics window
    getch();
    closegraph();

    return 0;
}
