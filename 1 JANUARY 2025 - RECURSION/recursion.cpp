#include<iostream>
using namespace std;

int recursion(int n)
{
    if (n==1)
    {
        return 1;
    }

    else
    {
        return n * recursion (n-1);   
    }
}


int main()
{
    int n;
    cout << "Enter Any Number For Factorial Found : ";
    cin >> n;
    cout << "Factorial Of " << n << " is "  << recursion(n);
    return 0;
}