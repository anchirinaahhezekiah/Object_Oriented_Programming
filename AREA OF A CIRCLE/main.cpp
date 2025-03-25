#include <iostream>
#include <cmath>
using namespace std;
double circle(double r,double pi=3.142){
    double result=pi*(pow(r,2));
    return result;
}
int main()
{
    double pi=3.142;
    int r;
    cout << "PLEASE ENTER THE RADIUS OF THE CIRCLE" << endl;
    cin>>r;
    double answer =circle(pi,r);
    cout << "The area of the circle is " <<answer<< endl;

}
