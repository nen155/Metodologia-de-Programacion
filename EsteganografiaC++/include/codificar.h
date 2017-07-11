/**
  * @file codificar.h
  * @brief Fichero cabecera para la codificación de un mensaje en imágenes
  *
  * Permite la E/S de archivos de tipos PGM,PPM
  *
  */

#ifndef _CODIFICAR_H_
#define _CODIFICAR_H_

/**
  * @brief Función Ocultar mensaje en Imagen
  *
  * Recibe como entrada dos parámetros, uno con la imagen (un
  * vector de bytes) y otro con el mensaje a insertar (una cadena-C). Esta función insertará
  * el mensaje en la imagen.
  * @param Vector de bytes que contiene la imagen.
  * @param Mensaje a ocultar en la imagen.
  * @param columnas Parámetro de salida con las columnas de la imagen.. 
  * @return si ha  tenido éxito en la ocultación.
  *
  * @see ocultar
  */
void ocultar(unsigned char imagen[],char mensaje[]);

/**
  * @brief Función Ocultar mensaje en Imagen
  *
  * Recibe como entrada dos parámetros, uno con la imagen (un
  * vector de bytes) y otro con la cadena-C que se modificará para introducir
  * el mensaje.
  * @param Vector de bytes que contiene la imagen.
  * @param Cadena de caracteres a modificar con el mensaje de la imagen.
  * @param columnas Parámetro de salida con las columnas de la imagen.. 
  * @return si ha  tenido éxito en la revelación.
  *
  * @see ocultar
  */
void revelar(unsigned char imagen[],char mensajeRevelado[]);

#endif
