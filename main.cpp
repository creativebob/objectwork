#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    srand (time (NULL));
    const int SIZE = 10;
    int arrayRandomInteger [SIZE]{};
    int max = 20;
    int min = 10;
    int randomInteger;




    for (size_t i = 0; i < SIZE; i++)
    {
        randomInteger = rand() % max;



        while (randomInteger < min)
        {
            randomInteger = rand() % max;
        }


        arrayRandomInteger [i] = randomInteger;
        
    }
    
    for (int item : arrayRandomInteger)
    {
        cout << item << "\n";

    }
    



    





    
    
    

    

    


    


}