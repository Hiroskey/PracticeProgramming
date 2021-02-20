// I see this page: https://algo-logic.info/rec-bit-search/
// I see this page: https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361
// Thank you very much!

/*********************************************************************************************************************
Problem:
Given different N numbers, what is sum of the sum for all combinations?

This is an algorithm for brute-force search by bit-operation
Here is an example to enumerate all combinations in a subset {4, 10, 1} in this order.
The combinations are as follows: {}, {4}, {10}, {1}, {4,10}, {4,1}, {10,1}, {4,10,1}.
This can be described as follows: {000}, {100}, {010}, {001}, {110}, {011}, {101}, {111} as binary expression.
{000} means that any of numbers is selected. {010} represents that 10 is selected.
In {101}, 10 and 4 are selected, respectively.
***********************************************************************************************************************/

/*
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    // input
    vector<int> list = {4, 10, 1}; // This is a vecor (type is int) whose the size can be dynamically changed.
    int ans=0; // answer

    // 0 does not effect to the sum, so bits is started from 1.
    // 1 << (int)list.size() will show 1, 2, 3, 4, 5, 6, and 7. (int)list.size() is three.
    // Thus, "1 << (int)list.size()"" means that 1 is shift to left for 3 bits, and 1000.
    // for-loop is enumerated BY 3-bits, therefore, bits is counted as 1, 10, and 100 (not include 1000).
    for (int bits=1; bits <( 1<<(int)list.size() ); bits++){
        int sum=0;
        for (int i=0; i < (int)list.size(); i++){
            int mask=1 << i;
            if (bits & mask)
                sum += list[i];
        }
        ans += sum;
    }
    cout << ans << endl;
}
*/


/*********************************************************************************************************************
部分和問題
n 個の整数 a[0],a[1],…,a[n−1]a[0],a[1],…,a[n−1] が与えられる。
これらの整数から何個かの整数を選んで総和を KK とすることができるかどうかを判定せよ。
【制約】
・1 ≤ n ≤ 201 ≤ n ≤20
・1 ≤ a[i] ≤ 10001 ≤ a[i] ≤ 1000
・1 ≤ K ≤ 10001 ≤ K ≤ 1000

【数値例 1】
　n=3n=3
　a=(7,2,9)a=(7,2,9)
　K=11K=11
　答え: Yes (2 と 9 を選べばよいです)

【数値例 2】
　n=2n=2
　a=(5,7)a=(5,7)
　K=11K=11
　答え: No

ビット全探索は、漏れなく全てを調べ上げる
[1, 3, 4, 2, 6, 7, 10, 23, 24, 52, 65, ...., 76, 5, 23, 56, 12]
のような配列に対して、1番目(1)、2番目(10)、1番目と2番目(11)、3番目(100)、1番目と3番目(101)、...という具合に全て羅列していく。
**********************************************************************************************************************/

#include <iostream>
using namespace std;

int n;
int a[25]; //ex. [1, 4, 3, 7, 10] とする
int K; // 17

int main(){
    // input 
    cin >> n;
    for (int i=0; i< n; ++i)
        cin >> a[i];
    cin >> K;

    // answer is initially set to false.
    bool exist = false;
    // bit は　1を左にnビットシフトした値まで for ループを行う。
    // n に 5 が入力されたとすれば、bit は 10000 までのループを行う (100000は < の条件から含まない)。
    // つまりこの場合、bit は 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000 までループすることになる
    for (int bit=0; bit < (1<<n); ++bit){ //ex. bit = 100 とする
        //cout << "bit" << bit << endl;
        int sum=0; // 部分集合の和
        for (int i=0; i<n; i++){
            if (bit & (1<<i)){  //ex. 100 () と 1<<i とでANDをとる. [1, 4, 3, 7, 10]の中で 4 が 100 なので一致する
                cout << "a[" << i << "]: " << a[i] << endl;

                sum += a[i];   //ex. a[]の中に sum に 4 を足す。
            }
        }
        cout << "\n" << endl;

        if (sum==K) exist = true;
    }

    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;
}


/**
Given:
n=5
{1 4 3 7 10}
K=17


a[0]: 1 //1

a[1]: 4 //10

a[0]: 1 //11
a[1]: 4

a[2]: 3 //100

a[0]: 1 //101
a[2]: 3

a[1]: 4 //110
a[2]: 3

a[0]: 1 //111
a[1]: 4
a[2]: 3

a[3]: 7 //1000

a[0]: 1 //1001
a[3]: 7

a[1]: 4 //1010
a[3]: 7

a[0]: 1 //1011
a[1]: 4
a[3]: 7

a[2]: 3 //1100
a[3]: 7

a[0]: 1 //1101
a[2]: 3
a[3]: 7

a[1]: 4 //1110
a[2]: 3
a[3]: 7

a[0]: 1 //1111
a[1]: 4
a[2]: 3
a[3]: 7

a[4]: 10 //10000

a[0]: 1 //10001
a[4]: 10

a[1]: 4 //10010
a[4]: 10

a[0]: 1 //10011
a[1]: 4
a[4]: 10

a[2]: 3 //10100
a[4]: 10

a[0]: 1 //10101
a[2]: 3
a[4]: 10

a[1]: 4 //10110
a[2]: 3
a[4]: 10

a[0]: 1 //10111
a[1]: 4
a[2]: 3
a[4]: 10

a[3]: 7 //11000
a[4]: 10

a[0]: 1 //11001
a[3]: 7
a[4]: 10

a[1]: 4 //11010
a[3]: 7
a[4]: 10

a[0]: 1 //11011
a[1]: 4
a[3]: 7
a[4]: 10
 
a[2]: 3 //11100
a[3]: 7
a[4]: 10

a[0]: 1 //11101
a[2]: 3
a[3]: 7
a[4]: 10

a[1]: 4 //11110
a[2]: 3
a[3]: 7
a[4]: 10

a[0]: 1 //11111
a[1]: 4
a[2]: 3
a[3]: 7
a[4]: 10

Yes
*/


/*********************************************************************************************************************
与えられた部分集合の部分集合を列挙

**********************************************************************************************************************/