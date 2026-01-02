#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL); 

    line(200, 150, 400, 150); // Top main horizontal bar

    // Left joint triangle
    line(235, 160, 235, 200); 
    line(235, 200, 190, 200); 
    line(190, 200, 235, 160); 

    // Right joint triangle
    line(370, 160, 370, 200); 
    line(370, 200, 410, 200); 
    line(410, 200, 370, 160); 

    // Middle rectangle 
    rectangle(240, 160, 300, 200); 
    rectangle(305, 160, 365, 200); 

    // Left wheel structure
    line(200, 150, 150, 220);   
    line(150, 220, 60, 220);    
    line(60, 220, 60, 300);     
    line(60, 300, 120, 300);    
    circle(160, 300, 40);       
    circle(160, 300, 20);        

    // Right wheel structure
    line(400, 150, 450, 220);   
    line(450, 220, 540, 220);   
    line(540, 220, 540, 300);   
    line(540, 300, 480, 300);   
    circle(440, 300, 40);   
    circle(440, 300, 20);

    // Bottom connector line
    line(200, 300, 400, 300);   

    getch();
    return 0;
}
