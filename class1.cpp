// Your First C++ Program

#include <iostream>
using namespace std; 
int num = 22;
int *pNum = &num;
string word = "funny";
string *pWord = &word;
 int ageDY = 0;
class Dog {
    public:
    string breed;
    string color;
    int age;
    int weight;
    int dogYrNum;
    //constuctor example
    Dog(string aBreed, string aColor, int aAge, int aWeight) {
        breed = aBreed;
        color = aColor;
        age = aAge;
        weight = aWeight;
    }
    //Constructor with defaults
    Dog() {
        breed = "Basset Hound";
        color = "black and tan";
        age = 3;
        weight = 40;
    }
    //method example
    int dogYears() {
        dogYrNum = age*7;
        return dogYrNum; 
    }
};

int main() {
    Dog dog1("lab", "yellow", 12, 65);
    Dog dog2;  //create dog2 with default attributes

    
    // Pointer Exercise
    cout << "Hello World with constrcutors!" << endl;
    cout << "pNum is a pointer that points to address = "  << pNum << endl;
    cout << "*pNum derefences the pointer to = " << *pNum << endl;
    cout << "pWord is a pointer that points to address = "  << pWord << endl;
    cout << "*pWord derefences the pointer to = " << *pWord << endl;
    
    // OOP exercise
    cout << "breed: " << dog1.breed << endl;
    cout << "age: " << dog1.age << endl;

    cout << "breed: " << dog2.breed << endl;
    cout << "age: " << dog2.age << endl;

    cout << "dog1 is " << dog1.dogYears() << " years old in dog years" << endl;
    cout << "dog2 is " << dog2.dogYears() << " years old in dog years" << endl;

    return 0;

}