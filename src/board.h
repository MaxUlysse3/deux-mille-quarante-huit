#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include <string>
#include <vector>
#include <array>

class Board {
	private:
		int board[4][4];
		std::vector<std::vector<int>> emptySquares;
		void addEmptySquare(std::vector<int> pos);
		void removeEmptySquare(std::vector<int> pos);
		const std::vector<std::vector<int>> DIRECTIONS{{0,-1}, // 0 for up
			{1,0}, //1 for right
			{0,1}, //2 for down
			{-1,0}}; //3 for left

	public:
		Board();
		std::string toString() const;
		void compress(int dir);
		void move(std::vector<int> from, std::vector<int> to);
		bool merge(int dir);
		void addNew();
		bool step(int dir);
		void setSquare(std::vector<int> coords, int val);
		std::string getStringEmptySquares() const;
		std::vector<std::vector<int>> getEmptySquares() const;
		~Board();
		
};

#endif
