class Player{
    public :
        string name;
        string overall,age;
        Player(string name, string age, string overall){
            Player::name = name;
            Player::age = age;
            Player::overall = overall;
        }
        string stringify(){
            return name + "\t\t\t" + age + "\t" + overall;
        }
};
class Database{
    public :
        ifstream in;
        ofstream out;
        string fileName;
        Database(const char* fileName){Database::fileName = fileName;}
        void saved(Player data){
            Database::out.open(Database::fileName,ios::app);
            Database::out << data.stringify() << "\n";
            Database::out.close();
        }
        void showData(){
            Database::in.open(Database::fileName,ios::in);
            string row;
            int index = 0;
            while(!Database::in.eof()){
                getline(Database::in,row,'\n');
                if(index!=0){
                    cout << index << " " << row << "\n-----------------------------------------------\n";
                    index++;
                }
                else{
                    cout << row << "\n-----------------------------------------------\n";
                    index++;
                }
            }
            Database::in.close();
        }
};
