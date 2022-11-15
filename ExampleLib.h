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
public:
    //BASIC METHOD DECLARATION (NO PARAMETERS)
    void myMethod();                //declaration of a method, we will define it in a cpp file and call it in a main func

    //METHOD WITH PARAMETERS DECLARATION
    int myAge(int fage);

private:
    int x;
};

#endif //PRIVNOTES_EXAMPLELIB_H
