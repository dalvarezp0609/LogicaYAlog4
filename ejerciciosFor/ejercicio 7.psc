Proceso ejercicio7
	Dimension vector1[100], vector2[100], suma[100];
	Definir long, w, vector1, vector2, suma Como Entero;
	
	Escribir "Ingrese la longitud: ";
	leer long;
	
	Escribir "Ingrese los elementos del primer vector: ";
	Para w <- 0 Hasta long - 1 Con Paso 1 Hacer
		leer vector1[w];
	FinPara
	
	Escribir "Ingrese los elementos del segundo vector: ";
	Para w <- 0 Hasta long - 1 Con Paso 1 Hacer
		leer vector2[w];
	FinPara
	
	Para w <- 0 Hasta long - 1 Con Paso 1 Hacer
		suma[w] <- vector1[w] + vector2[w];
	FinPara
	
	Escribir "La suma de los vectores es: ";
	Para w <- 0 Hasta long - 1 Con Paso 1 Hacer
		Escribir suma[w], " ";
	FinPara
	
FinProceso
