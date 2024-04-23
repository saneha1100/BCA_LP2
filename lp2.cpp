//1. Referring to the code snippet, you have to write a code to multiply two matrices by using operator overloading, where matrix of object-1 should be multiplied with matrix of object-2 and store the product in object-3. 

  

#include <iostream> 

 using namespace std; 

 #define rows 3 

 #define cols 3 

 class demo( 

 private: 

 intA[rows][cols]; 

 public: 

voidget_data(){ 

 for (int i=0;i<rows;i++) 

 { 

 for(int j=0;j<cols;j++) 

 { 

 cin>>A[i][j]; 

 }  

} 

 } 

 void show_data(){ 

 for(int i=0;i<rows;i++) 

{ 

 for(int j=0;j<cols;j++) 

 { 

 cout<<A[i][j]<<"\t"; 

} 

 cout<<endl; 

 } 

 } 

 demo operator +(demo obj){ 

 demo temp; 

 for(int i=0;i<rows;i++) 

 { 

 for(int j=0;j<cols;j++) 

 ( 

 temp.A[i][j]=A[i][j]+obj.A[i][j]: 

 } 

} 

 retumtemp, 

 } 

 ); 

 int main(){ 

 demo d1,d2,d3; 

 cout<<"Enter data for first matrix.."<<endl; 

 d1.get_data(); 

 cout<<"Enter data for second matrix.."<<endl; 

 d2.get_data(); 

 cout<<"Firstmatrix.."<<endl; 

 d1.show_data(); 

 cout<<"second matrix.."<<endl; 

 d2.show_data(); 

 d3=d1+d2; 

 cout<<"third matrix.."<<endl; 

d3.show_data(); 

} 

 

#~   

#include <iostream>  

using namespace std;  

#define rows 3  

#define cols 3  

 class demo{ 

private:  

    int A[rows][cols];  

 public:  

    void get_data(){  

        for (int i=0; i<rows; i++){  

            for(int j=0; j<cols; j++){  

                cin >> A[i][j];  

            }  

        }  

    }  

   void show_data(){  

        for(int i=0; i<rows; i++){  

            for(int j=0; j<cols; j++){  

                cout << A[i][j] << "\t";  

            }  

            cout << endl;  

        }  

    }  

  

    demo operator *(demo obj){ 

        demo temp; 

        for(int i=0; i<rows; i++){  

            for(int j=0; j<cols; j++){  

                temp.A[i][j] = 0; 

                for(int k=0; k<cols; k++){ 

                    temp.A[i][j] += A[i][k] * obj.A[k][j]; 

                } 

            }  

        } 

        return temp;  

    }  

};  

 int main(){  

    demo d1, d2, d3;  

     cout << "Enter data for first matrix:" << endl;  

    d1.get_data();  

    cout << "Enter data for second matrix:" << endl;  

    d2.get_data();  

    cout << "First matrix:" << endl;  

    d1.show_data();  

   cout << "Second matrix:" << endl;  

    d2.show_data();  

  

    d3 = d1 * d2;  

   cout << "Result of matrix multiplication:" << endl;  

    d3.show_data();  

   return 0;  

} 

 

//2. Write aC++code, where Transport class is derived from Student class, create object of the Transport class to display the complete details of the students 

 Student 

void get() 

 string Name 

 int Age 

 string City 

 void display() 

 int academic fee 

 Transport 

 Introute 

Transport() 

 intbus fee 

 void show() 

 

#~  

  #include <iostream> 

#include <string> 

using namespace std; 

  

class Student { 

public: 

    string Name; 

    int Age; 

    string City; 

    int academicFee; 

  

    void get() { 

        cout << "Enter student name: "; 

        cin >> Name; 

        cout << "Enter student age: "; 

        cin >> Age; 

        cout << "Enter student city: "; 

        cin >> City; 

        cout << "Enter academic fee: "; 

        cin >> academicFee; 

    } 

  

    void display() { 

        cout << "Student Details:" << endl; 

        cout << "Name: " << Name << endl; 

        cout << "Age: " << Age << endl; 

        cout << "City: " << City << endl; 

        cout << "Academic Fee: $" << academicFee << endl; 

    } 

}; 

  

class Transport : public Student { 

public: 

    int route; 

    int busFee; 

  

    Transport() { 

        cout << "Enter transport route: "; 

        cin >> route; 

        cout << "Enter bus fee: "; 

        cin >> busFee; 

    } 

  

    void show() { 

        display(); // Calling the display function of the base class 

        cout << "Transport Details:" << endl; 

        cout << "Route: " << route << endl; 

        cout << "Bus Fee: $" << busFee << endl; 

    } 

}; 

  

int main() { 

    Transport studentTransport; 

    studentTransport.get(); 

    cout << endl; 

    studentTransport.show(); 

    return 0; 

} 

 

//3. Create a class Test which contains three member variables (all of integer types), two member functions get_data() and show_data(). Create three objects of the class to invoke the member functions where get_data() would be invoked by passing only one argument and the same function would be called by object-2 and object-3 by passing two and three arguments respectively. Display the values of all the objects through show_data(). 

 

#~  

 #include <iostream> 

using namespace std; 

  

class Test { 

private: 

    int var1, var2, var3; 

  

public: 

    void get_data(int a) { 

        var1 = a; 

    } 

  

    void get_data(int a, int b) { 

        var1 = a; 

        var2 = b; 

    } 

  

    void get_data(int a, int b, int c) { 

        var1 = a; 

        var2 = b; 

        var3 = c; 

    } 

  

    void show_data() { 

        cout << "Values: " << var1 << " " << var2 << " " << var3 << endl; 

    } 

}; 

  

int main() { 

    Test obj1, obj2, obj3; 

  

    obj1.get_data(10); 

    obj2.get_data(20, 30); 

    obj3.get_data(40, 50, 60); 

  

    cout << "Object 1: "; 

    obj1.show_data(); 

  

    cout << "Object 2: "; 

    obj2.show_data(); 

  

    cout << "Object 3: "; 

    obj3.show_data(); 

  

    return 0; 

} 

 

//4. Createa class BCA_OOPSto: 

  

//a. Initialize the member variables through default constructor and parameterized constructor 

  

b. Use this pointer atleast once inside member function to assign the values to member 

  

variables c. Display the values of member variables through a function whichis not a member of the class 

  

d. Copythedata of an object into another object 

  

e. Decrement the values of member variables by 2 if it contains a value between 0 to 10and decrement the value by 5 if in case the value is more than 10 

 

#~ 

#include <iostream> 

using namespace std; 

  

class BCA_OOPS { 

private: 

    int var1, var2; 

  

public: 

    BCA_OOPS() { 

        var1 = 0; 

        var2 = 0; 

    } 

  

    BCA_OOPS(int a, int b) { 

        var1 = a; 

        var2 = b; 

    } 

  

    void assignValues(int a, int b) { 

        this->var1 = a; 

        this->var2 = b; 

    } 

  

    void displayValues() { 

        cout << "Values: " << var1 << " " << var2 << endl; 

    } 

  

    void copyData(const BCA_OOPS& obj) { 

        this->var1 = obj.var1; 

        this->var2 = obj.var2; 

    } 

  

    void decrementValues() { 

        if (var1 >= 0 && var1 <= 10) { 

            var1 -= 2; 

        } else if (var1 > 10) { 

            var1 -= 5; 

        } 

  

        if (var2 >= 0 && var2 <= 10) { 

            var2 -= 2; 

        } else if (var2 > 10) { 

            var2 -= 5; 

        } 

    } 

}; 

  

int main() { 

    BCA_OOPS obj1; // Default constructor 

    obj1.displayValues(); 

  

    BCA_OOPS obj2(15, 5); // Parameterized constructor 

    obj2.displayValues(); 

  

    obj1.assignValues(8, 3); 

    obj1.displayValues(); 

  

    obj2.copyData(obj1); 

    obj2.displayValues(); 

  

    obj2.decrementValues(); 

    obj2.displayValues(); 

  

    return 0; 

}
