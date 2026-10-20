#include <iostream>
#include <string>
using namespace std;

    enum enOddorEven {  Odd = 1 , Even = 2};
    
      int ReadNumber()
      {
          int Number ;
          cout << "Please enter your Number ?" << endl;
          cin >> Number ;
          return Number;
      }
      
      enOddorEven CheckOddorEven(int Number)
      {
          if(Number % 2 != 0)
            return  enOddorEven::Odd; 
          else 
            return  enOddorEven::Even;
        }  
      
      
      int SumOddNumber1toN_UsingWhlie(int N)
      { 
           int counter = 0; 
           int sum = 0;
      
         cout << "sum odd numbers using while statement :\n"; 
        
         while (counter < N) 
         {
             counter++;
             if(CheckOddorEven(counter) == enOddorEven::Odd) 
         {
             sum += counter;
          } 
    
         }
              return sum;
      }
      int SumOddNumber1toN_UsingDoWhlie(int N)
      {
           int counter = 0; 
           int sum = 0;
      
         cout << "sum odd numbers using Do,,while statement :\n"; 
         do 
        {
          counter++;
         if(CheckOddorEven(counter) == enOddorEven::Odd) 
         {
             sum += counter;
          }   
        }
          while (counter < N); 
              return sum;     
      }
      
      int SumOddNumber1toN_UsingFor(int N)
      {
          int sum = 0;
          
          cout << "sum odd numbers using Do,,while statement :\n";
         
          for (int counter = 1; counter <= N; counter++)
          {
                  if(CheckOddorEven(counter) == enOddorEven::Odd) 
         {
             sum += counter;
          }
          }
              return sum;        
       } 
                    
      
      int main()
      {
                int N = ReadNumber(); 
                 
               cout <<  SumOddNumber1toN_UsingWhlie(N) << endl;
               cout <<  SumOddNumber1toN_UsingDoWhlie(N) << endl;
               cout <<  SumOddNumber1toN_UsingFor(N) << endl;       
            return 0;
      }
