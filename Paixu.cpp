#include<iostream>
#include<iomanip>
#include<time.h>
#include<stdlib.h>
#include<chrono>
using namespace std; //随机数函数头文件
int main()
{
void sort1(int *);//冒泡法函数
void sort2(int *);//快速排序法
int i;
int a[10000];
srand(time(0));	//调用随机数
for(i=0;i<10000;i++)
{
a[i]=1+rand()%10000;	//随机数的使用方法
}
int q;
cout<<"1--冒泡法\n"<<"2--快速排序法\n";
cout<<"请选择:";
cin>>q;
cout<<"排序后的结果为：\n";

switch(q)
{
case 1:
sort1(a);

break;
case 2:
sort2(a);

break;

}
}
void sort1(int *a)
{
double totaltime;
clock_t start,finish;
start=clock();
int i,j,temp,t=1;
for(i=1;i<10000;i++)
for(j=10000-1;j>=i;j--)
if(a[j]<a[j-1])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
} //冒泡部分
for(i=0;i<10000;i++)
{
cout<<setw(5)<<a[i];//为了使输入的数据对齐
t++;
if(t%16==0) //每输出15个数换行
{
cout<<endl;
t=1;
finish=clock();
totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
}
}
std::cout<<"\n此程序的运行时间为"<<totaltime<<"秒！"<<std::endl;
}
void sort2(int *a)
{
double totaltime2;
clock_t start,finish;
start=clock();
int i,j,k,t,m=1;
for(i=0;i<10000-1;i++)
{
k=i; //把第一个数的下标赋给k
for(j=i+1;j<10000;j++)//比较出最小的（出了第一个数）
{
if (a[j]<a[k])
k=j; //把比第一个数小的数的下标依此赋给k
t=a[i];a[i]=a[k];a[k]=t;//把最小的数与第一个数交换
}
}
for(i=0;i<10000;i++)
{
cout<<setw(5)<<a[i];//为了使输入的数据对齐
m++;
if(t%16==0) //每输出15个数换行
{
cout<<endl;
m=1;
finish=clock();
totaltime2=(double)(finish-start)/CLOCKS_PER_SEC;

}
}
std::cout<<"\n此程序的运行时间为"<<totaltime2<<"秒！"<<std::endl;
}
