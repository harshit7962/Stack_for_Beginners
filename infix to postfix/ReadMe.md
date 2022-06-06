## Algorithm to the problem is as follows:
1. Create an empty stack.
2. Traverse the string from left to rigth and for every character 'x' in given infix string, do the following:
    - If x is operand, add it to the result
    - If x is left paranthesis, push it to the stack
    - If x is right paranthesis, Pop from stack until we get left paranthesis and while popping collect each character as a result...
    - If x if operand, we further need to check the following:
        * If stack is empty, push the operand.
        * If the character 'x' has higher precedence than operator at top of the stack, push x into stack
        * If the character 'x' has lower precedence than operator at top of the stack, pop from stack until stack is empty or top has lower precedence than x and while popping collect each character as result.
        * If the character 'x' has equal precedence than operator at top of the stack, check for the associativity rule.

3. Finally, pop the stack until it is empty and while popping collect each character as the result...
