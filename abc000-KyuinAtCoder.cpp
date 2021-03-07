#include<iostream>

using namespace std;


int main(){
    int X;
    cin >> X;

    if(400 <= X and X <= 599){
        cout << 8;
        return 0;
    }else if(600 <= X and X <= 799){
        cout << 7;
        return 0;
    }else if(800 <= X and X <= 999){
        cout << 6;
        return 0;
    }else if(1000 <= X and X <= 1199){
        cout << 5;
        return 0;
    }else if(1200 <= X and X <= 1399){
        cout << 4;
        return 0;
    }else if(1400 <= X and X <= 1599){
        cout << 3;
        return 0;
    }else if(1600 <= X and X <= 1799){
        cout << 2;
        return 0;
    }else if(1800 <= X and X <= 1999){
        cout << 1;
        return 0;
    }
    return 0;
}