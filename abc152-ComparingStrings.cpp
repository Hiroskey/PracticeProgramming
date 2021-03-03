#include <iostream>
#include<string>
#include<stdio.h>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    string a_str=to_string(a), b_str=to_string(b);

    for (int i=1; i<b; i++){
        a_str += to_string(a);
    }
    for (int i=1; i<a; i++){
        b_str += to_string(b);
    }


    if (int(a_str.at(0)-'0') == int(b_str.at(0)-'0')){
        cout << b_str << endl;
        return 0;
    }else if(int(a_str.at(0)-'0') > int(b_str.at(0)-'0')){
        cout << b_str << endl;
        return 0;
    }else if(int(a_str.at(0)-'0') < int(b_str.at(0)-'0')){
        cout << a_str << endl;       
        return 0;
    }
    return 0;
}