#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t, a;
    cin>>t;

    while(t--) {
        int count = 0;
        int power = 0;
        string temp;
        cin>>a;
        temp = to_string(a);

        // for printing out least number of addends
        for(int i=0;i<temp.size();i++) {
            if(temp[i]!='0') count++;
        }
        cout<<count<<endl;

        // for printing out the round numbers
        power = 0;
        while(a!=0) {
            int rem = a%10;
            if(rem!=0) cout<<rem*pow(10, power)<<" ";
            power++;
            a = a/10;
        }
        cout<<endl;
    }

    return 0;
}