/*******************************************************************************
* AUTHOR     : Belal Zahran
* STUDENT ID : 1176978
* CLASS      : CS1C - MTWT: 3:00 - 5:20pm
* DUE DATE   : 6/29/2021
*******************************************************************************/
#include <vector>
#include <iostream>
using namespace std;

/*******************************************************************************
* hw05 - STL Vectors
*-------------------------------------------------------------------------------
* This program asks the user for the total number of numbered spots on a
 * lottery card. It then asks the user how many lucky numbers will be selected
 * from the card. The program then randomizes the selection and displays the
 * winners.
*-------------------------------------------------------------------------------*

********************************************************************************
* 1 - What is the STL? What is a vector?
*-------------------------------------------------------------------------------
* STL stands for standard template library and it is a software library for
* the language c++. It provides users with containers, algorithms, iterators,
* and functions. A vector are sequence containers that represent arrays.
*******************************************************************************
* 2 - Which vector operations change the size of a vector after its construction?
*-------------------------------------------------------------------------------
* shrink_to_fit and resize both change the size of a vector after its
* construction
*******************************************************************************
* 3 - What is the STL array container and how does it differ from the built-in
 * array and from a vector?
*-------------------------------------------------------------------------------
* The STL array container give us different implementations of static arrays.
 * it also provides us with member functions as well as non-member functions
 * which gives us more efficiency and freedom when dealing with static arrays
*******************************************************************************
* 4 - How does the vector member function resize()differ from reserve()?
*-------------------------------------------------------------------------------
* Reserve function allocates additional memory to the vector but leaves it
 * uninitialized meanwhile, the resize function will insert or delete a specific
 * number of elements in order to reach the desired size
*******************************************************************************
* 5 -What should begin()and end()do for a container?
*-------------------------------------------------------------------------------
* begin should move the pointer to the beginning of a container and end should
 * move it to the end of the container
*******************************************************************************
* 6 - Give an example of using the vector push_back()modifier.
*-------------------------------------------------------------------------------
* the push_back modifier can be used to change the size of a vector by inserting
 * another value from the back. for example if we have a vector with the values
 * (5, 10, 15) and we call push_back(20) the vector will change in size and print
 * (5, 10, 15, 20) instead
*-------------------------------------------------------------------------------*/

/********************************************************************
 * Function Lotto:
 * ------------------------------------------------------------------
 * This method will select specific number of random numbers
 * from the range passed through the function
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * rang and count of num
 *
 * POST-CONDITIONS
 * vector containing random nums in range
 ********************************************************************/
vector<int> Lotto(int available, int selected);

/********************************************************************
 * Function PrintVector:
 * ------------------------------------------------------------------
 * This method will insert the vector passed through the function
 * into the output stream and then to the console
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * existing initialized vector
 *
 * POST-CONDITIONS
 * printed vector
 ********************************************************************/
void PrintVector(const vector<int>&);

int main()
{

    cout << "*****************************************\n";
    cout << "   Programmed by: Belal Zahran\n";
    cout << "   Student ID   : 1176978\n";
    cout << "   CS1B         : MTWT: 3:00 - 5:20pm\n";
    cout << "   HW #5        : STL Vectors \n";
    cout << "*****************************************\n\n";

    vector<int> winners; // OUT - vector containing winning numbers
    int available;       // IN & CALC & OUT - num of spots
    int numSelected;     // IN & CALC & OUT - num of selected spots

    // for loop to run the code 3 times
    for (int i = 0; i < 3; i++) {


        // prompt user for values
        cout << "\n\nEnter the number of spots on the card: ";
        cin >> available;
        cout << "Enter the number of random winners: ";
        cin >> numSelected;

        // insert returned vector into winners
        winners = Lotto(available, numSelected);


        cout << "available: " << available;
        cout << endl;
        cout << "numSelected: " << numSelected;

        cout << "\nwinners = Lotto(available, numSelected)...";

        cout << endl << endl;

        // print results
        PrintVector(winners);
    }

    return 0;
}



void PrintVector(const vector<int>& myVector)
{
    cout << "Winners:";
    // loop through vector and print
    for (unsigned int i = 0; i < myVector.size(); ++i)
        cout << " " << myVector.at(i);
}

vector<int> Lotto(int available, int selected)
{
    vector<int> myVector;
    // for loop to insert all values into vectors
    for (unsigned int i = 1; i < available + 1; ++i)
        myVector.push_back(i);

    // shuffle the vector from front to begin
    random_shuffle (myVector.begin(), myVector.end());
    // shorten the vector to the specified size
    myVector.resize(selected);

    return myVector;







}
