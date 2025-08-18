#include<iostream>
#include<cmath>
using namespace std;
    // METHOD-1
    // bool isPerfect(int n){
    //     int root = sqrt(n);
    //     if(sqrt(n)*sqrt(n) == n){
    //         return true;
    //     }
    //     return false;
    // }
    // bool judgeSquareSum(int c) {
    //     // a^2 + b^2  = c
    //     int x = 0;
    //     int y = c;
    //     while(x<=y){
    //         if(isPerfect(x) && isPerfect(y)){
    //             return true;
    //         }
    //         x++;
    //         y--;
    //     }
    //     return false;
    // }

    //METHOD-2
    bool isPerfect(int n){
        int root = sqrt(n);
        if(root*root == n)    return true;
        else return false;
    }
    bool judgeSquareSum(int c){
        // a^2 + b^2  = c
        int x = 0;
        int y = c;
        while(x<=y){
            if(isPerfect(x) && isPerfect(y))    return true;
            else if(isPerfect(y)){
                y = sqrt(y) * sqrt(y);
                x = c-y;
            }
            else{
                x = (sqrt(x)+1) * (sqrt(x)+1);
                y = c - x;
            }
        }
        return false;
    }

int main(){
    int n = 11;
    bool result = judgeSquareSum(n);
    cout<<result;
}
