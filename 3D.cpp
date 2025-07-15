#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int cube[3][3][3] = {0};
    srand(time(0));

    int treasureLayer = rand() % 3;
    int treasureRow = rand() % 3;
    int treasureCol = rand() % 3;
    cube[treasureLayer][treasureRow][treasureCol] = 1;

    int layer, row, col, attempts = 0;

    cout << "Welcome to the 3D Cube Treasure Hunt Game!\n";
    cout << "Cube size: 3 layers × 3 rows × 3 columns\n";
    cout << "Indexes: layer[0-2], row[0-2], column[0-2]\n";

    while (true) {
        cout << "\nEnter layer (0 to 2): ";
        cin >> layer;
        cout << "Enter row (0 to 2): ";
        cin >> row;
        cout << "Enter column (0 to 2): ";
        cin >> col;
        attempts++;

        if (layer < 0 || layer > 2 || row < 0 || row > 2 || col < 0 || col > 2) {
            cout << "Invalid input. Try again.\n";
            continue;
        }

        if (cube[layer][row][col] == 1) {
            cout << " Congratulations! You found the treasure in " << attempts << " attempts!\n";
            break;
        } else {
            cout << " Nope, no treasure there. Keep searching!";
        }
    }

    return 0;
}
