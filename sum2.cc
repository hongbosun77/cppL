#include<iostream>
using namespace std;
/* calculate sum of 1,2,3...,99,100,
   that is, 1 + 2 + 3 + ... + 99 + 100 */
int main()
{
//    const int m = 1, n = 100;
    int m, n;
    cin >> m >> n;
    int ans = 0;
    int i = m;
    while(i <= n){
        ans += i;
        i++;
    }
    cout<< ans <<endl;
    return 0;
}

