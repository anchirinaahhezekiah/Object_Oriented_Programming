#include <iostream>

using namespace std;

double triangle(double b, double h){
    double result=0.5*b*h;
    return result;
}


int main()
{
    int b,h;
    cout << "PLEASE ENTER THE HEIGHT" << endl;
    cin>>h;
    cout << "PLEASE ENTER THE LENGTH OF THE BASE" << endl;
    cin>>b;
    double answer=triangle(b,h);
    cout<<"The area of the triangle is "<<answer<<endl;

    return 0;
}
