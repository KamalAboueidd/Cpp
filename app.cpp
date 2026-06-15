#include <iostream> // preprocessor statement , process before complie
using namespace std; // to avoid writing std:: before every standard library function


 


  


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
/*
    primitives data types
     char ===> charachter 
     added Inside Single code for information Interchange.
     A Way of nRepresenting Charaters As Numbers

     ....Search For Type Casting
     ....Create App toConvert ASCII to Character
     Create App To Convert Charchter To ASCII

     // code 
      
      char d = 'D'; // must be in single quotes because it's a charachter
    cout << d << endl; // print the value of d which is 'D' and end line
     cout << int(d) << endl; // print the ASCII value of d which is 68 and end line
      // int('A') ==> give you the ascii value of the A 'a' diffrent from 'A' because the ASCII value of 'a' is 97 and the ASCII value of 'A' is 65
      int ASCII_VALUE =97;
       cout << char(ASCII_VALUE) << endl; // print the charachter that corresponds to the ASCII value of 97 which is 'a' and end line
       
   cout << "Please insert the charachter to convert it to ASCII value : " << endl ;
    char ch;
    cin >> ch ;
     cout<<"the ASCII value of " << ch <<" is equall" << int(ch) << endl; // print the ASCII value of the charachter that user input and end line
     cout<< string(20, '*') << endl; // print 20 stars and end line
     cout << "Please insert the ASCII value to convert it to charachter : " << endl ;
      int ascii_value;
      cin >> ascii_value ;
      cout << " the charachter that corresponds to the ASCII value of " << ascii_value << " is equall " << char(ascii_value) << endl; // print the charachter that corresponds to the ASCII value that user input and end line
 
       return 0 ;
*/

/*
  bool ==> boolean
  only two values true or false
  in case of true the value is 1 and in case of false the value is 0
  values in case senstive
  when we use bolean values 
    anything has on/off , yeas/no , true/ false
    test boolean in math
    test > and < 
    test data [100 , 0 , -100]

    void ==> valueless
     without values 

     // code 

         bool is_open = true ;
     cout << sizeof(is_open) << endl; // the size of is_open in bytes  // 1 byte
     cout << is_open + 1 << endl; // the value of is_open after adding 1 to it // 2 because true is 1 and false is 0
     bool test = 10 > 5 ; // the value of test is true because 10 is greater than 5
     cout << test << endl; // print the value of test which is true and end line
     bool test_two = -100;
     bool test_Three = 0;
     cout << test_two << endl; // print the value of test_two which is true because any non-zero value is considered true in boolean context 
     cout << test_Three << endl; 
     return 0 ;
void whithout_return() // function declaration
 {
  // Nothing to return 
    
 }
*/

/*
   modifiers and type alias
    modifiers 
     modify the length of data ==> see limites 
     signed [int  ,char ]
      ....store postive , negative integers and  0 
        int is signed By defualt
     unsigned [int ,char]
     .....store the postives only 
     
     short[int]
     ....Can Be short insted of short int 

     long[int ,double]
     ........store maximum value
     .....can be long insted of long int 


     type alias 
......using modifiers = type;
typedef unsigned long UL


  //code 

      signed int num_one = 1000 ; 
    signed int num_two = -1000;

    unsigned  int num_three = 1001 ;
    unsigned int num_four =  -1002 ;  // will cause undefined behavior
     
     // if i want use a litle space in memory i can use short int instead of int
   short int num_five = 1003 ;  // cann be write as short num_five = 1003 ;
    cout<<sizeof(num_five)<<endl; // 2 bytes
     
    // if you wnat to store larg numbers , use long
     long int num_six = 8000000 ; // can be write as long num_six = 1004 ;
     cout<< num_six << "\n";
     cout << sizeof(num_six) << endl ; // 4 bytes
     // if you want to be more accurrate, and calc high precison values with double value , use long double 
     long double num_seven = 1005.12345678901234567890L ;
     double num_eight = 1005.12345678901234567890;
     cout<< num_seven << "\n";
     cout<<num_eight << "\n";
 /////////////////////////////
   typedef unsigned long UL; /// TYPE ALIAS (اسم مستعار )

 UL number = 1000; // == UNSIGNED LONG number = 1000;
 cout << number << endl;

 // new way to create type alias in c++11 and above
  using ULL = unsigned long; // == typedef unsigned long UL;

  ULL number2 = 200;
  cout<<number2 << endl;



*/

/*
  type conversion 
     convert data of one type to another type

     --Implicit conversion 
-------------Conversion is Done Autmatically by the compiler 

     ---- Explicit conversion
  -----------conversion is done by programmer  , using type casting or function li


     ---data loss
      ----when larger type is converted to smaller type

       // code 

        int num1 = 20 ;
    char ch = 'C';
     cout << num1 + ch <<endl;

    //  cout <<int(ch) << endl;// 67
     
    cout <<"\n====================\n";
    cout <<"====================\n";
     double b = 20.5;
     int num3 = 20;
     cout<< b + num3 << endl;
     cout << sizeof(b+num3) << endl;

    cout <<"====================\n";
    cout <<"====================\n";
  double c = 20.5;
     int num4 = 20;
     cout<< (int)c + num4 << endl;  // type casting
     cout<< int(c) + num4 << endl;  // type casting
     cout << sizeof((int)c+num4) << endl;
     cout << sizeof(int(c)+num4) << endl;
    cout <<"====================\n";
    cout <<"====================\n";
    


*/

/*
  arithmetic operators 
   + , - , * , / , % , ++ , -- 
   + addition
   - subtraction
   * multiplication
   / division
   % modulus ==> work with integers only , return the remainder of the division
   ++ increment
   -- decrement
*/

 /*
  Assignment operators : for assignning operations
   = , += , -= , *= , /= , %=  
   = assignment
   += addition assignment
   -= subtraction assignment
   *= multiplication assignment
   /= division assignment
   %= modulus assignment
 
*/
/*
  increament and decrement operators
   pre/post increment and decrement
*/

/*
comparison operators 
  == , != , > , < , >= , <= 
  == equal to
  != not equal to
  > greater than
  < less than
  >= greater than or equal to
  <= less than or equal to
*/
/*
logical operators 
  && , || , ! 
  && logical AND
  || logical OR
  ! logical NOT
*/
/*
 precedence of operators 
  1) () parentheses
  2) ++ , -- pre increment and decrement
  3) * , / , % multiplication , division and modulus
  4) + , - addition and subtraction
  5) == , != , > , < , >= , <= comparison operators
  6) && logical AND
  7) || logical OR
   in case of same precedence, the associativity is from left to right

   betwise operatots : 
      
   spaceship operators : 
*/
/*
  cotrol flow - if condition 
  syntax 
   if (condition is true) {
    // code to be executed if condition is true
   } else {
    // code to be executed if condition is false
         int age;
     cin >> age ;
      cout <<"Welcome \n";
       if(age  < 18)
       {
         cout << "beWare you are under age \n";
       }
       cout <<"See you \n"; 
  return 0 ; 
  
   }
*/
/*
   else if , else 
   //code 

    int age =18 ;
   const int points = 500 ;
   int Rank =4;
   if(age>=18){
     cout << "Welcome \n";
   }else if(points > 200){
    cout<<"Welcome Your points is Okay \n";
   }else if (Rank>=5){
     cout<<"Welcome Your Rank is Okay \n";
   }else{
     cout<<"Iam sorry \n";
   }
*/
/*
 Nested if Conditions

 //CODE 

  int age = 27;
   int points= 1500;
    if(age>=20)
    {
       cout<< "Welcome Your Age is Okay \n";
       if(points>=1000)
       {
         cout<<"Welcome Your VIP \n";
    }
  }

*/
/*
  ternary operator
   syntex 
   (condition is true) ? (code to be executed if condition is true) : (code to be executed if condition is false);

   // code 
     int age = 19;
   cout << (age >=18) ?  "Your Age is Accepted" : "Your Age is Not Accepted" ;
    // can asssign to variable
     string message =  (age >=18) ?  "Your Age is Accepted" : "Your Age is Not Accepted" ;
  return 0 ; 
*/

/*
 Nested ternary operator 
  syntex 
  (condition1) ? (code to be executed if condition1 is true) : (condition2) ? (code to be executed if condition2 is true) : (code to be executed if both conditions are false);

  // code 
    int age = 20;
int points = 900;
   cout << (age>=22 ? "Your age not accepted" : (points >=800 ? "Your points is accepted" : "Your points is not accepted")) ;
*/
/*
 4 traning  app
  ----even / odd Checker
      ---- code
                int num ;
     cin >> num;
      if(num % 2 ==0)
      cout << "The Numbe "<< num << "is Even \n";
      else
      cout << "The Numbe "<< num << "is odd \n";
      // with ternary
  cout <<( num % 2 == 0 ?"Even " :  "Odd ");
  ...........................................
  ------find Greatest Number
  .....code
            int a , b ,c ;
   cin >> a >>b >>c ;
     if(a > b && a > c){
       cout << a << " is the greatest number \n";
     }else if(b>a && b > c){
        cout << b << "is the greatest number \n";
     }else{
       cout<< c << "is the greatest number \n";
     }
     // with ternert
     string msg = (a > b && a > c) ? to_string(a) + " is the greatest number \n" : (b > a && b > c) ? to_string(b) + " is the greatest number \n" : to_string(c) + " is the greatest number \n";
     cout << msg;

     ......................................................
  ------------User Rank checker
              ....code 
                int Rank;
    cin >>Rank;
     if(Rank == 0)
     cout << "Your Rank is not valid \n";
      cin >> Rank;
      if(Rank>0 && Rank <= 500)
       cout << "Your Rank Not bad \n";
    else if(Rank>=501 && Rank <= 1000)
       cout << "Your Rank is Good \n";
       else
       cout<< "Your rank is good";
       return 0 ; 
  
  ---simple calculator
  ............code 
      int num1 , num2 ,op;
   cout << "Type number 1 \n";
   cin >> num1 ;
   
   cout << "Type number 2 \n";
   cin >> num2 ;
    cout << "choose operation \n";
  cout << "[1] + \n";
  cout << "[2] - \n";
  cout << "[3] * \n";
  cout << "[4] / \n";
   cin >>  op;
    if(op == 1)
       cout << "Result: " << num1 + num2 << "\n";
    else if(op == 2)
       cout << "Result: " << num1 - num2 << "\n";
    else if(op == 3)
       cout << "Result: " << num1 * num2 << "\n";
    else if(op == 4)
       cout << "Result: " << num1 / num2 << "\n";
    else
       cout << "Invalid operator" << "\n"; 


*/
/*
 switch 
 ........code 
  int day = 1;
  switch(day)
  {
     case 1 :
     case 2 :
        cout << "Open at 9:00 AM \n";
        break;
      case 3 :
        cout << "Open at 9:00 AM \n";
        break;
        default:
        cout << "Invalid day \n";
      }


*/
/*
 apps on switch
   /// 1 
    int code ;

   cout << "Enter yout code \n";
   cin >> code ;
    switch(code)
    {
       case 100:
       case 110:
       case 120:
        cout << "Congrats you  won iphone \n";
        break;
        case 200:
          cout << "congrats you  won ipad \n";
          break;
          case 300:
           cout << " congrats you  won macbook \n";
           break;
            default:
             cout << "Invalid code \n";
    }

    .................
    //app 2 )
        int price = 100;
   int discount =10;
   int years;
   cout<<"type the number of years in the company \n";
   cin >> years;
     switch(years)
     {
       case 1 : 
       discount= 20;
       break;
       case 2 : 
       discount= 30;
       break;
       case 3 : 
       discount= 40;
       break;
     }
     cout << "The price is " << price - discount << "\n";
    return 0;

}
     ......................
     //app 3 ) 
       int num1 , num2 ,op;
   cout << "Type number 1 \n";
   cin >> num1 ;
   
   cout << "Type number 2 \n";
   cin >> num2 ;
    cout << "choose operation \n";
  cout << "[1] + \n";
  cout << "[2] - \n";
  cout << "[3] * \n";
  cout << "[4] / \n";
   cin >>  op;
    switch(op)
    {
       case 1 :
        cout << "Result : " << num1 << "+" << num2 << " = " << num1 + num2 << "\n";
        break;
      case 2 :
        cout << "Result: "<< num1 << "-" << num2 << " = "<< num1 - num2 << "\n";
        break;
      case 3 :
        cout << "Result: "  << num1 << "*" << num2 << " = " << num1 * num2 << "\n";
        break;
      case 4 :
        cout << "Result: " << num1 << "/" << num2 << " = " << num1 / num2 << "\n";
        break;
      default:
        cout << "Invalid operator" << "\n"; 
    }
  
     
*/
/*
 Array : what is array ?
   collection of elements of the same type stored in contiguous memory locations
   referanced by index started from 0
   why we need array ?
    creating array syntex
    check array size
     create array without size

      //code 
         int nums[4] = {12 ,12, 13,14};
   cout << sizeof(nums); // 16
   cout << sizeof(int); // 2
  

   int rands[] ={12,12,12};   // valid
   int randss[]{12,12,12}; // valid  
*/

/*
  Access elemnts & memory location 

   .........code 
       int nums[]{100,200,900};
   cout << "First Element :" << nums[0] << "\n";
   cout << "last Element :" << nums[2] << "\n";
    // location
     cout <<"First Element Location : " <<&nums[0] << "\n";
     cout <<"Second Element Location : " <<&nums[1] << "\n";
     cout <<"Third Element Location : " <<&nums[2] << "\n";
*/
/*
 Arrays 
  declare empty array
  add elements to arrray 
   update array element 
    get len of array with sizeof 

    ............
    //code 
       int nums[4] ;
   nums[3] = 400 ;
   nums[2] = 500 ;
   nums[0] = 600 ;
   nums[1] = 200 ;
       cout << "Element 1 : " << nums[0] << "\n";
       cout << "Element 2 : " << nums[1] << "\n";
       cout << "Element 3 : " << nums[2] << "\n";
       cout << "Element 4 : " << nums[3] << "\n";
  return 0; 
  int anums[] = {100,209,300,400,500,600};
  cout << "The number of elements in the array is : " << sizeof(anums) / sizeof(anums[0]) << "\n"; 
*/
int main () 
{

}
