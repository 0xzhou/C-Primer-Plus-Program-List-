### 2.1.2 C++ Comments

### 2.1.6 C++ Output with `cout`

**The Manipulator `endl`:** `endl` is a special 	C++ Notation that represents the important concept of beginning a new line.

**The Newline Character:** `\n` comes from the C Notation, it is supposed to be as part of the string.

`cout << "What's the next?\n";`

`cout << "What's the next?"<< endl;`

## 2.2 C++ Statements

### 2.2.1 Declaration Statements and Variables

The statement usually provide two kinds of information: the type of memory storage needed(需要的内存) and a label to attach to that storage(该内存单元的名称).

### 2.2.2 Assignments Statements

An assignment statement `=` assign a value to a storage location.

## 2.4 Functions

### 2.4.1 Using a Function That Has a Return Value

When you use `sqrt()` in a program, you must also provide the prototype. You can do this in either of two ways:

* You can type the function prototype into your source code file yourself.
* You can include the `cmath` header file, which has the prototype in it.

### 2.4.3 User-Defined Functions



# 3. Dealing with Data

## 3.1 Simple Variables

### 3.1.2 Integer Types

*Integers* are numbers with no fractional part.

C++'s basic integer types, in order of increasing width, are `char`,  `short`,` int`, `long` and with C++11 `long long`. Each comes in both signed and unsigned versions. That gives you a choice of ten different integer types.

>The fundamental unit of computer is *bit*(位), which has the value 0 or 1. A *byte*(字节) usually means an 8-bit unit of memory.

### 3.1.3 The `short` ,`int`,`long`, and `long long` Integer Types

The C++ types  `short` ,`int`,`long`, and `long long` can represent up to four different integer widths. Here are some rules for it:

* A `short` integer is at least 16 bits wide.
* An `int` integer is at least as big as `short`.
* A `long` integer is at least 32 bits wide and at least as big as `int`.
* A `long long` integer is at least 64 bits wide and at least as big as `long`.

First, the `sizeof` operator returns the size, in bytes, of a type or a variable. You can apply the `sizeof` operator to a type name or to a variable name. When you use the `sizeof` operator with a type name, such as `int`, you enclose the name in parentheses. When it comes to the variable name, parentheses are optional:

`cout << "int is" << sizeof (int) << " Bytes. \n";`

`cout << "short is "<< sizeof n_short << " Bytes. \n"`

### 3.1.4 Unsigned Types

Each of the four integer types comes in an unsigned variety that can't hold negative values. This has the advantage of increasing the largest value the variable can hold.For example, if `short` represents the range -32768 to +32768, the unsigned version can represent the range 0 to 65535.



### 3.1.6 Integer Literals—整型字面值

C++ lets you write integers in three different number bases: base 10(the public favorite), base 8 (the old Unix favorite), and base 16(the hardware hacker's favorite). C++ uses the first digit or two to identify the base of a number constant. If the first digit is in the range 1-9, the number is base 10(decimal); thus 93 is base 10. If the first digit is 0 and the second digit is in the range 1-7, the number is base 8(octal); thus 042 is octal and equal to 34 decimal. If the first two characters are 0x or 0X, the number is base 16(hexadecimal); thus 0x42 is hex and equal to 66 decimal.

### 3.1.8 The `char` Type: Characters and Small Integers

As you probably suspect from the name, the `char` type is designed to store characters, such as letters and numeric digits.

*escape sequences（转义序列）:* `\a` represents the alert character, `\n` represents a newline, \" represents the double quotation mark as an ordinary character instead of a string delimiter.

## 3.2 The `const` Qualifier

## 3.3 Floating-Point Numbers



# 4. Compound Types 

## 4.1 Introducing Arrays

To create an array, you use a declaration statement. An array declaration should indicate three things:

* The type of the value to be stored in each element
* The name of the array
* The number of elements in the array

## 4.2 Strings 

A `string` is a series of characters(字符) stored in consecutive(连续的) bytes of memory.

The idea of a series of characters stored in consecutive bytes implies that you can store a string in an array of char, with each character kept in its own array element.

C-style strings have a special feature: **The last character of every string is the *null character*.**This character, written `\0`, is the character with ASCII code 0, and it serves to mark the string’s end. For example, consider the following two declarations:

`char dog[8]={'b','e','a','u','x',' ','t','i'}// not a string`

`char dog[8]={'f','a','t','e','s','s','a','\0'}// a string !`

The ***null character*** plays a fundamental role in C-style strings. For example, C++ has many functions that handle strings, including those used by `cout`. They all work by processing a string character-by-character until they reach the *null character*.

There is a better way to initialize a character array to a string. Just use a quoted string, called a *string constant* or *string literal*, as in the following:

`char bird[11]="Mr.Cheeps" // the \o is understood`

`char fish[]="Bubbles"; let the compiler count`

Note that a string constant (with double quotes) is not interchangeable with a character constant (with single quotes).A character constant, such as `'S'`, is a shorthand notation for the code for a character. On an ASCII system, 'S' is just another way of writing 83. Thus, the following statement assigns the value 83 to `shirt_size`:

`char shirt_size = 'S'; // this is fine`

But `"S"` is not a character constant; it represents the string consisting of two characters, the `S `and the `\0 `characters. So a statement like the following attempts to assign a memory address to `shirt_size`:

`char shirt_size = "S"; // illegal type mismatch`



### 4.2.3 Adventure in String Input

L4.3：The `cin` technique is to use whitespace--spaces（空格）, tabs(制表符), and newlines to delineate a string. This means `cin` just reads one word when it gets input for a character array.

### 4.2.4 Reading String Input a Line at a Time

Reading string input a word at a time is often not the most desirable choice.

Specifically, you need a line-oriented method instead of a word-oriented method. You are in luck, for the `istream` class, of which `cin` is an example, has some line-oriented class member functions: `getline()` and `get()`. Both read an entire input line—that is, up until a newline character(换行符). 

However, `getline()` then discards(丢弃) the newline character, whereas `get()` leaves it in the input queue. `get()` doesn't reads and stores the newline character. Let’s look at the details, beginning with `getline()`.

The `getline()` function conveniently gets a line at a time. It reads input through the newline
character marking the end of the line, but it doesn't save the newline character. Instead, it replaces it with a `null character('\0')` when storing the string (see Figure 4.5). ——read and replace it !!!

But rather than read and discard the newline character, `get()` leaves that character in the input
queue. Suppose you use two calls to get() in a row:

`cin.get(name, ArSize);`

`cin.get(dessert, Arsize); // a problem`

Because the first call leaves the newline character in the input queue, that newline character is the first character the second call sees.Thus, `get()` concludes that it’s reached the end of line without having found anything to read.Without help, `get()` just can’t get past that newline character.

Fortunately, there is help in the form of a variation of `get()`. The call `cin.get()` (with no arguments) reads the single next character, even if it is a newline, so you can use it to dispose of the newline character and prepare for the next line of input. That is, this sequence works:

`cin.get(name, ArSize); // read first line`

`cin.get(); // read new line`

`cin.get(dessert, Arsize); // read second line`

Another way to use `get()` is to *concatenate*, or join, the two class member functions, as
follows:

`cin.get(name, ArSize).get(); // concatenate member functions`



## 4.3 Introducing the `string` Class

The `string` class makes some operations simpler than is the case for arrays. For example, you can't simply assign one array to another. But you can assign one string object to another.



## 4.4 Introducing Structures

You could place the structure declaration inside the `main()` function, just after the opening brace. The second choice, and the one made here, is to place it outside the preceding `main()`. When a declaration occurs outside any function, it's called an *external declaration*. For programs consisting two or more functions: The external declaration can be used by all the functions following it, whereas the internal declaration can be used only by the function in which the declaration is found.

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

## 4.7 Pointers and the Free Store

**Three properties **of which a computer program must keep track when it stores data:

* Where the information is stored
* What values is kept there
* What kind of information is stored

Pointers, which are variables that store **addresses** of values rather than the values themselves. You just apply the address operator, represented by `&`, to a variable to get its location.

A special type of variable-----the *pointer*, which holds the address of a value. Thus the name of the pointer represents the location. Applying the * operator, called the *indirect value* or the *dereferencing* operator, yields the value at the location.

### 4.7.6 Using `new` to create dynamic arrays

The  `new` operator finds a block of the correct size and returns the address of the block.

`int * pn = new int` //

```
int * psome = new int [10]; // get a block of 10 ints
```

The `new` operator returns the address of first element of array to the pointer `psome`.
`delete [] psome; // free a dynamic array` 



## 4.8  Pointers, Arrays, and Pointer Arithmetic(指针算术)

The near equivalence of pointers and array names stems from *pointer arithmetic* and how C++ handles arrays internally. Adding one to a pointer variable increases its value by the number of bytes of the type to which it points. Importantly: C++ interprets the array name as an address.

 ### 4.8.3 Pointers and Strings

**Note:** With `cout` and with most C++ expressions, the name of an array of `char`, a pointer-to-`char`, and a quoted string constant are all interpreted as the address of the first character of string.

char数组名，char指针，以及用引号括起的字符串常量

Normally, if you give `cout` a pointer, it prints an address. But if the pointer is type `char *`, `cout` displays the pointed-to string. If you want to see the address of the string, you have to type cast the pointer to another pointer type, such as `int *`.



### 4.8.4 Using `new` to Create Dynamic Structures

With the `new` operator, you can create dynamic structures.(It is better to create arrays during the runtime rather than at compile time, already known.) 

Using `new` with structures has two parts: creating an unnamed structure of the `inflatable` type and assign its address to a suitable pointer, as following:

`inflatable * ps = new inflatable ;`

This assigns to `ps` the address of a chunk of free memory large enough to hold a structure of the `inflatable` type. The tricky part is accessing members. C++ provides an operator just for this situation: the arrow membership operator `(->)`. This operator formed by typing a hyphen and then a greater-than symbol, does for pointers to structures what the dot operator does for structure names.

### 4.8.5 Automatic Storage, static Storage, and Dynamic Storage

**Automatic Storage:** Actually,automatic values are local to the block that contains them. A `block` is a section of code enclosed between braces.

**Static Storage:** Static storage is storage that exists throughout the execution of an entire program. There are two ways to make a variable static. One is to define it externally, outside a function. The other is to use the keyword `static` when declaring a variable:

`static double dee = 56.50;`

***The main point you should note now about automatic and static storage is that these methods rigidly define the lifetime of a variable.***



**Dynamic Storage:** 



## 4.9 Combinations of Types



# 5 Loops and Relational Expressions

## 5.1 Introducing `for` Loops

### 5.1.1 Parts of a `for` Loop

`for (initialization; test-expression; update-expression)`

`test-expression` determines whether the loop body gets executed.



# 7 Functions: C++'s Programming Modules

## 7.1 Function Review

### 7.1.1 Defining a Function

Functions without return values are termed type `void` functions. C++ does place a restriction on what types you can use for a return value: The return value cannot be an array. Everything else is possible—integers, floating-point numbers, pointers, and even structures and objects!  (Interestingly, even though a C++ function can’t return an array directly, it can return an array that’s part of a structure or object.)

## 7.2 Function Arguments and Passing by Value

A variable that's used to receiver passed values is called a *formal argument* or *formal parameter*. The value passed to the function is called the *actual argument* or *actual parameter*.

**Variables, including parameters, declared within a function are private to the function.**

## 7.3 Functions and Arrays

C++ interprets an array name as the address of its first element:

` cookies == &cookies[0];`

The useful two identities:

`arr[i] == * (arr + i);`

`&arr[i] == arr + i;`

### 7.3.5 Pointer and `const`

You can use the `const` keyword two different ways with pointers. The first way is to make a pointer point to a constant object, and that prevents you from using the pointer to change the pointed-to value. The second way is to make the pointer itself constant, and that prevents you from changing where the pointer points.

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

## 7.5 Functions and C-Style Strings

## 7.6 Functions and Structures

## 7.10 Pointers to Functions

**Obtaining the Address of a Function:** Simple, just use the function name without trailing parentheses(圆括号).

**Declaring a Pointer to a Function:** The declaration should identity the function's return type and the function's signature(its argument list).

`double pam(int); // prototype`

`double (*pf)(int); // pf points to a function that takes one int argument, returns double`

**Using a Pointer to Invoke a Function: **(*pf) plays the same role as a function name.



# 8. Adventures in Functions

## 8.1 C++ Inline Functions(内联函数)

*Inline functions* are a C++ enhancement designed to speed up programs. The primary distinction between In.f and normal function is : how the C++ compiler incorporates them into a program.

## 8.2 Reference Variables(引用变量)

别名=alias, alternative name. The main use for a reference variable is as a formal argument to a function.

### 8.2.1 Creating a Reference Variable

C++ assigns an additional meaning to the `&` symbol and presses it into service for declaring references.

`int rats;`

`int & rodents = rats; // make rodents an alias for rats`

For one, it is necessary to initialize the reference when you declare it; you can’t declare the reference and then assign it a value later the way you can with a pointer:

`int rat;
int & rodent;
rodent = rat; // No, you can't do this.`

**You should initialize a reference variable when you declare it.**



### 8.2.2 Reference as Function Parameters

Most often, references are used as function parameters, making a variable name in a function an alias for a variable in the calling program. This method of passing arguments is called ***passing by reference***.

Earlier, I said you should initialize a reference variable when you define it. A function call(函数调用) initializes its parameters with argument values(实参) from the function call. So reference function arguments are initialized to the argument passed by the function call. That is, the following function call initializes the formal parameter(形参) a to `wallet1` and the formal parameter b to `wallet2`:

`swapr(wallet1,wallet2);`

### 8.2.3 Reference Properties and Oddities(特别之处)

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



## 11.1 Operator Overloading-运算符重载

Let's look at a technique for giving object operations a prettier look.(程序更简洁，代码更容易理解)That is called *function overloading* or *function polymorphism*. Its purpose is to let you use the same function name for the same basic operation, even though you apply the operation to different data types. 

* 对已有的运算符赋予**多重**的含义
* 使**同一运算符**作用于**不同类型的数据**时$\rightarrow$不同类型的行为

C++ lets you extend operator overloading to user-defined types, permitting you, say, to use the `+` symbol to add two objects. Again, the compiler uses the number and type of operands to determine which definition of addition to use. Overloaded operators can often make code look more natural.

## 11.2 Time on Our Hands: Developing an Operator Overloading Example

### 11.2.2 Overloading Restrictions

* The overloaded operator must have at least one operand that is a user-defined type.This restriction preserves program sanity(保持程序能够正常运行), although it may hinder creative accounting.
* You can’t use an operator in a manner that violates the syntax rules for the original operator. For example, you can’t overload the modulus operator `%` so that it can be used with a single operand.
* You can’t create new operator symbols.

### 11.2.3 More Overloaded Operators



