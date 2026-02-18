#include "Utilities.h"

using namespace std;

RandomNumberGenerator::RandomNumberGenerator(int min, int max) : gen(random_device{}()), dist(min, max) {} // initializing variables


int RandomNumberGenerator::getRandomValue(){
    return dist(gen);
}