---
title: nuovo ed eliminare operatori | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- delete_cpp
- new
dev_langs:
- C++
helpviewer_keywords:
- new keyword [C++], dynamic allocation of objects
- nothrownew.obj
- delete keyword [C++], syntax
ms.assetid: fa721b9e-0374-4f04-bb87-032ea775bcc8
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 88f91e113ef47dc44ec0a300a99051cfaed3f08c
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="new-and-delete-operators"></a>Operatori new e delete

C++ supporta l'allocazione dinamica e la deallocazione di oggetti utilizzando il [nuova](../cpp/new-operator-cpp.md) e [eliminare](../cpp/delete-operator-cpp.md) operatori. Questi operatori allocano memoria per gli oggetti da un pool denominato archivio libero. Il `new` operatore chiama la funzione speciale [operatore new](../cpp/new-operator-cpp.md)e `delete` operatore chiama la funzione speciale [operatore delete](../cpp/delete-operator-cpp.md).  
  
 In Visual C++ .NET 2002, la `new` funzione nella libreria C++ Standard supporterà il comportamento specificato nello standard C++, che consiste nel generare un'eccezione std:: bad_alloc se l'allocazione di memoria ha esito negativo. Se si desidera la versione non generanti di `new`, collegare il programma con nothrownew.obj. Tuttavia, in caso di collegamento a nothrownew.obj, il valore predefinito `operator new` nella libreria Standard C++ non funziona più.  
  
 Per un elenco dei file della libreria che costituiscono la libreria di Runtime C e la libreria Standard di C++, vedere [funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md).  
  
##  <a id="new_operator"></a> L'operatore new  
 Quando un'istruzione come la seguente viene rilevata in un programma, viene convertita in una chiamata alla funzione `operator new`:  
  
```cpp  
char *pch = new char[BUFFER_SIZE];  
```  
  
Se la richiesta è pari a zero byte di spazio di archiviazione, **operatore new** restituisce un puntatore a un oggetto distinto (ovvero chiamate ripetute a **operatore new** restituiscono puntatori diversi). Se la memoria è insufficiente per la richiesta di allocazione, **operatore new** genera un'eccezione std:: bad_alloc oppure restituisce **nullptr** se è stato collegato in non generanti `operator new` supportano.  
  
È possibile scrivere una routine che tenta di liberare la memoria e riprovate l'allocazione; vedere [set_new_handler](../c-runtime-library/reference/set-new-handler.md) per ulteriori informazioni. Per ulteriori informazioni sullo schema di ripristino, vedere la sezione di memoria insufficiente di gestione di questo argomento.  

  
I due ambiti delle funzioni `operator new` sono descritti nella tabella seguente.  
  
### <a name="scope-for-operator-new-functions"></a>Ambito per le funzioni operator new  
  
|Operatore|Ambito|  
|--------------|-----------|  
|**:: operatore new**|Global|  
|*Nome classe* **:: operatore new**|Classe|  
  
 Il primo argomento di **operatore new** deve essere di tipo **size_t** (un tipo definito da STDDEF. H) e il tipo restituito è sempre **void \* **.  
  
 Globale **operatore new** funzione viene chiamata quando la **nuova** operatore viene usato per allocare oggetti di tipi predefiniti, definiti dall'utente gli oggetti del tipo di classe che non contengono **operatore new** funzioni e le matrici di qualsiasi tipo. Quando il **nuova** operatore viene usato per allocare oggetti di un tipo di classe in cui un **operatore new** è definito, tale classe **operatore new** viene chiamato.  
  
 Un **operatore new** funzione definita per una classe è una funzione membro statico (che non è possibile, pertanto, essere virtuale) che nasconde globale **operatore new** funzione per gli oggetti di quel tipo di classe. Si consideri il caso in cui **nuova** viene utilizzato per allocare e impostare la memoria per un determinato valore:  
  
```cpp  
// spec1_the_operator_new_function1.cpp  
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
  
 L'argomento fornito tra parentesi a **nuova** viene passato a `Blanks::operator new` come il `chInit` argomento. Tuttavia, globale **operatore new** funzione è nascosta, causando il codice seguente per generare un errore:  
  
```cpp  
Blanks *SomeBlanks = new Blanks;  
```  
  
 In tipi di Visual C++ 5.0 e versioni precedenti, nonclass e tutte le matrici (indipendentemente dal fatto che di **classe** tipo) allocati mediante il **nuova** sempre utilizzare l'operatore globale **operatore new** (funzione).  
  
 A partire da Visual C++ 5.0, il compilatore supporta la matrice di membro **nuova** e **eliminare** operatori in una dichiarazione di classe. Ad esempio:  
  
```cpp  
// spec1_the_operator_new_function2.cpp  
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
 Il test sull'allocazione di memoria non riuscita può essere realizzato con il codice seguente:  
  
```cpp  
// insufficient_memory_conditions.cpp  
// compile with: /EHsc  
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
  
 È possibile gestire le richieste di allocazione di memoria non riuscite: scrivere una routine di ripristino personalizzato per gestire questo errore, quindi registrare la funzione chiamando il [set_new_handler](../c-runtime-library/reference/set-new-handler.md) funzione di runtime.  
  
##  <a id="delete_operator"></a> L'operatore delete  
 Memoria allocata in modo dinamico mediante il **nuova** operatore può essere liberato mediante il **eliminare** operatore. L'operatore delete chiama la **operatore delete** (funzione), che libera memoria al pool disponibili. Utilizzo di **eliminare** operatore anche fa sì che il distruttore della classe (se presente) da chiamare.  
  
 Vi sono globali e con ambito classe **operatore delete** funzioni. Un solo **operatore delete** funzione può essere definita per una determinata classe, se definito, in quanto viene nascosta globale **operatore delete** (funzione). Globale **operatore delete** funzione viene sempre chiamata per le matrici di qualsiasi tipo.  
  
 Globale **operatore delete** (funzione). Esistono due formati per globale **operatore delete** e membri di classe **operatore delete** funzioni:  
  
```cpp  
void operator delete( void * );  
void operator delete( void *, size_t );  
```  
  
 Solo uno dei due formati precedenti può essere presente per una determinata classe. La prima forma accetta un singolo argomento di tipo **void \* **, che contiene un puntatore all'oggetto da deallocare. La seconda forma, ovvero dimensioni deallocazione, accetta due argomenti, il primo dei quali è un puntatore al blocco di memoria per deallocare e il secondo dei quali è il numero di byte da deallocare. Il tipo restituito di entrambe le forme è `void` (**operatore delete** non può restituire un valore).  
  
 Lo scopo del secondo form consiste nel velocizzare la ricerca per la categoria di dimensioni corrette dell'oggetto da eliminare, che spesso non è archiviato in prossimità di allocazione di se stesso e probabilmente rimosso dalla cache; il secondo modulo è particolarmente utile quando un **operatore delete** da una classe base viene utilizzata per eliminare un oggetto di una classe derivata.  
  
 Il **operatore delete** funzione è statica, pertanto non può essere virtuale. Il `operator delete` funzione rispetta il controllo di accesso, come descritto in [controllo di accesso ai membri](../cpp/member-access-control-cpp.md).  
  
 Nell'esempio seguente viene definita dall'utente **operatore new** e **operatore delete** funzioni progettate per registrare le allocazioni e deallocazioni di memoria:  
  
```cpp  
// spec1_the_operator_delete_function1.cpp  
// compile with: /EHsc  
// arguments: 3  
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
  
 Il codice precedente può essere utilizzato per rilevare le "perdite di memoria", ovvero della memoria allocata nell'archiviazione disponibile ma che non viene mai liberata. Per eseguire il rilevamento globale **nuova** e **eliminare** operatori vengono ridefiniti per contare l'allocazione e deallocazione della memoria.  
  
 A partire da Visual C++ 5.0, il compilatore supporta la matrice di membro **nuova** e **eliminare** operatori in una dichiarazione di classe. Ad esempio:  
  
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


