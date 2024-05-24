Proceso Ejercio1
    Definir n, suma, i Como Entero;
	
    Escribir "Hasta qué número deseas sumar?";
    Leer n;
	
    Si n < 0 Entonces
        Escribir "ERROR. El número ingresado no es un número natural";
    Sino
        suma <- 0;
        i <- 1;
        Mientras i <= n Hacer
            suma <- suma + i;
            i <- i + 1;
        FinMientras
        Escribir "La suma es:", suma;
    FinSi
FinProceso
