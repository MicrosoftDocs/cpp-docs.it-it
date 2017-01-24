---
title: "Operatori new e delete | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "delete_cpp"
  - "new_cpp"
  - "new"
  - "delete"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "delete (parola chiave) [C++], sintassi"
  - "new (parola chiave) [C++], allocazione dinamica di oggetti"
  - "nothrownew.obj"
ms.assetid: fa721b9e-0374-4f04-bb87-032ea775bcc8
caps.latest.revision: 16
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori new e delete
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

C\+\+ supporta l'allocazione e la deallocazione dinamica degli oggetti mediante gli operatori [delete](../cpp/new-operator-cpp.md) e [new](../cpp/delete-operator-cpp.md).  Questi operatori allocano memoria per gli oggetti da un pool denominato archivio libero.  L'operatore `new` chiama la funzione speciale [operator new](../misc/operator-new-function.md) e l'operatore `delete` chiama la funzione speciale [operator delete](../misc/operator-delete-function.md).  
  
 In [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)].NET 2002, la funzione `new` della libreria C\+\+ standard supporterà il comportamento specificato nello standard C\+\+ di generare un'eccezione std::bad\_alloc se l'allocazione di memoria ha esito negativo.  
  
 La funzione `new` della libreria di runtime C inoltre genererà un'eccezione std::bad\_alloc se l'allocazione di memoria ha esito negativo.  
  
 Se si desidera che la versione che non genera versione di `new` per la libreria di runtime C, collegare il programma con nothrownew.obj.  Tuttavia, quando si esegue il collegamento a nothrownew.obj, `new` della libreria C\+\+ standard non funzionerà più.  
  
 Per un elenco di file di libreria che includono la libreria di runtime C e la libreria C\+\+ standard, vedere [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md).  
  
## Operatore new  
 Quando un'istruzione come la seguente viene rilevata in un programma, viene convertita in una chiamata alla funzione `operator new`:  
  
```  
char *pch = new char[BUFFER_SIZE];  
```  
  
 Se la richiesta è per i byte zero di archiviazione, **operator new** restituisce un puntatore a un oggetto distinto \(ovvero chiamate ripetute a puntatori diversi di ritorno **operator new**\).  Se la memoria disponibile non è sufficiente per la richiesta di allocazione, **operator new** restituisce **NULL** o genera un'eccezione \(vedere [Gli operatori new e delete](../cpp/new-and-delete-operators.md) per altre informazioni\).  
  
 È possibile scrivere una routine che tenta di liberare memoria e riprovate l'allocazione; vedere [\_set\_new\_handler](../c-runtime-library/reference/set-new-handler.md) per altre informazioni.  Per altre informazioni sulla combinazione di aggiornamento, vedere il seguente argomento, [Gestire gli stati di memoria insufficiente](../misc/handling-insufficient-memory-conditions.md).  
  
 I due ambiti delle funzioni `operator new` sono descritti nella tabella seguente.  
  
### Ambito per le funzioni operator new  
  
|Operatore|Ambito|  
|---------------|------------|  
|**::operator new**|Globale|  
|*class\-name* **::operator new**|Classe|  
  
 Il primo argomento di **operator new** deve essere di tipo **size\_t** \(un tipo definito da STDDEF.H\) e il tipo restituito è sempre **void \***.  
  
 La funzione globale **operator new** viene chiamata quando l'operatore **new** viene usato per allocare oggetti di tipi incorporati, gli oggetti di tipo classe che non contengono funzioni **operator new** definite dall'utente e matrici di qualsiasi tipo.  Quando l'operatore **new** viene usato per allocare oggetti di un tipo di classe in cui viene definito **operator new**, viene chiamato **operator new** di tale classe.  
  
 Una funzione **operator new** definita per una classe è una funzione membro statico \(che non può, pertanto, essere virtuale\) che nasconde la funzione globale **operator new** degli oggetti di tale tipo di classe.  Si consideri il caso in cui **new** viene usato per allocare e impostare la memoria in un determinato valore:  
  
```  
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
  
 L'argomento fornito tra parentesi a **new** viene passato a `Blanks::operator new` come argomento `chInit`.  Tuttavia, la funzione globale **operator new** è nascosta, in questo modo il codice seguente genera un errore:  
  
```  
Blanks *SomeBlanks = new Blanks;  
```  
  
 In Visual C\+\+ 5.0 e nelle versioni precedenti, i tipi nonclass e tutte le matrici \(indipendentemente dal fatto che costituiscono il tipo **class**\) allocati mediante l'operatore **new** usano sempre la funzione globale **operator new**.  
  
 A partire da Visual C\+\+ 5.0, il compilatore supporta gli operatori **new** e **delete** della matrice di membro in una dichiarazione di classe.  Ad esempio:  
  
```  
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
  
### Gestione della memoria insufficiente  
 Il test sull'allocazione di memoria non riuscita può essere realizzato con il codice seguente:  
  
```  
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
  
 Per gestire le richieste di allocazione di memoria non riuscita, è possibile scrivere una routine di recupero personalizzata per gestire tale errore, quindi registrare la funzione chiamando la funzione di runtime [\_set\_new\_handler](../c-runtime-library/reference/set-new-handler.md).  
  
## Operatore delete  
 La memoria allocata in modo dinamico mediante l'operatore **new** può essere liberata mediante l'operatore **delete**.  L'operatore delete chiama la funzione **operator delete**, la quale libera la memoria reinserendola nel pool di memoria disponibile.  Usando l'operatore **delete** viene inoltre chiamato il distruttore della classe \(se presente\).  
  
 Sono disponibili funzioni **operator delete** globali e a livello di ambito della classe.  Per una determinata classe è possibile definire una sola funzione **operator delete**. Se definita, questa nasconderà la funzione globale **operator delete**.  La funzione globale **operator delete** viene sempre chiamata per le matrici di qualsiasi tipo.  
  
 La funzione globale **operator delete**, se dichiarata, accetta un unico argomento di tipo **void \***, il quale contiene un puntatore all'oggetto da deallocare.  Il tipo restituito è `void` \(**operator delete** non può restituire un valore\).  Esistono due formati per le funzioni **operator delete** di membri della classe:  
  
```  
void operator delete( void * );  
void operator delete( void *, size_t );  
```  
  
 Per una determinata classe può essere presente solo una delle due varianti precedenti.  Il primo formato funziona come descritto per la funzione `operator delete`globale.  Il secondo formato accetta due argomenti, il primo dei quali è un puntatore al blocco di memoria da deallocare e il secondo è il numero di byte da deallocare.  Il secondo formato è particolarmente utile quando una funzione **operator delete** di una classe base viene usata per eliminare un oggetto di una classe derivata.  
  
 La funzione **operator delete** è statica, pertanto non può essere virtuale.  La funzione `operator delete` obbedisce al controllo di accesso, come descritto in [Controllo dell'accesso ai membri](../cpp/member-access-control-cpp.md).  
  
 Il seguente esempio mostra le funzioni definite dall'utente **operator new** e **operator delete**, progettate per registrare le allocazioni e le deallocazioni della memoria:  
  
```  
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
  
 Il codice precedente può essere usato per rilevare le "perdite di memoria", ovvero della memoria allocata nell'archiviazione disponibile ma che non viene mai liberata.  Per eseguire questo rilevamento, gli operatori **new** e **delete** vengono ridefiniti per contare l'allocazione e la deallocazione di memoria.  
  
 A partire da Visual C\+\+ 5.0, il compilatore supporta gli operatori **new** e **delete** della matrice di membro in una dichiarazione di classe.  Ad esempio:  
  
```  
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
  
## Vedere anche  
 [Funzioni membro speciali](../misc/special-member-functions-cpp.md)