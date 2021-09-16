//
// @author
// copyright
// nombre del proyecto
// creacion - fecha
//
// DOXYGEN -- Programa que extrae comentarios de documentacion a comentarios de desarrollo

	/**
	@brief --> Es lo que se pondria en la seccion que siempre se ve, el resto se comprime
	
	*/

#include <string>
namespace xxxx
{
	// Cada clase necesita explicacion de que hace o que sirve
	// se pueden poner etiquetas usando doxygen @brief
	class Sprite
	{

	// Todos los miembros publicos se comentan
	public:

		int width; ///< significa que lo esta apuntando el comentario es la variable de la izda
		
		/// Este metodo...
		/// Hay etiquetas para parametros y tipo de retorno
		/// @param data y explicas aqui lo que hace
		/// @return y aqui explicas que es lo que retorna y que significa
		bool initialize (const std::string& data);

	
	/// Recomendacion de comentar los miembros privados
	
	};

}