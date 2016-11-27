#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
using namespace std;
bool DEBUG = false;

string remove_space(string input)
{
	string output;
	int i;
	for( i = 0; i < input.size(); i++ )
	{
		if ( input[i] != ' ' )
			output += input[i];
	}
	return output; 
	
}

string extract_vector_string(vector<string> input, int start, int end)
{
	if( start > end )
	{
		cout << "ERROR[vector_range]: start is greater than end" << endl;
		terminate();
	}
	
	int i;
	string output;
	
	for( i = start; i < end; i++ )
	{
		output += input[i];
	}
	
	return output;
}

string textify_operator(string input)
{
	string output;
	if( input == "+" )
		output = "plus";
	if( input == "-" )
		output = "minus";
	if( input == "*" )
		output = "times";
	if( input == "/" )
		output = "over";
	if( input == "%" )
		output = "mod";
	if( input == "=" )
		output = "equals to";
	if( input == "^" )
		output = "to the power of";
	if( input == "I" )
		output = "intergration of";
		
	return output;
}

bool operator_test(string input)
{
	if( input == "+" || input == "-" || input == "*" || input == "/" || input == "=" || input == "%" || input == "^" || input == "I" )
		return true;
	
	return false;
}

int main()
{
	string input, temp, operator_, input_i, output;
	bool previous_is_number = false; 
	int i;
	
	cout << "Please input your equation, I represents intergration" << endl;
	cin >> input;
	input = remove_space(input);
	
	vector<int> operator_position;
	vector<string> pool; // Whole formula separed by operators
	cout << input << endl;
	
	
	for( i = 0; i < input.size(); i++ )
	{
		if( operator_test(string(1,input[i])) )
		{
			operator_ = input[i];
			if( temp.size() > 0 )
			{
				pool.push_back(temp);
				temp = "";
			}
			
			pool.push_back( operator_ );
			previous_is_number = false;
		}
		else if( i != input.size() - 1 )
		{
			temp += input[i];
			previous_is_number = true;
		}
		else
		{
			temp += input[i];
			pool.push_back( temp );
		}
	}
	
	bool previous_is_operator = false;
	
	for ( i = 0; i < pool.size(); i++ )
	{
		if(DEBUG){
		if( i != pool.size() - 1 )
			cout << pool[i] << endl;
		else
			cout << pool[i];
		}
			
		if( previous_is_operator )
		{
			if( pool[i][0] == '+' || pool[i][0] == '-' || pool[i][0] == '*' || pool[i][0] == '/' || pool[i][0] == '=' )
			{
				previous_is_operator = false;
				cout << "WARNING: two or more consistant operators of " << pool[ i-1 ] << pool[i] << " in equation " << extract_vector_string(pool, 0, i-1) << " >>>>> " << extract_vector_string(pool, i-1, i+1 ) << " <<<<< " << extract_vector_string(pool, i+1, pool.size() ) << endl << endl;	
			}
			else
			{
				previous_is_operator = false;
			}
		}
		else if( pool[i][0] != '+' && pool[i][0] != '-' && pool[i][0] != '*' && pool[i][0] != '/' && pool[i][0] != '=' )
			previous_is_operator = false;
		else
			previous_is_operator = true;
			
		if( operator_test( pool[i] ) )
		{
			output += textify_operator(pool[i]) + " ";
		}
		else
		{
			output += pool[i] + " ";
		}
		//cout << output << endl;
	}
	cout << output << endl << endl;
	if(DEBUG)
		cout << endl << pool.size() << endl;
	
    return 0;
}
