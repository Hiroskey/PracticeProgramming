#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string S;
    cin >> S;
    
    if(S=="SUN"){
        cout << 7;
    }else if(S=="SAT"){
        cout << 1;
    }else if(S=="FRI"){
        cout << 2;
    }else if (S=="THU"){
        cout << 3;
    }else if (S=="WED"){
        cout << 4;
    }else if(S=="TUE"){
        cout << 5;
    }else{
        cout << 6;
    }
    return 0;
}