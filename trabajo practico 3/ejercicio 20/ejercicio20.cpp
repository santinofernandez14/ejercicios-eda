/*



Una empresa necesita el registro tanto de sus Empleados, como de sus Clientes, de ambos requiere los datos de su domicilio Ej. provincia en que viven, el barrio, la calle, y altura, si esEdificio o no. Además de sus empleados guardamos el legajo, su puesto, y su sueldo. Plantearlo con estructuras anidadas, si además tenemos del Cliente el nombre, correo, teléfono, y domicilio de residencia. Luego CARGAR arreglos de 10 clientes y 5 empleados. Luego Mostrar en consola:
a.    Donde viven los 10 clientes, y su nombre.
b.    Datos de los Empleados con sueldos de más de $50000
c.     Correo y teléfono, de clientes que viven en edificio
d.    Datos de los Empleados con puesto de vendedor
e.    Reemplazar el nro. de legajo, por un registro: nroLegajo, nombre, apellido, y antigüedad*/

#include <stdio.h>
#include <string.h>

// Estructura para representar el domicilio
typedef struct
{
    char provincia[50];
    char barrio[50];
    char calle[100];
    int altura;
    int esEdificio; // 1 si vive en edificio, 0 si no
} Domicilio;

// Estructura para representar a los empleados
typedef struct
{
    int nroLegajo;
    char nombre[50];
    char apellido[50];
    int antiguedad;
    char puesto[50];
    float sueldo;
    Domicilio domicilio;
} Empleado;

// Estructura para representar a los clientes
typedef struct
{
    char nombre[50];
    char correo[100];
    char telefono[15];
    Domicilio domicilio;
} Cliente;

// Función para cargar los datos de un empleado
void cargarEmpleado(Empleado *empleado)
{
    printf("Ingrese el numero de legajo: ");
    scanf("%d", &empleado->nroLegajo);
    while (getchar() != '\n')
        ; // Limpiar el buffer del teclado

    printf("Ingrese el nombre del empleado: ");
    fgets(empleado->nombre, sizeof(empleado->nombre), stdin);
    empleado->nombre[strcspn(empleado->nombre, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese el apellido del empleado: ");
    fgets(empleado->apellido, sizeof(empleado->apellido), stdin);
    empleado->apellido[strcspn(empleado->apellido, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese la antiguedad del empleado (en anios): ");
    scanf("%d", &empleado->antiguedad);
    while (getchar() != '\n')
        ; // Limpiar el buffer del teclado

    printf("Ingrese el puesto del empleado: ");
    fgets(empleado->puesto, sizeof(empleado->puesto), stdin);
    empleado->puesto[strcspn(empleado->puesto, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &empleado->sueldo);
    while (getchar() != '\n')
        ; // Limpiar el buffer del teclado

    printf("Ingrese la provincia donde vive el empleado: ");
    fgets(empleado->domicilio.provincia, sizeof(empleado->domicilio.provincia), stdin);
    empleado->domicilio.provincia[strcspn(empleado->domicilio.provincia, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese el barrio donde vive el empleado: ");
    fgets(empleado->domicilio.barrio, sizeof(empleado->domicilio.barrio), stdin);
    empleado->domicilio.barrio[strcspn(empleado->domicilio.barrio, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese la calle donde vive el empleado: ");
    fgets(empleado->domicilio.calle, sizeof(empleado->domicilio.calle), stdin);
    empleado->domicilio.calle[strcspn(empleado->domicilio.calle, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese la altura donde vive el empleado: ");
    scanf("%d", &empleado->domicilio.altura);
    while (getchar() != '\n')
        ; // Limpiar el buffer del teclado

    printf(" Vive en edificio  (1 para Si, 0 para No): ");
    scanf("%d", &empleado->domicilio.esEdificio);
    while (getchar() != '\n')
        ; // Limpiar el buffer del teclado
}

// Función para cargar los datos de un cliente
void cargarCliente(Cliente *cliente)
{
    printf("Ingrese el nombre del cliente: ");
    fgets(cliente->nombre, sizeof(cliente->nombre), stdin);
    cliente->nombre[strcspn(cliente->nombre, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese el correo del cliente: ");
    fgets(cliente->correo, sizeof(cliente->correo), stdin);
    cliente->correo[strcspn(cliente->correo, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese el telefono del cliente: ");
    fgets(cliente->telefono, sizeof(cliente->telefono), stdin);
    cliente->telefono[strcspn(cliente->telefono, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese la provincia donde vive el cliente: ");
    fgets(cliente->domicilio.provincia, sizeof(cliente->domicilio.provincia), stdin);
    cliente->domicilio.provincia[strcspn(cliente->domicilio.provincia, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese el barrio donde vive el cliente: ");
    fgets(cliente->domicilio.barrio, sizeof(cliente->domicilio.barrio), stdin);
    cliente->domicilio.barrio[strcspn(cliente->domicilio.barrio, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese la calle donde vive el cliente: ");
    fgets(cliente->domicilio.calle, sizeof(cliente->domicilio.calle), stdin);
    cliente->domicilio.calle[strcspn(cliente->domicilio.calle, "\n")] = 0; // Eliminar el carácter de nueva línea

    printf("Ingrese la altura donde vive el cliente: ");
    scanf("%d", &cliente->domicilio.altura);
    while (getchar() != '\n')
        ; // Limpiar el buffer del teclado

    printf(" Vive en edificio (1 para Si, 0 para No): ");
    scanf("%d", &cliente->domicilio.esEdificio);
    while (getchar() != '\n')
        ; // Limpiar el buffer del teclado
}

int main()
{
    // Arreglos para almacenar clientes y empleados
    Cliente clientes[10];
    Empleado empleados[5];

    // Cargar datos de empleados
    printf("Cargar datos de empleados:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Empleado %d:\n", i + 1);
        cargarEmpleado(&empleados[i]);
    }

    // Cargar datos de clientes
    printf("\nCargar datos de clientes:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Cliente %d:\n", i + 1);
        cargarCliente(&clientes[i]);
    }

    // Mostrar donde viven los clientes y su nombre
    printf("\na. Donde viven los 10 clientes, y su nombre:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Cliente %d: %s, %s\n", i + 1, clientes[i].nombre, clientes[i].domicilio.provincia);
    }

    // Mostrar datos de empleados con sueldos de más de $50000
    printf("\nb. Datos de los Empleados con sueldos de mas de $50000:\n");
    for (int i = 0; i < 5; i++)
    {
        if (empleados[i].sueldo > 50000)
        {
            printf("Empleado %d: %s %s, Sueldo: %.2f\n", i + 1, empleados[i].nombre, empleados[i].apellido, empleados[i].sueldo);
        }
    }

    // Mostrar correo y teléfono de clientes que viven en edificio
    printf("\nc. Correo y telefono de clientes que viven en edificio:\n");
    for (int i = 0; i < 10; i++)
    {
        if (clientes[i].domicilio.esEdificio == 1)
        {
            printf("Cliente %d: Correo: %s, Telefono: %s\n", i + 1, clientes[i].correo, clientes[i].telefono);
        }
    }

    // Mostrar datos de empleados con puesto de vendedor
    printf("\nd. Datos de los Empleados con puesto de vendedor:\n");
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(empleados[i].puesto, "vendedor") == 0)
        {
            printf("Empleado %d: %s %s, Puesto: %s\n", i + 1, empleados[i].nombre, empleados[i].apellido, empleados[i].puesto);
        }
    }

    // Reemplazar el número de legajo por un registro: nroLegajo, nombre, apellido y antigüedad
    printf("\ne. Reemplazar el numero de legajo por un registro: nroLegajo, nombre, apellido y antiguedad:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Empleado %d: nroLegajo: %d, Nombre: %s, Apellido: %s, Antiguedad: %d\n", i + 1, empleados[i].nroLegajo, empleados[i].nombre, empleados[i].apellido, empleados[i].antiguedad);
    }

    return 0;
}
