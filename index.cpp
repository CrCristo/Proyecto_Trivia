#include <iostream>
#include <stdlib.h>
using namespace std;

class Pregunta {
public:
    string enunciado;
    string opciones[4];
    char respuestaCorrecta;

    Pregunta(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : enunciado(enunciado), respuestaCorrecta(respuestaCorrecta) {
        opciones[0] = a;
        opciones[1] = b;
        opciones[2] = c;
        opciones[3] = d;
    }

    virtual int getPuntos() const = 0;

    virtual ~Pregunta() {}
};

class Historia : public Pregunta {
public:
    Historia(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : Pregunta(enunciado, a, b, c, d, respuestaCorrecta) {}

    int getPuntos() const override {
        return 45;
    }
};

class Filosofia : public Pregunta {
public:
    Filosofia(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : Pregunta(enunciado, a, b, c, d, respuestaCorrecta) {}

    int getPuntos() const override {
        return 15;
    }
};

class Quimica : public Pregunta {
public:
    Quimica(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : Pregunta(enunciado, a, b, c, d, respuestaCorrecta) {}

    int getPuntos() const override {
        return 20;
    }
};

class ArteCine : public Pregunta {
public:
    ArteCine(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : Pregunta(enunciado, a, b, c, d, respuestaCorrecta) {}

    int getPuntos() const override {
        return 30;
    }
};

class Geografia : public Pregunta {
public:
    Geografia(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : Pregunta(enunciado, a, b, c, d, respuestaCorrecta) {}

    int getPuntos() const override {
        return 35;
    }
};

class Juego {
private:
    Pregunta* preguntas[75];
    int vidas;
    int puntaje;

public:
    Juego() : vidas(3), puntaje(0) {


// Preguntas de Historia
        preguntas[0] = new Historia("En que año comenzo la Revolucion Francesa?", "a) 1776", "b) 1789", "c) 1804", "d) 1830", 'b');
        preguntas[1] = new Historia("¿Quién fue el líder de la Revolución Rusa en 1917?","a) Joseph Stalin", "b) Vladimir Lenin", "c) Leon Trotsky","d) Mikhail Gorbachev", 'b');
        preguntas[2] = new Historia(/*...*/);
        preguntas[3] = new Historia(/*...*/);
        preguntas[4] = new Historia(/*...*/);
        preguntas[5] = new Historia(/*...*/);
        preguntas[6] = new Historia(/*...*/);
        preguntas[7] = new Historia(/*...*/);
        preguntas[8] = new Historia(/*...*/);
        preguntas[9] = new Historia(/*...*/);
        preguntas[10] = new Historia(/*...*/);
        preguntas[11] = new Historia(/*...*/);
        preguntas[12] = new Historia(/*...*/);
        preguntas[13] = new Historia(/*...*/);
        preguntas[14] = new Historia(/*...*/);

        // Preguntas de Filosofía
        preguntas[15] = new Filosofia("A cual de estos filosofos se le atribuye el paso a la filosofia moderna?", "a) John Locke", "b) Arthur Schopenhauer", "c) Rene Descartes", "d) Immanuel Kant", 'c');
        preguntas[16] = new Filosofia(/*...*/);
        preguntas[17] = new Filosofia(/*...*/);
        preguntas[18] = new Filosofia(/*...*/);
        preguntas[19] = new Filosofia(/*...*/);
        preguntas[20] = new Filosofia(/*...*/);
        preguntas[21] = new Filosofia(/*...*/);
        preguntas[22] = new Filosofia(/*...*/);
        preguntas[23] = new Filosofia(/*...*/);
        preguntas[24] = new Filosofia(/*...*/);
        preguntas[25] = new Filosofia(/*...*/);
        preguntas[26] = new Filosofia(/*...*/);
        preguntas[27] = new Filosofia(/*...*/);
        preguntas[28] = new Filosofia(/*...*/);
        preguntas[29] = new Filosofia(/*...*/);
        
       

        // Preguntas de Química
        preguntas[30] = new Quimica("Que es el peso molecular?", "a) Es una propiedad fisica definida como su masa por la unidad de cantidad de sustancia", "b) Ley experimental de los gases que relaciona el volumen de un gas con la cantidad de sustancia del gas presente.", "c) Es la unidad con que se mide la cantidad de sustancia", "d) Es una magnitud fisica y propiedad general de la materia", 'a');
        preguntas[31] = new Quimica(/*...*/);
        preguntas[32] = new Quimica(/*...*/);
        preguntas[33] = new Quimica(/*...*/);
        preguntas[34] = new Quimica(/*...*/);
        preguntas[35] = new Quimica(/*...*/);
        preguntas[36] = new Quimica(/*...*/);
        preguntas[37] = new Quimica(/*...*/);
        preguntas[38] = new Quimica(/*...*/);
        preguntas[39] = new Quimica(/*...*/);
        preguntas[40] = new Quimica(/*...*/);
        preguntas[41] = new Quimica(/*...*/);
        preguntas[42] = new Quimica(/*...*/);
        preguntas[43] = new Quimica(/*...*/);
        preguntas[44] = new Quimica(/*...*/);
      

        // Preguntas de Arte/Cine
        preguntas[45] = new ArteCine("En que anio se estreno la pelicula 'Pulp Fiction'?", "a) 1992", "b) 1994", "c) 1996", "d) 1998", 'b');
        preguntas[46] = new ArteCine(/*...*/);
        preguntas[47] = new ArteCine(/*...*/);
        preguntas[48] = new ArteCine(/*...*/);
        preguntas[49] = new ArteCine(/*...*/);
        preguntas[50] = new ArteCine(/*...*/);
        preguntas[51] = new ArteCine(/*...*/);
        preguntas[52] = new ArteCine(/*...*/);
        preguntas[53] = new ArteCine(/*...*/);
        preguntas[54] = new ArteCine(/*...*/);
        preguntas[55] = new ArteCine(/*...*/);
        preguntas[56] = new ArteCine(/*...*/);
        preguntas[57] = new ArteCine(/*...*/);
        preguntas[58] = new ArteCine(/*...*/);
        preguntas[59] = new ArteCine(/*...*/);
        
        // Preguntas de Geografía
        preguntas[60] = new Geografia("Cual es el rio mas largo del mundo?", "a) Amazonas", "b) Nilo", "c) Yangtse", "d) Ganges", 'b');
        preguntas[61] = new Geografia("¿En qué continente se encuentra la cordillera de los Andes?", "a) África", "b) Asia", "c) América", "d) Europa", 'c');
        preguntas[62] = new Geografia("¿Cuál es la capital de Australia?", "a) Canberra", "b) Sídney", "c) Melbourne", "d) Brisbane", 'a');
        preguntas[63] = new Geografia("¿Cuál es el punto más alto de la Tierra?", "a) Mont Everest", "b) K2", "c) Annapurna", "d) Lhotse", 'a');
        preguntas[64] = new Geografia("¿Cuál es el país más grande del mundo en términos de superficie?", "a) China", "b) Rusia", "c) Estados Unidos", "d) Canadá", 'b');
        preguntas[65] = new Geografia("¿Cuál es el lago más profundo del mundo?", "a) Lago Baikal", "b) Lago Tanganica", "c) Lago Victoria", "d) Lago Superior", 'a');
        preguntas[66] = new Geografia("¿En qué continente se encuentra la Gran Barrera de Coral?", "a) Europa", "b) África", "c) Oceanía", "d) América", 'c');
        preguntas[67] = new Geografia("¿Cuál es la capital de Canadá?", "a) Ottawa", "b) Toronto", "c) Vancouver", "d) Montreal", 'a');
        preguntas[68] = new Geografia("¿En qué océano se encuentra la isla de Madagascar?", "a) Océano Atlántico", "b) Océano Índico", "c) Océano Pacífico", "d) Mar Mediterráneo", 'b');
        preguntas[69] = new Geografia("¿Cuál es el desierto más grande del mundo?", "a) Desierto del Sahara", "b) Desierto de Atacama", "c) Desierto de Gobi", "d) Desierto de Kalahari", 'a');
        preguntas[70] = new Geografia("¿En qué país se encuentra la ciudad de Estambul?", "a) Grecia", "b) Italia", "c) Turquía", "d) Egipto", 'c');
        preguntas[71] = new Geografia("¿Cuál es la isla más grande del mundo?", "a) Groenlandia", "b) Australia", "c) Borneo", "d) Madagascar", 'a');
        preguntas[72] = new Geografia("¿Cuál es el estrecho que separa Europa de África?", "a) Estrecho de Gibraltar", "b) Estrecho de Malaca", "c) Estrecho de Bering", "d) Canal de Suez", 'a');
        preguntas[73] = new Geografia("¿Cuál es la montaña más alta de América del Norte?", "a) Denali (Monte McKinley)", "b) Monte Logan", "c) Pico de Orizaba", "d) Montañas Rocosas", 'a');
        preguntas[74] = new Geografia("¿En qué país se encuentra el archipiélago de las Maldivas?", "a) India", "b) Tailandia", "c) Maldivas", "d) Indonesia", 'c');
       
    }
    ~Juego() {
        for (int i = 0; i < 5; ++i) {
            delete preguntas[i];
        }
    }

    void jugar() {
        srand(time(0));

        cout << "Elige la materia para empezar el juego:\n";
        cout << "a) Historia\nb) Filosofia\nc) Quimica\nd) ArteCine\ne) Geografia\n";
        char eleccionMateria;
        cout << "Tu eleccion: ";
        cin >> eleccionMateria;

        int indiceMateria = -1;

        switch (toupper(eleccionMateria)) {
            case 'A':
                indiceMateria = 0;
                break;
            case 'B':
                indiceMateria = 1;
                break;
            case 'C':
                indiceMateria = 2;
                break;
            case 'D':
                indiceMateria = 3;
                break;
            case 'E':
                indiceMateria = 4;
                break;
            default:
                cout << "Seleccion no valida. Seleccionando Historia por defecto.\n";
                indiceMateria = 0;
                break;
        }

        for (int i = 0; i < 5; ++i) {
            int preguntaActual = (indiceMateria + i) % 5;
            Pregunta* pregunta = preguntas[preguntaActual];

            cout << "\nPregunta " << (i + 1) << ": " << pregunta->enunciado << "\n";
            for (int j = 0; j < 4; ++j) {
                cout << pregunta->opciones[j] << "\n";
            }

            char respuestaUsuario;
            cout << "Tu respuesta: ";
            cin >> respuestaUsuario;

            if (respuestaUsuario == pregunta->respuestaCorrecta) {
                cout << "¡Correcto!\n";
                puntaje += pregunta->getPuntos();
            } else {
                cout << "Incorrecto. La respuesta correcta es: " << pregunta->respuestaCorrecta << "\n";
                --vidas;
                if (vidas == 0) {
                    cout << "Has perdido todas tus vidas. Fin del juego.\n";
                    break;
                }
            }
        }

        cout << "\nFin del juego!\n";
        cout << "Puntaje final: " << puntaje << " puntos\n";
    }
};

int main() {
    Juego juego;
    juego.jugar();

    return 0;
}






#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Pregunta {
public:
    string enunciado;
    string opciones[4];
    char respuestaCorrecta;

    Pregunta(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : enunciado(enunciado), respuestaCorrecta(respuestaCorrecta) {
        opciones[0] = a;
        opciones[1] = b;
        opciones[2] = c;
        opciones[3] = d;
    }

    virtual int getPuntos() const = 0;

    virtual ~Pregunta() {}
};

class Historia : public Pregunta {
public:
    Historia(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : Pregunta(enunciado, a, b, c, d, respuestaCorrecta) {}

    int getPuntos() const override {
        return 45;
    }
};

class Filosofia : public Pregunta {
public:
    Filosofia(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : Pregunta(enunciado, a, b, c, d, respuestaCorrecta) {}

    int getPuntos() const override {
        return 15;
    }
};

class Quimica : public Pregunta {
public:
    Quimica(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : Pregunta(enunciado, a, b, c, d, respuestaCorrecta) {}

    int getPuntos() const override {
        return 20;
    }
};

class ArteCine : public Pregunta {
public:
    ArteCine(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : Pregunta(enunciado, a, b, c, d, respuestaCorrecta) {}

    int getPuntos() const override {
        return 30;
    }
};

class Geografia : public Pregunta {
public:
    Geografia(string enunciado, string a, string b, string c, string d, char respuestaCorrecta)
        : Pregunta(enunciado, a, b, c, d, respuestaCorrecta) {}

    int getPuntos() const override {
        return 35;
    }
};

class Juego {
private:
    Pregunta* preguntas[5];
    int vidas;
    int puntaje;

public:
    Juego() : vidas(3), puntaje(0) {
        preguntas[0] = new Historia("En que año comenzo la Revolucion Francesa?", "a) 1776", "b) 1789", "c) 1804", "d) 1830", 'b');
        preguntas[1] = new Filosofia("A cual de estos filosofos se le atribuye el paso a la filosofia moderna?", "a) John Locke", "b) Arthur Schopenhauer", "c) Rene Descartes", "d) Immanuel Kant", 'c');
        preguntas[2] = new Quimica("Que es el peso molecular?", "a) Es una propiedad fisica definida como su masa por la unidad de cantidad de sustancia", "b) Ley experimental de los gases que relaciona el volumen de un gas con la cantidad de sustancia del gas presente.", "c) Es la unidad con que se mide la cantidad de sustancia.", "d) Es una magnitud fisica y propiedad general de la materia?.", 'a');
        preguntas[3] = new ArteCine("En que año se estreno la pelicula 'Pulp Fiction'?", "a) 1992", "b) 1994", "c) 1996", "d) 1998", 'b');
        preguntas[4] = new Geografia("Cual es el rio mas largo del mundo?", "a) Amazonas", "b) Nilo", "c) Yangtse", "d) Ganges", 'b');
    }

    ~Juego() {
        for (int i = 0; i < 5; ++i) {
            delete preguntas[i];
        }
    }

    void jugar() {
        srand(time(0));

        cout << "Elige la materia para empezar el juego:\n";
        cout << "a) Historia\nb) Filosofia\nc) Quimica\nd) ArteCine\ne) Geografia\n";
        char eleccionMateria;
        cout << "Tu eleccion: ";
        cin >> eleccionMateria;

        int indiceMateria = -1;

        switch (toupper(eleccionMateria)) {
            case 'A':
                indiceMateria = 0;
                break;
            case 'B':
                indiceMateria = 1;
                break;
            case 'C':
                indiceMateria = 2;
                break;
            case 'D':
                indiceMateria = 3;
                break;
            case 'E':
                indiceMateria = 4;
                break;
            default:
                cout << "Seleccion no valida. Seleccionando Historia por defecto.\n";
                indiceMateria = 0;
                break;
        }

        for (int i = 0; i < 5; ++i) {
            int preguntaActual = (indiceMateria + i) % 5;
            Pregunta* pregunta = preguntas[preguntaActual];

            cout << "\nPregunta " << (i + 1) << ": " << pregunta->enunciado << "\n";
            for (int j = 0; j < 4; ++j) {
                cout << pregunta->opciones[j] << "\n";
            }

            char respuestaUsuario;
            cout << "Tu respuesta: ";
            cin >> respuestaUsuario;

            if (respuestaUsuario == pregunta->respuestaCorrecta) {
                cout << "¡Correcto!\n";
                puntaje += pregunta->getPuntos();
            } else {
                cout << "Incorrecto. La respuesta correcta es: " << pregunta->respuestaCorrecta << "\n";
                --vidas;
                if (vidas == 0) {
                    cout << "Has perdido todas tus vidas. Fin del juego.\n";
                    break;
                }
            }
        }

        cout << "\nFin del juego!\n";
        cout << "Puntaje final: " << puntaje << " puntos\n";
    }
};

int main() {
    Juego juego;
    juego.jugar();

    return 0;
}
