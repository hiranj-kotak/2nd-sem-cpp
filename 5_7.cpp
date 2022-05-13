#include "iostream"
using namespace std;
class Land;
class Tile
{
    int l, w, area2, no_of_tile;

public:
    void read();
    void print();
    void area();
    void no_of_tiles(Land l);
};
class Land
{
    int length, width;
    int area1;
    friend void Tile::no_of_tiles(Land l);

public:
    void read();
    void print();
    void area();
};

void Land::read()
{
    cout << "enter length and breadth";
    cin >> length >> width;
    area();
}
void Land::print()
{
    cout << length << endl
         << width << endl;
}
void Land::area()
{
    area1 = length * width;
}
void Tile::area()
{
    area2 = l * w;
}

void Tile::read()
{
    cout << "enter length and breadth of tile";
    cin >> l >> w;
    area();
}
void Tile::print()
{
    cout << l << endl
         << w << endl;
}
void Tile::no_of_tiles(Land l1)
{
    cout << l1.area1 << " \t" << area2 << endl;
    no_of_tile = l1.area1 / area2;
    cout << no_of_tile << endl;
}

int main()
{
    Land l1;
    Tile t1;
    l1.read();
    t1.read();
    l1.print();
    t1.print();
    t1.no_of_tiles(l1);

    return 0;
}