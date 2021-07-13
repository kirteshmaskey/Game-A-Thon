// Factoral of a number

#include<iostream>
using namespace std;
int main()
{
    int n,i;
    long long int fact=1;
    cout<<"Enter the number to find Factorial:  ";
    cin>>n;
    i=n;
    while(i>0)
    {
        fact*=i;
        i--;
    }
    cout<<endl<<"Factorial of "<<n<<" is "<<fact;
    return 0;
}