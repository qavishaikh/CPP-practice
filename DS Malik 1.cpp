#include <fstream>
//Add additional header files you use
using namespace std;
int main()
{
//Declare file stream variables such as the following
ifstream inData;
ofstream outData;
//Open the files
inData.open("prog.dat"); //open the input file
outData.open("prog.out"); //open the output file
//Code for data manipulation
//Close files
inData.close();
outData.close();
return 0;
}
