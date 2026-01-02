// 2d transformation :-  translation of object in 2D plane
#include <stdio.h>
#include <graphics.h>
#include <conio.h>

#define MAX_VERTICES 3 

int xs[MAX_VERTICES], ys[MAX_VERTICES]; 
int tx, ty;



void draw() {
    for (int i = 0; i < MAX_VERTICES; i++) {
        line(xs[i], ys[i], xs[(i + 1) % MAX_VERTICES], ys[(i + 1) % MAX_VERTICES]);
    }
}


void translate() {
    for (int i = 0; i < MAX_VERTICES; i++) {
        xs[i] += tx; 
        ys[i] += ty; 
    }
}


int main() {
    int gd = DETECT, gm;  
    initgraph(&gd, &gm, "C:\\TC\\BGI");


    printf("Enter coordinates x, y for each vertex of the triangle:\n");
    for (int i = 0; i < MAX_VERTICES; i++) {
        scanf("%d %d", &xs[i], &ys[i]);
    }

    printf("Enter distances for translation (in x and y directions): ");
    scanf("%d %d", &tx, &ty);

    setcolor(RED);
    draw();

    translate();

    setcolor(YELLOW);
    draw();

    getch();  
    closegraph();  
    return 0;
}

