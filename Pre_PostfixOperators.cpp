#include <iostream>
#include <cmath>

int main() {

	int x = 3, y=70, result,result2;

	result =  x++ - ++y;  //x++ evaluate expression first then increment x (post increment)
												//++y increment y first then evaluate expression; (pre increment)
	
	result2 = ++y - x++; //++y increment y first then evaluate expression;
											//x++ evaluate expression first then increment x 
	
 

	//prints result of x++ - ++y 
	std::cout << "The first result for x++ - ++y is:" << result << std::endl;
	//prints result of ++y - x++
	std::cout << "The second result for ++y - x++ is:" << result2 << std::endl;

	//prints value of x (remember that it is incremented after the evaluation)
	std::cout << x << std::endl;
	//prints value of y (remember that it is incremented before the evaluation)
	std::cout << y << std::endl;

	/*this program does the following
		1. substract x - y=y+1 |  "get the value of x (x = 3) and increment the value of y (y = 71) then evaluate  x - y and assign the result to the result variable result = -68" 
	 
		2. increments y before the expression is evaluated  ++y = (y = y+1) the value of y changes before being subtracted from x
		3. increments x after the expression x-y is evaluated x++ x = x + 1 
		4. increments x and y by 2 (line 8 and 11 increments these variables so the value for each variable changes twice when the computer compiles those two lines)
	*/
	 

}