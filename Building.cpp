#include "Building.h"
#include <iostream>
#include "Person.h"
using namespace std;

Building::Building(int width, int height) : width(width), height(height){
    grid.resize(height, vector<Cell>(width));
    for (int y = 0; y < height; y++)
    {
        for (int x = 0; x < width; x++)
        {
            grid[y][x] = {x,y,false,false};
        }
        
    }
}

void Building::setWall(int x, int y){
    grid[y][x].isWall = true;
}

void Building::setExit(int x, int y){
    grid[y][x].isExit = true;
}

void Building::display(const std::vector<Person>& people) const {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            bool hasPerson = false;
            for (const auto& p : people) {
                if (p.x == x && p.y == y) {
                    cout << "P";
                    hasPerson = true;
                    break;
                }
            }
            if (!hasPerson) {
                if (grid[y][x].isWall) cout << "#";
                else if (grid[y][x].isExit) cout << "E";
                else cout << ".";
            }
        }
        cout << endl;
    }
}