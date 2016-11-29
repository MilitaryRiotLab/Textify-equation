#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;
bool DEBUG = false;
/*
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
*/
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

bool search_string(string input, char word)
{
	int i;
	for( i = 0; i < input.size(); i++ )
	{
		if( input[i] == word)
			return true;
	}
	return false;
}

bool operator_test(string input)
{
	if( input == "+" || input == "-" || input == "*" || input == "/" || input == "=" || input == "%" || input == "^" || input == "I" )
		return true;
	
	return false;
}

double string_to_double(string input)
{
	int i;
	for( i = 0; i < input.size(); i++ )
	{
		if( input[i] != '1' && input[i] != '2' && input[i] != '3' && input[i] != '4' && input[i] != '5' && input[i] != '6' && input[i] != '7' && input[i] != '8' && input[i] != '9' && input[i] != '0' &&  input[i] != '.')
		{
			cout << "ERROR: Input contains non number values" << endl;
			terminate();
		}
			
	}
	
	double output = atof(input.c_str());
	
	return output;
}

int string_to_int(string input)
{
	int output = atoi( input.c_str() );
	
	return output;
}

string x1(int x)
{
	if (x == 0) { return ""; }
	if (x == 1) { return "ONE "; }
	if (x == 2) { return "TWO "; }
	if (x == 3) { return "THERR "; }
	if (x == 4) { return "FOUR "; }
	if (x == 5) { return "FIVE "; }
	if (x == 6) { return "SIX "; }
	if (x == 7) { return "SEVEN "; }
	if (x == 8) { return "EIGHT "; }
	if (x == 9) { return "NINE "; }

}
string x2(int y)
{
	if (y == 10) { return " TEN "; }
	if (y == 11) { return " ELEVEN "; }
	if (y == 12) { return " TWELVE "; }
	if (y == 13) { return " THIRTEEN "; }
	if (y == 14) { return " FOURTEEN "; }
	if (y == 15) { return " FIFTEEN "; }
	if (y == 16) { return " SIXTEEN "; }
	if (y == 17) { return " SEVENTEEN "; }
	if (y == 18) { return " EIGHTEEN "; }
	if (y == 19) { return " NINETEEN "; }

}
string x3(int z)
{
	int z1 = z / 10;
	if (z1 == 2) { return " TWENTY-"; }
	if (z1 == 3) { return " THIRTY-"; }
	if (z1 == 4) { return " FORTY-"; }
	if (z1 == 5) { return " FIFTY-"; }
	if (z1 == 6) { return " SIXTY-"; }
	if (z1 == 7) { return " SEVENTY-"; }
	if (z1 == 8) { return " EIGHTY-"; }
	if (z1 == 9) { return " NINETY-"; }


}
string x4(int q)
{
	int q1 = q / 100;
	if (q1 == 1) {return " ONE HUNDRED and";}
	if (q1 == 2) { return " TWO HUNDRED and"; }
	if (q1 == 3) { return " THREE HUNDRED and"; }
	if (q1 == 4) { return " FOUR HUNDRED and"; }
	if (q1 == 5) { return " FIVE HUNDRED and"; }
	if (q1 == 6) { return " SIX HUNDRED and"; }
	if (q1 == 7) { return " SEVEN HUNDRED and"; }
	if (q1 == 8) { return " EIGHT HUNDRED and"; }
	if (q1 == 9) { return " NINE HUNDRED and"; }

}
string x5(int w)
{
	int w1 = w / 1000;
	if (w1 == 1) { return " ONE THOUSAND and"; }
	if (w1 == 2) { return " TWO THOUSAND and"; }
	if (w1 == 3) { return " THREE THOUSAND and"; }
	if (w1 == 4) { return " FOUR THOUSAND and"; }
	if (w1 == 5) { return " FIVE THOUSAND and"; }
	if (w1 == 6) { return " SIX THOUSAND and"; }
	if (w1 == 7) { return " SEVEN THOUSAND and"; }
	if (w1 == 8) { return " EIGHT THOUSAND and"; }
	if (w1 == 9) { return " NINE THOUSAND and"; }

}
string x6(int e)
{
	int e1 = e / 10000;
	if (e1 == 1) { return " TEN THOUSAND and"; }
	if (e1 == 2) { return " TWENTY THOUSAND and"; }
	if (e1 == 3) { return " THIRTY THOUSAND and"; }
	if (e1 == 4) { return " FORTY THOUSAND and"; }
	if (e1 == 5) { return " FIFTY THOUSAND and"; }
	if (e1 == 6) { return " SIXTY THOUSAND and"; }
	if (e1 == 7) { return " SEVENTY THOUSAND and"; }
	if (e1 == 8) { return " EIGHTY THOUSAND and"; }
	if (e1 == 9) { return " NINETY THOUSAND and"; }
}
string x8(int r)
{
	int r1 = r / 1000000;
	if (r1 == 1) { return " ONE MILLION and"; }
	if (r1 == 2) { return " TWO MILLION and"; }
	if (r1 == 3) { return " THREE MILLION and"; }
	if (r1 == 4) { return " FOUR MILLION and"; }
	if (r1 == 5) { return " FIVE MILLION and"; }
	if (r1 == 6) { return " SIX MILLION and"; }
	if (r1 == 7) { return " SEVEN MILLION and"; }
	if (r1 == 8) { return " EIGHT MILLION and"; }
	if (r1 == 9) { return " NINE MILLION and"; }

}
string x9(int t)
{
	int t1 = t / 10000000;
	if (t1 == 1) { return " TEN MILLION and"; }
	if (t1 == 2) { return " TWENTY MILLION and"; }
	if (t1 == 3) { return " THIRTY MILLION and"; }
	if (t1 == 4) { return " FORTY MILLION and"; }
	if (t1 == 5) { return " FIFTY MILLION and"; }
	if (t1 == 6) { return " SXITY MILLION and"; }
	if (t1 == 7) { return " SEVENTY MILLION and"; }
	if (t1 == 8) { return " EIGHTY MILLION and"; }
	if (t1 == 9) { return " NINETY MILLION and"; }

}
string x10(int u)
{
	int u1 = u / 100000000;
	if (u1 == 1) { return " ONE HUNDRED MILLION and"; }
	if (u1 == 2) { return " TWO HUNDRED MILLION and"; }
	if (u1 == 3) { return " THREE HUNDRED MILLION and"; }
	if (u1 == 4) { return " FOUR HUNDRED MILLION and"; }
	if (u1 == 5) { return " FIVE HUNDRED MILLION and"; }
	if (u1 == 6) { return " SIX HUNDRED MILLION and"; }
	if (u1 == 7) { return " SEVEN HUNDRED MILLION and"; }
	if (u1 == 8) { return " EIGHT HUNDRED MILLION and"; }
	if (u1 == 9) { return " NINE HUNDRED MILLION and"; }

}
string x11(int i)
{
	int i1 = i / 1000000000;
	if (i1 == 1) { return " ONE BILLION and"; }
	if (i1 == 2) { return " TWO BILLION and"; }
	if (i1 == 3) { return " THREE BILLION and"; }
	if (i1 == 4) { return " FOUR BILLION and"; }
	if (i1 == 5) { return " FIVE BILLION and"; }
	if (i1 == 6) { return " SIX BILLION and"; }
	if (i1 == 7) { return " SEVEN BILLION and"; }
	if (i1 == 8) { return " EIGHT BILLION and"; }
	if (i1 == 9) { return " NINE BILLION and"; }

}

string textify_number(int j, int o) //j is the numbers needed to convert, o is numbers of digits
{
	string output;
	
	
	if (o < 1 && o > 7)
	{
		cout << "ERROR[textify_number]: only support up to 7 digits";
	}
	if (o == 1) 
	{
		output = x1(j);
	}

	if (o == 2)
	{
		if (j <= 19 && j >= 10) { output = x2(j); }
		else
		{
			int k = j % 10; int l = j - k;
			output = x3(l);
			output += x1(k);
		}
	}
	if (o == 3)
	{
		int k1 = j % 100; int l1 = j - k1; int z = k1 % 10; int b = k1 - z;
		output = x4(l1);
		output += x3(b);
		output += x1(z);
	}
	if (o == 4)
	{
		int k2 = j % 1000; int l2 = j - k2; int z1 = k2 % 100;
		int n = k2 - z1; int c = z1 % 10; int v = z1 - c;
		output = x5(l2);
		output += x4(n);
		output += x3(v);
		output += x1(c);
	}
	if (o == 5)
	{
		int k3 = j % 10000; int l3 = j - k3; int z2 = k3 % 1000;
		int n1 = k3 - z2; int c1 = z2 % 100; int v1 = z2 - c1;
		int m = c1 % 10; int s = c1 - m; int u = (j - z2) / 1000;
		if (u >= 10 && u <= 19)
		{
			output = x2(u);
			output += "THOUSAND and";
			output += x4(v1);
			output += x3(s);
			output += x1(m);
		}
		else
		{
			output = x3(u - u % 10);
			output += x1(u % 10);
			output += "THOUSAND and";
			output += x4(v1);
			output += x3(s);
			output += x1(m);
		}
	}
	if (o == 6)
	{
		int k4 = j % 100000; int l4 = j - k4; int z3 = k4 % 10000;
		int n2 = k4 - z3; int c2 = z3 % 1000; int v2 = z3 - c2;
		int m1 = c2 % 100; int s1 = c2 - m1; int q = m1 % 10;
		int w = m1 - q; int u1 = l4 / 1000; int u2 = n2 / 1000;
		int u3 = v2 / 1000;
		output = x4(u1);
		output += x3(u2);
		output += x1(u3);
		output += "THOUSAND and";
		output += x4(s1);
		output += x3(w);
		output += x1(q);
		
		
	}
	if (o == 7)
	{
		int k5 = j % 1000000; int l5 = j - k5; int z4 = k5 % 100000;
		int n3 = k5 - z4; int c3 = z4 % 10000; int v3 = z4 - c3;
		int m2 = c3 % 1000; int s2 = c3 - m2; int q1 = m2 % 100;
		int w1 = m2 - q1; int e = q1 % 10; int r = q1 - e;
		int u4 = (k5 - k5 % 100000) / 1000;
		int u5 = (z4 - z4 % 10000) / 1000;
		int u6 = (c3 - c3 % 1000) / 1000;
		output = x8(l5);
		output += x4(u4);
		output += x3(u5);
		output += x1(u6);
		output += "THOUSAND and";
		output += x4(w1);
		output += x3(r);
		output += x1(e);
	}
	
	return output;
	
}

int main()
{
	string input, temp, operator_, input_i, output;
	bool previous_is_number = false; 
	int i;
	
	cout << "Please input your equation, I represents intergration" << endl;
	cin >> input;
	//input = remove_space(input);
	
	vector<int> operator_position;
	vector<string> pool; // Whole formula separed by operators
	if(DEBUG)
		cout << input << endl;
	
	
	for( i = 0; i < input.size(); i++ )
	{
		if( search_string(input,'.') )
		{
			cout << "Float point number is not yet supported" << endl;
			return 1;
		}
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
			if( operator_test(string(1, pool[i][0]) ) )
			{
				previous_is_operator = false;
				cout << "WARNING: two or more consistant operators of " << pool[ i-1 ] << pool[i] << " in equation " << extract_vector_string(pool, 0, i-1) << " >>>>> " << extract_vector_string(pool, i-1, i+1 ) << " <<<<< " << extract_vector_string(pool, i+1, pool.size() ) << endl << endl;	
			}
			else
			{
				previous_is_operator = false;
			}
		}
		else
			previous_is_operator = false;
			
		if( operator_test( pool[i] ) )
		{
			output += textify_operator(pool[i]) + " ";
		}
		else
		{
			output += textify_number(string_to_int(pool[i]), pool[i].size()) + " ";
		}
		//cout << output << endl;
	}
	cout << output << endl << endl;
	if(DEBUG)
		cout << endl << pool.size() << endl;
	
    return 0;
}
