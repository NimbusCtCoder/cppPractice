// C++ Examples
// Add private attributes
// Add inheritance 


#include <iostream>
using namespace std; 
int num = 22;
int *pNum = &num;
string word = "funny";
string *pWord = &word;
 int ageDY = 0;
class Dog {
    private:
        string color;

    public:
        string breed;
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
        void setColor(string aColor) {
            if (aColor == "brown" || aColor == "black and tan" || aColor == "yellow") {
                color = aColor;
            }
            else {
                color = "brown";
            }
        }
        string  getColor() {
            return color;
        }
};
//inheritance example
class SmallDog : public Dog {
    public:
    using Dog::Dog;  //allows all of Dog class constructors to be inherited
    string sweaterColor;
};

int main() {
    Dog dog1("lab", "blue", 12, 65); 
    Dog dog2;  //create dog2 with default attributes
    SmallDog feefee("poodle","brown", 4, 15);
    feefee.sweaterColor = "green";

    //use function to get access to private attribute:
    cout << "The color of dog1 is: " << dog1.getColor() << endl;

    dog1.setColor("orange"); //set color to non possible choice
        cout << "The color of dog1 is: " << dog1.getColor() << endl;  //default color brown will be displayed

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
    cout << "feefee is " << feefee.dogYears() << " years old in dog years" << endl;
    cout << "feefee's sweater color is: " << feefee.sweaterColor << endl;
    return 0;

}