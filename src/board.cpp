#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <sstream>
#include <time.h>

#include "board.h"

using namespace std;

Board::Board() : emptySquares() {
	srand(time(NULL));
	for(int i(0);i<4;i++) {
		for(int j(0);j<4;j++) {
			this->board[i][j] = 0;
			this->emptySquares.push_back({j, i});
		}
	}
	addNew();
}

string Board::toString() const {
	string out("---------------------\n");
	for(int j(0);j<4;j++) {
		
		out += "|";
		for(int i(0);i<4;i++) {
			string val(this->board[i][j] == 0 ? " " : to_string(this->board[i][j]));
			string square(4 - val.length(), ' ');
			square += val;
			out += square + "|";
		}
		out += "\n---------------------\n";

	}
	return out;
}

void Board::compress(int dir) {
	
}

void Board::move(vector<int> from, vector<int> to) {
	auto val = this->board[from[0]][from[1]];
	this->board[from[0]][from[1]] = 0;
	this->board[to[0]][to[1]] = val;
}

void Board::merge(int dir) {
	
}

void Board::addNew() {
	auto idx(rand() % this->emptySquares.size());
	auto co(this->emptySquares[idx]);
	this->emptySquares.erase(this->emptySquares.begin() + idx);
	//cout << co[0] << co[1] << endl;
	this->board[co[0]][co[1]] = rand() % 4 == 0 ? 4 : 2;
}

void Board::step(int dir) {
	
}

void Board::setSquare(vector<int> coords, int val) {
	this->board[coords[0]][coords[1]] = val;
	if(val != 0) {
		removeEmptySquare(coords);
	} else {
		addEmptySquare(coords);
	}
}

void Board::addEmptySquare(vector<int> pos) {
	this->emptySquares.push_back(pos);
}

void Board::removeEmptySquare(vector<int> pos) {
	int i(0);
	for(auto elem : this->emptySquares) {
		if(elem == pos) {
			this->emptySquares.erase(this->emptySquares.begin() + i);
			cout << elem[0] << " " << elem[1] << endl;
		}
		i++;
	}
}

string Board::getStringEmptySquares() const {
	stringstream ss;
	for(auto i=0;i<this->emptySquares.size();i++) {
		if(i != 0)	 {
			ss << " ";
		}
		for(auto j=0;j<2;j++) {
			ss << this->emptySquares[i][j] << "/";
		}

	}
	return ss.str();
}

Board::~Board() {
	
}
