
/*
 *思路：
 *遍历字符串，统计出PATest各字母的个数
 *按照PATest顺序输出字符,输出某字符后,相应字符个数-1
 *如果是0则不输出,知道PATest各字母个数都为0 结束程序
 */
 #include <iostream>
 #include <string>
 using namespace std;
 int main() {
   string pat;
   int P=0,A=0,T=0,e=0,s=0,t=0;
   cin>>pat;
   for (int i = 0; i < pat.size(); i++) {
     switch (pat[i]) {
       //第一次没有加break导致结果出错
       case 'P':P++;break;
       case 'A':A++;break;
       case 'T':T++;break;
       case 'e':e++;break;
       case 's':s++;break;
       case 't':t++;break;
     }
   }
     while (1) {
       if(P!=0){cout<<"P";P--;}
       if(A!=0){cout<<"A";A--;}
       if(T!=0){cout<<"T";T--;}
       if(e!=0){cout<<"e";e--;}
       if(s!=0){cout<<"s";s--;}
       if(t!=0){cout<<"t";t--;}
       if(P==0&&A==0&&T==0&&e==0&&s==0&&t==0){
         break;
       }
     }
   cout<<endl;
   return 0;
 }
