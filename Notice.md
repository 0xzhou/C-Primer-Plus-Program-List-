### 3.1.2 Integer Types

*Integers* are numbers with no fractional part.

C++'s basic integer types, in order of increasing width, are `char`,  `short`,` int`, `long` and with C++11 `long long`. Each comes in both signed and unsigned versions. 

>The fundamental unit of computer is *bit*, which has the value 0 or 1. A *byte* usually means an 8-bit unit of memory.



## 4.1 Introducing Arrays

To create an array, you use a declaration statement.An array declaration should indicate three things:

* The type of the value to be stored in each element
* The name of the array
* The number of elements in the array



## 4.6 Enumerations(枚举)

The C++ `enum` facility provides an alternative to `const` for creating symbolic constants. For example, consider the following statement:

`enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};`

This statement does two things:

* It makes `spectrum` the name of a new type; `spectrum` is termed an *enumeration*, much as a *struct* variable is called a structure.
* It established `red, orange,`and so on, as symbolic constants for the integer value 0-7. These constants are called enumerators.

You can use an enumeration name to declare a variable of the enumeration type:

`spectrum band; //band :a variable of type spectrum`

The only valid values that you can assign to an enumeration variable without a **type cast**(强制类型转换) are the enumerator values used in defining the type.Thus, we have the following:

`band = blue; //valid, blue is an enumerator`

`band = 2000; // invalid, 2000 not an enumerator`

Only the **assignment(赋值)** operator is defined for enumerations. In particular, arithmetic operations like `++band; band = orange + red` are not defined.



Enumerator are of integer type and can be promoted to type `int`, but `int` types are not converted automatically to the enumeration type:

`int color = blue; //valid, spectrum type promoted to int`

`band = 3; //invalid, int not converted to spectrum`

`color=3+red;//valid, red converted to int`

You can assign an `int` value to an `enum`, provided that the value is valid and that you use an explicit type cast:

`band = spectrum(3) // typecast 3 to type spectrum`



### 4.6.1 Setting Enumerator Values

You can set enumerator values explicitly by using the assignment operator:

`enum bits{one = 1, two = 2, four = 3, eight = 4};`

The assigned values must be integers.











### 4.7.6 Using `new` to create dynamic arrays

```
int * psome = new int [10]; // get a block of 10 ints
```

The `new` operator returns the address of first element of array to the pointer `psome`.
`delete [] psome; // free a dynamic array` 



### 7.1.1 Defining a Function

Functions without return values are termed type `void` functions. C++ does place a restriction on what types you can use for a return value:The return value cannot be an array. Everything else is possible—integers, floating-point numbers, pointers, and even structures and objects! (Interestingly, even though a C++ function can’t return an array directly, it can return an array that’s part of a structure or object.)

### 7.3.5 Pointer and `const`

```
int age = 39;
const int * pt = &age;
```

This declaration states that `pt` points to a const int (39, in this case). So, you can't use pt to change the `age` value. In other words, tha value *pt is const and cannot be modified:
Now for a subtle point. This declaration for `pt` doesn't necessarily mean that the value it points to is really a constant; is just means the value is a constant insofar as `pt` is concerned.

```
const float g_earth = 9.80;
const float * pe = &g_earth;// it is valid

const float g_earth = 9.80;
float * pm = & g_earth;//
```



## 8.1 C++ Inline Functions(内联函数)

Inline functions are a C++ enhancement designed to speed up programs. The primary distinction between In.f and normal function is : how the C++ compiler incorporates them into a program.

## 8.2 引用变量 Reference Variables

别名=alias, alternative name.



For one, it is necessary to initialize the reference when you declare it; you can’t declare the reference and then assign it a value later the way you can with a pointer:

`int rat;
int & rodent;
rodent = rat; // No, you can't do this.`

## 8.4 Function Overloading(函数的重载)

The key to function overloading is a function's argument list, also called the *function signature*.

If two functions use the same number and types of arguments in the same order, they have the same signature; the variable names don't matter. C++ enables you to define two functions by the same name, provided that the functions have different signature.

**Note**: A lack of a matching prototype doesn't automatically rule out using one of the functions because C++ will try to use standard type conversions to force a match. When there are more than one alternatives to be converted, C++ rejects the function call as an error.

## 10.2 Abstraction and Classes

To help identify classes, this book follows a common, but not universal, convention of capitalizing(大写) class names.

## 10.3 Class Constructors and Destructors

One of C++'s aims is to make using class objects similar to using standard types. However, the code provided so far in this chapter doesn't let you initialize a `Stock` object the way you can an ordinary `int` or `struct`. For example:

`Stock hot = {"Sukie's Autos, Inc.", 200, 50.25};// NO! compile error`

The reason you can’t initialize a Stock object this way is because the data parts have private access status, which means **a program cannot** access the data members **directly**. So the only way a program can access the data members is through a member function. Therefore, you need to devise(设计) an appropriate member function if you're succeed in initializing an object.

C++ provides for special member functions, called *class constructors*, especially for constructing new objects and assigning values to their data members. (专门用于构造新对象和将值赋给它们的初始成员)

### 10.3.1 Declaring and Defining Constructors

See the example.

### 10.3.2 Using Constructors

The first is to call the constructor explicitly:

`Stock food = Stock（"World Cabbage", 250, 1.25);`

The second way is to call the constructor implicitly:

`Stock garment("Furry Mason", 50, 2.5);`

However, you can’t use an object to invoke a constructor because until the constructor finishes its work of making the object, there is no object. Rather than being invoked by an object, the constructor is used to create the object.

### 10.3.3 Default Constructor 默认构造函数

A *default constructor* is a constructor that is used to create an object when you don't provide explicit initialization values. That is, it's a constructor like this:

`Stock mycompany; //uses the default constructor`

For the `Stock` class, the default constructor would look like this:

`Stock::Stock() {}`

The net result is that the *mycompany* object is created with its members uninitialized, just as the following creates x without providing a value for x:

`int x;`

### 10.3.4 Destructors                         

For example, if your constructor uses `new` to allocate memory, the destructor should use `delete` to free that memory.​  The *Stock* constructor doesn't do anything fancy(?) like using `new`, so the *Stock* class destructor doesn't really have any tasks to perform.       



