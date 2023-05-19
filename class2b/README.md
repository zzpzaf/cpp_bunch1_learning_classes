
# <p style="background-color:DodgerBlue; color:white; padding-left:5px"> class2b -  Deep copy</p>

A second update based on the previous <span style="color:blue">**class2**</span> project.
____
In the previous example (**class2a**) we used a (public) class **custom constructor with parameters**, and a Shallow copy constructor. 

Here we are going to use a pointer member parameter - int \* p
Here the 'regular' constructor initialisation using a **member initialiser list** is similar to:

```MyClass(int xx, int pp) : x{ xx }, p{ new int{pp} } {}```

The **<span style="color:red">deep copy</span>** constructor has a signature like the one below:

```MyClass(const MyClass& rhs): x{ rhs.x }, p{ new int {*rhs.p} }```

What actually have to do is to use the **<span style="color:red">new</span>** keyword, to allocate a new memory for the pointer member parameter




