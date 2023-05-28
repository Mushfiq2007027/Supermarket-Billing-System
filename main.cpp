#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//The following class is an abstract class
class welcome
{

protected:
    int h,s;

public:
    welcome()
    {
        h=123;
        s=124;
    }
    virtual void location()=0;//pure virtual function
};


class shopping: public welcome
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:

    void location();
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void List();
    void receipt();
    friend void goodbye();
};


void goodbye()
{
    cout<<"\n\n";
    cout<<"\t\t\t\t\tThanks for purchasing. Come again. Have a nice day";
}


//This function shows address of shwapno

void shopping:: location()
{
    cout<<"\t\t\t\t\t    Welcome to Shwapno Supermarket\n";
    cout<<"\t\t\t\t____________________________________________________\n";
    cout<<"\t\t\t\t\t  Holding No."<<h<<", "<<s<<" Majid Sarani\n";
    cout<<"\t\t\tShib Bari Sonadanga Main Road, Sonadanga Residential Area, Khulna-9100\n";
    cout<<"\t\t\t\t\tWebsite:www.shwapno.com, Phone:01614-771622\n";
    cout<<"\t\t\t\t\t\tFacebook Page:SHWAPNO";
    cout<<"\n\n\n";
}



//This is main menu function

void shopping:: menu()
{
    m:
    int choice;
    string email;
    string password;

    cout<<"\t\t\t\t\t_____________________________________\n";
    cout<<"\t\t\t\t\t                                     \n";
    cout<<"\t\t\t\t\t       Supermarket Main Menu         \n";
    cout<<"\t\t\t\t\t                                     \n";
    cout<<"\t\t\t\t\t_____________________________________\n";
    cout<<"\t\t\t\t\t                                     \n";
    cout<<"\t\t\t\t\t      |  (1) Administrator   |\n";
    cout<<"\t\t\t\t\t      |                      |\n";
    cout<<"\t\t\t\t\t      |  (2) Buyer           |\n";
    cout<<"\t\t\t\t\t      |                      |\n";
    cout<<"\t\t\t\t\t      |  (3) Exit            |\n";
    cout<<"\n\t\t\t\t      Please Select:";
    cin>>choice;

    cout<<"\n\n";
    switch(choice)
    {
    case 1:
        cout<<"\t\t\t\t\t          ______________ \n";
        cout<<"\t\t\t\t\t         |              |\n";
        cout<<"\t\t\t\t\t         | Please Login |\n";
        cout<<"\t\t\t\t\t         |______________|\n";
        cout<<"\n";
        cout<<"\t\t\t\t      (1) Enter Email:";
        cin>>email;
        cout<<"\n";
        cout<<"\t\t\t\t      (2) Enter Password:";
        cin>>password;

        if(email=="admin478@gmail.com" && password=="2007027")
        {
            administrator();
        }
        else
        {
           cout<<"\t\t\t\t\tInvalid Email/Password";
        }
        break;


    case 2:
        {
            buyer();
        }

    case 3:
        {
            exit(0);
        }

    default :
        {
            cout<<"\t\t\t\t\tPlease select from the given options";
        }


     }
 goto m;
}


//This function is for shop owner to modify products
void shopping:: administrator()
{
    m:
    int choice;
    cout<<"\n\n\n";

    cout<<"\t\t\t\t\t        ____________________ \n";
    cout<<"\t\t\t\t\t       |                    |\n";
    cout<<"\t\t\t\t\t       | Administrator Menu |\n";
    cout<<"\t\t\t\t\t       |____________________|\n";
    cout<<"\t\t\t\t\t     __________________________ \n";
    cout<<"\t\t\t\t\t    |                          |\n";
    cout<<"\t\t\t\t\t    |   (1) Add The Product    |\n";
    cout<<"\t\t\t\t\t    |                          |\n";
    cout<<"\t\t\t\t\t    |   (2) Modify The Product |\n";
    cout<<"\t\t\t\t\t    |                          |\n";
    cout<<"\t\t\t\t\t    |   (3) Delete The Product |\n";
    cout<<"\t\t\t\t\t    |                          |\n";
    cout<<"\t\t\t\t\t    |   (4) Back To Main Menu  |\n";
    cout<<"\t\t\t\t\t    |__________________________|\n";

    cout<<"\n\n\t\t\t\t\tPlease Enter Your choice:";
    cin>>choice;

    switch(choice)
    {
    case 1:
        add();
        break;

    case 2:
        edit();
        break;

    case 3:
        rem();
        break;

    case 4:
        menu();
        break;

    default :
        cout<<"\t\t\t\t\tInvalid choice";

    }
    goto m;
}


//This function is for customer
void shopping:: buyer()
{
    m:
    int choice;
    cout<<"\n\n";
    cout<<"\t\t\t\t\t               _______ \n";
    cout<<"\t\t\t\t\t              |       |\n";
    cout<<"\t\t\t\t\t              | Buyer |\n";
    cout<<"\t\t\t\t\t              |_______|\n";
    cout<<"\t\t\t\t\t          _________________ \n";
    cout<<"\t\t\t\t\t         |                 |\n";
    cout<<"\t\t\t\t\t         | (1) Buy Product |\n";
    cout<<"\t\t\t\t\t         | (2) Go Back     |\n";
    cout<<"\t\t\t\t\t         |_________________|\n";
    cout<<"\t\t\t\t\t         Enter Your choice :";

    cin>>choice;

    switch(choice)
    {
        case 1:
        receipt();
        break;

        case 2:
            menu();

        default:

            cout<<"\t\t\t\t\tInvalid Choice";

    }

    goto m;


}


//Adding new items to file
void shopping ::add()
{
    m:
    fstream data;
    int c;
    int token=0;
    float p;
    float d;
    string n;

    cout<<"\n\n";
    cout<<"\t\t\t\t\t       _________________ \n";
    cout<<"\t\t\t\t\t      |                 |\n";
    cout<<"\t\t\t\t\t      | Add New Product |\n";
    cout<<"\t\t\t\t\t      |_________________|\n";
    cout<<"\t\t\t\t\t Product code of the product:";
    cin>>pcode;
    cout<<"\n\t\t\t\t\t Name of the product:";
    cin>>pname;
    cout<<"\n\t\t\t\t\t Price of the product:";
    cin>>price;
    cout<<"\n\t\t\t\t\t Discount on the product:";
    cin>>dis;

    data.open("database.txt",ios::in);

    if(!data)
    {
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.close();
    }
    else
    {
      data>>c>>n>>p>>d;

    while(!data.eof())
    {
        if(c==pcode)
        {
            token++;
        }
        data>>c>>n>>p>>d;
    }
    data.close();




    if(token==1)
        goto m;
    else
    {
        data.open("database.txt",ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.close();

    }
}
    cout<<"\n\n\t\t\t\t\t\tRecord Inserted";
}


//Modifying items in file
void shopping ::edit()
{
    fstream data,data1;
    int pkey;
    int token=0;
    int c;
    float p;
    float d;
    string n;

    cout<<"\n\n";
    cout<<"\t\t\t\t\t        ___________________ \n";
    cout<<"\t\t\t\t\t       |                   |\n";
    cout<<"\t\t\t\t\t       | Modify The Record |\n";
    cout<<"\t\t\t\t\t       |___________________|\n";
    cout<<"\t\t\t\t\t     Product Current Code:";
    cin>>pkey;

    data.open("database.txt",ios::in);
    if(!data)
    {
        cout<<"\n\nFile Doesn't Exist! ";
    }
    else
    {
       data1.open("database1.txt", ios::app|ios::out);

       data>>pcode>>pname>>price>>dis;
       while(!data.eof())
       {
           if(pkey==pcode)
           {
               cout<<"\n\t\t\t\t\t     Product New Code:";
               cin>>c;
               cout<<"\n\t\t\t\t\t     New Name of The Product:";
               cin>>n;
               cout<<"\n\t\t\t\t\t     New Price:";
               cin>>p;
               cout<<"\n\t\t\t\t\t     New Discount:";
               cin>>d;
               data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
               cout<<"\n\n\t\t\t\t\t        Record Edited";
               token++;
           }
           else
            {
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
            }
            data>>pcode>>pname>>price>>dis;
       }
    data.close();
    data1.close();

    remove("database.txt");
    rename("database1.txt","database.txt");

    if(token==0)
    {
        cout<<"\n\n Sorry! Record not found.";
    }



  }

}


//Delete items from File
void shopping::rem()
{

    fstream data,data1;
    int pkey;
    int token=0;
    cout<<"\n\n";
    cout<<"\t\t\t\t\t        ________________ \n";
    cout<<"\t\t\t\t\t       |                |\n";
    cout<<"\t\t\t\t\t       | Delete Product |\n";
    cout<<"\t\t\t\t\t       |________________|\n";
    cout<<"\t\t\t\t\t       Product Code :";
    cin>>pkey;
    data.open("database.txt", ios::in);
    if(!data)
    {
        cout<<"File doesn't exist";

    }

    else
    {
     data1.open("database1.txt", ios::app|ios::out);
     data>>pcode>>pname>>price>>dis;
     while(!data.eof())
     {
         if(pcode==pkey)
         {
             cout<<"\n\n\t\t\t\t\t    Product Deleted Successfully";
             token++;
         }
         else
        {
            data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";

        }
        data>>pcode>>pname>>price>>dis;
     }
     data.close();
     data1.close();
     remove("database.txt");
     rename("database1.txt","database.txt");

     if(token==0)
     {
         cout<<"\n\n\t\t\t\t Record not found";
     }

    }
}


//This function shows item lists from file to customer
void shopping:: List()
{
    fstream data;
    data.open("database.txt",ios::in);
    cout<<"\t\t\t\t     ____________________________________________ \n";
    cout<<"\t\t\t\t    | Product No.        Name              Price |\n";
    cout<<"\t\t\t\t    |____________________________________________|\n";
    data>>pcode>>pname>>price>>dis;
    while(!data.eof())
    {
        cout<<"\t\t\t\t\t";
        cout<<pcode<<"\t\t"<<pname<<"\t\t   "<<price<<"\n";

        data>>pcode>>pname>>price>>dis;

    }
    data.close();
}

//This function calculates bill
void shopping ::receipt()
{
    fstream data;

    int arrc[100];
    int arrq[100];
    char choice;
    int c=0;
    float amount=0;
    float  dis=0;
    float total=0;

    cout<<"\n\n";
    cout<<"\t\t\t\t\t\t    ______________ \n";
    cout<<"\t\t\t\t\t\t   |              |\n";
    cout<<"\t\t\t\t\t\t   | Product List |\n";
    cout<<"\t\t\t\t\t\t   |______________|\n";
    data.open("database.txt",ios::in);
    if(!data)
    {
        cout<<"\n\n Empty Database";
    }

    else
    {
        data.close();

        List();
        cout<<"\n";
        cout<<"\t\t\t\t     ___________________________________________ \n";
        cout<<"\t\t\t\t    |                                           |\n";
        cout<<"\t\t\t\t    |          Please Place Your Order          |\n";
        cout<<"\t\t\t\t    |___________________________________________|\n";

        do{
            m:
            cout<<"\n\n";
            cout<<"\t\t\t\t    Enter Product Code:";
            cin>>arrc[c];
            cout<<"\n";
            cout<<"\t\t\t\t    Enter The Product Quantity:";
            cin>>arrq[c];
            for(int i=0;i<c;i++)
            {
                if(arrc[c]==arrc[i])
                {
                    cout<<"\n\n Duplicate Product Code.Please Try Again.";
                    goto m;
                }
            }
            c++;
            cout<<"\n\n";
            cout<<"\t\t\t\tDo you want to buy another product? Press y for yes and n for no=";
            cin>>choice;
          }while(choice=='y');


          cout<<"\n\n";
          cout<<"\t\t\t\t____________________________RECEIPT______________________________\n";
          cout<<"\t\t\t\t";
          cout<<"Product No.   Name   Quantity   Price   Cost  Cost with Discount\n";

          for(int i=0;i<c;i++)
          {
              data.open("database.txt",ios::in);
              data>>pcode>>pname>>price>>dis;
              while(!data.eof())
              {
                  if(pcode==arrc[i])
                  {
                      amount=price*arrq[i];
                      dis=amount-(amount*dis/100);
                      total=total+dis;
                      cout<<"\n"<<"\t\t\t\t"<<"  "<<pcode<<"\t    "<<pname<<"\t"<<arrq[i]<<" \t"<<price<<"\t"<<amount<<"\t  "<<dis;
                  }
                  data>>pcode>>pname>>price>>dis;
              }
              data.close();

          }



    }
    cout<<"\n\t\t\t\t________________________________________________________________";
    cout<<"\n\t\t\t\t\t\t\tTotal Cost="<<total;
    goodbye();
}

int main()
{

    welcome *bptr;//abstract class pointer
    shopping s;
    bptr=&s;
    bptr->location();
    s.menu();
    return 0;
}
