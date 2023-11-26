// //****Balancing Parentheses*****

// #include<bits/stdc++.h>
// using namespace std;
// bool bracket_balance(string expr){
//     stack<char> temp;
//     for(int i=0;i<expr.length();i++){
//         if(temp.empty()){
//             temp.push(expr[i]);
//         }
//         else if((temp.top()=='(' && expr[i]==')')||(temp.top()=='[' && expr[i]==']')||(temp.top()=='{' && expr[i]=='}')){
//             temp.pop();
//         }
//         else{
//             temp.push(expr[i]);
//         }
//     }
//     if(temp.empty()){
//         return true;
//     }
//     else{
//     return false;
//     }
// }
// int main(){
//     string expr;
//     cout<<"Enter Expression:"<<endl;
//     cin>>expr;
//     if(bracket_balance(expr)){
//         cout<<"Balanced"<<endl;
//     }
//     else{
//     cout<<"Not balance"<<endl;
//     }
//     return 0;

// }


//*********Infix to Postfix*******

#include <bits/stdc++.h>
using namespace std;


int prec(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}


void infixToPostfix(string s)
{

	stack<char> st;
	string result;

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];

		
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
			result += c;

		
		else if (c == '(')
			st.push('(');

		
		else if (c == ')') {
			while (st.top() != '(') {
				result += st.top();
				st.pop();
			}
			st.pop();
		}

		
		else {
			while (!st.empty()
				&& prec(s[i]) <= prec(st.top())) {
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}

	
	while (!st.empty()) {
		result += st.top();
		st.pop();
	}

	cout << result << endl;
}

// Driver code
int main()
{
	string exp = "a+b*i";

	// Function call
	infixToPostfix(exp);

	return 0;
}

