// With arguments and with return value : 
float Percentage(int x,int y); // Declaration of Function 
/*Code*/ int x; 
x = Percentage(80,95); // Calling Function 
 /*Code*/ 
float Percentage(int x,int y) 
{ 
	float perct; 
	perct = ((x+y)/200.0)*100.0; // Definition of Function 
	return perct;