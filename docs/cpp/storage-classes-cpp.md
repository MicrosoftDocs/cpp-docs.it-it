---
title: Classi di archiviazione (C++)
description: In C++le parole chiave static, extern e thread_local specificano la durata, il collegamento e la posizione di memoria di una variabile o di una funzione.
ms.date: 12/11/2019
f1_keywords:
- thread_local_cpp
- extern_cpp
- static_cpp
- register_cpp
helpviewer_keywords:
- storage classes [C++], basic concepts
ms.assetid: f10e1c56-6249-4eb6-b08f-09ab1eef1992
ms.openlocfilehash: ab00a5c64a32dc1dab5fef4bc15b722587bc2d6b
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78856898"
---
# <a name="storage-classes"></a>Classi di archiviazione

Una *classe di archiviazione* nel contesto di C++ dichiarazioni di variabili è un identificatore di tipo che regola la durata, il collegamento e la posizione di memoria degli oggetti. Un oggetto specificato può avere una sola classe di archiviazione. Le variabili definite in un blocco hanno archiviazione automatica se non diversamente specificato mediante gli identificatori **extern**, **static**o **thread_local** . Le variabili e gli oggetti automatici non hanno alcun collegamento e non sono visibili a codice esterno al blocco. La memoria viene allocata automaticamente quando l'esecuzione entra nel blocco e deallocata quando il blocco viene terminato.

**Note**

1. La parola chiave [mutable](../cpp/mutable-data-members-cpp.md) può essere considerata un identificatore della classe di archiviazione. Tale parola chiave, tuttavia, è disponibile solo nell'elenco dei membri di una definizione di classe.

1. **Visual Studio 2010 e versioni successive:** La parola chiave **auto** non è più C++ un identificatore della classe di archiviazione e la parola chiave **Register** è deprecata. **Visual Studio 2017 versione 15,7 e successive:** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): la parola chiave **Register** viene rimossa C++ dal linguaggio.

```cpp
   register int val; // warning C5033: 'register' is no longer a supported storage class
```

## <a name="static"></a>statico

La parola chiave **static** può essere usata per dichiarare variabili e funzioni nell'ambito globale, nell'ambito dello spazio dei nomi e nell'ambito della classe. Le variabili statiche possono essere dichiarate anche in ambito locale.

La durata statica significa che l'oggetto o la variabile viene allocata all'avvio del programma e viene rilasciata alla chiusura del programma. Il collegamento interno significa che il nome della variabile è visibile dal di fuori del file in cui viene dichiarata la variabile. Viceversa, il collegamento interno significa che il nome non è visibile al di fuori del file in cui viene dichiarata la variabile. Per impostazione predefinita, un oggetto o una variabile definiti nello spazio dei nomi globale presentano una durata e un collegamento esterno statici. La parola chiave **static** può essere utilizzata nelle situazioni seguenti.

1. Quando si dichiara una variabile o una funzione in ambito file (ambito globale e/o spazio dei nomi), la parola chiave **static** specifica che la variabile o la funzione dispone di collegamento interno. Quando si dichiara una variabile, questa ha una durata statica e il compilatore la inizializza con il valore 0 a meno che non venga specificato un altro valore.

1. Quando si dichiara una variabile in una funzione, la parola chiave **static** specifica che la variabile mantiene lo stato tra le chiamate a tale funzione.

1. Quando si dichiara un membro dati in una dichiarazione di classe, la parola chiave **static** specifica che una copia del membro è condivisa da tutte le istanze della classe. Un membro dati statici deve essere definito nell'ambito del file. Un membro dati integrale dichiarato come **const static** può avere un inizializzatore.

1. Quando si dichiara una funzione membro in una dichiarazione di classe, la parola chiave **static** specifica che la funzione è condivisa da tutte le istanze della classe. Una funzione membro statica non può accedere A un membro di istanza perché la funzione non ha un puntatore **this** implicito. Per accedere a un membro di istanza, dichiarare la funzione con un parametro che è un puntatore o un riferimento all'istanza.

1. Non è possibile dichiarare i membri di un'unione come static. Tuttavia, un'unione anonima dichiarata a livello globale deve essere dichiarata in modo esplicito **static**.

In questo esempio viene illustrato come una variabile dichiarata come **statica** in una funzione mantiene il proprio stato tra le chiamate a tale funzione.

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

Questo esempio illustra l'uso di **static** in una classe.

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

In questo esempio viene illustrata una variabile locale dichiarata come **statica** in una funzione membro. La variabile statica è disponibile per l'intero programma; tutte le istanze del tipo condividono la stessa copia della variabile statica.

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

A partire da C++11, si garantisce che l'inizializzazione di una variabile locale statica è thread-safe. Questa funzionalità è talvolta denominata *Magic static*. In un'applicazione con multithreading, tuttavia, tutte le assegnazioni successive devono essere sincronizzate. La funzionalità di inizializzazione statica thread-safe può essere disabilitata usando il flag [/Zc: threadSafeInit-](../build/reference/zc-threadsafeinit-thread-safe-local-static-initialization.md) per evitare di creare una dipendenza da CRT.

## <a name="extern"></a>extern

Gli oggetti e le variabili dichiarati come **extern** dichiarano un oggetto definito in un'altra unità di conversione o in un ambito di inclusione come collegamento esterno. Per altre informazioni, vedere [extern](extern-cpp.md) and [translation units and linkage](program-and-linkage-cpp.md).

## <a name="thread_local"></a>thread_local (C++ 11)

Una variabile dichiarata con l'identificatore **thread_local** è accessibile solo sul thread in cui è stata creata. La variabile viene creata quando viene creato il thread e viene eliminata definitivamente quando viene eliminato definitivamente il thread. Ogni thread ha la propria copia della variabile. In Windows **thread_local** è funzionalmente equivalente all'attributo [__declspec (thread)](../cpp/thread.md) specifico di Microsoft.

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

Aspetti da considerare sull'identificatore **thread_local** :

- Le variabili locali di thread inizializzate in modo dinamico nelle DLL potrebbero non essere inizializzate correttamente su tutti i thread chiamante. Per altre informazioni, vedere [thread](thread.md).

- L'identificatore di **thread_local** può essere combinato con **static** o **extern**.

- È possibile applicare **thread_local** solo a dichiarazioni e definizioni di dati; non è possibile usare **thread_local** per le dichiarazioni di funzione o le definizioni.

- È possibile specificare **thread_local** solo per gli elementi di dati con durata di archiviazione statica. Sono inclusi gli oggetti dati globali (sia **statici** che **extern**), gli oggetti statici locali e i membri dati statici delle classi. Qualsiasi variabile locale dichiarata **thread_local** è implicitamente statica se non viene fornita nessun'altra classe di archiviazione; in altre parole, nell'ambito del blocco **thread_local** equivale a `thread_local static`.

- È necessario specificare **thread_local** sia per la dichiarazione sia per la definizione di un oggetto thread-local, indipendentemente dal fatto che la dichiarazione e la definizione si verifichino nello stesso file o in file separati.

In Windows **thread_local** è funzionalmente equivalente a [__declspec (thread)](../cpp/thread.md) ad eccezione del fatto che **__declspec (thread)** può essere applicato a una definizione di tipo ed è valido nel codice C. Quando possibile, utilizzare **thread_local** perché fa parte dello C++ standard ed è quindi più portabile.

##  <a name="register"></a>Registro

**Visual Studio 2017 versione 15,3 e successive** (disponibile con [/std: c++ 17](../build/reference/std-specify-language-standard-version.md)): la parola chiave **Register** non è più una classe di archiviazione supportata. La parola chiave è ancora riservata nello standard per un uso futuro.

```cpp
   register int val; // warning C5033: 'register' is no longer a supported storage class
```

## <a name="example-automatic-vs-static-initialization"></a>Esempio: inizializzazione automatica rispetto a statica

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

In questo esempio viene illustrato come e quando gli oggetti `I1`, `I2`e `I3` vengono inizializzati e quando vengono eliminati definitivamente.

Esistono diversi punti da tenere presenti sul programma:

- Innanzitutto, `I1` e `I2` vengono eliminati definitivamente in modo automatico quando il flusso di controllo esce dal blocco nel quale i due oggetti sono definiti.

- In secondo luogo, in C++, non è necessario dichiarare gli oggetti o le variabili all'inizio di un blocco. Questi oggetti, inoltre, vengono inizializzati solo quando il flusso di controllo raggiunge le relative definizioni. (`I2` e `I3` sono esempi di tali definizioni). L'output Mostra esattamente quando vengono inizializzati.

- Infine, le variabili locali statiche come `I3` mantengono i propri valori per tutta la durata del programma, ma vengono eliminate definitivamente al termine del programma.

## <a name="see-also"></a>Vedere anche

[Dichiarazioni e definizioni](../cpp/declarations-and-definitions-cpp.md)