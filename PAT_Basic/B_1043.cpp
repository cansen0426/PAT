/*
1043. 输出PATest(20)

给定一个长度不超过10000的、仅由英文字母构成的字符串。请将字符重新调整顺序，
按“PATestPATest....”这样的顺序输出，并忽略其它字符。当然，六种字符的个数不一定是一样多的，
若某种字符已经输出完，则余下的字符仍按PATest的顺序打印，直到所有字符都被输出。

输入格式：

输入在一行中给出一个长度不超过10000的、仅由英文字母构成的非空字符串。

输出格式：

在一行中按题目要求输出排序后的字符串。题目保证输出非空。

输入样例：
redlesPayBestPATTopTeePHPereatitAPPT
输出样例：
PATestPATestPTetPTePePee
*/

#include<iostream>
#include<string>
#include<map>
using namespace std;
//用了map，而且string字符串对比，建议反复再看。

int main()
{
    string S1="PATest",S2;
    map<char,int>Map;
    for(int i=0; i<S1.size(); i++)
    {
        Map[S1[i]]=0;
    }
    cin>>S2;
    int num=0;// P A T e s t 的总数
    for(int i=0; i<S2.size(); i++)
    {
        if( Map.find(S2[i])!=Map.end())
        {
            Map[S2[i]]++;
            num++;
        }
    }
    while(num)
    {
        for(int i=0; i<S1.size(); i++)
        {
            if(Map[S1[i]])
            {
                cout<<S1[i];
                Map[S1[i]]--;
                num--;
            }
        }
    }
    cout<<endl;
    return 0;
}