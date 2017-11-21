/*1016. 部分A+B (15)
正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。

现给定A、DA、B、DB，请编写程序计算PA + PB。

输入格式：

输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。

输出格式：

在一行中输出PA + PB的值。

输入样例1：
3862767 6 13530293 3
输出样例1：
399
输入样例2：
3862767 1 13530293 8
输出样例2：
0
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a,b;
    int m,n;
    cin>> a >> m >> b >> n;
    int counta=0, countb=0;
    for (int i = 0; i < a.length(); i++) {
    //因为ASC码48就是'0'，也就是说'0'的值是48，而后依次是'1'到'9'。
    //这样正好是char型减去48就是它对应的int值.
        if (m==(a[i]-'0'))
            counta++;
    }
    for (int i = 0; i <b.length(); i++) {
        if(n==(b[i]-'0'))
            countb++;
    }
    int ta=0,tb=0;
    for (int i = 1; i <= counta; i++)
        ta = 10*ta+m;
    for (int i = 1; i <= countb; i++)
        tb = 10*tb+n;
    cout<<ta+tb;
    return 0;
}
