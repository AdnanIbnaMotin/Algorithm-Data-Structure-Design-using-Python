#include <iostream>
using namespace std;

void rowSum_colSum(int arr[5][5])
{
    for (int i=0; i<5; i++) {
        int colSum = 0;
        int rowSum = 0;
        for (int j=0; j<5; j++) {
            rowSum += arr[i][j];
            colSum += arr[j][i];
        }
        cout << i << " Row sum => " << rowSum << endl;
        cout << i << " Col sum => " << colSum << endl;
        cout << "###############" << endl;
    }

}
