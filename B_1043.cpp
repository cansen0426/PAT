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
