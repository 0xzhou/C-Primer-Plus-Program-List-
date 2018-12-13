## 8.2 引用变量 Reference Variables

别名=alias, alternative name

### 7.3.5 Pointer and `const`

    int age = 39;
    const int * pt = &age;

This declaration states that `pt` points to a const int (39, in this case). So, you can't use pt to change the `age` value. In other words, tha value *pt is const and cannot be modified:
Now for a subtle point. This declaration for `pt` doesn't necessarily mean that the value it points to is really a constant; is just means the value is a constant insofar as `pt` is concerned.

How about assigns the address of a regular variable to a pointer-to-`const` ? Is has two possibilities: assigning the address of a `const` variable to a pointer-to-`const` and assigning the address of a `const` varible to a regular pointer

    const float g_earth = 9.80;
    const float * pe = &g_earth;// it is valid
    
    const float g_earth = 9.80;
    float * pm = & g_earth;//
