#include <iostream>

using namespace std;

class SQL_DB{
	
	public:																											
		SQL_DB(int cmd);
		~SQL_DB();
		unsigned int TABLE_X[5], TABLE_Y[5];
		int SELECT_TABLES(unsigned int *sql_x, unsigned int *sql_y);
	private:
		unsigned short int password_cript;
		char password;
		
};
																																		
int SQL_DB::SELECT_TABLES(unsigned int *sql_x, unsigned int *sql_y){
	sql_x = &TABLE_X[5];
	sql_y = &TABLE_Y[5];	
	int Sqlu, sqlz;
	printf("Coloque(numero) as tabelas: ");
	cin >> Sqlu >> sqlz;
	cout << endl;
	
	char USER_C, PASS_C;
	printf("Coloque user e senhar: ");
	cin >> USER_C >> PASS_C;
	
	char USER[5];
	char PASSWORD[5];
	
	cout << USER[USER_C] << ":" << PASSWORD[PASS_C] << endl;
	cout << "ID USER AND PASS: " << sql_x[Sqlu] << ":" << sql_y[sqlz] << endl;
	cout << endl;
	password = PASS_C;
	cout << "PASSWORD KEY: " << &password_cript << " " << password;
}


SQL_DB::SQL_DB(int cmd){
	if(cmd == 1){
		unsigned int YD, YX;
		SELECT_TABLES(&YD, &YX);
	}else if(cmd == 2){
		unsigned int EXIBE_X, EXIBE_Y;
		
		for (EXIBE_X=0; EXIBE_X < 5; EXIBE_X++){
			cout << TABLE_X[EXIBE_X];
		}
		for (EXIBE_Y=0; EXIBE_Y < 5; EXIBE_Y++){
			cout << TABLE_Y[EXIBE_Y];
		}	
	}
}

SQL_DB::~SQL_DB(){
	
}




int main(){
	SQL_DB *sql;
	
	if (true){
		
		 SQL_DB *MDB=new SQL_DB(1);
		SQL_DB *MD2B=new SQL_DB(2);
	}
	
}