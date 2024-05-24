Algoritmo ejercicio6
    Definir suma, i Como Entero;
    suma <- 0;
    i <- 100;
	
    Mientras i <= 200 Hacer
        Si i MOD 2 = 0 Entonces
            Escribir i;
            suma <- suma + i;
        Fin Si
        i <- i + 1;
    Fin Mientras
	
    Escribir "La suma de los números pares entre 100 y 200: ", suma;
FinAlgoritmo
