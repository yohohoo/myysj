//2-11 �������ӷֽ����⡣

#include <stdio.h>
#include <stdlib.h>
int sum;
void solve(int n)
{
    int m;
    if(n == 1)//����Ϊ1ʱ��Ϊ�Ѿ����һ�ηֽ��ۼ�+1
       sum++;
    for(m=2;m<=n;m++)//ÿ�������б���
    {
        if(n % m == 0)//modΪ0 ��Ϊ�ɷֽ����
            solve(n/m);//���зֽ�
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
