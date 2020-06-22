#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    vector<vector<int>> a;
    int n, q;
    cin >> n >> q;

    for (int i=0; i<n; i++) {

        vector<int> b;
        int ni = 0;
        int bv = 0;
        cin >> ni;

        for (int j=0; j<ni; j++) {


            cin >> bv;
            b.push_back(bv);
        }
        a.push_back(b);
        b.clear();
    }

    for(int i=0; i<q; i++) {
        int qi, qj;
        cin >> qi >> qj;
        printf("%d\n", a[qi][qj]);
    }
    return 0;
}