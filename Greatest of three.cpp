#include<iostream>
using namespace std;
int main ()

{
    int n1,n2,n3;
    cout<<"Enter the Numbers: ";
    cin>>n1>>n2>>n3;
    if(n1>=n2 && n1>=n3)
    {
        cout<<"The Greatest number: "<<n1;
    }
    else if(n2>=n1 && n2>=n3)
    {
        cout<<"The Greatest number: "<<n2;
    }
    else{
        cout<<"The Greatest number: "<<n3;
    }
    return 0;
}
