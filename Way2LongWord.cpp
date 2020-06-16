#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
void fun(){
	string n;
	cin>>n;
	if(n.size()>10){
		cout<<n[0]<<n.size()-2<<n[n.size()-1];	
		return;
	}
	cout<<n;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    	fun();
    	cout<<"\n";
	}
    return 0;
}
