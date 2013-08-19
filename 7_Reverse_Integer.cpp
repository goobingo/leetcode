/**
*
Input:
123
-123
-1234
10
100
1000000003
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        bool positive=x>0?true:false;
        x=abs(x);
        int rx=0;
        while(x){
            rx=rx*10+x%10;
            x/=10;
        }
        return positive?rx:-rx;
    }
};

int main() {
    int x;
    Solution sl;
    while(cin>>x){
        cout << x<<"\t"<<sl.reverse(x) << endl;
    }
    return 0;
}
