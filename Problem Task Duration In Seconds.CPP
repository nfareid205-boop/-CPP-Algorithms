#include <iostream>
#include <string>

using namespace std;

     
     struct StrTaskDuration 
     {
         int NumberOfDays , NumberOfHours, NumberOfMinutes, NumberOfSeconds;
      };
      
     int ReadPositiveNumber (string Message)
     {
         int Number = 0;
         do 
         {
            cout << Message << endl;
            cin >> Number ;
         } while (Number <= 0);
          
          return Number;
     }
     
     StrTaskDuration ReadTaskDuration()
     {
         StrTaskDuration  TaskDuration;
         
         TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days");
         TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours");
         TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes");
         TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds");
         
           return TaskDuration;
     }      
     
     int TaskDurationInSeconds(StrTaskDuration  TaskDuration)
     {
         int DurationInSeconds = 0;
         
         DurationInSeconds =  TaskDuration.NumberOfDays * 24 * 60 * 60;
         DurationInSeconds +=  TaskDuration.NumberOfHours * 60 *60;
         DurationInSeconds +=  TaskDuration.NumberOfMinutes * 60;
         DurationInSeconds +=  TaskDuration.NumberOfSeconds;
         
         return DurationInSeconds;
         
     }
     
     int main()
     {
          cout << endl;
          cout << "\n Task Duration In Seconds = " << TaskDurationInSeconds(ReadTaskDuration()) << endl;
        
         
         return 0;
      
      } 
