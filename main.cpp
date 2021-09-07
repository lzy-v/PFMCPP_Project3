/*
Project 3 - Part 1d / 5
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

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives and std::string. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine`
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
        Remember to pick properties that can be represented with 'int float double bool char std::string'
2) write the name of the primitive type you'll be using after each property
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            width in cm (int)
            height in cm (int)

3) move Thing 5-9 to between your Thing 4 and Thing 10.
*/

/*
Thing 5)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 6)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 7)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 8)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */

/*
Thing 9)
5 properties:
    1)
    2)
    3)
    4)
    5)
3 things it can do:
    1)
    2)
    3)
 */




/*
Thing 1) Kung Fu Center
5 properties:
    1) number of swords
    2) number of students
    3) number of teachers
    4) amount of consciousness transfered per week
    5) amount of conflicts avoided per month
3 things it can do:
    1) train students
    2) avoid conflicts
    3) make the world a better place
 */

/*
Thing 2) Developer Center
5 properties:
    1) number of monitors
    2) speed of connectivity
    3) opening and closing time
    4) food and beverages
    5) music and visuals
3 things it can do:
    1) enable space for co-creation
    2) feed and entretain developers
    3) create technology
 */

/*
Thing 3) Office
5 properties:
    1) number of boring people
    2) quantity of administrative tasks
    3) amount of gatekeeping
    4) number of useless meetings per day
    5) amount of bitcoin cash generated
3 things it can do:
    1) steal souls
    2) brainwash employees into slavery
    3) make money that just causes problems
 */

/*
Thing 4) Jungle
5 properties:
    1) number of monkeys
    2) number of bananas
    3) number of trees
    4) variety of fauna
    5) number of songs sung by birds
3 things it can do:
    1) nurture earth
    2) feed the monkeys
    3) change the vibration
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
