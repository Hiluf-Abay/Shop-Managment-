


#include<iostream>
#include<string>
using namespace std;


void cover_page ();
void Add_Item ();
void Add_quantity ();
void Add_buyyingPrice ();
void Add_sellingPrice ();
void Add_sold ();
void Cal_totalBuying ();
void Cal_totalSelling ();
void Cal_profit ();
void Cal_totalProfit ();

int main ();
const int n = 6;
char itemName[6][20];		//the name the item
int quantity[n];		//the number of item of the nth item
float buyyingPrice[n];		//the buying price of nth item
float sellingPrice[n];		//the selling price of the nth item
int sold[n];			//the sold amount of nth itme
float totalBuying[n];		//quantity[n]*buyying price[n]
float totalSelling[n];		//sold[n]*selling ptice[n]
float profit[n];		//the profit that we get from the nth itemA
float totalProfit=0;		//profit from the whole sale
int selector;


int main ()
{

  char control = '1';

  do

    {



      cout << "\n\n\n\t this is menu bar\n";
      cout << "\t ----------------\n";
      cout << "Enter 0 for cover page\n";
      cout << "Enter 1 for items name\n";
      cout << "Enter 2 for qunatity of items\n";
      cout << "Enter 3 for items buying price\n";
      cout << "Enter 4 for items selling price\n";
      cout << "Enter 5 for quantity of sold item price\n";
      cout << "Enter 6 for total expended money.i.e total buying ptice\n";
      cout << "Enter 7 for total earned money .i.e total selling price\n";
      cout << "Enter 8 for individual itmes profit \n";
      cout << "Enter 9 for total profit of the shop\n";

      cin >> selector;
      while (selector < 0 or selector > 9)
      {
          cout << "\n\nyou entered wrong number, please enter valid number which is 0 to 9\n"<<endl;
          cin >> selector;
      }

      switch (selector)
	{
	case 0:
	  cover_page ();
	  break;
	case 1:
	  Add_Item ();
	  break;
	case 2:
	  Add_Item ();
	  break;
	case 3:
	  Add_Item ();
	  break;
	case 4:
	  Add_Item ();
	  break;
	case 5:
	  Add_Item ();
	  break;
	case 6:
	 Add_Item ();
	  break;
	case 7:
	  Add_Item ();
	  break;
	case 8:
	  Add_Item ();
	  break;
	case 9:
	  Add_Item ();
	}

      cout << "\n press 1 to continue press any key to exit";
      cin >> control;
    }
  while (control == '1');

  return 0;

}


void cover_page ()
{
  cout << "\t\t\t\tAASTU\n";
  cout << "\t\tFundamentals of Computer Programming\n";
  cout << "\t\tProject Title: Shop Managment\n";
  cout << "\t\tStudent Name\t\tID.No\t\tSection\n";
  cout << "\t\tHILUF\tABAY\t\tETS1598/13\tV\n";
  cout << "\t\tHAILE\tTSEGAY\t\tETS1597/13\tV\n";
  cout << "\t\tKEFYAL\tAGEGN\t\tETS0598/11\tV\n";
  cout << "\t\tHAYELOM\tMESFIN\t\tETS1596/13\tV\n";
  cout << "\t\tWIESA\tROBSO\t\tETS1600/13\tV\n";
  cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\tDate of submission: May 2,2022\n";
  cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\tSubmitted to: Mr.\n";


}


void Add_Item()
{
  int i=0;
  while (i<=n)
    {
     cout << "Enter the name of Item number " << i + 1 << " \n";
     cin>>itemName[i];
     i++;
    }
  cout<<endl<<endl;
  cout << "\n\nthe avilabele items in our shope are  : \n";
  for (int j = 0; j < n + 1; j++)
    {
      cout  << itemName[j] << endl;
    }
 if (selector>1)
    Add_quantity ();
 else
    return;

}

void Add_quantity ()
{
  for (int i = 0; i <= n; i++)
    {
      cout << "Enter the number of  " << itemName[i] << endl;
      cin >> quantity[i];
    }
  cout<<endl<<endl;
  for (int j = 0; j <=n; j++)
    {
      cout << "The amount of :  " << itemName[j] << " is: " << quantity[j] <<
	endl;
    }

 if (selector>2)
    Add_buyyingPrice ();
 else
    return;
}

void Add_buyyingPrice ()
{
  for (int i = 0; i < n + 1; i++)
    {
      cout << " Enter the buyying price of  " << itemName[i] << endl;
      cin >> buyyingPrice[i];
    }
  cout<<endl<<endl;
  for (int j = 0; j < n + 1; j++)
    {
      cout << itemName[j] << "is bought at the cost of  " << buyyingPrice[j] <<
	endl;
    }

 if (selector>3)
    Add_sellingPrice ();
 else
    return;

}


void Add_sellingPrice ()
{

  for (int i = 0; i < n + 1; i++)
    {
      cout << "Enter the selling price of " << itemName[i] << endl;
      cin >> sellingPrice[i];
    }
  cout << endl<<endl;
  for (int j = 0; j < n + 1; j++)
    {
      cout << itemName[j] << " is " << sellingPrice[j] << " ETB worth " << endl;
    }


 if (selector>4)
    Add_sold ();
 else
    return;
}

void
Add_sold ()
{
  for (int i = 0; i < n + 1; i++)
    {
      cout << " Enter the number of sold " << itemName[i] << endl;
      cin >> sold[i];
    }
  cout <<endl<<endl;
  for (int j = 0; j< n + 1; j++)
    {
      cout << sold[j] << itemName[j] << " have sold " << endl;
    }
 if (selector>5)
    Cal_totalBuying ();
 else
    return;

}

void
Cal_totalBuying ()
{
    cout<<endl<<endl;
  for (int i = 0; i < n + 1; i++)
    {
      totalBuying[i] = buyyingPrice[i] * quantity[i];
      cout << "The total expended money for " << itemName[i] << " is " <<
	totalBuying[i] << " ETB" << endl;
    }


 if (selector>6)
     Cal_totalSelling ();
 else
    return;

}

void
Cal_totalSelling ()
{
  cout <<endl<<endl;
  for (int i = 0; i < n + 1; i++)
    {
      totalSelling[i] = sellingPrice[i] * sold[i];
      cout << "The total sale from " << itemName[i] << " is " << totalSelling[i]
	<< " ETB" << endl;
    }

   if (selector>7)
     Cal_profit ();
 else
    return;


}

void Cal_profit ()
{

  for (int i = 0; i < n + 1; i++)
    {
      profit[i] = totalBuying[i] - totalSelling[i];
    }
    cout <<endl<<endl;
  for (int j= 0; j< n+1; j++)
  {
      cout <<" The profit of "<<itemName[j] << " is " << profit[j] <<endl;
  }

   if (selector>8)
Cal_totalProfit();
 else
    return;
}


void
Cal_totalProfit ()
{
  for (int i = 0; i < n + 1; i++)
    {
      totalProfit = totalProfit + profit[i];

    }
  cout<<endl<<endl;
  cout << "the total profit from the whole sale is " << totalProfit << " :ETb"
    << endl;


}


  

  

