#pragma once
#include "../GameConstants.h"
#include <unordered_map>
#include <vector>

using namespace std;

// Types of levels in the game
enum class LevelType{
    STANDART_FOREST,
    SPURCE_FOREST,
    WINTER_FOREST
};


// Types of cells
enum class CellType{
    EMPTY,
    WALL,
    FOOD,
    SNAKE,
    OUT_OF_BORDER
};


// functor for comparing two Vector2 objects for checking equality
struct Vector2Equal{
    bool operator()(const Vector2& FirstVector, const Vector2& SecondVector) const noexcept;
};


// functor for hashing a Vector2 object
struct Vector2Hash{
    size_t operator()(const Vector2& Vector) const noexcept;
};


// board class for representing board and its state
class Board{
private:
    size_t levelXSize; // the width (# of columns of the board)
    size_t levelYSize; // the height (# of rows of the board)
    Vector2 startingPosition;
    
    // thx to this map, we will shape board with celltypes (map storing the cell types)
    unordered_map<Vector2, CellType, Vector2Hash, Vector2Equal> boardMap;
    // 2d vector that stores initial level layout
    vector<vector<bool>> levelData;


public:
    // constructor for board according to level layout
    Board(vector<vector<bool>> levelData);
    

    // gets the cell type according to position
    CellType getCellInfo(Vector2 position) const;


    // gets the level layout
    unordered_map<Vector2, CellType, Vector2Hash, Vector2Equal> getLevelData() const;


    // gets the width (number of columns) of the level
    size_t getLevelXSize() const;


    // gets the height (number of rows) of the level
    size_t getLevelYSize() const;


    // gets a random empty cell position on the board
    Vector2 getRandomEmptyCell() const;


    // destruct the board class and release all the resources
    virtual ~Board();
};