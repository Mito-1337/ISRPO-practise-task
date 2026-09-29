#include <iostream>

using namespace std;

char desk[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

void field() {
    cout << "\n";
    cout << " 1 " << desk[0][0] << "| 2 " << desk[0][1] << "| 3" << desk[0][2] << "\n";
    cout << "---|---|---\n";
    cout << " 3 " << desk[1][0] << "| 4 " << desk[1][1] << "| 5" << desk[1][2] << "\n";
    cout << "---|---|---\n";
    cout << " 7 " << desk[2][0] << "| 8 " << desk[2][1] << " | 9" << desk[2][2] << "\n";
    cout << "\n";
}

int main() {
    
    field();

}