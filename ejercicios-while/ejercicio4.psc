Proceso ejercicio4
	Definir numest, sumanota, promedio, nota, i Como Real;
	sumanota<-0;
	numest<-10;
	i<-0;
	Mientras i < numest Hacer
		Escribir "Ingrese la nota del estudiante";
		Leer nota;
		sumanota <- sumanota + nota;
		i <- i + 1;
	FinMientras
	
	promedio <- sumanota / numest;
	Escribir "El promedio general del curso es: ", promedio;
FinProceso