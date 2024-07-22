#include<iostream>
using namespace std;

int main() {
    int i, j;
    for(i=0;i<5;i++) {
        int temp;
        for(j=0;j<5;j++) {
            cin>>temp;
            if(temp==1) break;
        }
        if(temp==1) break;
    }
    
    cout<<abs(i-2)+abs(j-2);
}