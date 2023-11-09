#include<iostream>
using namespace std;
int main(){
    int r,i,j,s;
    cout<<"enter the number of rows"<<endl;
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(s=1;s<r;s++)
        {
            cout<<" ";
        }
        for(j=1; j<=(2*r-1); j++){
            if(i==r||j==1||j==2*i-1)
            cout<<"*";
            else
            cout<<" ";
            
        }
        cout<<endl;

    }
    return 0;
}