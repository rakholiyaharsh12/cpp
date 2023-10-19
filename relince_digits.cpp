#include <iostream>
using namespace std;
class customer

{
protected:
   double discount, gst, net_bill, bill_amt = 0;
   int bill = 0, qty;

   string ditems[5], name, contact_number;

public:
   void display()

   {
      // store name and customer name and mobile number
      cout << " --------- || relince digital || ---------\n";
      cout << "enter customer name : ";
      cin >> name;
      do
      {
         cout << "enter your contact number: ";
         cin >> contact_number;
         if (contact_number.size() != 10)
         {
            cout << "wrong number: " << endl;
         }
      } while (contact_number.size() != 10);
   }
   void costinformation()
   {
      cout << "\n\t name: " << name << endl;
      cout << "\n\t contact Number: " << contact_number << endl;
   }
};

class show_bill : public customer
{

protected:
   double gst, discount, net_bill = 0, bill_amt;
   int bill = 0, qty;

   string ditem[5];

public:
   int item1()
   //   enter qty
   {
      cout << "\n\tEnter qty :";
      cin >> qty;
      ditem[0] = " ONEPLUS EARBUDS : RS. 1290.00 /- ";
      return bill = bill + qty * 1290.00;
   }

   int item2()
   {
      cout << "\n\tEnter qty : ";
      cin >> qty;
      ditem[1] = "ALEXA SMART SPEAKERS : RS. 1900.00 /-  ";
      return bill = bill + qty * 1900.00;
   }

   int item3()
   {
      cout << "\n\tEnter qty : ";
      cin >> qty;
      ditem[2] = "APPLE AIRPODS PRO : RS. 11900.00 /-";
      return bill = bill + qty * 11900.00;
   }

   int item4()
   {
      cout << "\n\tEnter qty : ";
      cin >> qty;
      ditem[3] = " PIGEON KETTLE : RS. 2990.00 /-";
      return bill = bill + qty * 2990.00;
   }

   int item5()
   {
      cout << "\n\tEnter qty : ";
      cin >> qty;
      ditem[4] = "LIFELONG DRY LRON : RS. 1290.00 /-";
      return bill = bill + qty * 1290.00;
   }
   /*
      new decleration continue....,
   */
    int item6()     
   {
      cout << "\n\tEnter qty : ";
      cin >> qty;
      ditem[5] = "jbl speaker 15000 /-";
      return bill = bill + qty * 15000.00;
   }
       int item7()     
   {
      cout << "\n\tEnter qty : ";
      cin >> qty;
      ditem[6] = "LG refrigerators  40000/-";
      return bill = bill + qty * 40000.00;
   }
          int item8()     
   {
      cout << "\n\tEnter qty : ";
      cin >> qty;
      ditem[7] = "ultimate party speaker 11000/-";
      return bill = bill + qty * 11000.00;
   }
          int item9()     
   {
      cout << "\n\tEnter qty : ";
      cin >> qty;
      ditem[8] = "Apple ipad 9th gen. 50000/-";
      return bill = bill + qty * 50000.00;
   }
          int item10()     
   {
      cout << "\n\tEnter qty : ";
      cin >> qty;
      ditem[9] = "hp laptop 50000 /-";
      return bill = bill + qty * 50000.00;
   }

   double Show_Bill_Amt()
   {

      return bill_amt = bill_amt + bill;
   }

   double Show_disc()
   {
      if (bill_amt > 400)
      {
         return discount = (bill_amt * 5) / 100;
      }

      else
      {
         return discount = 5;
      }
   }

   double Show_GST()
   {
      return gst = (bill_amt * 18) / 100;
   }

   double Show_Net_bill()
   {
      return net_bill = bill_amt + gst - discount;
   }

   void Show_Net_Bill()
   //   main bill
   {
      Show_bill_Items();
      cout << "==================================================" << endl;
      cout << "|\t total Order price  : " << Show_Bill_Amt() << "\t|" << endl;
      cout << "|\t discount           : " << Show_disc() << "\t\t\t|" << endl;
      cout << "|\t gst                : " << Show_GST() << "\t|" << endl;
      cout << "|\t net bill is        : " << Show_Net_bill() << "\t\t|" << endl;
      cout << "==================================================" << endl;
      cout << "\n\t ------**------ || Thank you for  || ------**------ ";
   }

   void Show_bill_Items()
   {

      int j;

      for (j = 0; j < 5; j++)
      {
         if (!ditem[j].empty())
         {
            cout << "\n\t " << j + 1 << ":" << ditem[j] << endl;
         }
      }
   }
};

int main()
{

   show_bill e;

   void costinformation();
   // menu

   cout << "\n\t\t\t --------- || Menu || --------- \n";
   cout << "\n\t\t\t [1]ONEPLUS EARBUDS : RS. 1290.00  /- ";
   cout << "\n\t\t\t [2]  ALEXA SMART SPEAKERS : RS. 1900.00 /- ";
   cout << "\n\t\t\t [3] APPLE AIRPODS PRO : RS. 11900.00  /- ";
   cout << "\n\t\t\t [4]  PIGEON KETTLE : RS. 2990.00/- ";
   cout << "\n\t\t\t [5]LIFELONG DRY LRON : RS. 1290.00 /-";
   cout << "\n\t\t\t [6] jbl speaker 15000 /-";
   cout << "\n\t\t\t [7] LG refrigerators 40000/-";
   cout<<  "\n\t\t\t   [8]ultimate party speaker 11000/-";
   cout << "\n\t\t\t Confirm Your Order       [0]  \n";

   int choice;
   // customer choice
   do
   {
      cout << "\n Enter your choice : ";
      cin >> choice;
      switch (choice)
      {
      case 1:
         e.item1();
         cout << " \n\t\t\t\t\t [1]  ONEPLUS EARBUDS : RS. 1290.00 \n";
         break;
      case 2:
         e.item2();
         cout << " \n\t\t\t\t\t [2]  ALEXA SMART SPEAKERS : RS. 1900.00  \n";
         break;
      case 3:
         e.item3();
         cout << " \n\t\t\t\t\t [3]APPLE AIRPODS PRO : RS. 11900.00  \n";
         break;
      case 4:
         e.item4();
         cout << " \n\t\t\t\t\t [4]  PIGEON KETTLE : RS. 2990.00\n";
         break;
      case 5:
         e.item5();
         cout << " \n\t\t\t\t\t [5] LIFELONG DRY LRON : RS. 1290.00\n";
         break;
      case 0:
         break;
      }

   } while (choice != 0);

   e.display();
   e.Show_Net_Bill();
}