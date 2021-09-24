# problem2test
#include <iostream>
using namespace std ;

int main()
{
   int n = 0 ;
   int m = 0 ;
   cin >> n >> m ; //read two integers from PDOGS
   
   if(n < m ) // To check if n > m 
     {
         
     cout << -1  ;
     
     }
   
  if(n >= m)  // To check if n > m 
     {
         
      int leadNum = 1 ; // The leading student number of first group
      
      int teacherNum = n % m ;  // The number of students that goes to the teacher's team
      
      int taNum =n - teacherNum ; // The number of students that goes to the TAs
      
      while(leadNum <= taNum ) 
        {
            
         cout<< leadNum ;
         
          if (leadNum + m < taNum) // To check if 'leadNum' is the last one leadNum
          
           {
               cout << ','  ; 
           }
         
         leadNum= leadNum + m  ; // add the number of each groups to the leadNum

        }
     }
   
    return 0 ;  // indicate that the program ended successfully
}
