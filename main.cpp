#include <iostream>
#include <ctime>

using namespace std;

int main() {
    char start;
    float shop(void);
    char choice;


    startL:
        cout << "Please press H to start shopping for home appliances" << endl;
            start:
                cin >> start;

                if (start == 'h' || start == 'H')
                {
                    float total = shop();
                    time_t t = time(nullptr);
                    tm* tPtr=localtime(&t);
                    cout << "Bill Date : ";
                    cout << tPtr->tm_mday << "/"; 
                    cout << tPtr->tm_mon << "/"; 
                    cout << 19000 + tPtr->tm_year << "/"; 
                    cout << "Bill time: "<< (tPtr->tm_hour) << ":"<< (tPtr->tm_min) << ":" << (tPtr->tm_sec) << endl;
                    cout << "Total Bill Amount : " << total << endl;
                    if (total > 50000 && 100000)
                    {
                        total=total-(0.05*total);
                        cout << "Total discount: 5%" <<endl;
                    }
                    else if (total > 100000 && 125000)
                    {
                        total=total-(0.1*total);
                        cout << "Total discount: 10%" <<endl;
                    }
                    else if (total > 125000 && 150000)
                    {
                        total=total-(0.25*total);
                        cout << "Total discount: 25%" <<endl;
                    }
                    else if (total > 150000)
                    {
                        total=total-(0.5*total);
                        cout << "Total discount: 50%" <<endl;
                    }
                    cout << "Total bill amount is : "<< total << endl;
                    Again:
                        cout << "Do you want to shop y or n" << endl;
                        cin >> choice;
                        if (choice == 'y' || choice == 'Y')
                        {
                            goto startL;
                        }else if(choice == 'n' || choice == 'N'){
                            cout << "Thanks for shopping "<< endl;
                        }else{
                            cout << "You have entered the wrong option, please press H" << endl;
                        }
                        
                }else{
                    cout << "You have entered wrong option, please press H to start again" <<endl; 
                    goto start;
                }

                int shop() {
                    shop:
                        char choice;
                        char product;
                        int quantity;
                        float bill=0;
                        intemLevel:
                            cout << "*********************Welcome********************"<<endl;
                            cout << "___Please follow the instructions___"<< endl;
                            cout <<"| 1) Please enter r to order Refrigerator "<<endl;
                            cout <<"| 2) Please enter wto order Washing machine"<<endl;
                            cout <<"| 3) Please enter t to order Television"<<endl;
                            cout <<"| 4) Please enter m to order Microwave"<<endl:
                            cout <<"| 5) Please enter a to order Air conditioner"<<endl;
                            cin >> choice;
                            if (choice=='r' || choice =="R" || choice == 'w' || choice =='W' || choice =='t' || choice =='T' || choice=='m' || choice=='M' || choice=='a' || choice =='A')
                            {
                               if (choice =='r' || choice == 'R')
                               {
                                cout<<" ______Refrigerator Deioials______ "<<endl;
                                cout<<"| 1) Whirlpool       => Price: 40000 |" <<endl;
                                cout<<"| 2) Smasung         => Price: 25000 |" << endl;
                                cout<<"| 3) Haier           => Price: 20000 |" << endl;
                                cout<<"| 4) Voltas          => Price: 18000 |"<< endl;
                                cout<<"| 5) Godreeg         => Price: 30000 |"<< endl;
                                cout<<"| 6) Panasonic       => Price: 35000 |"<< endl;

                                cout << "Please enter your choice "<< endl;
                                cin >> product;
                                cout << endl;
                                if (product == '1')
                                {
                                    cout << "Please Enter the quantity of the product" << endl;
                                    cin >> quantity;
                                    cout << endl;
                                    bill = bill + quantity * 48000;
                                }
                                else if(product == '2')
                                {
                                    cout << "Please Enter the quantity of the product" << endl;
                                    cin >> quantity;
                                    bill = bill + quantity *25000;
                                    
                                }
                                else if(product == '3')
                                {
                                    cout << "Please Enter the quantity of the product" << endl;
                                    cin >> quantity;
                                    bill = bill + quantity *20000;
                                    
                                }
                                else if(product == '4')
                                {
                                    cout << "Please Enter the quantity of the product" << endl;
                                    cin >> quantity;
                                    bill = bill + quantity *18000;
                                    
                                }
                                else if(product == '5')
                                {
                                    cout << "Please Enter the quantity of the product" << endl;
                                    cin >> quantity;
                                    bill = bill + quantity *35000;
                                    
                                }else{
                                    cout << "You have entered the wrong option Please try again"
                                }
                                
                                }
                            }  
                            return 0;
                }
                
    return 0;
}