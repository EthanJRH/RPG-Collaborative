class hero: public melee, public staff
//allows us to make use of variables/functions from other classes
//for instance, we can use the damage stat from the melee class in the attack function of hero
{
public:
  int hitpoints;
  int mana;
  int speed;
  //int attack;
  //don't need an attack on the hero as long as we include the weapon
  int magic;
  //int crit;
  //same deal here
  bool male;
  void attack();
  void ability();
  void rest();
  void run();
  void consume();
};
