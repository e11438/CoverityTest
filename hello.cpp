// Your First C++ Program

#include <iostream>
#include "Box.h"



static void createMemoryLeak (int in)
{
    Box * test = NULL;
    if(in == 1)
        test = new Box();


}


static Box * returnInvalidBoxPointer(int flag)
{
    Box * res = NULL;
    if(flag)
    {
        Box b;
        res = &b;
    }
    return res;
}

int main() {
    std::cout << "Hello World!" << std::endl;


    Box * b1 = new Box();
    //delete b1;

    if(b1)  std::cout << "still exist !" << std::endl;
    createMemoryLeak(0);
    return 0;
}
