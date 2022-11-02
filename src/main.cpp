#include <iostream>
#include <string>
#include <map>

#include "board.h"

using namespace std;

int main() {
	cout << "Les commandes sont : q -> gauche ; z -> haut ; s -> bas ; d -> droite." << endl << endl;
	
	Board board;
	const map<char, int> dirs{{'z', 0}, {'d', 1}, {'s', 2}, {'q', 3}};
	bool continueGame(true);

	while(continueGame) {
		cout << board.toString() << endl;
		cout << "Que voulez-vous jouer ? : ";
		char ans;
		cin >> ans;
		if (ans == 'n') {
			continueGame = false;
			continue;
		}
		if (dirs.count(ans) == 0) {
			cout << "Ce n'est pas une des commandes." << endl;
			continue;
		} else {
			if(board.step(dirs.at(ans))) {
				cout << "Bravo, vous avez gagné !!" << endl;
				continueGame = false;
			}
		}
	}

	return 1;
}

