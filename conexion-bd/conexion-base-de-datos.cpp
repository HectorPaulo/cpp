#include <mysql/mysql.h>
#include <iostream>

int main()
{
    //--> Configuración de la conexión
    const char *host = "localhost";
    const char *user = "tu_usuario";
    const char *password = "tu_contraseña";
    const char *database = "tu_base_de_datos";

    // --> Objeto conexión
    MYSQL *conn;
    conn = mysql_init(NULL);

    if (!mysql_real_connect(conn, host, user, password, database, 0, NULL, 0))
    {
        std::cerr << "Error al conectar a la base de datos: " << mysql_error(conn) << std::endl;
        return 1;
    }

    // --> consulta
    const char *query = "SELECT * FROM tu_tabla";
    if (mysql_query(conn, query))
    {
        std::cerr << "Error al ejecutar la consulta: " << mysql_error(conn) << std::endl;
        return 1;
    }

    MYSQL_RES *res;
    res = mysql_store_result(conn);
    if (!res)
    {
        std::cerr << "Error al obtener los resultados: " << mysql_error(conn) << std::endl;
        return 1;
    }

    MYSQL_ROW row;
    while ((row = mysql_fetch_row(res)))
    {
        std::cout << row[0] << " " << row[1] << std::endl;
    }

    //--> Cerrar conexión
    mysql_close(conn);
    return 0;
}