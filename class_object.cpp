// #include <iostream>
// using namespace std;
// class class_name{
//     //properties
// }
// int main(){
//     //creation of object
//     class_name object_name;
// }
// #include <iostream>
// using namespace std;
// class car {
//     public:
//     string color;
//     void drive(){
//         cout<<"let's gooo!!!!";
//     }
// };
// int main(){
//     car mycar;
//     mycar.color="red";
//    cout<<mycar.color;
//     mycar.drive();    
// }
// #include <iostream>
// using namespace std; 
// stu is a class name it contains property and methods
// class stu{
//     public:
// property which name , rollNo 
//     string name;
//     int rollNo;
// };
// int main(){
//create a object of student name 
//     stu student;// create a object
//     student.name="sonu";//set name to sonu 
//     student.rollNo=51; //set rollNo to 51
//calling 
//     cout<<"student name is : " <<student.name<<endl;//calling obj
//     cout<<"student rollNo is : " <<student.rollNo;  //calliing obj
// }
#include <iostream>
using namespace std;
class stu{
    public:
    string name;
    int rollNo;
};
int main(){
    stu student;
   student.name="sonu";
   student.rollNo=51;
   cout<<"student name is :"<<student.name<<endl;
   cout<<"student name is :"<<student.rollNo<<endl;
}