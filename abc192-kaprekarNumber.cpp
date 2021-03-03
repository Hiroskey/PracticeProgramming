#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;


//昇順ソート
void g1(vector<int> &vec){
    sort(vec.begin(), vec.end());
}

//降順ソート
void g2(vector<int> &vec){
    sort(vec.begin(), vec.end(), std::greater<int>());
}

int vectorToInt(vector<int> &vec){

}
vector<int> func(vector<int> &vec){
    g1(vec);
    vector<int> res_g1 = vec;
    g2(vec);
    vector<int> res_g2 = vec;
    vector<int> f = vec;
    
    return f;
}

int main(){
    int N,K, res=0;
    cin >> N >> K;
    vector<int> vec;

    int i=0;
    int m=1;
    while(N/m != 0){
        vec.push_back((N/m)%10);
        i++;
        m=m*10;
    }
    
    for (int i=0; i<K; i++){
        vec = func(vec);
        for (int j=0; j<vec.size(); j++){
            cout << vec.at(j) << endl;
        }
    }

    //for (int i=vec.size()-1; i>=0; i--){
    //    res += 10**i
    
    return 0;
}


