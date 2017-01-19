#include<iostream>
using namespace std;
int main()
{
char index,index1,inputstring[10],frequency[10]={0,0,0,0,0,0,0,0,0,0},length=0,temp,count=0;
int big;
cout<<"enter string";
cin>>inputstring;

for(index=0;index<10;index++)
{
for(index1=0;index1<10;index1++)
{
if(inputstring[index]==inputstring[index1])
{
frequency[index]++;
}
}
//cout<<"somewhat";
}

big=frequency[1];
for(index=0;index<10;index++)
{

if(big<frequency[index])
{
temp=frequency[index];
frequency[index]=big;
big=temp;
}
}cout<<"\n";
cout<<"frequency is";
cout<<big;
cout<<"highest frequency character is";
for(index=0;index<10;index++)
{
if(frequency[index]==big)
{
cout<<inputstring[index];

}}
cout<<"\n";
cout<<"frequency is";
cout<<big;

return 0;
}
