#include <iostream>
#include <string>

using namespace std;

     enum enPrineNotPrime{Prime = 1, NotPrime = 2 };
     
     float ReadNumber(string Message)
     {
         float Number = 0;
         do
         {
             cout << Message << endl;
             cin >> Number ;
         }while (Number <= 0);
         
         return Number;
     }
     
     enPrineNotPrime CheckPrime(int Number)
     {
         int M = round(Number / 2);
         
         for (int counter = 2; counter <= M; counter++)
         {
             if (Number % counter == 0 )
                return enPrineNotPrime::NotPrime;
         }
          
         return enPrineNotPrime::Prime;     
      }   
      
      void PrintNumberType (int Number)
      {
          switch(CheckPrime(Number))
          {
              case enPrineNotPrime::Prime:
              cout << "The number is  Prime\n";
              break;
              
              case enPrineNotPrime::NotPrime:
              cout << "The number is Not Prime\n";
              break;
          }      
    }
      
   int main()
   {
       PrintNumberType(ReadNumber("Please enter a positive number?"));
       
        return 0;        
    }
