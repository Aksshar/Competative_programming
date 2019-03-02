#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()

{

int n,m;

cin>>n>>m;
int r;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>r;
    v.push_back(r);
}
for(auto i=0;i<(1<<v.size() );++i)

{

bitset<32>b(i);

for(auto j=0;j<v.size();j++)

if(b[j])cout<<v[j];

cout<<endl;

}

}
