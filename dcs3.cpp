#include<iostream>

using namespace std;

int main(){
    int n=98;
    double sum = 0;
    int num = 1;
    int den = 3;
    double a;
    
    for(int i = 1; i<n; i+=2){
        cout<<num<<"/"<<den<<"+";
        a=(double)num/den;
        sum = sum+a;
        num= num+2;
        den= den+2;
    }
    cout<<"\nSum of odd numbers is "<<sum;
}