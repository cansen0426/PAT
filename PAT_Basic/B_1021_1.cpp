#include <iostream>
#include <string>
#include <vector>
using namespace std;
 int main() {
    string str;
    vector<int> v(10,int(0));
    cin>>str;
    for (int i = 0; i < str.length(); i++)
        v[str[i]-'0']++;
    for (int i = 0; i < 10; i++)
    {
        if(v[i]!=0)
            cout<<i<<":"<<v[i]<<endl;
    }
    return 0;
}
