Proceso ejercicio5
	
	//Declaracion
	Dimensionar notas[8];
	Definir suma, promedio Como Real;
	Definir notas, w, aprobados, reprobados como entero;
	
	
	//Proceso
	suma <-0;
	aprobados <- 0;
	reprobados <- 0;
	para w <- 0 hasta 7 Con Paso 1 Hacer
		Escribir "Ingrese la nota del estudiante ", w+1, " : ";
		leer notas[w];
	FinPara
	
	
	para w <- 0 hasta 7 con paso 1 Hacer
		si notas[w] >= 70 Entonces
			aprobados <- aprobados + 1;
		sino 
			reprobados <- reprobados + 1;
		FinSi
	FinPara
	
	
	Para w <- 0 Hasta 7 Con Paso 1 Hacer
		suma <- suma + notas[w];
	FinPara
	
	
	//Salida
	promedio <- suma / 8;
	Escribir "Alumnos aprobados: ", aprobados;
	Escribir "Alumnos reprobados: ", reprobados;
	Escribir "El promedio es de: ", promedio;
	
FinAlgoritmo

	
