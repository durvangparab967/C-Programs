#include<iostream>
using namespace std;
int main()
{
   int N;
   int div = 2;
   int flag = 1;
   cout<<"Enter a prime number:";
   cin>>N;
   while(div<N)
   {
       if(N%div==0)
       {
           cout<<"Not a prime number";
           flag = 0;
           break;
       }
       else{
        div = div+1;
       }
   }
   if(flag==1)
   {
       cout<<"The prime number is:"<<N;
   }
}
