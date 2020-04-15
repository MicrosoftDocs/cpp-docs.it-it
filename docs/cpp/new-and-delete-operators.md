---
title: Operatori new e delete
ms.date: 11/19/2019
helpviewer_keywords:
- new keyword [C++]
- delete keyword [C++]
ms.assetid: fa721b9e-0374-4f04-bb87-032ea775bcc8
ms.openlocfilehash: fd170c1500e2d80879fdd89f7d825930189ae942
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367882"
---
# <a name="new-and-delete-operators"></a>Operatori new e delete

Il linguaggio C, ovvero l'allocazione e la deallocazione degli oggetti mediante gli operatori [new](new-operator-cpp.md) e [delete.](delete-operator-cpp.md) Questi operatori allocano memoria per gli oggetti da un pool denominato archivio libero. L'operatore **new** chiama [l'operatore](new-operator-cpp.md)di funzione speciale new e l'operatore **delete** chiama [l'operatore](delete-operator-cpp.md)di funzione speciale delete .

La **nuova** funzione nella libreria standard di C, supporta il comportamento specificato nello standard di C, che consiste nel generare un'eccezione std::bad_alloc se l'allocazione di memoria non riesce. Se si desidera ancora la versione non generante di **new**, collegare il programma a nothrownew.obj. Tuttavia, quando si esegue il collegamento con nothrownew.obj, **l'operatore** predefinito new nella libreria standard di C.

Per un elenco dei file di libreria che costituiscono la libreria di runtime C e la libreria standard di C, vedere [Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md).

## <a name="the-new-operator"></a><a id="new_operator"> </a> Il nuovo operatore

Quando in un programma viene rilevata un'istruzione di tipo seguente, questa viene convertita in una chiamata **all'operatore**di funzione new :

```cpp
char *pch = new char[BUFFER_SIZE];
```

Se la richiesta è per zero byte di archiviazione, **operator new** restituisce un puntatore a un oggetto distinto (vale a dire, le chiamate ripetute a **operator new** restituiscono puntatori diversi). Se la memoria non è sufficiente per la `std::bad_alloc` richiesta di allocazione, operator **new** genera un'eccezione o restituisce **nullptr** se è stato collegato il supporto **new dell'operatore** non di generazione.

È possibile scrivere una routine che tenta di liberare memoria e ripetere l'allocazione; per ulteriori informazioni, vedere [_set_new_handler.](../c-runtime-library/reference/set-new-handler.md) Per ulteriori informazioni sullo schema di ripristino, vedere la sezione Gestione della memoria insufficiente di questo argomento.

I due ambiti per le funzioni **operator new** sono descritti nella tabella seguente.

### <a name="scope-for-operator-new-functions"></a>Ambito per le nuove funzioni dell'operatore

|Operatore|Scope|
|--------------|-----------|
|**::operator new**|Global|
|*nome-classe* **::operator new**|Classe|

Il primo argomento di **operator** `size_t` new deve essere \<di tipo (un tipo definito in stddef.h>) e il tipo restituito è sempre **void** <strong>\*</strong>.

La funzione global **operator new** viene chiamata quando l'operatore **new** viene utilizzato per allocare oggetti di tipi incorporati, oggetti di tipo classe che non contengono funzioni **operator new** definite dall'utente e matrici di qualsiasi tipo. Quando l'operatore **new** viene utilizzato per allocare oggetti di un tipo di classe in cui è definito un **operatore new,** viene chiamato l'operatore **new** di tale classe.

Una funzione **operator new** definita per una classe è una funzione membro statica (che non può, pertanto, essere virtuale) che nasconde la funzione **new dell'operatore** globale per gli oggetti di quel tipo di classe. Si consideri il caso in cui new viene utilizzato per allocare e impostare la memoria su un determinato valore:Consider the case where **new** is used to allocate and set memory to a given value:

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

L'argomento fornito tra parentesi a `Blanks::operator new` **new** viene passato a come `chInit` argomento. Tuttavia, la funzione **global operator new** è nascosta, causando codice come il seguente per generare un errore:

```cpp
Blanks *SomeBlanks = new Blanks;
```

Il compilatore supporta gli operatori **new** e **delete** della matrice di membri in una dichiarazione di classe. Ad esempio:

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

Il test per l'allocazione di memoria non riuscita può essere eseguito come illustrato di seguito:Testing for failed memory allocation can be done as shown here:

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

Esiste un altro modo per gestire le richieste di allocazione di memoria non riuscite. Scrivere una routine di ripristino personalizzata per gestire un errore di questo tipo, quindi registrare la funzione chiamando la funzione di runtime [_set_new_handler.](../c-runtime-library/reference/set-new-handler.md)

## <a name="the-delete-operator"></a><a id="delete_operator"> </a> L'operatore delete

La memoria allocata in modo dinamico utilizzando l'operatore **new** può essere liberata utilizzando l'operatore **delete.** L'operatore delete chiama la funzione **operator delete,** che libera memoria nel pool disponibile. L'utilizzo dell'operatore **delete** determina anche la chiamata del distruttore della classe (se presente).

Sono disponibili funzioni di **eliminazione dell'operatore** globale e con ambito di classe. È possibile definire una sola funzione **operator delete** per una determinata classe. Se definito, nasconde la funzione global **operator delete.** La funzione global **operator delete** viene sempre chiamata per matrici di qualsiasi tipo.

Funzione **di eliminazione dell'operatore** globale. Esistono due forme per le funzioni **di eliminazione dell'operatore** globale delete e **dell'operatore** membro di classe delete:

```cpp
void operator delete( void * );
void operator delete( void *, size_t );
```

Solo uno dei due moduli precedenti può essere presente per una determinata classe. Il primo form accetta un `void *`singolo argomento di tipo , che contiene un puntatore all'oggetto da deallocare. La seconda forma, la delocazione ridimensionata, accetta due argomenti, il primo dei quali è un puntatore al blocco di memoria da deallocare e il secondo dei quali è il numero di byte da deallare. Il tipo restituito di entrambi i moduli è **void** (**operator delete** non può restituire un valore).

Lo scopo del secondo modulo è quello di velocizzare la ricerca della categoria di dimensioni corretta dell'oggetto da eliminare, che spesso non viene archiviata vicino all'allocazione stessa e probabilmente non memorizzata nella cache. La seconda forma è utile quando una funzione **operator delete** da una classe base viene utilizzata per eliminare un oggetto di una classe derivata.

La funzione **operator delete** è statica; pertanto, non può essere virtuale. La funzione **operator delete** rispetta il controllo di accesso, come descritto in Controllo [di accesso](member-access-control-cpp.md)ai membri .

Nell'esempio seguente vengono illustrate le funzioni **new operator new** e operator **delete** definite dall'utente progettate per registrare allocazioni e deallocazione di memoria:

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

Il codice precedente può essere utilizzato per rilevare le "perdite di memoria", ovvero della memoria allocata nell'archiviazione disponibile ma che non viene mai liberata. Per eseguire questo rilevamento, gli operatori **globali new** e **delete** vengono ridefiniti per contare l'allocazione e la deallocazione della memoria.

Il compilatore supporta gli operatori **new** e **delete** della matrice di membri in una dichiarazione di classe. Ad esempio:

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
