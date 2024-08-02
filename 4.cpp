
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
 int a,b;
cin>>a;
while(a){
cin>>b;
 int c;
 int sum = 0;
for(int i=0; i<b; i++){
cin>>c;
sum+=c;}

int ans = sqrt(sum);
if(ans*ans== sum)

    cout<<"YES"<<endl;
else cout<<"No"<<endl;
a--;
}
}
