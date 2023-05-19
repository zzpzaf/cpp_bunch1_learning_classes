
# <p style="background-color:DodgerBlue; color:white; padding-left:5px"> class2 - class constructor with member initialiser list</p>


A second example based on <span style="color:lightblue">**class1**</span> project.
___
In this example we use a class (public) **custom constructor with parameters** in the header.
The constructor initialisation uses member initialiser list.
A **member initialiser list** starts with a colon, followed by member names and their initialisers, where each initialisation expression is separated by a comma. 

In our example, this is how we declare an initialisation list: 

```MathUtils(int aa, int bb) : a{aa}, b{bb}{};```

This is the preferred way of initialising class data members.
-No need to do anything else in definition code.
-We can invoke the class like that:

```MathUtils m_utils(99, 32);```


