void characterSelect();
{
  cout << "What is your name?";
  cin >> hero.playerName;
  cout << "Are you a boy(1) or a girl(2)?";
  cin >> hero.gender;
  cout << "Are you a Warrior(1), Archer(2) or Mage(3)?";
  cin >> hero.playerType;
  cout << "Choose your element: "Earth(1), Fire(2), Water(3) or Air(4)";
  cin >> hero.playerElement;
}
