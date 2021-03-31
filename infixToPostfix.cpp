#include<iostream>
#include<stack>
using namespace std;
int prec(char ch)
{
	if(ch=='+' || ch=='-')
	{
		return 1;	
	}	
	else if(ch=='*' || ch=='/')
	{
		return 2;
	}
	else if(ch=='^')
	{
		return 3;
	}
	else
	{
		return 0;
	}
}

string infixToPostfix(string exp)
{
	string postfix = "";
	stack<char> stack; 
	int i = 0;
	char ch = 'a';
	while(exp[i]!='\0')
	{
		ch = exp[i];
		if(prec(ch)==0)
		{
			postfix = postfix + ch;
		}
		else if(stack.empty()==true)
		{
			stack.push(ch);
		}
		else
		{
			char top = stack.top();
			while(prec(top)>= prec(ch) && stack.empty()==false)
			{
				stack.pop();
				postfix = postfix + top;
				top = stack.top();
			}
			stack.push(ch);
		}
		i = i + 1;
	}
	while(stack.empty()==false)
	{
		postfix = postfix + stack.top();
		stack.pop();
	}
	return postfix;
}
int main()
{
	string exp = "5*1+5*3^3*6";
	cout<<infixToPostfix(exp);
	return 0;
}
