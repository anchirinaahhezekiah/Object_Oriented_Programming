#include <iostream>

using namespace std;

int main()
{
    int matrix[30][30],i,j;
    int sum=0,rows,columns;
    int k=0,l=0;

    cout << "PLEASE ENTER THE NUMBER OF ROWS" << endl;
    cin>>rows;
    cout<<"PLEASE ENTER THE NUMBER NUMBER OF COLUMNS"<<endl;
    cin>>columns;

    cout<<endl;

    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            cout<<"Matrix["<<i<<"]["<<j<<"]:";
            cin>>matrix[i][j];
        }
    }

    //Display the matrix
    cout<<"The matrix is"<<endl;
    for(i=0;i<0;i++){
        for(j=0;j<columns;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    //Main Diagonal
    cout<<"The Diagonal of the matrix is"<<endl;
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)

            if(i==j)
        {
            cout<<matrix[i][j]<<", ";
        }
    }cout<<endl;

    //Upper triangular matrix
    cout<<"The elements in the upper triangular matrix are:";
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            if(j>i)
        {
            cout<<matrix[i][j]<<", ";
        }
    }cout<<endl;

    //Lower triangular matrix
    cout<<"The elements in the lower triangular matrix are:";
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
            if(j>i)
        {
            cout<<matrix[i][j]<<",";
        }cout<<endl;
    }

        cout<<"The sum of the elements in the diagonal matrix is: ";
        for(i=0;i<rows;i++){
        for(j=0;j<columns;j++)
        if(i==j){
            sum+=matrix[i][j];
        }
        }cout<<sum<<endl;
    return 0;
}
