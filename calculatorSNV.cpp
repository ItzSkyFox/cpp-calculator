#include <iostream>
using namespace std;
int main(){
    float num1; // Variable 1
    int optr; // Arithmetic Operator
    float num2; // Variable 2
    float out;
    char loop;
    int mode;
    cout << "\033[2J\033[1;1H";
    cout << "\nHello Human!";
    cout << "\nThis is a Khalkulatour!\n";
    do{
        cout << "Select Mode!\n1. Simple \n2. Advanced(ALPHA).\n Please state your Choice!(1,2): ";
        cin >> mode;
        switch(mode){
            case 1:
                cout << "\033[2J\033[1;1H";
                    cout << "\nStart by entering the first number!";
                    cout << "\nEnter a Number: ";
                    cin >> num1;
                    cout << "\033[2J\033[1;1H";
                    cout << "\nGreat! Now Select an Operator!";
                    cout << "\n1. Addition (+)";
                    cout << "\n2. Subtraction (-)" ;
                    cout << "\n3. Multiplication (*)";
                    cout << "\n4. Division (/)";
                    cout << "\nSelect an Operator(1,2,3,4): ";
                    cin >> optr;
                    cout << "\033[2J\033[1;1H";
                    cout << "\nNice! Now enter another number!";
                    cout << "\nEnter another number:";
                    cin >> num2;
                    cout << "\033[2J\033[1;1H";
                    if (optr == 1){
                        out = num1+num2;
                        cout << "\nThe answer is: " << out;
                    }
                    else if(optr == 2){
                        out = num1-num2;
                        cout << "\nThe answer is: " << out;
                    }
                    else if (optr == 3) {
                        out = num1*num2;
                        cout << "\nThe answer is: " << out;
                    }
                    else if (optr == 4) {
                        if(num2==0){
                            cerr<<"\nERROR(2): Cannot Divide by Zero!";
                        }
                        else{
                            out = num1/num2;
                            cout << "\nThe answer is: " << out;
                        }
                    }
                    else{
                        cerr << "\nERROR(1): Invalid Operator Selection";
                    }
                    cout << "\n";
                break;
            case 2: 
                    cout << "\033[2J\033[1;1H";
                    cout << "This is still in Alpha stage!\n";
                    long long facto; // Factorial output
                    int facto_no; //the number of which's factorial is needed
                    int facto_ctrl; // loops the statement untill the number is reached
                    int adv_sel; // Selection Number of advanced mode
                    facto=1;
                    facto_ctrl=1;
                    cout << "Select a Operation.\n1. Factorial Finder\nSelection(1): ";
                    cin >> adv_sel;
                    switch (adv_sel) {
                        case 1:
                            cout << "\033[2J\033[1;1H";
                            cout << "Enter a nummber(max:20): ";
                            cin >> facto_no;
                            while(!(facto_no >=21) && facto_ctrl<=facto_no){
                                facto *= facto_ctrl;
                                facto_ctrl++;
                            }    
                            cout << "The Value of the Factorial is: " << facto;
                            break;   
                        default:
                            cout << "\033[2J\033[1;1H"; 
                            cerr << "Something Went Wrong";
                            break;
                    }
                    break;
            default:
                cout << "\033[2J\033[1;1H";
                cout << "Something Went Wrong";
        }
    cout << "\nDo you want to try again?(Y/n): ";
    cin >> loop;
    cout << "\033[2J\033[1;1H";
    }while(loop == 'Y' || loop == 'y'); 
    cout << "\033[2J\033[1;1H";
    cout << "\nThank you for using Khalkulatour";
    return 0;
}