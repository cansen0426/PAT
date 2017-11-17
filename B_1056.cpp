#include <stdio.h>
//#include <iostream>
int main(){
  int i,j,n,a[10];
  int sum = 0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        sum+=a[i]*10+a[j]+a[j]*10+a[i];
      }
    }
    printf("%d",sum);
  return 0;
}
