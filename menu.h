class menu()
{
public:
 int mainmenu(string):
}

int menu::mainmenu(string entry)
{
  string entry;
  cout << "welcome to the game\n1: Start\t2: Help\t\t3: Quit" << endl;
  cin >> entry;
  if (entry == "1") 
  {       
    return 1;
  } 
  else if (entry = "2") 
  {        
    cout << "someone make a help screen thanks guys\n\n";
    return 2;
  } 
  else     
  {
    return 3;
  }
}
