#include <iostream>

using namespace std;

double cube(double num){
  double result = num*num*num;
  return result;
}
int main(){
    int x;
    cout<<"Please enter the length"<<endl;
    cin>>x;
    double answer =cube(x);
    cout <<"The area of the cube is "<<answer<<endl;
    return 0;
}
