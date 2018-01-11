#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main() {

	string line;
	signed long long next_operation = 0;
	signed long long suma = 0;
	signed long long iterator = 0;
	signed long long new_value = 0;
	ifstream myfile ("Intest1.txt");
	ofstream outfile ("out1.txt");
		
	if (myfile.is_open()){
		
		while (getline (myfile, line)){
			
			if (iterator % 2 == 0) {
				new_value = stoi (line);
				if (next_operation == 0)
					suma = suma + new_value;
				else if (next_operation == 1)
					suma = suma - new_value;
				else if (next_operation == 2){
					outfile << suma << endl;
					suma = new_value;
				}
				else if (next_operation == 3){
					outfile << suma << endl;
					suma = 0;
					break;
				}
				else{
					suma = stoi (line);
				}
			}
			else{
				if (line[0] == '+'){
					next_operation = 0;
				}
				else if (line[0] == '-'){
					next_operation = 1;
				}
				else if (line[0] == '=' && line[1] == '='){
					next_operation = 3;
					outfile << suma << endl;
				}
				else if (line[0] == '='){
					next_operation = 2;
				}
			}
			iterator++;
		}
	}
	myfile.close();
	outfile.close();
}