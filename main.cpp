#include "Building.h"
#include "Person.h"
#include <vector>

int main(){
    Building main(10,8);

    for(int x = 2; x < 8; x++){
        main.setWall(x,3);
    }

    main.setExit(9,2);

    std::vector<Person> people;
    people.push_back({1, 1, 1});
    people.push_back({2, 4, 5});
    
    main.display(people);
    return 0;
}