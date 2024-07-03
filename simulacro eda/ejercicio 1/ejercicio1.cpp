#include <iostream>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;

struct Hormiga
{
    string tipo;
    float tamano;
    bool tieneHoja;
};

void crearHormiga(Hormiga &hormiga)
{
    cout << "Ingrese el tipo de hormiga (r para recolectora, e para excavadora, c para criadora): ";
    char tipo;
    cin >> tipo;
    switch (tipo)
    {
    case 'r':
        hormiga.tipo = "recolectora";
        break;
    case 'e':
        hormiga.tipo = "excavadora";
        break;
    case 'c':
        hormiga.tipo = "criadora";
        break;
    default:
        cout << "Tipo invalido. Asignando 'desconocido'.\n";
        hormiga.tipo = "desconocido";
        break;
    }
    cout << "Ingrese el tamanio de la hormiga: ";
    cin.ignore();
    char opcionStr[10];
    cin.getline(opcionStr, 10);
    hormiga.tamano = atof(opcionStr);

    cout << "La hormiga tiene una hoja?? (1 para si, 0 para no): ";
    cin >> hormiga.tieneHoja;
}

void mostrarHormiga(const Hormiga &hormiga)
{
    cout << "Tipo: " << hormiga.tipo << ", Tamanio: " << hormiga.tamano << ", Tiene hoja: " << (hormiga.tieneHoja ? "Si" : "No") << endl;
}

queue<Hormiga> senderoA;
queue<Hormiga> senderoB;
queue<Hormiga> senderoC;
vector<Hormiga> hormigasTemporales;

void cargarHormigasASenderoA()
{
    for (size_t i = 0; i < hormigasTemporales.size(); ++i)
    {
        senderoA.push(hormigasTemporales[i]);
    }
    hormigasTemporales.clear();
    cout << "Hormigas cargadas en sendero A:\n";
    queue<Hormiga> tempQueue = senderoA;
    while (!tempQueue.empty())
    {
        mostrarHormiga(tempQueue.front());
        tempQueue.pop();
    }
    cout << endl;
}

void derivarASenderoBorC()
{
    if (!senderoA.empty())
    {
        cout << "Hormigas derivadas:\n";
        while (!senderoA.empty())
        {
            Hormiga hormiga = senderoA.front();
            senderoA.pop();
            if (hormiga.tipo == "recolectora" && hormiga.tieneHoja)
            {
                senderoB.push(hormiga);
                cout << "Hormiga movida a sendero B.\n";
            }
            else
            {
                senderoC.push(hormiga);
                cout << "Hormiga movida a sendero C.\n";
            }
        }
        cout << endl;
        cout << "Sendero B (con hojas):\n";
        queue<Hormiga> tempQueueB = senderoB;
        while (!tempQueueB.empty())
        {
            mostrarHormiga(tempQueueB.front());
            tempQueueB.pop();
        }
        cout << endl;
        cout << "Sendero C (sin hojas):\n";
        queue<Hormiga> tempQueueC = senderoC;
        while (!tempQueueC.empty())
        {
            mostrarHormiga(tempQueueC.front());
            tempQueueC.pop();
        }
    }
    else
    {
        cout << "No hay hormigas en el sendero A para derivar." << endl;
        cout << endl;
    }
}

void quitarHojaYRegresarASenderoA()
{
    if (!senderoB.empty())
    {
        Hormiga hormiga = senderoB.front();
        senderoB.pop();
        hormiga.tieneHoja = false;
        senderoA.push(hormiga);
        cout << "Hormiga regresada a sendero A sin hoja: ";
        mostrarHormiga(hormiga);
        cout << endl;
    }
    else
    {
        cout << "No hay hormigas en el sendero B para regresar." << endl;
        cout << endl;
    }
}

void mostrarYVaciarSenderoC()
{
    cout << "Mostrando y vaciando sendero C:\n";
    while (!senderoC.empty())
    {
        mostrarHormiga(senderoC.front());
        senderoC.pop();
    }
    cout << "Sendero C esta vacio.\n";
    cout << endl;
}

int main()
{

    int opcion;

    do
    {
        cout << endl;
        cout << "Menu de opciones:\n";
        cout << "1. Crear hormiga\n";
        cout << "2. Cargar hormigas en sendero A\n";
        cout << "3. Derivar a sendero B o C\n";
        cout << "4. Quitar hoja, regresar de sendero B a A\n";
        cout << "5. Mostrar y vaciar sendero C\n";
        cout << "6. Salir\n";
        cout << "     Ingrese una opcion: ";

        char opcionStr[10];
        cin.getline(opcionStr, 10);
        opcion = atoi(opcionStr);

        cout << endl;

        switch (opcion)
        {
        case 1:
        {
            Hormiga nuevaHormiga;
            crearHormiga(nuevaHormiga);
            hormigasTemporales.push_back(nuevaHormiga);
            cout << "Hormiga creada y almacenada temporalmente.\n";
        }
        break;
        case 2:
            cargarHormigasASenderoA();
            break;
        case 3:
            derivarASenderoBorC();
            break;
        case 4:
            quitarHojaYRegresarASenderoA();
            break;
        case 5:
            mostrarYVaciarSenderoC();
            break;
        case 6:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion invalida, intente de nuevo.\n";
            cout << endl;
        }
    } while (opcion != 6);

    return 0;
}
