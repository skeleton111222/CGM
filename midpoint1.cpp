#include<stdio.h>
#include<graphics.h>

// Implementing Mid-Point Circle Drawing Algorithm
void midPointCircleDraw(int x_centre, int y_centre, int r)
{
    int x = r, y = 0;

    // Printing the initial point on the axes after translation
    printf("(%d, %d) ", x + x_centre, y + y_centre);

    // When radius is zero, only a single point will be printed
    if (r > 0)
    {
        printf("(%d, %d) ", x + x_centre, -y + y_centre);
        printf("(%d, %d) ", y + x_centre, x + y_centre);
        printf("(%d, %d)\n", -y + x_centre, x + y_centre);
    }

    // Initializing the value of P
    int P = 1 - r;
    while (x > y)
    {
        y++;

        // Mid-point is inside or on the perimeter
        if (P <= 0)
            P = P + 2 * y + 1;

        // Mid-point is outside the perimeter
        else
        {
            x--;
            P = P + 2 * y - 2 * x + 1;
        }

        // All the perimeter points have already been printed
        if (x < y)
            break;

        // Printing the generated point and its reflection in the other octants
        printf("(%d, %d) ", x + x_centre, y + y_centre);
        putpixel(x + x_centre, y + y_centre, 7);

        printf("(%d, %d) ", -x + x_centre, y + y_centre);
        putpixel(-x + x_centre, y + y_centre, 7);

        printf("(%d, %d) ", x + x_centre, -y + y_centre);
        putpixel(x + x_centre, -y + y_centre, 7);

        printf("(%d, %d)\n", -x + x_centre, -y + y_centre);
        putpixel(-x + x_centre, -y + y_centre, 7);

        // If the generated point is on the line x = y then the perimeter points are already printed
        if (x != y)
        {
            printf("(%d, %d) ", y + x_centre, x + y_centre);
            putpixel(y + x_centre, x + y_centre, 7);

            printf("(%d, %d) ", -y + x_centre, x + y_centre);
            putpixel(-y + x_centre, x + y_centre, 7);

            printf("(%d, %d) ", y + x_centre, -x + y_centre);
            putpixel(y + x_centre, -x + y_centre, 7);

            printf("(%d, %d)\n", -y + x_centre, -x + y_centre);
            putpixel(-y + x_centre, -x + y_centre, 7);
        }
    }
}

// Driver code
int main()
{
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Center of the circle
    int x_centre = 500, y_centre = 500;
    // Outer boundary radius
    int radius = 300;

    // Draw shrinking circles
    for (int r = radius; r > 0; r -= 10)  // Decrease radius by 10 units in each iteration
    {
        midPointCircleDraw(x_centre, y_centre, r);
    }

    // Wait for the user to press a key
    getch();

    // Close the graphics window
    closegraph();

    return 0;
}

