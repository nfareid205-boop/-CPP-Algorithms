#include <iostream>   
#include <string>    

using namespace std;  

     float ReadNumber(string Message)
     {
         float Number = 0;
         do 
         {
          cout << Message << endl;
          cin >> Number;
         } while(Number <= 0);
         
         return Number;
     }
     
      void PrintPositiveNumber(float Number)
      {
           cout << "Multiblaction Table for " << Number << endl;
                          
           for(float counter = 1; counter <= 10; counter++)
           {   
               cout << Number  << " x " << counter << "=" << (Number*counter) << endl;
            }
       }
       
       int main()
       {
          float Number = ReadNumber("Please enter a Positive Number ?\n");
      
       
          PrintPositiveNumber((Number));
          
          return 0;
          
       }
     
