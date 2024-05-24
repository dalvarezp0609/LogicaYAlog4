Proceso ejercicio4
	
	//Declaracion
	Dimension notas[10];
	Definir suma Como Real;
	Definir promedio Como Real;
	Definir notas Como Entero;
	Definir w Como Entero;
	
	//Proceso
	suma <- 0;
	para w <- 0 hasta 9 Con Paso 1 Hacer
		Escribir "Agrega la nota del estudiante ", w+1, " : ";
		leer notas[w];
		suma <- suma + notas[w];
	FinPara
	
	//Salida
	promedio <- suma / 10;
	Escribir "El promedio es de: ", promedio;
FinProceso
