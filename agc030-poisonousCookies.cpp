#include <bits/stdc++.h>
using namespace std;
const int MN = 2e5 + 5;
char s[MN];
int main () {
	int a,b,c; scanf ("%d %d %d",&a,&b,&c);
	printf ("%d\n",b+min(c,a+b+1));
	return 0;
}