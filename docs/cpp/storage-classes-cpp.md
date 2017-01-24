---
title: "Classi di archiviazione (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "thread_local_cpp"
  - "external_cpp"
  - "static_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classi di archiviazione, concetti di base"
ms.assetid: f10e1c56-6249-4eb6-b08f-09ab1eef1992
caps.latest.revision: 13
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di archiviazione (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una *classe di archiviazione* nel contesto delle dichiarazioni delle variabili C\+\+ è un tipo di identificatore che determina la durata, il collegamento e la posizione in memoria degli oggetti.  Un oggetto specificato può avere una sola classe di archiviazione.  Le variabili definite in un blocco hanno archiviazione automatica, se non specificato diversamente mediante gli identificatori `extern`, `static` o `thread_local`.  Le variabili e gli oggetti automatici non hanno alcun collegamento e non sono visibili a codice esterno al blocco.  
  
 **Note**  
  
1.  La parola chiave [mutable](../cpp/mutable-data-members-cpp.md) può essere considerata un identificatore della classe di archiviazione.  Tale parola chiave, tuttavia, è disponibile solo nell'elenco dei membri di una definizione di classe.  
  
2.  A partire da [!INCLUDE[cpp_dev10_long](../build/includes/cpp_dev10_long_md.md)], la parola chiave `auto` non è più identificatore della classe di archiviazione C\+\+ e la parola chiave `register` è deprecata.  
  
-   [Static](#static)  
  
-   [extern](#extern)  
  
-   [thread\_local](#thread_local)  
  
## static  
 La parola chiave `static` può essere usata per dichiarare variabili e funzioni in ambito globale, ambito di spazio dei nomi e ambito della classe.  Le variabili statiche possono essere dichiarate anche in ambito locale.  
  
 La durata statica significa che l'oggetto o la variabile viene allocata all'avvio del programma e viene rilasciata alla chiusura del programma.  Il collegamento interno significa che il nome della variabile è visibile dal di fuori del file in cui viene dichiarata la variabile.  Viceversa, il collegamento interno significa che il nome non è visibile al di fuori del file in cui viene dichiarata la variabile.  Per impostazione predefinita, un oggetto o una variabile definiti nello spazio dei nomi globale presentano una durata e un collegamento esterno statici.  È possibile usare la parola chiave `static` nelle seguenti situazioni:  
  
1.  Quando si dichiara una variabile o una funzione in ambito file \(ambito dello spazio dei nomi e\/o globale\), la parola chiave `static` specifica che la variabile o la funzione dispone di un collegamento interno.  Quando si dichiara una variabile, questa ha una durata statica e il compilatore la inizializza con il valore 0 a meno che non venga specificato un altro valore.  
  
2.  Quando si dichiara una variabile in una funzione, la parola chiave `static` specifica che la variabile mantiene lo stato tra le chiamate a quella funzione.  
  
3.  Quando si dichiara un membro dati in una dichiarazione di classe, la parola chiave `static` specifica che una copia del membro è condivisa da tutte le istanze della classe.  Un membro dati statici deve essere definito nell'ambito del file.  Un membro dati integrato che viene dichiarato come `const` `static` può disporre di un inizializzatore.  
  
4.  Quando si dichiara una funzione membro in una dichiarazione di classe, la parola chiave `static` specifica che la funzione è condivisa da tutte le istanze della classe.  Una funzione membro statica non può accedere a un membro di istanza perché la funzione non include un puntatore `this` implicito.  Per accedere a un membro di istanza, dichiarare la funzione con un parametro che è un puntatore o un riferimento all'istanza.  
  
5.  Non è possibile dichiarare i membri di un'unione come static.  Tuttavia, un'unione anonima globalmente dichiarata deve essere dichiarata in modo esplicito come `static`.  
  
 Di seguito viene illustrato come una variabile dichiarata `static` in una funzione mantiene il proprio stato tra le chiamate a quella funzione.  
  
```  
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
  
  **nStatic è 0**  
**nStatic è 1**  
**nStatic è 3**  
**nStatic è 6**  
**nStatic è 10** L'esempio seguente illustra l'uso di `static` in una classe.  
  
```  
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
  
  **0**  
**0**  
**1**  
**1**  
**2**  
**2**  
**3**  
**3** L'esempio seguente illustra una variabile locale dichiarata `static` in una funzione membro.  La variabile statica è disponibile per l'intero programma; tutte le istanze del tipo condividono la stessa copia della variabile statica.  
  
```  
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
  
  **var \!\= value**  
**var \=\= value** A partire da C\+\+11, si garantisce che l'inizializzazione di una variabile locale statica è thread\-safe.  Questa funzionalità viene a volte definita *elementi statici magici*.  In un'applicazione con multithreading, tuttavia, tutte le assegnazioni successive devono essere sincronizzate.  La funzionalità di elementi statici thread\-safe può essere disabilitata usando il contrassegno \/Zc:threadSafeInit\- per evitare di creare una dipendenza da CRT.  
  
## extern  
 Gli oggetti e le variabili dichiarate come `extern` dichiarano un oggetto definito in un'altra unità di conversione o in un ambito contenitore come dotato di collegamento esterno.  
  
 La dichiarazione di variabili **const** con la classe di archiviazione `extern` forza la variabile ad avere un collegamento esterno.  Un'inizializzazione di una variabile **extern const** è consentita nell'unità di conversione definizione.  Inizializzazioni in unità di conversione diverse dalle unità di conversione definizione producono risultati non definiti.  Per altre informazioni, vedere [Utilizzo di extern per specificare un collegamento](../cpp/using-extern-to-specify-linkage.md).  
  
 Il codice seguente illustra due dichiarazioni `extern`, `DefinedElsewhere` \(che fa riferimento a un nome definito in un'unità di conversione diversa\) e `DefinedHere` \(che fa riferimento a un nome definito in un ambito contenitore\):  
  
```  
// external.cpp  
// defined in another translation unit  
extern int DefinedElsewhere;     
int main() {  
   int DefinedHere;   
   {  
      // refers to DefinedHere in the enclosing scope  
      extern int DefinedHere;  
    }  
}  
```  
  
## thread\_local \(C\+\+11\)  
 Una variabile dichiarata con l'identificatore `thread_local` è accessibile solo sul thread in cui è stata creata.  La variabile viene creata quando viene creato il thread e viene distrutta quando viene distrutto il thread.  Ogni thread ha la propria copia della variabile.  In Windows `thread_local` è funzionalmente equivalente all'attributo [\_\_declspec\( thread \)](../cpp/thread.md) specifico per Microsoft.  
  
```  
thread_local float f = 42.0; //global namespace  
  
struct C // cannot be applied to type definition  
{  
thread_local int i; //local  
thread_local static char buf[10]; // local and static  
};  
  
void DoSomething()  
{  
thread_local C my_struct; // Apply  thread_local to a variable  
}  
```  
  
1.  L'identificatore thread\_local può essere combinato con `static` o `extern`.  
  
2.  È possibile applicare `thread_local` solo alle dichiarazioni e alle definizioni di dati. **thread\_local** non può essere usato su dichiarazioni o definizioni di funzioni.  
  
3.  L'uso di `thread_local` può interferire con il [caricamento ritardato](../build/reference/linker-support-for-delay-loaded-dlls.md) delle importazioni delle DLL**.**  
  
4.  È possibile che nei sistemi XP `thread_local` non funzioni correttamente se una DLL usa dati `thread_local` e viene caricata dinamicamente tramite LoadLibrary.  
  
5.  È possibile specificare `thread_local` solo per elementi di dati con durata di archiviazione statica.  Sono inclusi gli oggetti di dati globali \(sia **statici** che `extern`\), gli oggetti statici locali e i membri di dati statici delle classi.  Non è possibile dichiarare oggetti di dati automatici con l'attributo **thread\_local**.  
  
6.  È necessario specificare `thread_local` per la dichiarazione e la definizione di un oggetto locale di thread, indipendentemente dal fatto che la definizione e la dichiarazione si verificano nello stesso file o in file separati.  
  
 In Windows `thread_local` è funzionalmente equivalente a [\_\_declspec\(thread\)](../cpp/thread.md), ma \_\_declspec\(thread\) può essere applicato a una definizione di tipo ed è valido nel codice C.  Se possibile, usare `thread_local` poiché fa parte dello standard C\+\+ ed è quindi più portabile.  
  
 Per altre informazioni, vedere [Archiviazione locale di thread \(TLS\)](../parallel/thread-local-storage-tls.md).  
  
## register  
 In C\+\+11 la parola chiave **register** è deprecata.  Specifica che la variabile deve essere archiviata in un registro del computer, se possibile.  Con la classe di archiviazione è possibile dichiarare solo gli argomenti delle funzioni e le variabili locali.  
  
```  
register int num;  
```  
  
 Allo stesso modo delle variabili automatiche, le variabili registro vengono mantenute solo fino alla fine del blocco in cui sono dichiarate.  
  
 Il compilatore non rispetta le richieste utente per le variabili registro; effettua invece le proprie scelte di registro quando le ottimizzazioni globali sono attivate.  Tuttavia, qualsiasi altra semantica associata alla parola chiave [register](http://msdn.microsoft.com/it-it/5b66905a-2f7f-4918-bb55-5e66d4bc50f9) viene rispettata dal compilatore.  
  
 Se l'operatore address\-of \(**&**\) viene usato su un oggetto dichiarato con register, il compilatore dovrà inserire l'oggetto in memoria, invece che in un registro.  
  
## Esempio: confronto tra inizializzazioneautomatica e statica  
 Ogni volta che il flusso di controllo raggiunge la propria definizione, vengono inizializzati un oggetto o una variabile locali automatici.  La prima volta che il flusso di controllo raggiunge la relativa definizione, vengono inizializzati un oggetto o una variabile statici.  
  
 Si consideri l'esempio seguente, nel quale si definisce una classe che registra l'inizializzazione e l'eliminazione di oggetti e, in seguito, definisce tre oggetti, `I1`, `I2` e `I3`:  
  
```  
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
   if( szWhat != 0 && strlen( szWhat ) > 0 ) {  
      // Allocate storage for szObjName, then copy  
      // initializer szWhat into szObjName, using  
      // secured CRT functions.  
      sizeofObjName = strlen( szWhat ) + 1;  
  
      szObjName = new char[ sizeofObjName ];  
      strcpy_s( szObjName, sizeofObjName, szWhat );  
  
      cout << "Initializing: " << szObjName << "\n";  
   }  
   else  
      szObjName = 0;  
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
  
  **Inizializzazione: Auto I1**  
**In blocco.  Inizializzazione: Auto I2**  
**Inizializzazione: Static I3**  
**Eliminazione: Auto I2**  
**Blocco terminato.  Eliminazione: Auto I1**  
**Eliminazione: Static I3**  Il codice precedente illustra come e quando gli oggetti `I1`, `I2` e `I3` vengono inizializzati ed eliminati.  
  
 Ci sono diversi punti da tenere presente, rispetto al programma.  
  
 Innanzitutto, `I1` e `I2` vengono eliminati automaticamente quando il flusso di controllo esce dal blocco nel quale i due oggetti sono definiti.  
  
 In secondo luogo, in C\+\+, non è necessario dichiarare gli oggetti o le variabili all'inizio di un blocco.  Questi oggetti, inoltre, vengono inizializzati solo quando il flusso di controllo raggiunge le relative definizioni.  Alcuni esempi di tali definizioni sono `I2` e `I3`. L'output riporta il momento esatto in cui vengono inizializzati.  
  
 Infine, le variabili locali statiche come `I3` mantengono i propri valori per tutta la durata del programma, ma vengono eliminate al termine del programma.  
  
## Vedere anche  
 [Dichiarazioni e definizioni](../cpp/declarations-and-definitions-cpp.md)