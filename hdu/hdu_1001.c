#include <stdio.h>
int main(){
  int n,s;
  while(scanf("%d",&n)!=EOF){
    s = n%2==0? (n/2)*(n+1):((n+1)/2)*n;
    printf("%d\n\n",s);
  }
  return 0;
}