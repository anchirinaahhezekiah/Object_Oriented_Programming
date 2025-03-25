#include <iostream>

using namespace std;

double rectangle(double l, double w){
    double result= l*w;
    return result;

}


int main()
{
    int l,w;
    cout << "PLEASE ENTER THE LENGTH" << endl;
    cin>>l;
    cout << "PLEASE ENTER THE WIDTH " << endl;
    cin>>w;
    double answer=rectangle(l, w);
    cout<<"The area of the rectangle is "<<answer<<endl;
    return 0;
}
