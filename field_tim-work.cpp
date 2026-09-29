#include <iostream>

using namespace std;

char desk[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int nums[12] = {1,2, 3, 4, 5, 6, 7, 8, 9};
char symbols[2] = {"x", "o"};

void field() {
    cout << "\n";
    cout << " %d " << desk[0][0] << " | 2 " << desk[0][1] << "| 3" << desk[0][2] << "\n";
    cout << "---|---|---\n";
    cout << " 3 " << desk[1][0] << " 4 " << desk[1][1] << "  | " << desk[1][2] << "\n";
    cout << "---|---|---\n";
    cout << "  " << desk[2][0] << " |  " << desk[2][1] << "  | " << desk[2][2] << "\n";
    cout << "\n";
}

int checkWinner() {
    // Проверка строк
    // На месте return вставье имя функции проверки текущего игрока, чей ход
    for (int i = 0; i < 3; i++) {
        if (desk[i][0] == desk[i][1] && desk[i][2] == desk[i][0])
            // return current_player;
    }
    // Проверка столбцов
    for (int i = 0; i < 3; i++) {
        if (desk[0][i] == desk[1][i] && desk[2][i] == desk[0][i])
            // return current_player;
    }
    // Проверка диагоналей
    if (desk[0][0] == desk[1][1] and desk[2][2] == desk[0][0])
        // return current_player;
    if (desk[0][2] == desk[1][1] and desk[2][0] == desk[0][2])
        // return current_player;

    return 0;
}

int main() {

    // int desk

    field();
}