#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> p(n);
    for (int i = 0; i < n; ++i) 
    {
        cin >> p[i];
    }
    
    vector<int> rst(n);
    for (int i = 0; i < n;i++) 
    {
        rst[p[i] - 1] = i + 1; 
    }
    
    for (int i = 0; i < n;i++) 
    {
        cout << rst[i] << " ";
    }
    cout << endl;
    
    return 0;
}