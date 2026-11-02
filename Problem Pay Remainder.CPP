#include <iostream>   
#include <string>

using namespace std;  

        float ReadPositiveNumber(string Message)
        {
            float Number = 0;
             do 
             {
                  cout << Message << endl;
                  cin >> Number;
             } while (Number <= 0);
             
                 return Number;
           }    
            
         float CalculateRemainder (float TotalBill , float TotalCachPaid )
         {
             return  TotalCachPaid - TotalBill ;
          }
         
         int main()
         {
             float TotalBill = ReadPositiveNumber("Please enter  Total Bill?");
             float TotalCachPaid = ReadPositiveNumber("Please enter  Total Cach Paid?");
              
              cout << "Total Bill " << TotalBill << endl;
              cout << "Total Cach Paid " << TotalCachPaid << endl;
               
               cout << "*********************" << endl;
                        
                                                                                                     
               cout << "Remainder = " <<  CalculateRemainder(TotalCachPaid,  TotalBill ) << endl;
               
               return 0; 
               
          }   
