# Code-Review

Identified Issues:
##1- Uninitialized Values:
Variables value and Array lack initialization, affecting code behavior.

##2-Poor Naming and Clarity:
Unclear variable names like value, S, and n hinder code understanding.

3-Magic Numbers:
Hardcoded 20 used repeatedly; replace with constants for better maintenance.

4-Complex Boolean Expressions:
Complex condition (Array[i] % 2 == 0 && Array[i] % 5 == 0 && Array[i] % 3 != 0) requires simplification.

5- Code Structure:
Overloaded main() function; suggest breaking tasks into separate functions.

6-Potential Division by Zero:
Risk of division by zero due to uninitialized variables or improper checks.
