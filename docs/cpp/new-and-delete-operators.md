---
title: Operatori new e delete
ms.date: 11/19/2019
f1_keywords:
- delete_cpp
- new
helpviewer_keywords:
- new keyword [C++]
- delete keyword [C++]
ms.assetid: fa721b9e-0374-4f04-bb87-032ea775bcc8
ms.openlocfilehash: c64b15f1e1e63b1e743743883429ffd11007de0a
ms.sourcegitcommit: 654aecaeb5d3e3fe6bc926bafd6d5ace0d20a80e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/20/2019
ms.locfileid: "74246441"
---
# <a name="new-and-delete-operators"></a>Operatori new e delete

C++supporta l'allocazione dinamica e la deallocazione di oggetti tramite gli operatori [New](new-operator-cpp.md) e [Delete](delete-operator-cpp.md) . Questi operatori allocano memoria per gli oggetti da un pool denominato archivio libero. L'operatore **New** chiama l'operatore di funzione speciale [New](new-operator-cpp.md)e l'operatore **Delete** chiama l'operatore di funzione speciale [Delete](delete-operator-cpp.md).

La **nuova** funzione nella libreria C++ standard supporta il comportamento specificato nello C++ standard, ovvero la generazione di un'eccezione STD:: bad_alloc se l'allocazione di memoria ha esito negativo. Se si vuole ancora la versione non generata di **New**, collegare il programma a nothrownew. obj. Tuttavia, quando si esegue il collegamento con nothrownew. obj, l' **operatore** predefinito nuovo C++ nella libreria standard non funzionerà più.

Per un elenco dei file di libreria che includono la libreria di runtime C e la C++ libreria standard, vedere la pagina relativa alle [funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md).

##  <a id="new_operator"></a> Operatore New

Quando in un programma viene rilevata un'istruzione come la seguente, questa viene convertita in una chiamata all' **operatore Function New**:

```cpp
char *pch = new char[BUFFER_SIZE];
```

Se la richiesta è per i byte zero di archiviazione, **operator new** restituisce un puntatore a un oggetto distinto (ovvero chiamate ripetute a puntatori diversi restituiti dall' **operatore New** ). Se la memoria disponibile non è sufficiente per la richiesta di allocazione, **operator new** genera un'eccezione `std::bad_alloc` oppure restituisce **nullptr** se è stato collegato un **nuovo** supporto per operatori che non genera l'eccezione.

È possibile scrivere una routine che tenti di liberare memoria e ritentare l'allocazione. Per ulteriori informazioni, vedere [_set_new_handler](../c-runtime-library/reference/set-new-handler.md) . Per ulteriori informazioni sullo schema di ripristino, vedere la sezione gestione della memoria insufficiente in questo argomento.

Nella tabella seguente sono descritti i due ambiti per le funzioni **operator new** .

### <a name="scope-for-operator-new-functions"></a>Ambito per le funzioni operator new

|Operatore|Ambito|
|--------------|-----------|
|**operatore new::**|Global|
|*classe-Name* **:: operator new**|Classe|

Il primo argomento di **operator new** deve essere di tipo `size_t` (un tipo definito in \<stddef. h >) e il tipo restituito è sempre **void** <strong>\*</strong>.

La funzione globale **operator new** viene chiamata quando l'operatore **New** viene usato per allocare oggetti di tipi incorporati, oggetti di tipo classe che non contengono funzioni **operator new** definite dall'utente e matrici di qualsiasi tipo. Quando l'operatore **New** viene usato per allocare oggetti di un tipo di classe in cui è definito un **operatore New** , viene chiamato l' **operatore New** di tale classe.

Una funzione **operator new** definita per una classe è una funzione membro statica (che non può, pertanto, essere virtuale) che nasconde la funzione globale **operator new** per gli oggetti di quel tipo di classe. Si consideri il caso in cui **New** viene usato per allocare e impostare la memoria su un valore specificato:

```cpp
#include <malloc.h>
#include <memory.h>

class Blanks
{
public:
    Blanks(){}
    void *operator new( size_t stAllocateBlock, char chInit );
};
void *Blanks::operator new( size_t stAllocateBlock, char chInit )
{
    void *pvTemp = malloc( stAllocateBlock );
    if( pvTemp != 0 )
        memset( pvTemp, chInit, stAllocateBlock );
    return pvTemp;
}
// For discrete objects of type Blanks, the global operator new function
// is hidden. Therefore, the following code allocates an object of type
// Blanks and initializes it to 0xa5
int main()
{
   Blanks *a5 = new(0xa5) Blanks;
   return a5 != 0;
}
```

L'argomento fornito tra parentesi a **New** viene passato a `Blanks::operator new` come argomento `chInit`. Tuttavia, la funzione globale **operator new** è nascosta, causando il codice seguente per generare un errore:

```cpp
Blanks *SomeBlanks = new Blanks;
```

Il compilatore supporta gli operatori **New** e **Delete** di una matrice di membri in una dichiarazione di classe. Ad esempio:

```cpp
class MyClass
{
public:
   void * operator new[] (size_t)
   {
      return 0;
   }
   void   operator delete[] (void*)
   {
   }
};

int main()
{
   MyClass *pMyClass = new MyClass[5];
   delete [] pMyClass;
}
```

### <a name="handling-insufficient-memory"></a>Gestione della memoria insufficiente

Il test per l'allocazione di memoria non riuscita può essere eseguito come illustrato di seguito:

```cpp
#include <iostream>
using namespace std;
#define BIG_NUMBER 100000000
int main() {
   int *pI = new int[BIG_NUMBER];
   if( pI == 0x0 ) {
      cout << "Insufficient memory" << endl;
      return -1;
   }
}
```

Esiste un altro modo per gestire le richieste di allocazione di memoria non riuscite. Scrivere una routine di ripristino personalizzata per gestire un errore di questo tipo, quindi registrare la funzione chiamando la funzione di runtime [_set_new_handler](../c-runtime-library/reference/set-new-handler.md) .

##  <a id="delete_operator"></a> Operatore delete

La memoria allocata in modo dinamico tramite l'operatore **New** può essere liberata mediante l'operatore **Delete** . L'operatore delete chiama la funzione **operator delete** , che libera la memoria al pool disponibile. L'utilizzo dell'operatore **Delete** causa anche la chiamata del distruttore della classe (se presente).

Sono disponibili funzioni **operator delete** globali e con ambito classe. Per una determinata classe è possibile definire una sola funzione **operator delete** . Se definito, nasconde la funzione globale **operator delete** . La funzione globale **operator delete** viene sempre chiamata per le matrici di qualsiasi tipo.

Funzione globale **operator delete** . Esistono due moduli per le funzioni globali **Delete** e **operator delete** del membro della classe:

```cpp
void operator delete( void * );
void operator delete( void *, size_t );
```

Per una determinata classe può essere presente solo uno dei due form precedenti. Il primo formato accetta un solo argomento di tipo `void *`, che contiene un puntatore all'oggetto da deallocare. Il secondo form, ovvero ridimensiona la deallocazione, accetta due argomenti, il primo dei quali è un puntatore al blocco di memoria da deallocare e il secondo di cui è il numero di byte da deallocare. Il tipo restituito di entrambi i form è **void** (**operator delete** non può restituire un valore).

Lo scopo della seconda forma è velocizzare la ricerca della categoria di dimensioni corrette dell'oggetto da eliminare, che spesso non viene archiviato vicino all'allocazione stessa e probabilmente non memorizzato nella cache. Il secondo formato è utile quando una funzione **operator delete** di una classe base viene utilizzata per eliminare un oggetto di una classe derivata.

La funzione **operator delete** è statica. Pertanto, non può essere virtuale. La funzione **operator delete** rispetta il controllo di accesso, come descritto in [controllo dell'accesso ai membri](member-access-control-cpp.md).

Nell'esempio seguente vengono illustrate le funzioni **operator new** e **operator delete** definite dall'utente progettate per registrare le allocazioni e le deallocazioni della memoria:

```cpp
#include <iostream>
using namespace std;

int fLogMemory = 0;      // Perform logging (0=no; nonzero=yes)?
int cBlocksAllocated = 0;  // Count of blocks allocated.

// User-defined operator new.
void *operator new( size_t stAllocateBlock ) {
   static int fInOpNew = 0;   // Guard flag.

   if ( fLogMemory && !fInOpNew ) {
      fInOpNew = 1;
      clog << "Memory block " << ++cBlocksAllocated
          << " allocated for " << stAllocateBlock
          << " bytes\n";
      fInOpNew = 0;
   }
   return malloc( stAllocateBlock );
}

// User-defined operator delete.
void operator delete( void *pvMem ) {
   static int fInOpDelete = 0;   // Guard flag.
   if ( fLogMemory && !fInOpDelete ) {
      fInOpDelete = 1;
      clog << "Memory block " << cBlocksAllocated--
          << " deallocated\n";
      fInOpDelete = 0;
   }

   free( pvMem );
}

int main( int argc, char *argv[] ) {
   fLogMemory = 1;   // Turn logging on
   if( argc > 1 )
      for( int i = 0; i < atoi( argv[1] ); ++i ) {
         char *pMem = new char[10];
         delete[] pMem;
      }
   fLogMemory = 0;  // Turn logging off.
   return cBlocksAllocated;
}
```

Il codice precedente può essere utilizzato per rilevare le "perdite di memoria", ovvero della memoria allocata nell'archiviazione disponibile ma che non viene mai liberata. Per eseguire questo rilevamento, gli operatori **New** e **Delete** globali vengono ridefiniti per conteggiare l'allocazione e la deallocazione della memoria.

Il compilatore supporta gli operatori **New** e **Delete** di una matrice di membri in una dichiarazione di classe. Ad esempio:

```cpp
// spec1_the_operator_delete_function2.cpp
// compile with: /c
class X  {
public:
   void * operator new[] (size_t) {
      return 0;
   }
   void operator delete[] (void*) {}
};

void f() {
   X *pX = new X[5];
   delete [] pX;
}
```
