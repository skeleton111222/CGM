#include <iostream>
using namespace std;

int main()
{
    const int SIDE = 50;	//const type constant_name;
	//It is also possible to put const either before or after the type.
    int area;	
    area = SIDE*SIDE;
    cout<<"The area of the square with side: " << SIDE <<" is: " << area << endl;
    system("PAUSE");
    return 0;

}
