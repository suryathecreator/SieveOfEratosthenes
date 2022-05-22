#include <iostream>
using namespace std;

int main()
{
    int counter = 2;
    int arrayposition = 2;
    int arraycounter = (arrayposition + 1);
    int printcounter = 2;
    int LISTSIZE;
    cout << "Up to how many numbers would you like prime numbers listed from 2? "; // enter 100 for 2 to 100
    cin >> LISTSIZE;
    int list[LISTSIZE];
    while (counter <= (LISTSIZE))
    {
        list[counter] = counter;
        counter++;
    }
    while (arrayposition <= (LISTSIZE))
    {
        if (list[arrayposition] != 0)
        {
            while (arraycounter <= (LISTSIZE))
            {
                if (list[arraycounter] != 0)
                {
                if ((list[arraycounter] % list[arrayposition]) == 0)
                    list[arraycounter] = 0;
                }
                arraycounter++;
            }
        }
        arrayposition++;
        arraycounter = (arrayposition + 1);

    }
    while (printcounter <= (LISTSIZE))
    {   
        if (list[printcounter] != 0)
            cout << list[printcounter] << endl;
        printcounter++;
    }
    return 0;



}