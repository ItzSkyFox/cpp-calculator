#include <iostream>
/*
    Bug log: fixed divide by error problem
*/
int main(){
    // defining the numbers and collecting info for calculating
    int x;
    int y;
    int z;
    int o;
    std::cout << "Welcome to Calculator! [v1.1]" << std::endl;
    std::cout << "Please enter a number: ";
    std::cin >> x;
    std::cout << "1. Addition (+)" << std::endl << "2. Subtraction (-)" << std::endl << "3. Multiply (*)" << std::endl << "4. Divide (/)" << std::endl;
    std::cout << "please select an operator:";
    std::cin >> o;
    std::cout << "Please type another number: ";
    std::cin >> y;
    
    // calculation section (ik code might not be optimized)
    if (o==1){
        int a={x+y};
        std::cout << x << " added to " << y << "=" << a << std::endl;
    }
    else if (o==2){
        int a={x-y};
        std::cout << x << " subtracted by " << y << "=" << a << std::endl;
    }
    else if (o==3){
        int a={x*y};
        std::cout << x << " multiplied by " << y << "=" << a << std::endl;
    }
    else if (o==4){
        if (y==0){
            std::cerr << "Cannot Divide by Zero" << std::endl;
        }
        else{
            int a={x/y};
            std::cout << x << " divided by " << y << " = " << a << std::endl;
        }
    }
    else{
        std::cerr << "err: invalid operator selection!" << std::endl;
    }
    return 0;
}
// idk how tf i did it but i did it lol