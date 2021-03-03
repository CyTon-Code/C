

#include <iostream>
using namespace std;

double lab_1_cpp(double,double,double);
double input(string value,double n=0){cout<<value;cin>>n;return n;}
int main(void)//test:
{
int n = 3;
for (int i = 0; i < n; i++)
{
    cout << lab_1_cpp(input("K1 = "), input("K2 = "), input("A = "));
}
}
double lab_1_cpp(double K1=0.8,double K2=0.48,double A=0.25)
{
    double Y, X;
    X=7*A + K1*K2;
    Y=(X+ (3*A) - K1)/((K1*X) + K2);

    return Y;
}
