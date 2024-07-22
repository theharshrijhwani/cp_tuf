#include<iostream>
#include<string>
using namespace std;
 
int main() {
    string n;
    cin>>n;
    
    for(int i=0;i<size(n);i++) {
        if(i==0 && n[i]=='9') continue;
        if(n[i]>'4' && n[i]<='9') {
            n[i] = '9' - n[i] + '0';
        }
    }
    
    cout<<n<<endl;
}