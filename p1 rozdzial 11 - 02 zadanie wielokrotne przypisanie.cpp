#include <iostream>

int main()
{

    int x1, y1, z1;
    x1 = 666;
    y1 = 666;
    z1 = 666;
    int x2, y2, z2;
    x2 = y2 = z2 = 666;

    bool porownanieX = x1 == x2;
    bool porownanieY = y1 == y2;
    bool porownanieZ = z1 == z2;

    bool dzialanieWieksze = x1+y1+z1 > x2+y2+z2;
    bool dzialanieWiekszeRowne = x1+y1+z1 >= x2+y2+z2;
    bool dzialanieMniejsze = x1+y1+z1 < x2+y2+z2;
    bool dzialanieMniejszeRowne = x1+y1+z1 <= x2+y2+z2;
    bool dzialanieRowne = x1+y1+z1 == x2+y2+z2;
    bool dzialanieRozne = x1+y1+z1 != x2+y2+z2;

    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "y1 = " << y1 << std::endl;
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;
    std::cout << "y2 = " << y2 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    std::cout << "Porownanie x1 = x2: " << porownanieX << std::endl;
    std::cout << "Porownanie y1 = y2: " << porownanieY << std::endl;
    std::cout << "Porownanie z1 = z2: " << porownanieZ << std::endl;
    std::cout << "x1+y1+z1 > x2+y2+z2 = " << dzialanieWieksze << std::endl;
    std::cout << "x1+y1+z1 >= x2+y2+z2 = " << dzialanieWiekszeRowne << std::endl;
    std::cout << "x1+y1+z1 < x2+y2+z2 = " << dzialanieMniejsze << std::endl;
    std::cout << "x1+y1+z1 <= x2+y2+z2 = " << dzialanieMniejszeRowne << std::endl;
    std::cout << "x1+y1+z1 == x2+y2+z2 = " << dzialanieRowne << std::endl;
    std::cout << "x1+y1+z1 != x2+y2+z2 = " << dzialanieRozne << std::endl;
    return 0;
}
