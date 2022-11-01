#include <iostream>
#include <string>

#include "board.h"

using namespace std;

int main() {
	cout << "Je suis une licorne" << endl;
	Board board;
	cout << board.toString() << endl;
	cout << board.getStringEmptySquares() << endl;

	board.setSquare({2, 0}, 128);
	cout << board.toString() << endl;
	cout << board.getStringEmptySquares() << endl;

	return 1;
}

