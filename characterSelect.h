void characterSelect();
{
  cout << "What is your name?";
  cin >> hero.playerName;
  cout << "Are you a boy(1) or a girl(2)?";
  cout << "boyz r cuter then gurlz" << endl;
  cin >> hero.gender;
  cout << "Are you a Warrior(1), Archer(2) or Mage(3)?" << endl;
  cout << "Warriors are vicous melee fighters who are good at absorbing damage." << endl;
  cout << "Archers prefer to stand back and deal large amounts of damage from range with their bows and arrows." << endl;
  cout << "Mages deal massive damage over large areas with their powerful spells." << endl;
  cin >> hero.playerType;
  cout << "Choose your element: Earth(1), Fire(2), Water(3) or Air(4)";
  cout << "Earth symbolizes the slowness and patience. Earth heroes tend to be very tough, but slow as a tradeoff." << endl;
  cout << "Fire symbolizes speed and fury. Fire heroes tend to deal massive damage, but they are glass cannons." << endl;
  cout << "Water symbolizes change. Water heroes make use of strong buffs and debuffs to change a battle's outcome." << endl;
  cout << "Air symbolizes swiftness and agility. Air heroes tend to have many ways to avoid damage altogether." << endl;
  cin >> hero.playerElement;
}
