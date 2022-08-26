/*
*   Author: sikoeh (https://github.com/sikoeh)
*   
*   Example usage of the single linked list.
*   This file aims to test the size of the list and position of it's elements after the different operations.
*   Zero memory leaks according to valgrind.
*   Compiled and executed with following commands:
*   > g++ single_linked_list.hpp
*   > g++ single_linked_list.cpp
*   > ./a.out
*/

#include "single_linked_list.hpp"

#include <cassert>

//dummy that is used as list data for later tests
class dummy{
 public:
    dummy(int x, int y)
        :
        x_(x),
        y_(y)
    {};

    //simple compare of x and y values
    bool operator ==(const dummy& other){
        bool res = x_ == other.x_;
        res &= y_ == other.y_;
        return res;
    }

 private:
    int x_;
    int y_;
};



int main(){
    //Tests with simple integer
    single_linked_list<int> list;

    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.insert(5);

    assert(list.size() == 5);
    assert(list.at(3) == 4);
    
    list.remove(4);

    assert(list.size() == 4);
    assert(list.at(3) == 5);



    //Check for correct size after invalid position input
    try{
        list.remove_at(200);
        assert(false);
    }
    catch(const std::exception& e){
        assert(list.size() == 4);
    }

    list.insert_at(0, 0);
    assert(list.size() == 5);
    assert(list.at(0) == 0);

    list.remove_at(0);
    assert(list.size() == 4);
    assert(list.at(0) == 1);

    list.insert_at(7, 3);
    assert(list.size() == 5);
    assert(list.at(3) == 7);

    list.remove_at(3);
    assert(list.size() == 4);
    assert(list.at(3) == 5);

    //Test copy constructor
    single_linked_list<int> copy(list);

    assert(copy.size() == 4);
    assert(copy.at(3) == 5);

    //Test move constructor
    single_linked_list<int> move_list(std::move(copy));
    assert(move_list.size() == 4);
    assert(move_list.at(3) == 5);

    //Tests with dummy class
    single_linked_list<dummy&> list2;

    dummy d1(1, 2);
    dummy d2(2, 3);
    dummy d3(3, 4);
    dummy d4(5, 6);

    list2.insert(d1);
    list2.insert(d2);
    list2.insert(d3);
    list2.insert(d4);

    assert(list2.size() == 4);
    assert(list2.at(0) == d1);

    list2.remove(d2);

    assert(list2.size() == 3);
    assert(list2.at(1) == d3);

    return EXIT_SUCCESS;
}