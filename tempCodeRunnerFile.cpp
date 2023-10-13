do
        {
         cout<<"\n Enter your choice : ";
         cin>>choice ;
        switch (choice)
        {
        case 1: 
             e.item1();
             cout<<" \n\t\t\t\t\t [1] cheese masala dosa : RS. 129.00 \n";
            break;
        case 2: 
             e.item2();
             cout<<" \n\t\t\t\t\t [2]  masala dosa : RS. 190.00 \n";
            break;
        case 3: 
             e.item3(); 
             cout<<" \n\t\t\t\t\t [3]paneer masala dosa : RS. 119.00 \n";
            break;
        case 4: 
             e.item4();
             cout<<" \n\t\t\t\t\t [4] green paneer masala dosa : RS. 119.00\n";
            break;
        case 5: 
            e.item5();
            cout<<" \n\t\t\t\t\t [5] cheese paneer masala dosa : RS. 129.00 \n";
            break;
        case 6: 
            e.item6();
            cout<<" \n\t\t\t\t\t [6] cheese mysore masala dosa : RS. 139.00 \n";
            break;
        case 7: 
            e.item7();
            cout<<" \n\t\t\t\t\t [7] dosa fry : RS. 129.00 \n";
            break;  
       case 8: 
            e.item8();
            cout<<" \n\t\t\t\t\t [8] separate dosa : RS. 129.00 \n";
            break;  
       case 9: 
            e.item9();
            cout<<" \n\t\t\t\t\t [9] manchurian : RS. 80.00 \n";
            break; 
       case 10: 
            e.item10();
            cout<<" \n\t\t\t\t\t [10]  pavbhaji : RS. 100.00 \n";
            break;
       case 11: 
            e.item11();
            cout<<" \n\t\t\t\t\t [11]  manchau sup : RS. 120.00 \n";
            break;
       case 12: 
            e.item12();
            cout<<" \n\t\t\t\t\t [12]  cold drinks : RS. 30.00 \n";
            break; 
      case 13: 
            e.item13();
            cout<<" \n\t\t\t\t\t [13]  buttermilk : RS. 30.00 \n";
            break; 
      case 14: 
            e.item14();
            cout<<" \n\t\t\t\t\t [14] salad : RS. 40.00 \n";
            break;
      case 15: 
            e.item15();
            cout<<" \n\t\t\t\t\t [15] papad : RS. 10.00 \n";
            break; 
      case 0: 
           break;
        }

      } while (choice!=0);