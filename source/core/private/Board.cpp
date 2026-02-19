#include "Board.h"
#include <raylib.h>

using namespace std;


// functor for comparing two Vector2 objects for checking equality
// compares the integer part of x and y
bool Vector2Equal::operator()(const Vector2& FirstVector, const Vector2& SecondVector) const noexcept{
    return static_cast<int>(FirstVector.x) == static_cast<int>(SecondVector.x) 
    && static_cast<int>(FirstVector.y) == static_cast<int>(SecondVector.y);
}


// functor for hashing a Vector2 object
// use integer part of x and y and produce a unique hash
size_t Vector2Hash::operator()(const Vector2& Vector) const noexcept{
    int x = static_cast<int>(Vector.x);
    int y = static_cast<int>(Vector.y);
    return hash<int>()(x) ^ (hash<int>()(y) << 1);
}


// constructor for board according to level layout
Board::Board(vector<vector<bool>> levelData) : levelData(move(levelData)) {
    levelYSize = levelData.size();
    levelXSize = levelData.front().size();
    boardMap.clear(); // clears any board layout (board data)
    transformLevelData(); // converts level layout to board map
}


// transform the initial level layout to the board map
void Board::transformLevelData(){
    if (!levelData.empty()){
        for (size_t y = 0; y < levelYSize; y++){
            for (size_t x = 0; x < levelXSize; x++){
                if (levelData[y][x] == 0){
                    boardMap[Vector2{static_cast<float>(x), static_cast<float>(y)}] = CellType::EMPTY;
                }
                else{
                    boardMap[Vector2{static_cast<float>(x), static_cast<float>(y)}] = CellType::WALL;
                }
            } 
        }
    }
}


// gets the cell type according to position
CellType Board::getCellInfo(Vector2 position) const{
    if (boardMap.find(position) != boardMap.end()){
        return boardMap.at(position);
    }
    return CellType::OUT_OF_BORDER;
}

// set a cell type to a position
void Board::setCellType(Vector2 position, CellType cellType){
    if (boardMap.find(position) != boardMap.end()){
        boardMap[position] = cellType;
    }
}


// gets the level layout
unordered_map<Vector2, CellType, Vector2Hash, Vector2Equal> Board::getLevelData() const{
    return boardMap;
}


 // gets the width (number of columns) of the level
size_t Board::getLevelXSize() const{
    return levelXSize;
}


// gets the height (number of rows) of the level
size_t Board::getLevelYSize() const{
    return levelYSize;
}


// gets a random empty cell position on the board
// pseudo random :)
Vector2 Board::getRandomEmptyCell() const{
    for (auto m : boardMap){
        if (m.second == CellType::EMPTY){
            return m.first;
        }
    }
    return {1, 1};
}


// destruct the board class and release all the resources
Board::~Board() = default;
