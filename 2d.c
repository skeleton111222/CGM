#include <stdio.h>
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x1, y1, x2, y2, x3, y3, tx, ty;

    initgraph(&gd, &gm, "");

    printf("Enter coordinates of first vertex (x y): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates of second vertex (x y): ");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates of third vertex (x y): ");
    scanf("%d %d", &x3, &y3);

    setcolor(RED);
    // Draw original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    printf("Enter translation distances (tx ty): ");
    scanf("%d %d", &tx, &ty);

    // Translate coordinates
    x1 += tx;
    y1 += ty;
    x2 += tx;
    y2 += ty;
    x3 += tx;
    y3 += ty;

    setcolor(YELLOW);
    // Draw translated triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();
    closegraph();

    return 0;
}

