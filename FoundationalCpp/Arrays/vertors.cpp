#include <iostream>
//include header file of vector
#include <vector>
using namespace std;

int main(){
    //vector initialization methods
    vector<int> v; //or vector<int> v(5);

    //vector size 
    v.size(); // It tells us the size of the vector

    //Resizing a vector
    v.resize(9); // It will resize our vector

    //Capacity - it tells us the memory given to our vector in the background it will always be >= size it increases in the power of 2 when we add elements manually but when we use resize the capacity is compiler depended

    v.capacity();

    //Adding elemets at the end
    v.push_back(5);

    //Adding element at a certain position (position, element)
    v.insert(v.begin()+2,5);

    //To find the first position of the vector
    v.begin();

    //To find the ending postion of a vector
    v.end();

    //To delete elements from vectors
    v.pop_back();

    //To delete an element from a certain positon begin/end
    v.erase(v.begin()+2);

    //To delete all the elements form the vector
    v.clear();

    return 0;
}