int main()
{
    return 0;
}

//Experiment 1
// Miss the semi-colon
/*int main()
{
    return 0
}*/
//Output
//prog1.cpp: In function ‘int main()’:
//prog1.cpp:11:1: error: expected ‘;’ before ‘}’ token
// }
// ^

//Experiment 2
// Different return type for main
/*float main()
{
    return 0.0;
}*/
//Output
//prog1.cpp:20:12: error: ‘::main’ must return ‘int’
// float main()
//            ^

//Experiment 3
// type of returned value is different than return type
/*int main()
{
    return 0.0;
}*/
//Output
//Surprisingly, the compiler doesn't complain

//Experiment 4
// return a non zero value from main()
/*int main()
{
    return -1;
}*/
//Output
//Compiler doesn't complain
