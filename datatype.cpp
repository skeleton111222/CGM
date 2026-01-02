#include <iostream>
using namespace std;

int main() {
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)
  int x, y, z;
x = y = z = 50;
cout << myNum << " " << myFloatNum << " " << myLetter << " " << myText << " " << myBoolean << endl;
cout << x + y + z;
  return 0;
    
    /* sizes
    int	Integer	2 or 4
float	Floating-point	4
double	Double Floating-point	8
char	Character	1
wchar_t	Wide Character	2
bool	Boolean	1
void	Empty	0	

wchar_t test = L'?'  // storing Hebrew character;

signed int	4	used for integers (equivalent to int)
unsigned int	4	can only store positive integers
short	2	used for small integers (range -32768 to 32767)
unsigned short	2	used for small positive integers (range 0 to 65,535)
long	at least 4	used for large integers (equivalent to long int)
unsigned long	4 or 8	used for large positive integers or 0 (equivalent to unsigned long int)
long long	8	used for very large integers (equivalent to long long int).
unsigned long long	8	used for very large positive integers or 0 (equivalent to unsigned long long int)
long double	8, 12, or 16	used for large floating-point numbers
signed char	1	used for characters (guaranteed range -127 to 127)
unsigned char	1	used for characters (range 0 to 255)	*/
}
