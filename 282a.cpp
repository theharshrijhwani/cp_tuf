#include <iostream>
using namespace std;

int main() {
    int n;
    string temp;

    int x = 0;
    cin>>n;

    while(n--) {
        cin>>temp;
        if(temp[1]=='+') x++;
        else if(temp[1]=='-') x--;
    }
    cout<<x;
    return 0;
}