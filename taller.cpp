#include "taller.h"

// ACLARACION: Todas las funciones devuelven algo del tipo necesario, esto es 
// para que no explote cuando vayan compilando (y de paso para que no se olviden
//de devolver el tipo correcto)

// En algunos casos hay funciones de stl de c++ que ya resuelven cada ejercicio.
// Obviamente no vale utilizarlas para resolver

// En algunos casos es posible usar objetos iteradores que simplifican algunas
// operaciones. Es posible utilizarlos pero consultenme para chequear 

// Ejercicio 0
// Dado un vector v, devuelve el valor maximo encontrado.
// HINT: Para saber la cantidad de elementos de un vector, usar v.size()

int mayor(const vector<int>& v)
{
	int max = v[0];
	for (int i; i < v.size(); i++){
		if (max < v[i]){
			max = v[i];
		}
	}
	return max;
}

// Ejercicio 1 
// Dado un vector v, devuelve el reverso.
// Se puede hacer en una línea usando iteradores (en este caso no vale usarlos)

vector<int> reverso(const vector<int>& v)
{
	// Inicializo un vector vacío
	vector<int> reverso;
	
	for (int i; i < v.size(); i++){
		reverso.push_back(v[v.size()-i]);
	}
	// COMPLETAR
	return reverso;
}

// Ejercicio 2
// Dado un vector v y un entero k, rotar k posiciones los elementos de v.
// [1,2,3,4,5,6] rotado 2, deberia dar [3,4,5,6,1,2].
vector<int> rotar(const vector<int>& v, int k)
{
	// Inicializo un vector vacío
	vector<int> rotado(v.size(), 0);
	int temp = k;
	for (int i=0; i < v.size(); i++){
		if (i < k){
			rotado[v.size()-temp]=v[i];
			cout<< v[i]<< endl;
			temp-=1;
		}
		else{
			
			rotado[i-k]=v[i];
		}
	}
	// COMPLETAR
	for (int x=0; x< v.size();x++){
		cout<<v[x];
	}
	cout<<""<<endl;

	for (int x=0; x< rotado.size();x++){
		cout<<rotado[x];
	}
	cout<<""<<endl;

	return rotado;
}

// Ejercicio 3
// Dado un vector v, hacer una función que lo modifique sumandole uno a todos 
// sus elementos. RECORDAR determinar la cabecera de la funcion y definir
// la misma en  taller.h !!

// COMPLETAR

// Ejercicio 4
// Dado un vector, dice si esta ordenado crecientemente o decrecientemente
bool estaOrdenado(const vector<int>& v)
{
	int mayor = 0;
	int menor = 0;
	// COMPLETAR
	for(int i = 0; i <= v.size()-1; i++){
		if (v[i] < v[i+1]){
			mayor+=1;
		}
		else if(v[i] > v[i+1]){
			menor += 1;
		}
	}
	if ((mayor == v.size()) or (menor == v.size())){
		return true;
	}
	else{
		return false;
	}
}

// Ejercicio 5
// Dado un vector de enteros, lo muestra por la salida estándar (consola)
// Ej: si el vector es <1, 2, 5, 65> se debe mostrar en pantalla [1, 2, 5, 65]

// HINT: Esta función es general, out es del tipo de dato ostream. 
// Eso significa que el parametro out puede ser cou o bien podrías ser un 
// archivo de texto instancia de ofstream (que hereda de ostream).
// En cualquier caso puedo usar el operador << para escribir.

void mostrarVector(const vector<int>& v, ostream& out)
{
	out <<"[";
	for(int i = 0; i< v.size();i++){
		out << v[i];
		if(i != v.size()-1){
			out << ", ";
		}
	}
	out << "]";
	out<< "\n" ;

	// COMPLETAR
	return;
}

// Ejercicio 6 
// Dado un vector de enteros y el nombre de un archivo de salida,
// escribe al vector en el archivo. Ejemplo: si el vector es <1, 2, 5, 65>
// el archivo contiene [1, 2, 5, 65]
// Ojo con el constructor de ofstream. 
// Es importante hacer la conversion del string a char* usando c_str().
// HINT: Reutilizar la función anterior!
  
void guardarVector(const vector<int>& v, string nombreArchivo)
{
	// Abro un archivo con el nombre dado por parámetros (c_str() convierte 
	// string a un "string" de C)
   ofstream file(nombreArchivo.c_str()); 
   if(file.is_open())
   {
   		//Escribir en el archivo todo el vector (HINT: Ver función anterior)
   		// COMPLETAR

   		// Cerrar archivo
   		// COMPLETAR
   }
   return;
}


//Ejercicio 7 
// Dado un archivo que contiene una lista de números, contar la cantidad de
// apariciones de cada uno y escribir nombreArchivoOut con una linea por cada
// numero encontrado, un espacio y la cantidad de apariciones.
// El parametro max indica el número más grande que puede aparecer en el archivo
// Ejemplo: si el 1 aparece 44 veces y el 2 20 veces (y no hay otros numeros)
// en la salida deberia haber dos lineas, "1 44" y la segunda "2 20"

void cantidadApariciones(string nombreArchivo, string nombreArchivoOut,int max)
{
	// Abro archivo para lectura
	ifstream fileIn(nombreArchivo.c_str());

	// Abro archivo para escriture
    ofstream fileOut(nombreArchivoOut.c_str());

    // COMPLETAR
    
	return;    
}


//Ejercicio 8 (opcional)
//Dado el nombre de archivo, lo filtra y devuelve los palindromos en el archivo
//  salida, uno por linea.
void palindromos(string nombreArchivo, string nombreArchivoOut)
{
	return;	
}
