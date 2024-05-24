Proceso ejercicio8
	Dimension vector1[100], vector2[100];
	Definir long, w, vector1, vector2, resultado Como Entero;
	
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
	
	resultado <- 0;
	Para w <- 0 Hasta long - 1 Con Paso 1 Hacer
		resultado <- resultado + (vector1[w] * vector2[w]);
	FinPara
	
	Escribir "El prodcuto putno de los vectores es de: ", resultado;
	
FinProceso
