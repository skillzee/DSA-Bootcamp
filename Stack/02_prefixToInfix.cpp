#include<bits/stdc++.h>
using namespace std;

bool isOperator(char x) {
  switch (x) {
  case '+':
  case '-':
  case '/':
  case '*':
  case '^':
  case '%':
    return true;
  }
  return false;
}

string prefixToInfix(string infix){
    int length = infix.size();
    stack<string> st;
    for(int i = length; i>=0; i--){
        // string ch = infix[i];
        if(isOperator(infix[i])){
            string a = st.top();
            st.pop();
            string b = st.top();
            st.pop();

            string temp = "("+ a + infix[i]+b+")";
            st.push(temp);
        }

        else{
            st.push(string(1, infix[i]));
        }
    }
        return st.top();

}


int main()
{

    string pre_exp = "*-A/BC-/AKL";
  cout << "Infix : " << prefixToInfix(pre_exp);
  return 0;
     
    return 0;
}