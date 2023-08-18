#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    stack<int> s1;
    s1.push(22);
    s1.push(45);
    s1.push(77);
    s1.push(78);

    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
}