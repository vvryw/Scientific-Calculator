#include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>
#include<windows.h>
using namespace std;

HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);

void colorText(int i){
	SetConsoleTextAttribute(h,i);
}

//Main Menu
void mainMenu(){
	system("color 0F");
	system("CLS");
	cout << setw(65) << "********************************\n";
	cout << setw(65) << "*                              *\n";
	cout << setw(65) << "*    SCIENTIFIC  CALCULATOR    *\n";
	cout << setw(65) << "*                              *\n";
	cout << setw(65) << "********************************\n";
	cout << setw(65) << "*                              *\n";
	cout << setw(33) << "*";
	colorText(1);
	cout << "    1. Quantity of Heat";
	colorText(15);
	cout << setw(8) << "*" << endl;
	cout << setw(65) << "*                              *\n";
	cout << setw(33) << "*";
	colorText(11);
	cout << "    2. Ohm's Law";
	colorText(15);
	cout << setw(15) << "*" << endl;
	cout << setw(65) << "*                              *\n";
	cout << setw(33) << "*";
	colorText(13);
	cout << "    3. Potential Energy";
	colorText(15);
	cout << setw(8) << "*" << endl;
	cout << setw(65) << "*                              *\n";
	cout << setw(33) << "*";
	colorText(12);
	cout << "    4. Pressure in liquid";
	colorText(15);
	cout << setw(6) << "*" << endl;
	cout << setw(65) << "*                              *\n";
	cout << setw(33) << "*";
	colorText(14);
	cout << "    5. Friction Force";
	colorText(15);
	cout << setw(10) << "*" << endl;
	cout << setw(65) << "*                              *\n";
	cout << setw(33) << "*";
	colorText(10);
	cout << "    6. Gravitational Force";
	colorText(15);
	cout << setw(5) << "*" << endl;
	cout << setw(65) << "*                              *\n";
	cout << setw(65) << "********************************\n";
	}



//Quantity of Heat Header
void quantityHeatLabel(){
	system("CLS");
	cout << setw(70) << "*****************************************\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*      QUANTITY OF HEAT CALCULATOR      *\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*****************************************\n";
}

//Ohm's Law Header
void ohmsLawLabel(){
	system("CLS");
	cout << setw(70) << "*****************************************\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*         OHM'S LAW CALCULATOR          *\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*****************************************\n";
}

//Potential Energy Header
void potentialEnergyLabel(){
	system("CLS");
	cout << setw(70) << "*****************************************\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*      POTENTIAL ENERGY CALCULATOR      *\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*****************************************\n";
}

//Pressure in liquid Header
void pressureInLiquidLabel(){
	system("CLS");
	cout << setw(70) << "*****************************************\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*     PRESSURE IN LIQUID CALCULATOR     *\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*****************************************\n";
}

//Friction Force Header
void gravitationalForceLabel(){
	system("CLS");
	cout << setw(70) << "*****************************************\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*     GRAVITATIONAL FORCE CALCULATOR    *\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*****************************************\n";
}

//Gravitational Force Header
void frictionForceLabel(){
	system("CLS");
	cout << setw(70) << "*****************************************\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*       FRICTION FORCE CALCULATOR       *\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*****************************************\n";
}


// Footer Thank you ><
void footerThankyou(){
	cout << setw(70) << "*****************************************\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*               THANK YOU               *\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*****************************************\n";
}


// Footer Thank you (In choice)
void footerThankyouChoice(){
	cout << setw(70) << " \n";
	cout << setw(70) << "*****************************************\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*  THANK YOU FOR USING THIS CALCULATOR  *\n";
	cout << setw(70) << "*                                       *\n";
	cout << setw(70) << "*****************************************\n";
}


// Footer Thank you in Main Menu
void footerThankyouMenu(){
	cout << " \n";
	cout << setw(65) << "********************************\n";
	cout << setw(65) << "*          THANK  YOU          *\n";
	cout << setw(65) << "********************************\n";
}


// Quantity of heat Formula
// Find quantity of heat
	float quantityOfHeat(float mass, float specificHeat, float changeInTemperature){
	return mass * specificHeat * changeInTemperature;}
	
 //Find mass
	float quantityOfHeatMass(float qB, float specificHeatB, float changeInTemperatureB){
	return qB / (specificHeatB * changeInTemperatureB);}
	
 //Find specific Heat
	float quantityOfHeatSpecificHeat(float qC, float massC, float changeInTemperatureC){
	return qC / (massC * changeInTemperatureC);}
	
 //Find change in temperature
	float quantityOfHeatchangeInTemperature(float qD, float massD, float specificHeatD){
	return qD / (massD * specificHeatD);}
	

// Ohm's Law Formula
 //Find voltage
	float ohmsLaw(float current, float resistance){
	return current * resistance;}
	
 //Find current
	float ohmsLawCurrent(float voltageB, float resistanceB){
	return voltageB / resistanceB;}
	
// Find resistance
	float ohmsLawResistance(float voltageC, float currentC){
	return voltageC / currentC;}
	


//Potential Energy Formula
 //Find potential energy
	float potentialEnergy(float mass2, float height2){
		float G = 9.80665;
	return mass2 * G * height2;}

 //Find mass
	float potentialEnergyMass(float potentialEnergyB, float height2B){
		float G = 9.80665;
	return potentialEnergyB / ( G * height2B );}

 //Find height
	float potentialEnergyHeight(float potentialEnergyC, float mass2C){
		float G = 9.80665;
	return potentialEnergyC / ( G * mass2C );}
	
	

// Pressure in Liquid
 //Find pressure in liquid
	float pressureInLiquid(float density, float height3){
		float G2 = 9.80665;
	return density * G2 * height3; }
	
 //Find density
	float pressureInLiquidDensity(float pressureB, float height3B){
		float G2B = 9.80665;
	return pressureB / (G2B * height3B);}
	
 //Find height
	float pressureInLiquidHeight(float pressureC, float densityC){
		float G2C = 9.80665;
	return pressureC / (G2C * densityC);}
	


// Friction force
 //Find friction force
	float friction(float mu, float n){
	return mu * n;}

 //Find coefficient
	float frictionCoefficient(float fB, float nB){
	return fB / nB;}

 //Find normal force
	float frictionNormalForce(float fC, float muC){
	return fC / muC;}



// Gravitational Force
 //Find gravitational Force
	float gravitationalForce(float m1, float m2, float r){
		float G3 = 9.80665;
	return G3 * (( m1 * m2) / pow(r,2));}
	
 //Find mass1
	float gravitationalForceMass1(float m2B, float rB, float gravitationalForceB){
		float G3B = 9.80665;
	return (1 / m2B) * pow(rB,2) * gravitationalForceB * (1 / G3B);}
	
 //Find mass2
	float gravitationalForceMass2(float m1C, float rC, float gravitationalForceC){
		float G3C = 9.80665;
	return (1 / m1C) * pow(rC,2) * gravitationalForceC * (1 / G3C);}
	
 //Find distance
	float gravitationalForceDistance(float m1D, float m2D, float gravitationalForceD){
		float G3D = 9.80665;
		float rD = m1D * m2D * G3D * (1 / gravitationalForceD);
	return pow(rD,0.5);}
	


//MAIN MENU
int main(){ 

//Declare option & choice
	char option1;
	char option2;
	char option3;
	char option4;
	char option5;
	char option6;
	char choice;
	bool ended = false;

//Menu Tab
do{
	mainMenu();
	cout << setw(50) << "    \n";
	cout << setw(57) << "Choice(X to exit): ";
	cin >> choice;

	switch(choice){	
	do{

//Quantity of heat
		case '1':
			
			system("CLS");
			colorText(241);
			cout << fixed;
			cout << setprecision(2); 
			quantityHeatLabel();
			cout << " \n";
			cout << "                             Find" << endl;
			cout << "                             1. Quantity of heat" << endl;
			cout << "                             2. Mass" << endl;
			cout << "                             3. Specific heat" << endl;
			cout << "                             4. Change in Temperature" << endl;
			cout << " \n";
			cout << setw(70) << "*****************************************\n";
			cout << " \n";
			cout << setw(66) << "( X to exit / R to return to menu )" << endl;
			cout << " \n";
			cout << setw(50) << "Choice: ";
			cin >> option1;
	
		//Choice 
			switch(option1){
			
			case '1' :
			
				system("CLS");
				colorText(241);
				float mass, specificHeat, changeInTemperature;
				cout << fixed;
				cout << setprecision(2);
				quantityHeatLabel();
				cout << " \n";
				
				cout << "                     Please enter: Mass / Specific Heat / Change in Temperature" << endl;
				cout << " \n";
				cout << "                             Mass: ";
				cin >> mass;
				cout << "                             Specific Heat: ";
				cin >> specificHeat;
				cout << "                             Change in Temperature: ";
				cin >> changeInTemperature;
				system("CLS");
				quantityHeatLabel();
				cout << " \n";
				cout << "                            INPUT" << endl;
				cout << " \n";
				cout << "                            Mass: " << setw(35)<< mass << endl;
				cout << "                            Specific Heat: " << setw(26)<< specificHeat << endl;
				cout << "                            Change in Temperature: " << setw(18)<< changeInTemperature << endl;
				cout << " \n";
				cout << setw(70) << "=========================================\n" << endl;
				cout << "                            OUTPUT" << endl;
				cout << " \n";
				cout << "                            Quantity of Heat: " << setw(23)<<quantityOfHeat(mass, specificHeat, changeInTemperature) << endl;
				cout << " \n";
				footerThankyou();
				colorText(240);
				cout << "\n                            Press any key to return to menu...";
				getch();
				break;
	
			case '2' :
					
				system("CLS");
				colorText(241);
				float qB, specificHeatB, changeInTemperatureB;
				cout << fixed;
				cout << setprecision(2);
				quantityHeatLabel();
				cout << " \n";
				cout << "               Please enter: Quantity of Heat / Specific Heat / Change in Temperature" << endl;
				cout << " \n";
				cout << "                             Quantity of Heat: ";
				cin >> qB;
				cout << "                             Specific Heat: ";
				cin >> specificHeatB;
				cout << "                             Change in Temperature: ";
				cin >> changeInTemperatureB;
				system("CLS");
				quantityHeatLabel();
				cout << " \n";
				cout << "                            INPUT" << endl;
				cout << " \n";
				cout << "                            Quantity of Heat: " << setw(23)<< qB << endl;
				cout << "                            Specific Heat: " << setw(26)<< specificHeatB << endl;
				cout << "                            Change in Temperature: " << setw(18)<< changeInTemperatureB << endl;
				cout << " \n";
				cout << setw(70) << "=========================================\n" << endl;
				cout << "                            OUTPUT" << endl;
				cout << " \n";
				cout << "                            Mass: " << setw(35)<<quantityOfHeatMass(qB, specificHeatB, changeInTemperatureB) << endl;
				cout << " \n";
				footerThankyou();
				colorText(240);
				cout << "\n                            Press any key to return to menu...";
				getch();
				break;
	
			case '3' :
			
				system("CLS");
				colorText(241);
				float qC, massC, changeInTemperatureC;
				cout << fixed;
				cout << setprecision(2);
				quantityHeatLabel();
				cout << " \n";
				cout << "                  Please enter: Quantity of Heat / Mass / Change in Temperature" << endl;
				cout << " \n";
				cout << "                             Quantity of Heat: ";
				cin >> qC;
				cout << "                             Mass: ";
				cin >> massC;
				cout << "                             Change in Temperature: ";
				cin >> changeInTemperatureC;
				system("CLS");
				quantityHeatLabel();
				cout << " \n";
				cout << "                            INPUT" << endl;
				cout << " \n";
				cout << "                            Quantity of Heat: " << setw(23)<< qC << endl;
				cout << "                            Mass: " << setw(35)<< massC << endl;
				cout << "                            Change in Temperature: " << setw(18)<< changeInTemperatureC << endl;
				cout << " \n";
				cout << setw(70) << "=========================================\n" << endl;
				cout << "                            OUTPUT" << endl;
				cout << " \n";
				cout << "                            Specific Heat: " << setw(26)<<quantityOfHeatSpecificHeat(qC, massC, changeInTemperatureC) << endl;
				cout << " \n";
				footerThankyou();
				colorText(240);
				cout << "\n                            Press any key to return to menu...";
				getch();
				break;
	
			case '4' :
			
				system("CLS");
				colorText(241);
				float qD, massD, specificHeatD;
				cout << fixed;
				cout << setprecision(2);
				quantityHeatLabel();
				cout << " \n";
				cout << "                      Please enter: Quantity of Heat / Mass / Specific Heat" << endl;
				cout << " \n";
				cout << "                             Quantity of Heat: ";
				cin >> qD;
				cout << "                             Mass: ";
				cin >> massD;
				cout << "                             Change in Temperature: ";
				cin >> specificHeatD;
				system("CLS");
				quantityHeatLabel();
				cout << " \n";
				cout << "                            INPUT" << endl;
				cout << " \n";
				cout << "                            Quantity of Heat: " << setw(23)<< qD << endl;
				cout << "                            Mass: " << setw(35)<< massD << endl;
				cout << "                            Specific Heat: " << setw(26)<< specificHeatD << endl;
				cout << " \n";
				cout << setw(70) << "=========================================\n" << endl;
				cout << "                            OUTPUT" << endl;
				cout << " \n";
				cout << "                            Change in Temperature: " << setw(18)<<quantityOfHeatchangeInTemperature(qD, massD, specificHeatD) << endl;
				cout << " \n";
				footerThankyou();
				colorText(240);
				cout << "\n                            Press any key to return to menu...";
				getch();
				break;
	}  //(choice in Quantity of Heat)
	
		//Option for Exit
			if(option1 == 'X' || option1 == 'x'){
				
				footerThankyouChoice();
				
			return false; }
			
		//Option for Return
			if(option1 == 'R' || option1 == 'r'){
			return main(); }
	
		}while(!ended);
	
	
		do{
			
	//Ohm's Law
			case '2':
				
				system("CLS");
				colorText(249);
				cout << fixed;
				cout << setprecision(2);
				ohmsLawLabel();
				cout << " \n";
				cout << "                             Find" << endl;
				cout << "                             1. Voltage" << endl;
				cout << "                             2. Current" << endl;
				cout << "                             3. Resistance" << endl;
				cout << " \n";
				cout << setw(70) << "*****************************************\n";
				cout << " \n";
				cout << setw(66) << "( X to exit / R to return to menu )" << endl;
				cout << " \n";
				cout << setw(50) << "Choice: ";
				cin >> option2;
	
		//Choice 
				switch(option2){
			
				case '1' :
					
					system("CLS");
					colorText(249);
					float current, resistance;
					cout << fixed;
					cout << setprecision(2);
					ohmsLawLabel();
					cout << " \n";
					cout << "                                Please enter: Current / Resistance" << endl;
					cout << " \n";
					cout << "                             Current: ";
					cin >> current;
					cout << "                             Resistance: ";
					cin >> resistance;
					system("CLS");
					ohmsLawLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Current: " << setw(32)<< current << endl;
					cout << "                            Resistance: " << setw(29)<< resistance << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Voltage: " << setw(32)<< ohmsLaw(current, resistance) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
		
				case '2' :
				
					system("CLS");
					colorText(249);
					float voltageB, resistanceB;
					cout << fixed;
					cout << setprecision(2);
					ohmsLawLabel();
					cout << " \n";
					cout << "                                Please enter: Voltage / Resistance" << endl;
					cout << " \n";
					cout << "                             Voltage: ";
					cin >> voltageB;
					cout << "                             Resistance: ";
					cin >> resistanceB;
					system("CLS");
					ohmsLawLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Voltage: " << setw(32)<< voltageB << endl;
					cout << "                            Resistance: " << setw(29)<< resistanceB << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Current: " << setw(32)<< ohmsLawCurrent(voltageB, resistanceB) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
	
				case '3' :
					
					system("CLS");
					colorText(249);
					float voltageC, currentC;
					cout << fixed;
					cout << setprecision(2);
					ohmsLawLabel();
					cout << " \n";
					cout << "                                Please enter: Voltage / Current" << endl;
					cout << " \n";
					cout << "                             Voltage: ";
					cin >> voltageC;
					cout << "                             Current: ";
					cin >> currentC;
					system("CLS");
					ohmsLawLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Voltage: " << setw(32)<< voltageC << endl;
					cout << "                            Current: " << setw(32)<< currentC << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Resistance: " << setw(29)<< ohmsLawResistance(voltageC, currentC) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
	}  //(choice in Ohm's Law)
	
			//Option for exit
				if(option2 == 'X' || option2 == 'x'){
					
					footerThankyouChoice();
					
				return false; }
				
			//Option for Return
				if(option2 == 'R' || option2 == 'r'){
				return main(); }
	
		}while(!ended);
		
		
			do{
	
	//Potential Energy
				case '3':
			
					system("CLS");
					colorText(245);
					cout << fixed;
					cout << setprecision(2);
					ohmsLawLabel();
					cout << " \n";
					cout << "                             Find" << endl;
					cout << "                             1. Potential Energy" << endl;
					cout << "                             2. Mass" << endl;
					cout << "                             3. Height" << endl;
					cout << " \n";
					cout << setw(70) << "*****************************************\n";
					cout << " \n";
					cout << setw(66) << "( X to exit / R to return to menu )" << endl;
					cout << " \n";
					cout << setw(50) << "Choice: ";
					cin >> option3;
	
		//Choice 
					switch(option3){
			
					case '1' :
				
						system("CLS");
						colorText(245);
						float mass2, G, height2;
						cout << fixed;
						cout << setprecision(2);
						potentialEnergyLabel();
						cout << " \n";
						
						cout << "                                  Please enter : Mass / Height" << endl;
						cout << " \n";
						cout << "                             Mass(kg): ";
						cin >> mass2;
						cout << "                             Height(m): ";
						cin >> height2;
						system("CLS");
						potentialEnergyLabel();
						cout << " \n";
						cout << "                            INPUT" << endl;
						cout << " \n";
						cout << "                            Mass(kg): " << setw(31) << mass2 << endl;
						cout << "                            Height(m): " << setw(30) << height2 << endl;
						cout << " \n";
						cout << setw(70) << "=========================================\n" << endl;
						cout << "                            OUTPUT" << endl;
						cout << " \n";
						cout << "                            Potential Energy(J): " << setw(20) << potentialEnergy(mass2, height2) << endl;
						cout << " \n";
						footerThankyou();
						colorText(240);
						cout << "\n                            Press any key to return to menu...";
						getch();
						break;
	
					case '2' :
				
						system("CLS");
						colorText(245);
						float potentialEnergyB, height2B;
						cout << fixed;
						cout << setprecision(2);
						potentialEnergyLabel();
						cout << " \n";
						cout << "                             Please enter : Potential Energy / Height" << endl;
						cout << " \n";
						cout << "                             Potential Energy(J): ";
						cin >> potentialEnergyB;
						cout << "                             Height(m): ";
						cin >> height2B;
						system("CLS");
						potentialEnergyLabel();
						cout << " \n";
						cout << "                            INPUT" << endl;
						cout << " \n";
						cout << "                            Potential Energy(J): " << setw(20) << potentialEnergyB << endl;
						cout << "                            Height(m): " << setw(30) << height2B << endl;
						cout << " \n";
						cout << setw(70) << "=========================================\n" << endl;
						cout << "                            OUTPUT" << endl;
						cout << " \n";
						cout << "                            Mass(kg): " << setw(31) << potentialEnergyMass(potentialEnergyB, height2B) << endl; 
						cout << " \n";
						footerThankyou();
						colorText(240);
						cout << "\n                            Press any key to return to menu...";
						getch();
						break;
	
					case '3' :
				
						system("CLS");
						colorText(245);
						float potentialEnergyC, mass2C;
						cout << fixed;
						cout << setprecision(2);
						potentialEnergyLabel();
						cout << " \n";
						cout << "                             Please enter : Potential Energy / Mass" << endl;
						cout << " \n";
						cout << "                             Potential Energy(J): ";
						cin >> potentialEnergyC;
						cout << "                             Mass(kg): ";
						cin >> mass2C;
						system("CLS");
						potentialEnergyLabel();
						cout << " \n";
						cout << "                            INPUT" << endl;
						cout << " \n";
						cout << "                            Potential Energy(J): " << setw(20) << potentialEnergyC << endl;
						cout << "                            Mass(kg): " << setw(31) << mass2C << endl;
						cout << " \n";
						cout << setw(70) << "=========================================\n" << endl;
						cout << "                            OUTPUT" << endl;
						cout << " \n";
						cout << "                            Height(m): " << setw(30) << potentialEnergyHeight(potentialEnergyC, mass2C) << endl; 
						cout << " \n";
						footerThankyou();
						colorText(240);
						cout << "\n                            Press any key to return to menu...";
						getch();
						break;
	}  //(choice in Potential energy)
	
			//Option for Exit
				if(option3 == 'X' || option3 == 'x'){
					
					footerThankyouChoice();
					
				return false; }
				
			//Option for Return
				if(option3 == 'R' || option3 == 'r'){
				return main(); }
		
				}while(!ended);
				
		
		do{
			
	//Pressure in liquid
			case '4':
			
				system("CLS");
				colorText(244);
				cout << fixed;
				cout << setprecision(2);
				pressureInLiquidLabel();
				cout << " \n";
				cout << "                             Find" << endl;
				cout << "                             1. Pressure in liquid" << endl;
				cout << "                             2. Density of liquid" << endl;
				cout << "                             3. Height" << endl;
				cout << " \n";
				cout << setw(70) << "*****************************************\n";
				cout << " \n";
				cout << setw(66) << "( X to exit / R to return to menu )" << endl;
				cout << " \n";
				cout << setw(50) << "Choice: ";
				cin >> option4;
	
		//Choice 
	
				switch(option4){
			
					case '1':
							
						system("CLS");
						colorText(244);
						float density, G2, height3;
						cout << fixed;
						cout << setprecision(2);
						pressureInLiquidLabel();
						cout << " \n";
						cout << "                             Please enter: Density of liquid / Height" << endl;
						cout << " \n";
						cout << "                             Density of liquid(kg/m3): ";
						cin >> density;
						cout << "                             Height(m): ";
						cin >> height3;
						system("CLS");
						pressureInLiquidLabel();
						cout << " \n";
						cout << "                            INPUT" << endl;
						cout << " \n";
						cout << "                            Density of liquid(kg/m3): " << setw(15)<< density << endl;
						cout << "                            Height(m): " << setw(30)<< height3 << endl;
						cout << " \n";
						cout << setw(70) << "=========================================\n" << endl;
						cout << "                            OUTPUT" << endl;
						cout << " \n";
						cout << "                            Pressure in Liquid(N/m2): " << setw(15)<< pressureInLiquid(density, height3) << endl;
						cout << " \n";
						footerThankyou();
						colorText(240);
						cout << "\n                            Press any key to return to menu...";
						getch();
						break;
		
				case '2':
				
					system("CLS");
					colorText(244);
					float pressureB, G2B, height3B;
					cout << fixed;
					cout << setprecision(2);
					pressureInLiquidLabel();
					cout << " \n";
					cout << "                             Please enter: Pressure of liquid / Height" << endl;
					cout << " \n";
					cout << "                             Pressure of liquid(N/m2): ";
					cin >> pressureB;
					cout << "                             Height(m): ";
					cin >> height3B;
					system("CLS");
					pressureInLiquidLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Pressure of liquid(N/m2): " << setw(15)<< pressureB << endl;
					cout << "                            Height(m): " << setw(30)<< height3B << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Density of Liquid(kg/m3): " << setw(15)<< pressureInLiquidDensity(pressureB, height3B) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
	
				case '3':
						
					system("CLS");
					colorText(244);
					float densityC, G2C, pressureC;
					cout << fixed;
					cout << setprecision(2);
					pressureInLiquidLabel();
					cout << " \n";
					cout << "                             Please enter: Pressure of liquid / Density of liquid" << endl;
					cout << " \n";
					cout << "                             Pressure of liquid(N/m2): ";
					cin >> pressureC;
					cout << "                             Density of liquid(kg/m3): ";
					cin >> densityC;
					system("CLS");
					pressureInLiquidLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Pressure of liquid(N/m2): " << setw(15)<< pressureC << endl;
					cout << "                            Density of liquid(kg/m3): " << setw(15)<< densityC << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Height(m): " << setw(30)<< pressureInLiquidHeight(pressureC, densityC) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
	}  //(choice in Pressure in Liquid)
	
			//Option for Exit
				if(option4 == 'X' || option4 == 'x'){
					
					footerThankyouChoice();
					
				return false; }
		
			//Option for Return		
				if(option4 == 'R' || option4 == 'r'){
				return main(); }
	
		}while(!ended);	
			
		
		do{
	
	//Friction Force		
			case '5':
			
				system("CLS");
				colorText(246);
				cout << fixed;
				cout << setprecision(2);
				frictionForceLabel();
				cout << " \n";
				cout << "                             Find" << endl;
				cout << "                             1. Friction Force" << endl;
				cout << "                             2. Coefficient of Kinetic Friction" << endl;
				cout << "                             3. Normal Force" << endl;
				cout << " \n";
				cout << setw(70) << "*****************************************\n";
				cout << " \n";
				cout << setw(66) << "( X to exit / R to return to menu )" << endl;
				cout << " \n";
				cout << setw(50) << "Choice: ";
				cin >> option5;	
	
		//Choice 
		
				switch(option5){
			
				case '1':
					
					system("CLS");
					colorText(246);
					float mu, n;
					cout << fixed;
					cout << setprecision(2);
					frictionForceLabel();
					cout << " \n";
					cout << "                   Please enter: Coefficient of Kinetic Friction / Normal Force" << endl;
					cout << " \n";
					cout << "                             Coefficient of kinetic friction: ";
					cin >> mu;
					cout << "                             Normal Force(N): ";
					cin >> n;
					system("CLS");
					frictionForceLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Coefficient of Kinetic Friction:" << setw(9)<< mu << endl;
					cout << "                            Normal Force(N): " << setw(24)<< n << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Friction Force(N): " << setw(22)<< friction(mu, n) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
		
				case '2':
						
					system("CLS");
					colorText(246);
					float fB, nB;
					cout << fixed;
					cout << setprecision(2);
					frictionForceLabel();
					cout << " \n";
					cout << "                           Please enter: Friction Force / Normal Force" << endl;
					cout << " \n";
					cout << "                             Friction Force(N): ";
					cin >> fB;
					cout << "                             Normal Force(N): ";
					cin >> nB;
					system("CLS");
					frictionForceLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Friction Force(N): " << setw(22)<< fB << endl;
					cout << "                            Normal Force(N): " << setw(24)<< nB << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Coefficient of Kinetic Friction: " << setw(8)<< frictionCoefficient(fB, nB) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
	
				case '3':
				
					system("CLS");
					colorText(246);
					float fC, muC;
					cout << fixed;
					cout << setprecision(2);
					frictionForceLabel();
					cout << " \n";
					cout << "                   Please enter: Friction Force / Coefficient of Kinetic Friction" << endl;
					cout << " \n";
					cout << "                             Friction Force(N): ";
					cin >> fC;
					cout << "                             Coefficient of Kinetic Friction: ";
					cin >> muC;
					system("CLS");
					frictionForceLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Friction force(N): " << setw(22)<< fC << endl;
					cout << "                            Coefficient of Kinetic Friction: " << setw(8) << muC << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Normal Force(N): " << setw(24)<< frictionNormalForce(fC, muC) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
	}  //(choice in Friction Force)
	
			//Option for Exit
				if(option5 == 'X' || option5 == 'x'){
					
					footerThankyouChoice();
					
				return false; }
				
			//Option for Return
				if(option5 == 'R' || option5 == 'r'){
				return main(); }
	
			}while(choice!= 'X' && choice != 'x');	
		
	
		do{
	
	//Gravitational Force		
			case '6':
					
				system("CLS");
				colorText(242);
				cout << fixed;
				cout << setprecision(2);
				gravitationalForceLabel();
				cout << " \n";
				cout << "                             Find" << endl;
				cout << "                             1. Gravitational Force" << endl;
				cout << "                             2. Mass1" << endl;
				cout << "                             3. Mass2" << endl;
				cout << "                             4. Distance" << endl;
				cout << " \n";
				cout << setw(70) << "*****************************************\n";
				cout << " \n";
				cout << setw(66) << "( X to exit / R to return to menu )" << endl;
				cout << " \n";
				cout << setw(50) << "Choice: ";
				cin >> option6;
	
		//Choice 
		
				switch(option6){
		
				case '1' :
			
					system("CLS");
					colorText(242);
					float m1, m2, r;
					cout << fixed;
					cout << setprecision(2);
					gravitationalForceLabel();
					cout << " \n";
					cout << "                             Please enter: Mass1 / Mass2 / Distance" << endl;
					cout << " \n";
					cout << "                             Mass1(kg): ";
					cin >> m1;
					cout << "                             Mass2(kg): ";
					cin >> m2;
					cout << "                             Distance(m): ";
					cin >> r;
					system("CLS");
					gravitationalForceLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Mass1(kg): " << setw(30) << m1 << endl;
					cout << "                            Mass2(kg): " << setw(30) << m2 << endl;
					cout << "                            Distance(m): " << setw(28) << r << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Gravitational Force(Nm2/kg2): " << setw(11)<< gravitationalForce(m1 ,m2 ,r ) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
	
				case '2' :
				
					system("CLS");
					colorText(242);
					float m2B, gravitationalForceB, rB;
					cout << fixed;
					cout << setprecision(2);
					gravitationalForceLabel();
					cout << " \n";
					cout << "                       Please enter: Mass2 / Gravitational Force / Distance" << endl;
					cout << " \n";
					cout << "                             Mass2(kg): ";
					cin >> m2B;
					cout << "                             Gravitational Force(Nm2/kg2): ";
					cin >> gravitationalForceB;
					cout << "                             Distance(m): ";
					cin >> rB;
					system("CLS");
					gravitationalForceLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Mass2(kg): " << setw(30) << m2B << endl;
					cout << "                            Gravitational Force(Nm2/kg2): " << setw(11) << gravitationalForceB << endl;
					cout << "                            Distance(m): " << setw(28) << rB << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Mass1(kg): " << setw(30)<< gravitationalForceMass1(m2B, rB, gravitationalForceB) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
	
				case '3' :
						
					system("CLS");
					colorText(242);
					float m1C, gravitationalForceC, rC;
					cout << fixed;
					cout << setprecision(2);
					gravitationalForceLabel();
					cout << " \n";
					cout << "                       Please enter: Mass1 / Gravitational Force / Distance" << endl;
					cout << " \n";
					cout << "                             Mass1(kg): ";
					cin >> m1C;
					cout << "                             Gravitational Force(Nm2/kg2): ";
					cin >> gravitationalForceC;
					cout << "                             Distance(m): ";
					cin >> rC;
					system("CLS");
					gravitationalForceLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Mass1(kg): " << setw(30) << m1C << endl;
					cout << "                            Gravitational Force(Nm2/kg2): " << setw(11) << gravitationalForceC << endl;
					cout << "                            Distance(m): " << setw(28) << rC << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Mass2(kg): " << setw(30)<< gravitationalForceMass2(m1C, rC, gravitationalForceC) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
	
				case '4' :
				
					system("CLS");
					colorText(242);
					float m1D, m2D, gravitationalForceD;
					cout << fixed;
					cout << setprecision(2);
					gravitationalForceLabel();
					cout << " \n";
					cout << "                       Please enter: Mass1 / Mass2 / Gravitational Force" << endl;
					cout << " \n";
					cout << "                             Mass1(kg): ";
					cin >> m1D;
					cout << "                             Mass2(kg): ";
					cin >> m2D;
					cout << "                             Gravitational Force(Nm2/kg2): ";
					cin >> gravitationalForceD;
					system("CLS");
					gravitationalForceLabel();
					cout << " \n";
					cout << "                            INPUT" << endl;
					cout << " \n";
					cout << "                            Mass1(kg): " << setw(30) << m1D << endl;
					cout << "                            Mass2(kg): " << setw(30) << m2D << endl;
					cout << "                            Gravitational Force(Nm2/kg2): " << setw(11) << gravitationalForceD << endl;
					cout << " \n";
					cout << setw(70) << "=========================================\n" << endl;
					cout << "                            OUTPUT" << endl;
					cout << " \n";
					cout << "                            Distance(m): " << setw(28)<< gravitationalForceDistance(m1D , m2D, gravitationalForceD) << endl;
					cout << " \n";
					footerThankyou();
					colorText(240);
					cout << "\n                            Press any key to return to menu...";
					getch();
					break;
	} //(choice in Gravitational Force)
	
			//Option for Exit
				if(option6 == 'X' || option6 == 'x'){
					
					footerThankyouChoice();
					
				return false; }
				
			//Option for Return
				if(option6 == 'R' || option6 == 'r'){
				return main(); }
		
		}while(!ended); 
		
	
	} //(choice in main menu tab)


}while(choice!= 'X' && choice != 'x'); 


footerThankyouMenu();


return 0;
} 
