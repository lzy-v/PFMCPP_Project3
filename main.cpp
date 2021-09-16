/*
Project 3 - Part 1e / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar(Car car); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior(Car car);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};


/*
Thing 1) Kung Fu Center
5 properties:
    1) number of swords (int)
    2) number of students (int)
    3) number of teachers (int)
    4) amount of consciousness transfered per week (int)
    5) amount of conflicts avoided per month (int)
3 things it can do:
    1) train students
    2) avoid conflicts
    3) make the world a better place
 */

 struct KungFuCenter 
 // 1) defined struct for type 1.       
{
    // number of swords
    // 2) copied and commented-out plain-english property
    int numberOfSwords = 64;
    // 3) member variables with relevant data types.
    // number of students
    int numberOfStudents = 8;     
    // number of teachers     
    int numberOfTeachers = 1;            
    // amount of consciousness transfered per week
    int consciousnessPerWeek = 108;               
    // amount of conflicts avoided per month               
    int conflictsAvoidPerMonth = 11;               

    // train students
    bool trainStudents(int student);
    // avoid conflicts
    bool avoidConflict(std::string conflict);
    // make the world a better place
    bool makeTheWorldBetter(std::string whatIsBetterAnyway);
};

/*
Thing 2) Developer Center
5 properties:
    1) number of monitors (int)
    2) speed of connectivity (int)
    3) opening and closing time (float)
    4) food and beverages (std::string)
    5) music and visuals (std::string)
3 things it can do:
    1) enable space for co-creation
    2) feed and entretain developers
    3) create technology
 */
 

/*
Thing 3) Office
5 properties:
    1) number of boring people (int)
    2) quantity of administrative tasks (int)
    3) amount of gatekeeping (int)
    4) number of useless meetings per day (int)
    5) amount of bitcoin cash generated (float)
3 things it can do:
    1) steal souls
    2) brainwash employees into slavery
    3) make money that just causes problems
 */

/*
Thing 4) Jungle
5 properties:
    1) number of monkeys (int)
    2) number of bananas (int)
    3) number of trees (int)
    4) variety of fauna (int)
    5) number of songs sung by birds (int)
3 things it can do:
    1) nurture earth
    2) feed the monkeys
    3) change the vibration
 */

 /*
Thing 5) Display
5 properties:
    1) resolution x (int)
    2) resolution y (int)
    3) contrast (double)
    4) weight (int)
    5) thickness (int)
3 things it can do:
    1) display red
    2) display green
    3) display blue
 */

/*
Thing 6) Keyboard
5 properties:
    1) number of keys (int)
    2) type of switches (std::string)
    3) space between keys (int)
    4) material of keycaps (std::string)
    5) color of keysigns (std::string)
3 things it can do:
    1) record keystrokes
    2) adjust volume
    3) adjust screen brightness
 */

/*
Thing 7) Mouse
5 properties:
    1) type (std::string)
    2) material (std::string)
    3) brand (std::string)
    4) sensitivity (int)
    5) weight in mg (double)
3 things it can do:
    1) controll screen pointer
    2) right click
    3) left click
 */

/*
Thing 8) Fan
5 properties:
    1) revolutions per second (int)
    2) noise in LUFS (int)
    3) heat dispersed per minute (int)
    4) number of blades (int)
    5) brand (std::string)
3 things it can do:
    1) regulate temperature
    2) create noise polution
    3) change revolutions
 */

/*
Thing 9) Board
5 properties:
    1) amount of ram in gb (int)
    2) amount of storage in gb (int)
    3) amount of graphics capacity in gb (int)
    4) number of cores (int)
    5) clock rate GHz (double)
3 things it can do:
    1) process compute units
    2) process graphic units
    3) distribute workload
 */

 /*
Thing 10) Laptop
5 properties:
    1) Display
        resolution x (int)
        resolution y (int)
        contrast (double)
        weight (int)
        thickness (int) 
    2) Keyboard
        number of keys (int)
        type of switches (std::string)
        space between keys (int)
        material of keycaps (std::string)
        color of keysigns (std::string)
    3) Mouse
        type (std::string)
        material (std::string)
        brand (std::string)
        sensitivity (int)
        weight in mg (double)
    4) Fan
        revolutions per second (int)
        noise in LUFS (int)
        heat dispersed per minute (int)
        number of blades (int)
        brand (std::string)
    5) Board
        amount of ram in gb (int)
        amount of storage in gb (int)
        amount of graphics capacity in gb (int)
        number of cores (int)
        clock rate GHz (double)
3 things it can do:
    1) Visualize Data
    2) Process Data
    3) Follow Instructions
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
