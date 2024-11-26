//number 1
#include <iostream>
#include <string>

using namespace std;

int main() {
    string words[10] = { "roman", "marom", "shrio", "qwerty", "polin", "kacha", "kappa", "nasts", "igora", "anton" };


    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (words[i].substr(0, 3) == words[j].substr(2, 3)) {
                swap(words[i], words[j]);
                cout << words[j] << " и " << words[i] << " были поменяны местами " << endl;
                break;
            }

        }
    }

    return 0;
}
