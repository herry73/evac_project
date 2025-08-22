#pragma once
#include <vector>
#include "Cell.h"
#include "Person.h"

class Building{
public:
    Building(int width, int height);

    void setWall(int x, int y);
    void setExit(int x, int y);
    void display(const std::vector<Person>& people) const;

private:
    int width, height;
    std::vector<std::vector<Cell>> grid;

};