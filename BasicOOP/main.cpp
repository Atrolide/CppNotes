#include <iostream>

#include "ExampleLib.h"
#include "Cars.h"

//INSIDE CLASS DEFINITION
class MyClass {
public:
    std::string name;
    int age;

    void descript() {
        std::cout << "My name is " << name << " and I'm " << age << " years old." << std::endl;
    };
};

/*We can also define a class outside main
  We do it by creating a library (LibName.h) with a cpp file with the same name (LibName.cpp)
  We declare variables/methods/etc. inside the .h file
  And we define them in a cpp file

  Let's create a first library called ExampleLib ->

  Remember to include a library at top of main class!!!
 */


int main() {

    //USE OF INSIDE CLASSES
    MyClass myObj1;                             //Object declaration
    myObj1.name = "John";
    myObj1.age = 22;
    std::cout << "My name is " << myObj1.name << " and I'm " << myObj1.age << " years old." << std::endl;

    myObj1.descript();

    std::cout
            << "-------------------------------------------------------------------------------------------------------"
            << std::endl;

    //USE OF OUTSIDE CLASSES (LIBRARIES)

    ExampleLib exObj;                           //Object declaration

    //Let's call a method from an outside class (library)
    //CALL OF AN OUTSIDE METHOD WITHOUT PARAMETERS
    exObj.myMethod();
    //CALL OF AN OUTSIDE METHOD WITH PARAMETERS
    std::cout << "I'm " << exObj.myAge(22) << " years old." << std::endl;

    std::cout
            << "-------------------------------------------------------------------------------------------------------"
            << std::endl;

    //PRACTICAL USE OF LIBRARIES -> CLASS 'Cars'
    //Assigning variables by hand:
    //Cars Volvo;
    //Cars BMW;
    //Cars Toyota;
    //Cars Fiat;

    /*
       Declarations above and below had to be commented out,
       after creating a constructor with parameters it generates an error

    //VOLVO
    Volvo.brandName = "Volvo";
    Volvo.countryName = "Sweden";
    Volvo.yearFounded = 1927;

    //BMW
    BMW.brandName = "BMW";
    BMW.countryName = "Germany";
    BMW.yearFounded = 1916;

    //Toyota
    Toyota.brandName = "Toyota";
    Toyota.countryName = "Japan";
    Toyota.yearFounded = 1937;

    //Fiat
    Fiat.brandName = "Fiat";
    Fiat.countryName = "Italy";
    Fiat.yearFounded = 2007;

    Volvo.carDescription();
    BMW.carDescription();
    Toyota.carDescription();
    Fiat.carDescription();


     My dumb ass brain now needs to make a class with
     constructors/copy-constructors/deconstructors/etc
     Then make a list of objects
     And that will be almost everything to pass an exam
     */


    //ASSIGN VALUES BY A CONSTRUCTOR WITH PARAMETERS
    Cars Volvo("Volvo", "Sweden", 1927);
    Cars BMW("BMW", "Germany", 1916);
    Cars Toyota("Toyota", "Japan", 1937);
    Cars Fiat("Fiat", "Italy", 2007);

    Volvo.carDescription();
    BMW.carDescription();
    Toyota.carDescription();
    Fiat.carDescription();


    Cars Test("Blank", "Blank", 69);
    Test.carDescription();

    //We can change every attribute of an object whenever we want:
    Test.brandName = "Test";
    Test.countryName = "San Escobar";
    Test.yearFounded = 2137;
    Test.carDescription();

    //We can also change them using user's input
    std::cout << "Enter brand of your car: " << std::endl;
    std::cin >> Test.brandName;

    std::cout << "In which country was it founded? " << std::endl;
    std::cin >> Test.countryName;

    std::cout << "In which year was it founded? " << std::endl;
    std::cin >> Test.yearFounded;

    Test.carDescription();

    /*
        But to make it work nicely we need to create a function in another class,
        use constructors, copy constructors, deconstructors, etc.

                    "めんどくせ"   ~ 奈良シカマル
    */


    //ENCAPSULATION
    ExampleLib myEmployee1;
    myEmployee1.setSalary(5000);
    std::cout << "Employee's salary: " << myEmployee1.getSalary();

    return 0;
}