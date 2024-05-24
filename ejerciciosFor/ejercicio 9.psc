Proceso ejercicio9
	Definir MAX Como Entero;
	MAX <- 3;
	Dimension matriz1[3,3], matriz2[3,3], matrizResultante[3,3];
	Definir w, j, mult, matriz1, matriz2, matrizResultante Como Entero;
	
	Para w <- 0 hasta MAX - 1 Con Paso 1 hacer
		para j <- 0 hasta MAX - 1 Con Paso 1 Hacer
			Escribir "Ingresa un numero, fila ", w + 1, ", columna ", j+1, ": ";
			Leer matriz1[w,j];
		FinPara
	FinPara
	
	Para w <- 0 hasta MAX - 1 Con Paso 1 hacer
		para j <- 0 hasta MAX - 1 Con Paso 1 Hacer
			Escribir "Ingresa un numero, fila ", w + 1, ", columna ", j+1, ": ";
			Leer matriz2[w,j];
		FinPara
	FinPara
	
	Para w <- 0 hasta MAX - 1 Con Paso 1 hacer
		para j <- 0 hasta MAX - 1 Con Paso 1 Hacer
			matrizResultante[w,j] <- matriz1[w,j] * matriz1[w,j];
		FinPara
	FinPara
	
	Para w <- 0 hasta MAX - 1 Con Paso 1 hacer
		para j <- 0 hasta MAX - 1 Con Paso 1 Hacer
			Escribir matrizResultante[w,j];
		FinPara
	FinPara
	
FinProceso
