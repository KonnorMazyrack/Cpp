#include <iostream>
#include <cstdlib>
#include <ctime>

class Coin {
private:
    std::string sideUp;

public:
    Coin()
    {
        toss();
    }

    void toss()
    {
        int randomNum = rand() % 2;
        if(randomNum == 0)
        {
            sideUp = "heads";
        }else{
            sideUp = "tails";
        }
    }
    std::string getSideUp() const
    {
        return sideUp;
    }
};

int main() {
    srand(time(nullptr));

    Coin myCoin;
    std::cout << "The initial side facing up is: " << myCoin.getSideUp() << std::endl;

    int headsCount = 0;
    int tailsCount = 0;

    for (int i = 0; i < 20; i++)
    {
        myCoin.toss();
        std::cout << "Toss: " << i+1 << ": " << myCoin.getSideUp() << std::endl;
        if(myCoin.getSideUp() == "heads")
        {
            headsCount++;
        }else
        {
            tailsCount++;
        }
    }
    std::cout << "Heads count: " << headsCount << std::endl;
    std::cout << "Tails count: " << tailsCount << std::endl;
    return 0;
}
