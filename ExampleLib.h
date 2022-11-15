#ifndef PRIVNOTES_EXAMPLELIB_H
#define PRIVNOTES_EXAMPLELIB_H

class ExampleLib {

    /*ACCESS SPECIFIERS/MODIFIERS
     Access specifiers define how attributes and methodS of a class can be accessed:

        -> public - members are accessible from outside the class

        -> private - members cannot be accessed (or viewed) from outside the class,
                     even if we tried - it would generate an error

        -> protected - members cannot be accessed from outside the class, however,
                    they can be accessed in inherited classes


     !!! It is possible to access private members of a class using a public method inside the same class !!!
            It's called encapsulation, we should use it as often as possible so to protect our code
            More about encapsulation below
    */

    /*ENCAPSULATION
      The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
      We must declare class variables/attributes as private (cannot be accessed from outside the class).
      If we want others to read or modify the value of a private member, we can provide public get and set methods.
      Getter and Setter are public methods which use private variables
      For get and set methods look at bookmarks below
     */


private:
    //Private attribute for getter/setter
    int salary;

public:
    //BASIC METHOD DECLARATION (NO PARAMETERS)
    void myMethod();                //declaration of a method, we will define it in a cpp file and call it in a main func

    //METHOD WITH PARAMETERS DECLARATION
    int myAge(int fage);


    //Setter
    void setSalary(int s) {
        salary = s;
    }
    //Getter
    int getSalary() {
        return salary;
    }
};

#endif //PRIVNOTES_EXAMPLELIB_H
