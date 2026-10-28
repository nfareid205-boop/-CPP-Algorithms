#include <iostream>
#include <string>

using namespace std;

    float ReadNumber(string Message)
    {
        float Number = 0;
        cout << Message << endl;
        cin >> Number;
        
        return Number;
    }
    
    float SumOfNumbers()
    {
       int  sum = 0 , Number = 0, counter = 1;    
      
        do 
        {
            Number = ReadNumber("Please enter Number " + to_string(counter));
            
            if(Number = -99)
             {
                 break;
             }
           
           sum += Number; 
           counter++; 
           } while (Number != -99);
           
           return sum;    
    }
    
     int main()
     {
         cout << SumOfNumbers() << "Result = "<< endl;
         
         return 0;
      } 
    
