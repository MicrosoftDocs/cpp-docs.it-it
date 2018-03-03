---
title: Operatore new (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- new keyword [C++]
ms.assetid: 69fee812-1c28-4882-8fda-d1ad17860004
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 68843f0619b5ebc057f83bdb4f49807a15fb86a1
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="new-operator-c"></a>Operatore new (C++)
Alloca memoria per un oggetto o una matrice di oggetti di *-nome del tipo* dall'archiviazione disponibile e restituisce un puntatore opportunamente tipizzato, diverso da zero per l'oggetto.  
  
> [!NOTE]
>  Le estensioni di componenti di Microsoft C++ forniscono supporto per la parola chiave `new` per aggiungere le voci dello slot vtable. Per ulteriori informazioni, vedere [new (nuovo slot in vtable)](../windows/new-new-slot-in-vtable-cpp-component-extensions.md)  
  
## <a name="syntax"></a>Sintassi  
  
```  
[::] new [placement] new-type-name [new-initializer]  
[::] new [placement] ( type-name ) [new-initializer]  
```  
  
## <a name="remarks"></a>Note  
 In caso contrario, **nuova** restituisce zero o genera un'eccezione; vedere [nuovo ed eliminare operatori](../cpp/new-and-delete-operators.md) per ulteriori informazioni. È possibile modificare questo comportamento predefinito scrivendo una routine di gestione delle eccezioni personalizzata e chiamando il [set_new_handler](../c-runtime-library/reference/set-new-handler.md) funzione libreria run-time con il nome di funzione come argomento.  
  
 Per informazioni su come creare un oggetto nell'heap gestito, vedere [gcnew](../windows/ref-new-gcnew-cpp-component-extensions.md).  
  
 Quando **nuova** viene utilizzato per allocare memoria per un oggetto di classe C++, il costruttore dell'oggetto viene chiamato dopo che la memoria viene allocata.  
  
 Utilizzare il [eliminare](../cpp/delete-operator-cpp.md) operatore per deallocare la memoria allocata con il **nuova** operatore.  
  
 Nell'esempio viene allocata e successivamente liberata una matrice bidimensionale di caratteri di dimensione `dim` per 10. Quando si alloca una matrice multidimensionale, tutte le dimensioni eccetto la prima devono essere espressioni costanti che restituiscono valori positivi; la dimensione più a sinistra della matrice può essere una qualsiasi espressione che restituisce un valore positivo. Quando si alloca una matrice usando il **nuova** operatore, la prima dimensione può essere zero, ovvero il **nuova** operatore restituisce un puntatore univoco.  
  
```  
char (*pchar)[10] = new char[dim][10];  
delete [] pchar;  
```  
  
 Il *-nome del tipo* non può contenere **const**, `volatile`, dichiarazioni di classi o dichiarazioni di enumerazioni. Pertanto, la seguente espressione non è valida:  
  
```  
volatile char *vch = new volatile char[20];  
```  
  
 Il **nuova** operatore non alloca tipi di riferimento perché non sono oggetti.  
  
 Il **nuova** operatore non può essere utilizzato per allocare una funzione, ma può essere utilizzato per allocare i puntatori a funzioni. Nell'esempio seguente viene allocata e successivamente liberata una matrice di sette puntatori a funzioni che restituiscono numeri interi.  
  
```  
int (**p) () = new (int (*[7]) ());  
delete *p;  
```  
  
 Se si utilizza l'operatore **nuova** senza argomenti aggiuntivi e si esegue la compilazione con il [/GX](../build/reference/gx-enable-exception-handling.md), [/EHa](../build/reference/eh-exception-handling-model.md), o [/EHs](../build/reference/eh-exception-handling-model.md) opzione, il compilatore eseguirà generare il codice per chiamare l'operatore **eliminare** se il costruttore genera un'eccezione.  
  
 L'elenco seguente descrive gli elementi di sintassi di **nuova**:  
  
 *placement*  
 Fornisce un modo per passare argomenti aggiuntivi se si esegue l'overload **nuova**.  
  
 *type-name*  
 Specifica il tipo da allocare; può essere un tipo incorporato o un tipo definito dall'utente. Se la specifica del tipo è complessa, è possibile racchiuderla tra parentesi per forzare l'ordine di associazione.  
  
 *initializer*  
 Fornisce un valore per l'oggetto inizializzato. Gli inizializzatori non possono essere specificati per le matrici. Il **nuova** operatore creerà matrici di oggetti solo se la classe ha un costruttore predefinito.  
  
## <a name="example"></a>Esempio  
 Nell'esempio di codice che segue vengono allocati una matrice di caratteri e un oggetto della classe `CName`, quindi vengono successivamente liberati.  
  
```  
// expre_new_Operator.cpp  
// compile with: /EHsc  
#include <string.h>  
  
class CName {  
public:  
   enum {  
      sizeOfBuffer = 256  
   };  
  
   char m_szFirst[sizeOfBuffer];  
   char m_szLast[sizeOfBuffer];  
  
public:  
   void SetName(char* pszFirst, char* pszLast) {  
     strcpy_s(m_szFirst, sizeOfBuffer, pszFirst);  
     strcpy_s(m_szLast, sizeOfBuffer, pszLast);  
   }  
  
};  
  
int main() {  
   // Allocate memory for the array  
   char* pCharArray = new char[CName::sizeOfBuffer];  
   strcpy_s(pCharArray, CName::sizeOfBuffer, "Array of characters");  
  
   // Deallocate memory for the array  
   delete [] pCharArray;             
   pCharArray = NULL;  
  
   // Allocate memory for the object  
   CName* pName = new CName;  
   pName->SetName("Firstname", "Lastname");  
  
   // Deallocate memory for the object  
   delete pName;  
   pName = NULL;  
}  
```  
  
## <a name="example"></a>Esempio  
 Se si utilizza il nuovo form di posizione del **nuova** (operatore), il form con gli argomenti oltre alla dimensione dell'allocazione, il compilatore non supporta un form di posizione di **eliminare** operatore se il costruttore genera un'eccezione. Ad esempio:  
  
```  
// expre_new_Operator2.cpp  
// C2660 expected  
class A {  
public:  
   A(int) { throw "Fail!"; }  
};  
void F(void) {  
   try {  
      // heap memory pointed to by pa1 will be deallocated  
      // by calling ::operator delete(void*).  
      A* pa1 = new A(10);  
   } catch (...) {  
   }  
   try {  
      // This will call ::operator new(size_t, char*, int).  
      // When A::A(int) does a throw, we should call  
      // ::operator delete(void*, char*, int) to deallocate  
      // the memory pointed to by pa2.  Since  
      // ::operator delete(void*, char*, int) has not been implemented,  
      // memory will be leaked when the deallocation cannot occur.  
  
      A* pa2 = new(__FILE__, __LINE__) A(20);  
   } catch (...) {  
   }  
}  
  
int main() {  
   A a;  
}  
```  
  
## <a name="initializing-object-allocated-with-new"></a>Inizializzazione di oggetti allocati con new  
 Facoltativo *inizializzatore* campo verrà incluso nella grammatica per il **nuova** operatore. In questo modo i nuovi oggetti possono essere inizializzati con i costruttori definiti dall'utente. Per ulteriori informazioni su come eseguire l'inizializzazione, vedere [inizializzatori](../cpp/initializers.md). Nell'esempio seguente viene illustrato come utilizzare un'espressione di inizializzazione con il **nuova** operatore:  
  
```  
// expre_Initializing_Objects_Allocated_with_new.cpp  
class Acct  
{  
public:  
    // Define default constructor and a constructor that accepts  
    //  an initial balance.  
    Acct() { balance = 0.0; }  
    Acct( double init_balance ) { balance = init_balance; }  
private:  
    double balance;  
};  
  
int main()  
{  
    Acct *CheckingAcct = new Acct;  
    Acct *SavingsAcct = new Acct ( 34.98 );  
    double *HowMuch = new double ( 43.0 );  
    // ...  
}  
```  
  
 In questo esempio, l'oggetto `CheckingAcct` viene allocato usando il **nuova** (operatore), ma alcuna inizializzazione predefinita è specificata. Viene pertanto chiamato il costruttore predefinito della classe `Acct()`. L'oggetto `SavingsAcct` viene quindi allocato nello stesso modo, con l'eccezione che viene inizializzato in modo esplicito su 34,98. Poiché 34,98 è di tipo **doppie**, viene chiamato il costruttore che accetta un argomento di tipo per gestire l'inizializzazione. Infine, il tipo nonclass `HowMuch` viene inizializzato su 43,0.  
  
 Se un oggetto è di un tipo di classe e tale classe dispone di costruttori (come nell'esempio precedente), l'oggetto può essere inizializzata dal **nuova** operatore solo se viene soddisfatta una delle seguenti condizioni:  
  
-   Gli argomenti forniti nell'inizializzatore concordano con quelli di un costruttore.  
  
-   La classe dispone di un costruttore predefinito (un costruttore che può essere chiamato senza argomenti).  
  
 Alcuna inizializzazione esplicita per ogni elemento non può essere eseguita quando assegnazione alle matrici mediante il **nuova** operatore; solo il costruttore predefinito, se presente, viene chiamato. Vedere [argomenti predefiniti](../cpp/default-arguments.md) per ulteriori informazioni.  
  
 Se l'allocazione di memoria ha esito negativo (`operator new` restituisce un valore 0), non viene eseguita alcuna inizializzazione. In questo modo viene garantita la protezione contro i tentativi di inizializzare dati inesistenti.  
  
 Come nel caso delle chiamate di funzione, l'ordine in cui le espressioni vengono valutate non è definito. Non bisogna inoltre fare affidamento sul fatto che queste espressioni vengano completamente valutate prima che venga eseguita l'allocazione della memoria. Se l'allocazione di memoria ha esito negativo e **nuova** operatore restituisce zero, alcune espressioni nell'inizializzatore non possono essere valutati completamente.  
  
## <a name="lifetime-of-objects-allocated-with-new"></a>Durata di oggetti allocati con new  
 Gli oggetti allocati mediante il **nuova** operatore non vengono eliminati definitivamente quando viene terminata l'ambito in cui sono definiti. Poiché il **nuova** operatore restituisce un puntatore a oggetti che alloca, il programma deve definire un puntatore con ambito appropriato per accedere a tali oggetti. Ad esempio:  
  
```  
// expre_Lifetime_of_Objects_Allocated_with_new.cpp  
// C2541 expected  
int main()  
{  
    // Use new operator to allocate an array of 20 characters.  
    char *AnArray = new char[20];  
  
    for( int i = 0; i < 20; ++i )  
    {  
        // On the first iteration of the loop, allocate  
        //  another array of 20 characters.  
        if( i == 0 )  
        {  
            char *AnotherArray = new char[20];  
        }  
    }  
  
    delete [] AnotherArray; // Error: pointer out of scope.  
    delete [] AnArray;      // OK: pointer still in scope.  
}  
```  
  
 Una volta che il puntatore `AnotherArray` esce dall'ambito (nell'esempio), l'oggetto non può più essere eliminato.  
  
## <a name="how-new-works"></a>Funzionamento di new  
 Il *allocazione espressione* : l'espressione che contiene il **nuova** operatore, effettua tre operazioni:  
  
-   Individua e riserva uno spazio di archiviazione per l'oggetto o gli oggetti da allocare. Una volta completata questa fase, la quantità corretta di spazio di archiviazione viene allocata, ma non è ancora un oggetto.  
  
-   Inizializza l'oggetto/gli oggetti. Una volta che l'inizializzazione è stata completata, vi sono informazioni sufficienti affinché l'archiviazione allocata sia un oggetto.  
  
-   Restituisce un puntatore agli oggetti di un tipo di puntatore derivato da *nuovo nome di tipo* o *-nome del tipo*. Il programma usa questo puntatore per accedere all'oggetto appena allocato.  
  
 Il **nuova** operatore richiama la funzione `operator new`. Per le matrici di qualsiasi tipo e per gli oggetti che non sono di **classe**, `struct`, o **unione** tipi, una funzione globale, **:: operatore new**, viene chiamata per allocare spazio di archiviazione. Gli oggetti di tipo di classe possono definire la propria funzione membro statico `operator new` in base alle classi.  
  
 Quando il compilatore rileva la **nuova** operatore per allocare un oggetto di tipo `type`, effettua una chiamata a `type` **:: operatore new (sizeof (** `type` **))**  o, se non definita dall'utente `operator new` è definito, **:: operatore new (sizeof (** `type` **))**. Pertanto, il **nuova** operatore può allocare la quantità di memoria corretta per l'oggetto.  
  
> [!NOTE]
>  L'argomento `operator new` è di tipo **size_t**. Questo tipo è definito in \<Direct. h >, \<malloc. h >, \<Memory. h >, \<Search. h >, \<STDDEF. h >, \<stdio. h >, \<STDLIB. h >, \<String. h >, e \<Time. h >.  
  
 Consente di specificare un'opzione nella grammatica *posizionamento* (vedere la grammatica per [nuovo operatore](../cpp/new-operator-cpp.md)). Il *posizionamento* parametro può essere utilizzato solo per le implementazioni definite dall'utente di `operator new`; permette di informazioni aggiuntive da passare al `operator new`. Un'espressione con un *posizionamento* campo, ad esempio `T *TObject = new ( 0x0040 ) T;` viene convertito in `T *TObject = T::operator new( sizeof( T ), 0x0040 );` se classe T dispone dell'operatore membro new, in caso contrario in `T *TObject = ::operator new( sizeof( T ), 0x0040 );`.  
  
 Lo scopo originale del *posizionamento* campo era di consentire oggetti hardware dipendenti di essere allocati in indirizzi specificati dall'utente.  
  
> [!NOTE]
>  Sebbene l'esempio precedente mostra un solo argomento nel *posizionamento* campo, non vi è alcuna restrizione sul numero di argomenti aggiuntivi può essere passato a `operator new` in questo modo.  
  
 Anche se è stato definito `operator new` per un tipo di classe, l'operatore globale può essere usato tramite il formato dell'esempio seguente:  
  
```  
T *TObject =::new TObject;  
```  
  
 L'operatore di risoluzione dell'ambito (`::`) forza l'utilizzo dell'oggetto globale **nuova** operatore.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [nuovo ed eliminare operatori](../cpp/new-and-delete-operators.md)