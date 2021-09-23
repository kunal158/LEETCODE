class Solution {
public:
    bool isValid(string expr) {
	stack<char> s;
	char x;
  	char a;
        
        

	// Traversing the Expression
	for (int i = 0; i < expr.length(); i++)
	{
		if (expr[i] == '(' || expr[i] == '['
			|| expr[i] == '{')
		{
			// Push the element in the stack
			s.push(expr[i]);
            a=s.top();
            continue;
		}

	 if((expr[i]==']' && a=='[') || (expr[i]=='}' && a=='{') || (expr[i]==')' && a=='(')){
		    
        if (s.empty()) {
		        return false;
		    }
         s.pop();
          if (s.empty()) {
		        continue;
		    }
		    a=s.top();

		}
        else{
            return false;
        }
	}
	// Check Empty Stack
	return (s.empty());

    }
};
