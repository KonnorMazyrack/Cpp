#include <iostream>
#include <cstdlib>
#include <ctime>

class Coin {
private:
    int value;
    std::string sideUp;

public:
    Coin(int val)
    {
        value = val;
        sideUp = "heads";
    }

    void toss()
    {
        int rNum = rand() % 2;
        if (rNum == 0)
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
    int getValue()
    {
        return value;
    }
};

int main()
{
    srand(time(nullptr));

    Coin quarter(25);
    Coin dime(10);
    Coin nickel(5);

    int balance = 0;

    while (balance < 100)
    {
        int flip = rand() %3;
        if(flip == 0)
        {
            quarter.toss();
            if (quarter.getSideUp() == "heads")
                balance += quarter.getValue();
        }else if(flip == 1)
        {
            dime.toss();
            if (dime.getSideUp() == "heads")
                balance += dime.getValue();
        }else
        {
            nickel.toss();
            if (nickel.getSideUp() == "heads")
                balance += nickel.getValue();
        }
        std::cout << "Current balance: $" << balance/100 << "." << balance%100 << std::endl;
        if (balance == 100)
        {
            std::cout << "YOU WIN!" << std::endl;
            break;
        }else if (balance > 100)
        {
            std::cout << "YOU LOSE!" << std::endl;
            break;
        }
    }
    return 0;
}
