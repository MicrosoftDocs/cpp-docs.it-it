---
title: Operatori new e delete
description: Gli operatori new e Delete del linguaggio C++ consentono di controllare l'allocazione.
ms.date: 07/07/2020
helpviewer_keywords:
- new keyword [C++]
- delete keyword [C++]
ms.openlocfilehash: e609d1fdbd4f945ab8709c554d1396100027c4c1
ms.sourcegitcommit: e17cc8a478b51739d67304d7d82422967b35f716
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/08/2020
ms.locfileid: "86127848"
---
# <a name="new-and-delete-operators"></a>Operatori `new` e `delete`

C++ supporta l'allocazione dinamica e la deallocazione di oggetti usando gli [`new`](new-operator-cpp.md) [`delete`](delete-operator-cpp.md) operatori e. Questi operatori allocano memoria per gli oggetti da un pool denominato archivio libero. L' **`new`** operatore chiama la funzione speciale [`operator new`](new-operator-cpp.md) e l' **`delete`** operatore chiama la funzione speciale [`operator delete`](delete-operator-cpp.md) .

La **`new`** funzione nella libreria standard c++ supporta il comportamento specificato nello standard c++, ovvero viene generata un' `std::bad_alloc` eccezione se l'allocazione di memoria ha esito negativo. Se si desidera comunque la versione non generata da **`new`** , collegare il programma a *`nothrownew.obj`* . Tuttavia, quando si esegue il collegamento con *`nothrownew.obj`* , l'impostazione predefinita **`operator new`** nella libreria standard C++ non funziona più.

Per un elenco dei file di libreria nella libreria di runtime C e nella libreria standard C++, vedere la pagina relativa alle [funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md).

## <a name="the-new-operator"></a><a id="new_operator"> </a> `new` Operatore

Il compilatore converte un'istruzione come questa in una chiamata alla funzione **`operator new`** :

```cpp
char *pch = new char[BUFFER_SIZE];
```

Se la richiesta è per i byte zero di archiviazione, **`operator new`** restituisce un puntatore a un oggetto distinto. Ovvero chiamate ripetute per **`operator new`** restituire puntatori diversi. Se la memoria disponibile non è sufficiente per la richiesta di allocazione, viene **`operator new`** generata un' `std::bad_alloc` eccezione. In alternativa, restituisce **`nullptr`** se è stato collegato un supporto non di generazione **`operator new`** .

È possibile scrivere una routine che tenti di liberare memoria e ritentare l'allocazione. Per altre informazioni, vedere [`_set_new_handler`](../c-runtime-library/reference/set-new-handler.md). Per informazioni dettagliate sullo schema di ripristino, vedere la sezione [gestione della memoria insufficiente](#handling-insufficient-memory) .

I due ambiti per le **`operator new`** funzioni sono descritti nella tabella seguente.

### <a name="scope-for-operator-new-functions"></a>Ambito per le `operator new` funzioni

| Operatore | Scope |
|--|--|
| **`::operator new`** | Globale |
| *nome classe***`::operator new`** | Classe |

Il primo argomento di **`operator new`** deve essere di tipo `size_t` , definito in \<stddef.h> e il tipo restituito è sempre **`void*`** .

La **`operator new`** funzione Global viene chiamata quando l' **`new`** operatore viene utilizzato per allocare oggetti di tipi incorporati, oggetti di tipo classe che non contengono funzioni definite dall'utente **`operator new`** e matrici di qualsiasi tipo. Quando l' **`new`** operatore viene usato per allocare oggetti di un tipo di classe in cui **`operator new`** è definito un oggetto, **`operator new`** viene chiamato tale classe.

Una **`operator new`** funzione definita per una classe è una funzione membro statica (che non può essere virtuale) che nasconde la **`operator new`** funzione globale per gli oggetti di quel tipo di classe. Si consideri il caso **`new`** in cui viene utilizzato per allocare e impostare la memoria su un valore specificato:

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

L'argomento fornito tra parentesi a **`new`** viene passato a `Blanks::operator new` come `chInit` argomento. Tuttavia, la **`operator new`** funzione globale è nascosta, causando il codice seguente per generare un errore:

```cpp
Blanks *SomeBlanks = new Blanks;
```

Il compilatore supporta **`new`** gli operatori e la matrice **`delete`** di membri in una dichiarazione di classe. Ad esempio:

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

Esiste un altro modo per gestire le richieste di allocazione di memoria non riuscite. Scrivere una routine di ripristino personalizzata per gestire tale errore, quindi registrare la funzione chiamando la [`_set_new_handler`](../c-runtime-library/reference/set-new-handler.md) funzione di run-time.

## <a name="the-delete-operator"></a><a id="delete_operator"> </a> `delete` Operatore

La memoria allocata in modo dinamico tramite l' **`new`** operatore può essere liberata usando l' **`delete`** operatore. L'operatore delete chiama la **`operator delete`** funzione, che libera la memoria dal pool disponibile. L'utilizzo dell' **`delete`** operatore causa anche la chiamata del distruttore della classe (se presente).

Sono disponibili funzioni globali e con ambito classe **`operator delete`** . **`operator delete`** Per una determinata classe è possibile definire una sola funzione; se definito, nasconde la **`operator delete`** funzione globale. La **`operator delete`** funzione Global viene sempre chiamata per le matrici di qualsiasi tipo.

Funzione globale **`operator delete`** . Esistono due moduli per le **`operator delete`** funzioni globali e membro di classe **`operator delete`** :

```cpp
void operator delete( void * );
void operator delete( void *, size_t );
```

Per una determinata classe può essere presente solo uno dei due form precedenti. Il primo formato accetta un solo argomento di tipo **`void *`** , che contiene un puntatore all'oggetto da deallocare. La seconda forma, ovvero la deallocazione ridimensionata, accetta due argomenti: il primo è un puntatore al blocco di memoria da deallocare e il secondo è il numero di byte da deallocare. Il tipo restituito di entrambi i form è **`void`** ( **`operator delete`** non può restituire un valore).

Lo scopo della seconda forma è velocizzare la ricerca della categoria di dimensioni corrette dell'oggetto da eliminare. Queste informazioni spesso non vengono archiviate in prossimità dell'allocazione stessa ed è probabile che non vengano memorizzate nella cache. Il secondo formato è utile quando una **`operator delete`** funzione di una classe di base viene usata per eliminare un oggetto di una classe derivata.

La **`operator delete`** funzione è statica, quindi non può essere virtuale. La **`operator delete`** funzione obbedisce al controllo di accesso, come descritto in [controllo dell'accesso ai membri](member-access-control-cpp.md).

Nell'esempio seguente vengono illustrate le funzioni definite dall'utente **`operator new`** e le **`operator delete`** funzioni progettate per registrare le allocazioni e le deallocazioni della memoria:

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

Il codice precedente può essere usato per rilevare la "perdita di memoria", ovvero la memoria allocata nell'archivio gratuito ma mai liberata. Per rilevare le perdite, gli **`new`** operatori globali e **`delete`** vengono ridefiniti per conteggiare l'allocazione e la deallocazione della memoria.

Il compilatore supporta **`new`** gli operatori e la matrice **`delete`** di membri in una dichiarazione di classe. Ad esempio:

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
