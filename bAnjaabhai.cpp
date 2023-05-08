#include <iostream>
#include <cmath>
using namespace std;
int main(){
    bool again = true;
    int s,y,m,n,matrix[m][n];
    cout<<"m\n";
    cin>>m;
    cout<<"n\n";
    cin>>n;
    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    do{
        for (int i = 0; i < m; i++){
            cout <<"m"<<i;
            int s=0;
            int y=sqrt(n);
            for (int j=s; j<y; j++){
                s++;
                y++;
                cout << matrix[i][j];
                if (j!=y-1) {
                cout << "\t";
                }
                else{
                cout << "|"<< "\n";
                }
            }
        }
    } while (y<n);
  return 0;
}