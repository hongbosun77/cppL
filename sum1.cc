#include<iostream>
using namespace std;
/* calculate sum of 1,2,3...,99,100,
   that is, 1 + 2 + 3 + ... + 99 + 100 */
int main()
{
    int m = 1,n = 100;
    int answer = 0;    // the sum
    int i;
    i = m;
    while(i <= n){
        answer += i;
        i++;
    }
    cout<< answer <<endl;
    cout<< sizeof(short) <<endl;
    return 0;
}



