class monster {
public:
 string name;
 int hitpoints;
 int speed;
 int mindamage;
 int maxdamage;
 //gives a damage spread, makes combat more interesting
 int crit;
 void attack();
 void magic();
}
