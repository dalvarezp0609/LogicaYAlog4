Proceso Ejercio1
    Definir n, suma, i Como Entero;
	
    Escribir "Hasta qu� n�mero deseas sumar?";
    Leer n;
	
    Si n < 0 Entonces
        Escribir "ERROR. El n�mero ingresado no es un n�mero natural";
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
