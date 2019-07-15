#include <bits/stdc++.h>
using namespace std;


int main() {
    stack<int>s , ts;
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            int val;
            cin>>val;
            s.push(val);
            if(ts.empty())
                ts.push(val);
            else   
            {
                if(val>ts.top())
                    ts.push(val);
            }
        } 
        else if(n == 2)
        {
            int temp = ts.top();
            if(s.top() == ts.top())
            {
                s.pop();
                ts.pop();
            }
        }
        else
            cout<<ts.top()<<endl;
    }   
    return 0;
}

