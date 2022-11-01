#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include <string>
#include <vector>
#include <array>

class Board {
	private:
		int board[4][4];
		std::vector<std::vector<int>> emptySquares;
		const std::vector<std::vector<int>> directions{{1,0}, // 0 for up
			{0,1}, //1 for right
			{-1,0}, //2 for down
			{0,-1}}; //3 for left
		void addEmptySquare(std::vector<int> pos);
		void removeEmptySquare(std::vector<int> pos);

	public:
		Board();
		std::string toString() const;
		void compress(int dir);
		void move(std::vector<int> from, std::vector<int> to);
		void merge(int dir);
		void addNew();
		void step(int dir);
		void setSquare(std::vector<int> coords, int val);
		std::string getStringEmptySquares() const;
		~Board();
		
};

#endif
