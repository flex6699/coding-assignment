// C++ program to implement DFA for Strings
// not containing consecutive two a's
#include <bits/stdc++.h>
using namespace std;

int dfa = 0;

// This function is for
// the starting state of DFA
void start(char c)
{
	if (c == 'a')
	{
		dfa = 1;
	}
	else
	{
		dfa = 3;
	}
}

// This function is for the first state of DFA
void state1(char c)
{
	if (c == 'a')
	{
		dfa = 3;
	}
	else
	{
		dfa = 4;
	}
}

// This function is for the second state of DFA
void state2(char c)
{
	if (c == 'a')
	{
		dfa = 5;
	}
	else
	{
		dfa = 2;
	}
}

// This function is for the third state of DFA
void state3(char c)
{
	if (c == 'a')
	{
		dfa = 3;
	}
	else
	{
		dfa = 3;
	}
}

// This function is for the fourth state of DFA
void state4(char c)
{
	if (c == 'a')
	{
		dfa = 5;
	}
	else
	{
		dfa = 2;
	}
}

void state5(char c)
{
	if (c == 'a')
	{
		dfa = 3;
	}
	else
	{
		dfa = 2;
	}
}

int isAccepted(char str[])
{
	
	// Store length of string
	int i, len = strlen(str);

	for(i = 0; i < len; i++)
	{
		// cout<<"%d", dfa);
		if (dfa == 0)
			start(str[i]);

		else if (dfa == 1)
			state1(str[i]);

		else if (dfa == 2)
			state2(str[i]);

		else if (dfa == 3)
			state3(str[i]);

		else if (dfa == 4)
			state4(str[i]);

		else if (dfa == 5)
			state5(str[i]);

		else
			return 0;
	}
	if (dfa == 0)
		return 0;
	else if (dfa == 3)
		return 0;
	else
		return 1;
}

// Driver code
int main()
{   cout<<"Enter string :";
	char s[100];
	cin>>s;
	cout<<endl;
	
	cout<<"String Valid :";
	if (isAccepted(s))
		cout << "ACCEPTED";
	else
		cout << "NOT ACCEPTED";
		
	return 0;
}


