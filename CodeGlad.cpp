#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int a[n];
        vector<int>v1,v2;
        for(int i = 0 ; i <n ; i++) cin>>a[i];
        for(int i = 0 ; i<n ; i++)
        {
            if(a[i]&1)
                v1.push_back(a[i]);
            else
                v2.push_back(a[i]);
        }

        sort(v1.begin() , v1.end() , greater<int>() );
        sort(v2.begin() , v2.end() , greater<int>() );

        pair<int,int>p1, p2;
        p1.f = 0 , p1.s = 0 , p2.f = 0 , p2.s = 0;

        for(int i = 0 ; i<v1.size() ; i++) 
        {
            if(i&1)
                p1.s = v1[i];
            else
                p1.f = v1[i];
            if(i == 1)
                break;

        } 
        for(int i = 0 ; i<v2.size() ; i++) 
        {
            if(i&1)
                p2.s = v2[i];
            else
                p2.f = v2[i];
            if(i == 1)
                break;

        } 
        int val1 = p1.f + p1.s;
        int val2 = p2.f + p2.s;

        if(val1>val2)
            cout<<p1.s<<p1.f<<endl;
        else   
            cout<<p2.s<<p2.f<<endl;
    }

    return 0;
}
