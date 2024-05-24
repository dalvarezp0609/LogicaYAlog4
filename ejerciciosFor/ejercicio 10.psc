Proceso ejercicio10
	Dimension matriz[3,3];
	definir w, j, matriz como entero;
	
	Para w <- 0 hasta 3 - 1 Con Paso 1 hacer
		para j <- 0 hasta 3 - 1 Con Paso 1 Hacer
			Escribir "Ingresa un numero, fila ", w + 1, ", columna ", j+1, ": ";
			Leer matriz[w,j];
		FinPara
	FinPara
	
	Para w <- 0 hasta 3 - 1 Con Paso 1 hacer
		para j <- 0 hasta 3 - 1 Con Paso 1 Hacer
			Escribir  matriz[j,w];
		FinPara
		Escribir "";
	FinPara
	
	
FinProceso
