/*
Some Basic Funcitons
max(x,y)
min(x,y)
sqrt(x)     NOTE:- To use sqrt function we need to use cmath library */

#include <iostream>
using namespace std;
// write a function to get combination and permutation
// first we define the function of factorial
int fact(int x){
    int f = 1;
    for(int i=2; i<=x; i++){
        f *= i;
    }
    return f;
}
int combination(int n, int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n , r ;
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter r : "<<endl;
    cin>>r;
    cout<<combination(n,r);
}
