/*******************************************************************************
* AUTHOR     : Belal Zahran
* STUDENT ID : 1176978
* CLASS      : CS1C - MTWT: 3:00 - 5:20pm
* DUE DATE   : 6/29/2021
*******************************************************************************/
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

/*******************************************************************************
* hw05 - STL Vectors
*-------------------------------------------------------------------------------
* This program
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
*
*******************************************************************************
* 4 - How does the vector member function resize()differ from reserve()?
*-------------------------------------------------------------------------------
* Reserve function allocates additional memory to the vector but leaves it
 * uninitialized meanwhile, the resize function will insert or delete a specific
 * number of elements in order to reach the desired size
*******************************************************************************
* 5 -What should begin()and end()do for a container?
*-------------------------------------------------------------------------------
*
*******************************************************************************
* 6 - Give an example of using the vector push_back()modifier.
*-------------------------------------------------------------------------------
*
*-------------------------------------------------------------------------------*/


vector<int> Lotto(int available, int selected);
void PrintVector(const vector<int>&);

int main()
{

    cout << "*****************************************\n";
    cout << "   Programmed by: Belal Zahran\n";
    cout << "   Student ID   : 1176978\n";
    cout << "   CS1B         : MTWT: 3:00 - 5:20pm\n";
    cout << "   HW #5        : STL Vectors \n";
    cout << "*****************************************\n\n";


    vector<int> winners;
    int available = 51;
    int numSelected = 11;

    winners = Lotto(available, numSelected);


    cout << left;
    cout << setw(19) << "Total Spots: " << available;
    cout << endl;
    cout << "Number of Winners: " << numSelected;
    cout << right;

    cout << endl << endl;
    PrintVector(winners);

    return 0;
}



void PrintVector(const vector<int>& myVector)
{
    cout << "Winners:";
    for (unsigned int i = 0; i < myVector.size(); ++i)
        cout << " " << myVector.at(i);
}

vector<int> Lotto(int available, int selected)
{
    vector<int> myVector;
    for (unsigned int i = 1; i < available + 1; ++i)
        myVector.push_back(i);

    random_shuffle (myVector.begin(), myVector.end());
    myVector.resize(selected);

    return myVector;







}
