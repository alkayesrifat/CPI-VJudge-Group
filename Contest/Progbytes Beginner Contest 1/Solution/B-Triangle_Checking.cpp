#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    
    int A , B , C ;
    cin >> A >> B >> C;
    
    if ((A + B > C) && (B + C > A) && (A + C > B)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    


    return 0;
}