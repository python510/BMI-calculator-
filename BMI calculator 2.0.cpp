//write a c program that accepts name,age,weight and height(s) from user then calculates the BMI,use nested. if/else statement to determine whether the person has underweight,normal BMI ,overweight and obes and provide simple medical advice 

#include<iostream>
#include<string>
using namespace std;
int main(){
	//declare the variables
	string name;
	int age ;
	float weight;
	float height;
	double BMI ;
	
	//get input from the user
	cout<<"please enter your name, age, weight and height :"<<endl;
	cin>>name>>age>>weight>>height;
	//calculate BMI
	BMI = weight/( height * height);
	//determine the state of their BMI 
	if(BMI < 18.5){
		cout<<"Hello, "<<name<<"you are "<<age<<" years old "<<endl;
		cout<<"Your BMI is " <<BMI<<",meaning you are underweight."<<endl;
		cout<<"kindly visit a professional for proper diagnosis !!";
			
	}
	else if(BMI>=18.5 && BMI <=25){
	
	}
	else if(BMI >= 26 && BMI <=29.9 ){
    	cout<<"Hello, "<<name<<"you are "<<age<<" years old "<<endl;
		cout<<"Your BMI is " <<BMI<<",meaning you are overweight."<<endl;
		cout<<"Work with a healthcare professional on heathy lifestyle plan ";
		
	}
else
    {
        cout << "Hello, " << name << " you are " << age << " years old " << endl;
        cout << "Your BMI is " << BMI << ", meaning you are suffering from obesity." << endl;
        cout << "kindly visit a professional for medical help !!";
    }
    return 0;
}


