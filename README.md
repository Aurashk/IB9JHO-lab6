# IB9JHO Lab 7: Classes and objects

# Exercise 1
**In Point.cpp:**
1) The functions x() and y() should return the x and y coordinates of the point.
2) The function info() should print out the x and y coordinates and the norm of the point in a 
readable format. Note that std::cout << x << y; will print out the values of the variables x and 
y.
3) The functions add() and subtract() should return a point object containing the 
sum/difference of two points.

**In tests/test_point.cpp:**
Write a test which verifies that for some chosen point a, adding a to a
and then subtracting a from the result gives a point equal to a.

# Exercise 2
**Create a new class called Line with a corresponding Line.cpp and Line.hpp.**
1) The Line constructor should accept two point objects as parameters and store them as data
members m_p1 and m_p2. Make sure the constructor has public visibility.
2) The functions p1() and p2() which should return the two points which make the line 
respectively (the return type should be const Point*).
3) The function Line::length() should use the functions Point::subtract() and 
Point::compute_norm() to compute and return the length of the line joining m_p1 and 
m_p2.

**In tests/test_line.cpp:**
Write a test which verifies that the length() of the line from the origin to 
some chosen point a is the same as the compute_norm() of a.

# Exercise 3
**Create a new class called Triangle with a corresponding Triangle.cpp and Triangle.hpp.**
1) The first constructor should accept three point objects as parameters (assume all points are 
different).
2) The second constructor should accept one point object and one line object as parameters 
(assume point is not on the line)
3) Write a member function Triangle::perimeter which computes and returns the perimeter of 
the triangle.

**In tests/test_triangle.cpp:**
- Write a test which verifies that the perimeter function gives the correct result for a concrete example you worked 
out manually.
- Write a test which verifies that the same triangle constructed with each of the two constructors returns the same 
perimeter

# Submission
Once you have tested your solutions, submit your work by pushing your changes to the repository. You can use the commit message "Submit assignment" or something similar.