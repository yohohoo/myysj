//2-11 整数因子分解问题。

#include <stdio.h>
#include <stdlib.h>
int sum;
void solve(int n)
{
    int m;
    if(n == 1)//当商为1时即为已经算出一次分解累计+1
       sum++;
    for(m=2;m<=n;m++)//每个数进行遍历
    {
        if(n % m == 0)//mod为0 即为可分解的数
            solve(n/m);//进行分解
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        sum = 0;
        solve(n);
        printf("%d\n",sum);
    }
 
    return 0;
}
