Proceso ejercicio1
	Definir n, suma, i como Entero;
	Escribir "¿Hasta qué número quiere sumar?";
	Leer n;
	
	Si n < 1 Entonces
		Escribir "ERROR: el número ingresado no es un número natural";
	Sino
		suma <- 0;
		Para i <- 1 Hasta n Con Paso 1 Hacer
			suma <- suma + i;
		FinPara
		Escribir "La suma de los números naturales de 1 hasta ", n, " es ", suma;
	FinSi
FinProceso
 
