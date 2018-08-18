/*************************************************************************
	> File Name: P1003.cpp
	> Author:yuxiaowei 
	> Mail:1147407739@qq.com 
	> Created Time: 2018年08月17日 星期五 23时52分57秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int n,a[10005],b[10005],g[10005],k[10005],x,y,ans=-1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>g[i]>>k[i];
    }
    cin>>x>>y;
    int c,d;
    for(int i=0;i<n;i++){
        c=a[i]+g[i];
        d=b[i]+k[i];
        if(x>=a[i]&&x<=c&&y>=b[i]&&y<=d) ans=i+1;
    }
    cout<<ans<<endl;
}
