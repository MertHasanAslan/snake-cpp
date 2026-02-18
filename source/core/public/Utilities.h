#include <random>

using namespace std;

// utility class for generating random values in a spesific range
class RandomNumberGenerator{
private:
    mt19937 gen; // Mersenne Twister random number engine
    uniform_int_distribution<int> dist; // Uniform integer distribution for a spesific range

public:
    /*
        Constructs for the a random number generator class with the given range
        int min = min number that can be generated (inclusive)
        int max = max number that can be generated (inclusive)
    */
   RandomNumberGenerator(int min, int max);

   /*
        generates a number int value in the spesified range
   */
   int getRandomValue();
}