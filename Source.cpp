#include <iostream>
#include <cstring>

struct coordinates
{
    int x = 0;
    int y = 0;
};

int main()
{
    char ch;
    ch = std::cin.get();

    coordinates cor;
    int& x = cor.x;
    int& y = cor.y;

    while (ch != '\n') {
        switch (ch)
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        default:
            break;
        }

        ch = std::cin.get();
    }

    std::cout << "(" << x << ", " << y << ")" << std::endl;

    while (x != 0 or y != 0) {

        if (x > 0) {
            std::cout << 'E';
            x--;
        }
        else if (x < 0) {
            std::cout << 'W';
            x++;
        }

        while (y != 0) {

            if (y > 0) {
                std::cout << 'N';
                y--;
            }
            else if (y < 0) {
                std::cout << 'S';
                y++;
            }

        }
    }

    return 0;
}
