#include <iostream>
#include <cmath>
using namespace std;
int main() {
  bool again = true;
  int m,n,matrix[m][n];
  cout<<"m\n";
  cin>>m;
  cout<<"n\n";
  cin>>n;
  while (again == true) {
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        cin >> matrix[i][j];
      }
    }
    cout << "enter your choice\n"
         << "enter 1 to display the matrices\n"
         << "enter 2 to add the matrices\n"
         << "enter 3 to subtract the matrices\n"
         << "enter 4 to multiply the matrices\n"
         << "enter 5 to invert the matrices\n";
    int choice;
    cin >> choice;
    if (choice == 1) {
      for (int i = 0; i < 1; i++) {
        cout << "A=|";
        for (int j = 0; j < sqrt(n); j++) {
          cout << matrix[i][j];
          if (j == 0) {
            cout << "\t";
          } else {
            cout << "|"
                 << "\n";
          }
        }
      }
      cout << "  ";
      for (int i = 0; i < 1; i++) {
        cout << "|";
        for (int j = 2; j < 4; j++) {
          cout << matrix[i][j];
          if (j == 2) {
            cout << "\t";
          } else {
            cout << "|"
                 << "\n";
          }
        }
      }
      for (int i = 1; i < 2; i++) {
        cout << "B=|";
        for (int j = 0; j < 2; j++) {
          cout << matrix[i][j];
          if (j == 0) {
            cout << "\t";
          } else {
            cout << "|"
                 << "\n";
          }
        }
      }
      cout << "  ";
      for (int i = 1; i < 2; i++) {
        cout << "|";
        for (int j = 2; j < 4; j++) {
          cout << matrix[i][j];
          if (j == 2) {
            cout << "\t";
          } else {
            cout << "|"
                 << "\n";
          }
        }
      }
    } else if (choice == 2) {
      int sum[4];
      for (int i = 0; i < 4; i++) {
        sum[i] = matrix[0][i] + matrix[1][i];
      }
      cout << "sum=|";
      for (int j = 0; j < 2; j++) {
        cout << sum[j];
        if (j == 0) {
          cout << "\t";
        } else {
          cout << "|"
               << "\n";
        }
      }
      cout << "    ";
      cout << "|";
      for (int j = 2; j < 4; j++) {
        cout << sum[j];
        if (j == 2) {
          cout << "\t";
        } else {
          cout << "|"
               << "\n";
        }
      }
    } else if (choice == 3) {
      int diff[4];
      for (int i = 0; i < 4; i++) {
        diff[i] = matrix[0][i] - matrix[1][i];
      }
      cout << "diff=|";
      for (int j = 0; j < 2; j++) {
        cout << diff[j];
        if (j == 0) {
          cout << "\t";
        } else {
          cout << "|"
               << "\n";
        }
      }
      cout << "     ";
      cout << "|";
      for (int j = 2; j < 4; j++) {
        cout << diff[j];
        if (j == 2) {
          cout << "\t";
        } else {
          cout << "|"
               << "\n";
        }
      }
    }
    else if(choice==4){
      int multi[4];
    }
    cout << "want to run the program again\n"
         << "true for yes and false for no\n";
    cin >> again;
  }
  return 0;
}