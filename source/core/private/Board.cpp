#include "Board.h"
#include <raylib.h>

using namespace std;


// functor for comparing two Vector2 objects for checking equality
bool Vector2Equal::operator()(const Vector2& FirstVector, const Vector2& SecondVector) const noexcept{

}


// functor for hashing a Vector2 object
size_t Vector2Hash::operator()(const Vector2& Vector) const noexcept{

}


// constructor for board according to level layout
Board::Board(vector<vector<bool>> levelData) : levelData(move(levelData)) {
    levelYSize = levelData.size();
    levelXSize = levelData.front().size();
    boardMap.clear();
    transformLevelData();
}


// transform the initial level layout to the board map
void Board::transformLevelData(){

}


// gets the cell type according to position
CellType Board::getCellInfo(Vector2 position) const{

}


// gets the level layout
unordered_map<Vector2, CellType, Vector2Hash, Vector2Equal> Board::getLevelData() const{

}


 // gets the width (number of columns) of the level
size_t Board::getLevelXSize() const{

}


// gets the height (number of rows) of the level
size_t Board::getLevelYSize() const{
    
}


// gets a random empty cell position on the board
Vector2 Board::getRandomEmptyCell() const{

}


// destruct the board class and release all the resources
Board::~Board() = default;
