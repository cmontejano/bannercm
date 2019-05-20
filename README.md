** BANNER **
Este programa permite al usuario introducir un texto y mostrarlo en forma de banner.

Cuando ejecutamos el programa nos encontraremos con el menú principal. Pulsando cada opción accederemos a las diferentes funcionalidades. A continuación las opciones del menú:
1. Diseñar tipografía
2. Almacenar tipografía en disco
3. Cargar tipográfia desde disco
4. Importar tipografía
5. Exportar tipografía
6. Mostrar banner
7. Salir

** 1. Diseñar tipografía **

Para esta opción emplearemos la siguiente función:
Tipografia diseñartipografia(Tipografia tipografiabase);

Con esta opción podemos cambiar la tipografía de las letras, ya que por defecto, es la siguiente:

struct Tipografia tipografia={'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'};

Te pedirá letra que deseas modificar y la tipografía que desees.

** 2. Almacenar tipografía en disco **

Para esta opción emplearemos la siguiente función:
int almacenartipografia(Tipografia tipografia,int exit);

Los cambios realizados en la opción 1 podemos guardarlos en un fichero: "ALMACENARTIP.TXT".

** 3. Cargar tipográfia desde disco **

Para esta opción emplearemos la siguiente función:
Tipografia cargartipografia(Tipografia tipografia);

Previamente introduciremos en el fichero "CARGARTIP.TXT" la tipográfia que deseemos para cada letra, es decir, si metemos: @ $ (una debajo de otra) y luego mostramos el banner con la siguiente cadena: ab aparecerá la letra a con @ y la letra b con $

** 4. Importar tipografía **

Para esta opción emplearemos la siguiente función:
Tipografia importartipografia(Tipografia tipografia);

Previamente introduciremos en el fichero "IMPORTARTIP.TXT" la tipográfia que deseemos para TODAS las letras. 

** 5. Exportar tipografía **

Para esta opción emplearemos la siguiente función:
int exportartipografia(Tipografia tipografia,int exit);

Esta opción sirve para guardar la tipografía actual (guarda todos los cambios que se hayan realizado en la estructura: tipografia). Esta tipografía la guardaremos en "EXPORTARTIP.TXT"

** 6. Mostrar banner **

Para esta opción emplearemos la siguiente función:
void mostrarbanner(Tipografia tipografia);

Esta opción nos pide una cadena de carácteres y nos la muestra con la tipografía que tengamos diseñada hasta el momento.


** 7. Salir **

Con esta opción salimos del programa. No preguntará siempre antes de salir si queremos almacenar y exportar la tipografía.

