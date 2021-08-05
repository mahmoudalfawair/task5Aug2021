#include <iostream>
using namespace std;
void triangle(int n);
int main()
{
int num;
cout << "Enter any number : ";
cin >> num;
cout << endl;
triangle(num);
return 5;
}
void triangle(int n)
{
for(int i = n; i > 0; i--)
{
for(int j = i; j > 0; j--)
cout << "* ";
cout << endl;
}
}