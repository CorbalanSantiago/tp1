# tp1

# Ejercicio 2: .gitignore

- **¿Qué es?** Es un archivo que le dice a Git qué archivos o carpetas debe ignorar.

- **¿Por qué conviene usarlo?** Para no subir archivos innecesarios como los ejecutables (.exe) o carpetas temporales, manteniendo el repositorio limpio.

- **¿Cuándo se realiza?** Se recomienda crearlo al inicio del proyecto.

- **¿Cómo configuraría el archivo .gitignore?** creando un archivo de texto plano en la raíz del repositorio llamado .gitignore. Dentro de él, se escribe una lista de nombres de archivos o extensiones que Git debe ignorar. Se pueden usar comodines como el asterisco (*) para ignorar todos los archivos de un mismo tipo (por ejemplo, *.exe para no subir ejecutables de C) o nombres de carpetas específicos (como .vscode/). Cada regla debe ir en una línea distinta. 

# Ejercicio 3

### Codigo Misterioso

- **invertir (antes f_alpha):** Al debuguear vi que toma el número (452) y usa el resto (% 10) y la división para darlo vuelta dígito por dígito, transformándolo en 254.

- **mitad(antes f_beta):** Al debuguear vi que divide el valor apuntado por 2.

- **agregar_Suma_Digitos:** Al debuguear vi que toma los digitos del numero actual uno por uno y los suma (1+2+7=10) y luego ese valor lo suma con el numero actual (127+10=137).

- **logica del programa:** realiza una secuencia de transformaciones numéricas usando punteros para modificar el valor original en cada paso.

### codigo sin funcionar

**errores**

- falto incluir la biblioteca <stdio.h>.
- falto ';' al final de la linea 17 y en el return 0.
- faltaba el operador de direccion & antes de la variable valor 1 en la funcion scanf.
- La función duplicar_numero recibía una copia de la variable, por lo que el cambio no se veia en el main.

**soluciones**

- incluir la bibilioteca al inicio del codigo.
- poner los respectivos ';'.
- poner el operador de direccion en el primer scanf del valor 1.
- transforme la función para que reciba un puntero (int *numero). De esta manera, la función accede directamente a la dirección de memoria de la variable original y modificar su valor de forma permanente.

# ejercicio 4

en el archivo tp1_1.c se muestra el valor de la direccion de memoria almacenada por un puntero y el valor de la direccion de memoria de la variable, y se puede ver que son el mismo valor, esto se debe a que la variable puntero apunta a la direccion de memoria de la variable por lo tanto esa es la informacion que almacena el puntero por eso es el mismo valor. Y despues tambien se muestra el valor de la direccion de memoria de la variable de tipo puntero, y se ve que es diferente a los otros dos valores, esto se debe a que como el puntero es otro tipo de variable entonces tambien tiene su propia direccion de memoria y por eso es diferente.