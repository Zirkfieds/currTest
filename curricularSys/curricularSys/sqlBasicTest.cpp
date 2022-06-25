#include <iostream>
#include <mysql.h> 

using namespace std;

int main() {
    const char user[] = "root";
    const char pswd[] = "";
    const char host[] = "localhost";
    const char table[] = "sales";
    unsigned int port = 3306;
    MYSQL con;

    mysql_init(&con);
    if (mysql_real_connect(&con, host, user, pswd, table, port, NULL, 0)) {

        cout << "connect success!" << endl;
    }
    else {
        cout << "connect failed!" << endl;
    }

    mysql_close(&con);//¶Ï¿ªÁ¬½Ó
    system("pause");
    return 0;

}