#include <iostream> // preprocessor statement , process before complie
using namespace std; // to avoid writing std:: before every standard library function
 int number1 = 100 ; //global variable 

 int main(){
  
     cout << INT_MAX << endl; // the maximum value of int
     cout << INT_MIN << endl; // the minimum value of int
     cout << sizeof(int) << endl; // the size of int in bytes ==> 2 or 4 bytes depend on the system
     cout << sizeof(float) << endl; // the size of float in bytes // 4 bytes
      cout << sizeof(double) << endl; // the size of double in bytes // 8 bytes
       cout << sizeof(char) << endl; // the size of char in bytes  // 1 byte
        cout << sizeof(bool) << endl; // the size of bool in bytes  // 1 byte
   
        int num =190 ;
         num = 191.5;
         cout<< sizeof(num) << endl; // the size of num in bytes  // 4 bytes
          cout << num << endl; // the value of num after assigning a float value to it // 191 because the decimal part will be truncated when assigning a float value to an int variable

          double dou = 22 ;
          dou =23.4;
          cout << sizeof(dou) << endl; // the size of dou in bytes  // 8 bytes
           cout << dou << endl; // the value of dou after assigning a float value to it // 23.4 because double can store decimal values without truncation
           float fl =  10.5 + 9.5; // here the compiler work with this number as double because the default type for floating point numbers is double
           float fl =  10.5f + 9.5f; // here we tell the compiler that this number is a float by adding f at the end of the number
           cout << sizeof(fl) << endl; // the size of fl in bytes  // 4 bytes
            cout << fl << endl; // the value of fl after assigning a float value to it // 20 because the decimal part will be truncated when assigning a double value to a float variable

             return 0 ;
             auto mix = 9.5; // compiler will detect that mix is a double because the value assigned to it is a double
            auto mix = 9.5f; // float 
   }   

  


// how c++ works  
// 1) process 
//2) create translation unit 
 // 3) compiler translate that into object file 
 // 4) linker == to link all object and produce the exe file to run the file 

 //  << stream insertion operator 
 //  \n special character for new line
 // std:: is the standard namespace for input and output stream in c++


 // comments
  // single line comment
 /* multi line comment
  any line you want to write here will be ignored by the compiler    
 */

/*
   syntax 
   [variable_type] [variable_name] = [value] ;
     
*/

/*
  variable nameing Rules & best practices
  ===Naming rules 
  ----must be uniqe 
  ----- case sensitive
  ------ cannot start with numbes 
  ---- numbers or letters or underscore
  ----- no white space or special characters
   ----- reserved keywords "class" , "public",..,

*/
 /*
 variable advanced knowledge
  -Declare variables without value   + change later 
  decalre multiple variables without value + change later
   - declare multiple variables with same value
  
 */
/*
 variable scope 
   
*/

/*
  constant variable
   read only value
   cant declare without value
*/
/*
 calculate your age application
  cout<<"*****************\n";
     cout<<"your guilde for calculate your age application\n";
     cout<<"**************\n";
      int age;
      cin >> age;
      int age_in_dayes = age * 365 ;
      int age_in_hours = age_in_dayes * 24 ;
      int age_in_minute = age_in_hours * 60 ;
      int age_in_second = age_in_minute * 60 ;
      cout << "Age in dayes :"<< age_in_dayes << " days\n";
      cout << "Age in hours :"<< age_in_hours<< " hours\n";
      cout << "Age in minute :" << age_in_minute << " minute\n";
      cout << "Age in second :" << age_in_second << " second\n";
*/
/*
escape sequences characters 
  \n new line
  \t tab
  \\ backslash
  \" double quote
  \' single quote
  \a 
  \b 
   ex 
    cout << "line 1\n";
     cout<< "line 2\\"; // the backslash will wrint with txt
     cout<<"line \"4\"\n"; // if tou want to print \"....\" in the text
     cout <<"line4\t \n"; // spaces 
     cout<<"line5\a\n"; // 
     cout<< "kamal\raboueidd\n";
     cout << "line"; // this is a line \
*/
/*
 Data types 
 what is date ?
  data ex in real life 
  integer 
  string
  boolean 
  float 
  array 
   /== why we choose data ? 
 what is operand ? 
   the part of an instruction representing the data manipulated by the operation specified by the operator

*/
/*
  data types 
   ram [R]andom [A]ccess [M]emory
   computer memeory has locations
    data sizes
     bit => [B]inary [D]igit => 0 or 1 smallest unit in storage ;
     Byte ==> A group of 8 bit ==> store singlw charachte
     Kilo Byte ==> 1024 byte
     Mega Byte ==> 1024 Kilo Byte
     Giga Byte ===> 1024 Mega byte
     Tera Byte====> 1024 Giga Byte

     Data types with sizes 
      int ==> 2 or 4 bytes ==> cover latter only
      float ==> 4 bytes [18.5666]
      double ==> 8bytes [18.56666666666666]
      Number . fractional component 
      char ==> 1 Byte ===> "A" "X" "9"
       boolean 1 Byte ===> True or False 
       Double vs Float 
         double is more precise than float
         doble can store more decimal places than float
         after dot double can store 15-16 decimal places while float can store 6-7 decimal places

         the story behind ceating a variable 
         === declare a variable
         tell the computer that we need to reserve x bytes of memory depend on data type
         restrict type of data to the type we choosen

         ---declaer variable without type
         see the memory address & 
      ==== auto , make the complier detect the type of variable based on the value assigned to it 
      int num = 20 ; 
      auto num2 = 20 ; the compiler will detect that num2 is a int because the value assigned to it is a int

 aplication to create app ask you to type number of kilobytes
 and convert it to bytes and bits
    int kilobytes;
     cin >> kilobytes ;
      int bytes = kilobytes * 1024 ;
      int bits = bytes * 8 ;
     cout << "[1] the number of Kilobytes that user input is :" << kilobytes << " KB\n";
     cout << "[2] the number of Bytes that user input is :" << bytes << " B\n";
     cout << "[3] the number of Bits that user input is :" << bits << " bits\n";
     return 0 ;
 */
/**
    primative data types 
     int  ==> integer 
     test numbers 
     test floating point vs int 
     store from -21....., 21.......
     INT_MIN , INT_MAX
   check limits header file limits.h
     est size of data types without variables & use end line
      assignmnet operator 
      
      float ==> floating point number
         double ==> more precise than float 
        
              cout << INT_MAX << endl; // the maximum value of int
     cout << INT_MIN << endl; // the minimum value of int
     cout << sizeof(int) << endl; // the size of int in bytes ==> 2 or 4 bytes depend on the system
     cout << sizeof(float) << endl; // the size of float in bytes // 4 bytes
      cout << sizeof(double) << endl; // the size of double in bytes // 8 bytes
       cout << sizeof(char) << endl; // the size of char in bytes  // 1 byte
        cout << sizeof(bool) << endl; // the size of bool in bytes  // 1 byte
   
        int num =190 ;
         num = 191.5;
         cout<< sizeof(num) << endl; // the size of num in bytes  // 4 bytes
          cout << num << endl; // the value of num after assigning a float value to it // 191 because the decimal part will be truncated when assigning a float value to an int variable

          double dou = 22 ;
          dou =23.4;
          cout << sizeof(dou) << endl; // the size of dou in bytes  // 8 bytes
           cout << dou << endl; // the value of dou after assigning a float value to it // 23.4 because double can store decimal values without truncation
           float fl =  10.5 + 9.5; // here the compiler work with this number as double because the default type for floating point numbers is double
           float fl =  10.5f + 9.5f; // here we tell the compiler that this number is a float by adding f at the end of the number
           cout << sizeof(fl) << endl; // the size of fl in bytes  // 4 bytes
            cout << fl << endl; // the value of fl after assigning a float value to it // 20 because the decimal part will be truncated when assigning a double value to a float variable

             return 0 ;
             auto mix = 9.5; // compiler will detect that mix is a double because the value assigned to it is a double
            auto mix = 9.5f; // float 
 */