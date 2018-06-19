---
title: Classi di archiviazione (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- thread_local_cpp
- external_cpp
- static_cpp
- register_cpp
dev_langs:
- C++
helpviewer_keywords:
- storage classes [C++], basic concepts
ms.assetid: f10e1c56-6249-4eb6-b08f-09ab1eef1992
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a56d456564dc171292e8a58b6cb486ce2dfbaf31
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32424589"
---
# <a name="storage-classes-c"></a>Classi di archiviazione (C++)  
  
Oggetto *classe di archiviazione* nel contesto di C++, le dichiarazioni di variabili è un identificatore di tipo che determina la posizione di memoria, il collegamento e durata degli oggetti. Un oggetto specificato può avere una sola classe di archiviazione. Le variabili definite in un blocco hanno archiviazione automatica, se non specificato diversamente mediante gli identificatori `extern`, `static` o `thread_local`. Le variabili e gli oggetti automatici non hanno alcun collegamento e non sono visibili a codice esterno al blocco.  
  
**Note**  
  
1.  Il [modificabile](../cpp/mutable-data-members-cpp.md) parola chiave può essere considerata un identificatore di classe di archiviazione. Tale parola chiave, tuttavia, è disponibile solo nell'elenco dei membri di una definizione di classe.  
  
2.  **Visual C++ 2010 e versioni successive:** il `auto` parola chiave non è più un identificatore di classe di archiviazione C++ e il `register` parola chiave è deprecata. **Visual Studio 2017 15.7 e versioni successive:** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): il `register` (parola chiave) viene rimosso dal linguaggio C++.


```cpp
   register int val; // warning C5033: 'register' is no longer a supported storage class
```

## <a name="in-this-section"></a>Contenuto della sezione:

- [static](#static)
- [extern](#extern)
- [thread_local](#thread_local)

## <a name="static"></a> Statico

La parola chiave `static` può essere usata per dichiarare variabili e funzioni in ambito globale, ambito di spazio dei nomi e ambito della classe. Le variabili statiche possono essere dichiarate anche in ambito locale.

La durata statica significa che l'oggetto o la variabile viene allocata all'avvio del programma e viene rilasciata alla chiusura del programma. Il collegamento interno significa che il nome della variabile è visibile dal di fuori del file in cui viene dichiarata la variabile. Viceversa, il collegamento interno significa che il nome non è visibile al di fuori del file in cui viene dichiarata la variabile. Per impostazione predefinita, un oggetto o una variabile definiti nello spazio dei nomi globale presentano una durata e un collegamento esterno statici. È possibile utilizzare la parola chiave `static` nelle seguenti situazioni:

1. Quando si dichiara una variabile o una funzione in ambito file (ambito dello spazio dei nomi e/o globale), la parola chiave `static` specifica che la variabile o la funzione dispone di un collegamento interno. Quando si dichiara una variabile, questa ha una durata statica e il compilatore la inizializza con il valore 0 a meno che non venga specificato un altro valore.

1. Quando si dichiara una variabile in una funzione, la parola chiave `static` specifica che la variabile mantiene lo stato tra le chiamate a quella funzione.

1. Quando si dichiara un membro dati in una dichiarazione di classe, la parola chiave `static` specifica che una copia del membro è condivisa da tutte le istanze della classe. Un membro dati statici deve essere definito nell'ambito del file. Un membro dati integrato che viene dichiarato come `const static` può avere un inizializzatore.

1. Quando si dichiara una funzione membro in una dichiarazione di classe, la parola chiave `static` specifica che la funzione è condivisa da tutte le istanze della classe. Una funzione membro statica non può accedere a un membro di istanza perché la funzione non include un puntatore `this` implicito. Per accedere a un membro di istanza, dichiarare la funzione con un parametro che è un puntatore o un riferimento all'istanza.

1. Non è possibile dichiarare i membri di un'unione come static. Tuttavia, un'unione anonima globalmente dichiarata deve essere dichiarata in modo esplicito come `static`.

Questo esempio viene illustrato come una variabile dichiarata `static` in una funzione mantiene lo stato tra chiamate a quella funzione.

```cpp
// static1.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
void showstat( int curr ) {
   static int nStatic;    // Value of nStatic is retained
                          // between each function call
   nStatic += curr;
   cout << "nStatic is " << nStatic << endl;
}

int main() {
   for ( int i = 0; i < 5; i++ )
      showstat( i );
}
```

```Output
nStatic is 0
nStatic is 1
nStatic is 3
nStatic is 6
nStatic is 10
```

In questo esempio viene illustrato come utilizzare `static` in una classe.

```cpp
// static2.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
class CMyClass {
public:
   static int m_i;
};

int CMyClass::m_i = 0;
CMyClass myObject1;
CMyClass myObject2;

int main() {
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;

   myObject1.m_i = 1;
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;

   myObject2.m_i = 2;
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;

   CMyClass::m_i = 3;
   cout << myObject1.m_i << endl;
   cout << myObject2.m_i << endl;
}
```

```Output
0
0
1
1
2
2
3
3
```

Questo esempio mostra una variabile locale dichiarata `static` in una funzione membro. La variabile statica è disponibile per l'intero programma; tutte le istanze del tipo condividono la stessa copia della variabile statica.

```cpp
// static3.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;
struct C {
   void Test(int value) {
      static int var = 0;
      if (var == value) 
         cout << "var == value" << endl;
      else
         cout << "var != value" << endl;

      var = value;
   }
}; 

int main() {
   C c1;
   C c2;
   c1.Test(100);
   c2.Test(100);
}
```

```Output
var != value
var == value
```

A partire da C++11, si garantisce che l'inizializzazione di una variabile locale statica è thread-safe. Questa funzionalità è a volte denominata *elementi statici*. In un'applicazione con multithreading, tuttavia, tutte le assegnazioni successive devono essere sincronizzate. La funzionalità di inizializzazione statica thread-safe può essere disabilitata usando il [/Zc:threadSafeInit-](../build/reference/zc-threadsafeinit-thread-safe-local-static-initialization.md) flag per evitare di creare una dipendenza da CRT.

## <a name="extern"></a> extern

Gli oggetti e le variabili dichiarate come `extern` dichiarano un oggetto definito in un'altra unità di conversione o in un ambito contenitore come dotato di collegamento esterno.

Dichiarazione di `const` variabili con la `extern` classe di archiviazione forza la variabile con collegamento esterno. L'inizializzazione di un `extern const` variabile è consentita nell'unità di conversione definizione. Inizializzazioni in unità di conversione diverse dalle unità di conversione definizione producono risultati non definiti. Per altre informazioni, vedere [utilizzo di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md)

Il [/Zc:externConstexpr](../build/reference/zc-externconstexpr.md) l'opzione del compilatore induce il compilatore da applicare [un collegamento esterno]() alle variabili dichiarate utilizzando **constexpr extern**. Nelle versioni precedenti di Visual Studio e per impostazione predefinita o se **/Zc:externConstexpr-** è specificato, Visual Studio si applica un collegamento interno a **constexpr** anche se le variabili di **extern** parola chiave viene utilizzata. Il **/Zc:externConstexpr** opzione è disponibile a partire da Visual Studio 2017 aggiornamento 15,6. e viene disattivata per impostazione predefinita. Il /permissive-option non abilita /Zc:externConstexpr.

Nel codice seguente vengono illustrate due dichiarazioni `extern`, `DefinedElsewhere` (che fa riferimento a un nome definito in un'unità di conversione diversa) e `DefinedHere` (che fa riferimento a un nome definito in un'ambito contenitore):

```cpp
// external.cpp
// DefinedElsewhere is defined in another translation unit
extern int DefinedElsewhere;   
int main() {
   int DefinedHere; 
   {
      // refers to DefinedHere in the enclosing scope
      extern int DefinedHere;
   }
}
```

## <a name="thread_local"></a> thread_local (c++11)

Una variabile dichiarata con l'identificatore `thread_local` è accessibile solo sul thread in cui è stata creata. La variabile viene creata quando viene creato il thread e viene distrutta quando viene distrutto il thread. Ogni thread ha la propria copia della variabile. In Windows, `thread_local` è funzionalmente equivalente per la specifica di Microsoft [declspec (thread)](../cpp/thread.md) attributo.

```cpp
thread_local float f = 42.0; // Global namespace. Not implicitly static.

struct S // cannot be applied to type definition
{
    thread_local int i; // Illegal. The member must be static.
    thread_local static char buf[10]; // OK 
};

void DoSomething()
{
    // Apply thread_local to a local variable.
    // Implicitly "thread_local static S my_struct".
    thread_local S my_struct;
}
```

Aspetti da tenere presenti circa il `thread_local` identificatore:

- Inizializzati in modo dinamico le variabili locali del thread nelle DLL potrebbero non essere state inizializzate correttamente in tutti i thread di chiamata. Per altre informazioni, vedere [thread](thread.md).

-  Il `thread_local` identificatore può essere combinato con `static` o `extern`.

-  È possibile applicare `thread_local` solo a dichiarazioni di dati e delle definizioni. `thread_local` non può essere utilizzato in definizioni o dichiarazioni di funzione.

-  È possibile specificare `thread_local` solo per elementi di dati con durata di archiviazione statica. Inclusi gli oggetti dati globali (sia `static` e `extern`), gli oggetti statici locali e i membri dati statici delle classi. Qualsiasi variabile locale dichiarata `thread_local` static in modo implicito se non viene specificata nessun altra classe di archiviazione; in altre parole, nell'ambito del blocco `thread_local` equivale a `thread_local static`. 

-  È necessario specificare `thread_local` per la dichiarazione e la definizione di un oggetto locale di thread, indipendentemente dal fatto che la definizione e la dichiarazione si verificano nello stesso file o in file separati.

In Windows, `thread_local` è funzionalmente equivalente a [declspec](../cpp/thread.md) ad eccezione del fatto che `__declspec(thread)` può essere applicato a una definizione di tipo ed è valido nel codice C. Se possibile, usare `thread_local` poiché fa parte dello standard C++ ed è quindi più portabile.

##  <a name="register"></a>  Registrare

**Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): il `register` (parola chiave) non è più una classe di archiviazione supportati. La parola chiave è ancora riservata nello standard per un utilizzo futuro. 

```cpp
   register int val; // warning C5033: 'register' is no longer a supported storage class
```

## <a name="example-automatic-vs-static-initialization"></a>Esempio: automatico e l'inizializzazione statica

Ogni volta che il flusso di controllo raggiunge la propria definizione, vengono inizializzati un oggetto o una variabile locali automatici. La prima volta che il flusso di controllo raggiunge la relativa definizione, vengono inizializzati un oggetto o una variabile statici.

Si consideri l'esempio seguente, nel quale si definisce una classe che registra l'inizializzazione e l'eliminazione di oggetti e, in seguito, definisce tre oggetti, `I1`, `I2` e `I3`:

```cpp
// initialization_of_objects.cpp
// compile with: /EHsc
#include <iostream>
#include <string.h>
using namespace std;

// Define a class that logs initializations and destructions.
class InitDemo {
public:
    InitDemo( const char *szWhat );
    ~InitDemo();

private:
    char *szObjName;
    size_t sizeofObjName;
};

// Constructor for class InitDemo
InitDemo::InitDemo( const char *szWhat ) :
    szObjName(NULL), sizeofObjName(0) {
    if ( szWhat != 0 && strlen( szWhat ) > 0 ) {
        // Allocate storage for szObjName, then copy
        // initializer szWhat into szObjName, using
        // secured CRT functions.
        sizeofObjName = strlen( szWhat ) + 1;

        szObjName = new char[ sizeofObjName ];
        strcpy_s( szObjName, sizeofObjName, szWhat );

        cout << "Initializing: " << szObjName << "\n";
    }
    else {
        szObjName = 0;
    }
}

// Destructor for InitDemo
InitDemo::~InitDemo() {
    if( szObjName != 0 ) {
        cout << "Destroying: " << szObjName << "\n";
        delete szObjName;
    }
}

// Enter main function
int main() {
    InitDemo I1( "Auto I1" ); {
        cout << "In block.\n";
        InitDemo I2( "Auto I2" );
        static InitDemo I3( "Static I3" );
    }
    cout << "Exited block.\n";
}
```

```Output
Initializing: Auto I1
In block.
Initializing: Auto I2
Initializing: Static I3
Destroying: Auto I2
Exited block.
Destroying: Auto I1
Destroying: Static I3
```

In questo esempio illustra come e quando gli oggetti `I1`, `I2`, e `I3` vengono inizializzate e quando vengono eliminati definitivamente.

Esistono diversi punti da tenere presenti circa il programma:

- Innanzitutto, `I1` e `I2` vengono eliminati automaticamente quando il flusso di controllo esce dal blocco nel quale i due oggetti sono definiti.

- In secondo luogo, in C++, non è necessario dichiarare gli oggetti o le variabili all'inizio di un blocco. Questi oggetti, inoltre, vengono inizializzati solo quando il flusso di controllo raggiunge le relative definizioni. Alcuni esempi di tali definizioni sono `I2` e `I3`. L'output riporta il momento esatto in cui vengono inizializzati.

- Infine, le variabili locali statiche come `I3` mantengono i propri valori per tutta la durata del programma, ma vengono eliminate al termine del programma.

## <a name="see-also"></a>Vedere anche

 [Dichiarazioni e definizioni](../cpp/declarations-and-definitions-cpp.md)
