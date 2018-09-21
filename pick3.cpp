#include <iostream> 
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() 
{ 
int number1; 
int number2;
int number3;
int numberSum;
int min = 0;
int max = 9;

//randomize the number generation 
srand((unsigned)time(0));
number1 = rand() % (max - min + 1) + 1; 
number2 = rand() % (max - min + 1) + 1; 
number3 = rand() % (max - min + 1) + 1; 


cout << "The computer picked numbers: " << number1 << " , " << number2 << " , " << number3 << endl;

numberSum = number1 + number2 + number3;
cout << "The sum of your lottery pics is:  " <<  numberSum << endl; 

system("PAUSE");
return 0; 
}
