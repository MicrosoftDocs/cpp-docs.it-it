---
title: Operatore new (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- new keyword [C++]
ms.assetid: 69fee812-1c28-4882-8fda-d1ad17860004
ms.openlocfilehash: ac89bf37b8aaaa9d77393b714a233f8a4c998139
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367869"
---
# <a name="new-operator-c"></a>Operatore new (C++)

Alloca memoria per un oggetto o una matrice di oggetti di *nome-tipo* dall'archivio libero e restituisce un puntatore a zero e tipizzato in modo appropriato all'oggetto.

> [!NOTE]
> Estensioni dei componenti di Microsoft C, fornisce il supporto per la parola chiave **new** per aggiungere voci di slot vtable. Per altre informazioni, vedere [new (nuovo slot in vtable)For more information, see new (new slot in vtable)](../extensions/new-new-slot-in-vtable-cpp-component-extensions.md)

## <a name="syntax"></a>Sintassi

```
[::] new [placement] new-type-name [new-initializer]
[::] new [placement] ( type-name ) [new-initializer]
```

## <a name="remarks"></a>Osservazioni

Se non ha esito positivo, **new** restituisce zero o genera un'eccezione; Per ulteriori informazioni, vedere [Operatori new e delete](../cpp/new-and-delete-operators.md) . È possibile modificare questo comportamento predefinito scrivendo una routine di gestione delle eccezioni personalizzata e chiamando la funzione della libreria di runtime [di _set_new_handler](../c-runtime-library/reference/set-new-handler.md) con il nome della funzione come argomento.

Per informazioni su come creare un oggetto nell'heap gestito, vedere [gcnew](../extensions/ref-new-gcnew-cpp-component-extensions.md).

Quando **new** viene utilizzato per allocare la memoria per un oggetto di classe C , il costruttore dell'oggetto viene chiamato dopo l'allocazione della memoria.

Utilizzare l'operatore [delete](../cpp/delete-operator-cpp.md) per deallocare la memoria allocata con l'operatore **new.**

Nell'esempio viene allocata e successivamente liberata una matrice bidimensionale di caratteri di dimensione `dim` per 10. Quando si alloca una matrice multidimensionale, tutte le dimensioni eccetto la prima devono essere espressioni costanti che restituiscono valori positivi; la dimensione più a sinistra della matrice può essere una qualsiasi espressione che restituisce un valore positivo. Quando si alloca una matrice utilizzando l'operatore **new,** la prima dimensione può essere zero: l'operatore **new** restituisce un puntatore univoco.

```cpp
char (*pchar)[10] = new char[dim][10];
delete [] pchar;
```

Il *type-name* non può contenere **dichiarazioni const**, **volatile**, class o di enumerazione. Pertanto, la seguente espressione non è valida:

```cpp
volatile char *vch = new volatile char[20];
```

L'operatore **new** non alloca i tipi di riferimento perché non sono oggetti.

L'operatore **new** non può essere utilizzato per allocare una funzione, ma può essere utilizzato per allocare puntatori alle funzioni. Nell'esempio seguente viene allocata e successivamente liberata una matrice di sette puntatori a funzioni che restituiscono numeri interi.

```cpp
int (**p) () = new (int (*[7]) ());
delete *p;
```

Se si utilizza l'operatore **new** senza argomenti aggiuntivi e si esegue la compilazione con l'opzione [/GX](../build/reference/gx-enable-exception-handling.md), [/EHa](../build/reference/eh-exception-handling-model.md)o [/EHs](../build/reference/eh-exception-handling-model.md) , il compilatore genererà il codice per chiamare operator **delete** se il costruttore genera un'eccezione.

Nell'elenco seguente vengono descritti gli elementi grammaticali di **new:**

*Posizionamento*<br/>
Fornisce un modo per passare argomenti aggiuntivi se si esegue l'overload di **new**.

*type-name*<br/>
Specifica il tipo da allocare; può essere un tipo incorporato o un tipo definito dall'utente. Se la specifica del tipo è complessa, è possibile racchiuderla tra parentesi per forzare l'ordine di associazione.

*initializer*<br/>
Fornisce un valore per l'oggetto inizializzato. Gli inizializzatori non possono essere specificati per le matrici. L'operatore **new** creerà matrici di oggetti solo se la classe dispone di un costruttore predefinito.

## <a name="example"></a>Esempio

Nell'esempio di codice che segue vengono allocati una matrice di caratteri e un oggetto della classe `CName`, quindi vengono successivamente liberati.

```cpp
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

Se si utilizza la nuova forma di posizionamento dell'operatore **new,** la forma con argomenti oltre alla dimensione dell'allocazione, il compilatore non supporta una forma di posizionamento dell'operatore **delete** se il costruttore genera un'eccezione. Ad esempio:

```cpp
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

Un campo *inizializzatore* facoltativo è incluso nella grammatica per l'operatore **new.** In questo modo i nuovi oggetti possono essere inizializzati con i costruttori definiti dall'utente. Per ulteriori informazioni sulle modalità di inizializzazione, vedere [Inizializzatori](../cpp/initializers.md). Nell'esempio seguente viene illustrato come utilizzare un'espressione di inizializzazione con l'operatore **new:The** following example illustrates how to use an initialization expression with the new operator:

```cpp
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

In questo esempio, `CheckingAcct` l'oggetto viene allocato utilizzando l'operatore **new,** ma non viene specificata alcuna inizializzazione predefinita. Viene pertanto chiamato il costruttore predefinito della classe `Acct()`. L'oggetto `SavingsAcct` viene quindi allocato nello stesso modo, con l'eccezione che viene inizializzato in modo esplicito su 34,98. Poiché 34.98 è di tipo **double**, il costruttore che accetta un argomento di tale tipo viene chiamato per gestire l'inizializzazione. Infine, il tipo nonclass `HowMuch` viene inizializzato su 43,0.

Se un oggetto è di un tipo di classe e tale classe dispone di costruttori (come nell'esempio precedente), l'oggetto può essere inizializzato dall'operatore **new** solo se viene soddisfatta una di queste condizioni:

- Gli argomenti forniti nell'inizializzatore concordano con quelli di un costruttore.

- La classe dispone di un costruttore predefinito (un costruttore che può essere chiamato senza argomenti).

Nessuna inizializzazione esplicita per elemento può essere eseguita quando si allocano matrici utilizzando l'operatore **new;** viene chiamato solo il costruttore predefinito, se presente. Per altre informazioni, vedere [Argomenti predefiniti.](../cpp/default-arguments.md)

Se l'allocazione di memoria ha esito negativo (**operator new** restituisce un valore pari a 0), non viene eseguita alcuna inizializzazione. In questo modo viene garantita la protezione contro i tentativi di inizializzare dati inesistenti.

Come nel caso delle chiamate di funzione, l'ordine in cui le espressioni vengono valutate non è definito. Non bisogna inoltre fare affidamento sul fatto che queste espressioni vengano completamente valutate prima che venga eseguita l'allocazione della memoria. Se l'allocazione di memoria non riesce e l'operatore **new** restituisce zero, alcune espressioni nell'inizializzatore potrebbero non essere valutate completamente.

## <a name="lifetime-of-objects-allocated-with-new"></a>Durata di oggetti allocati con new

Gli oggetti allocati con l'operatore **new** non vengono eliminati quando l'ambito in cui sono definiti viene chiuso. Poiché l'operatore **new** restituisce un puntatore agli oggetti allocati, il programma deve definire un puntatore con ambito adatto per accedere a tali oggetti. Ad esempio:

```cpp
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

*L'espressione di allocazione,* ovvero l'espressione contenente l'operatore **new,** esegue tre operazioni:The allocation-expression , the expression containing the new operator , does three things:

- Individua e riserva uno spazio di archiviazione per l'oggetto o gli oggetti da allocare. Una volta completata questa fase, la quantità corretta di spazio di archiviazione viene allocata, ma non è ancora un oggetto.

- Inizializza l'oggetto/gli oggetti. Una volta che l'inizializzazione è stata completata, vi sono informazioni sufficienti affinché l'archiviazione allocata sia un oggetto.

- Restituisce un puntatore agli oggetti di un tipo di puntatore derivato da *new-type-name* o *type-name*. Il programma usa questo puntatore per accedere all'oggetto appena allocato.

L'operatore **new** richiama **l'operatore**di funzione new . Per le matrici di qualsiasi tipo e per gli oggetti che non sono di tipo **class**, **struct**o **union,** viene chiamata una funzione globale, **::operator new**, per allocare spazio di archiviazione. Gli oggetti di tipo classe possono definire il proprio **operatore new** static membro funzione su una base per classe.

Quando il compilatore rileva l'operatore **new** per allocare `type`un oggetto di tipo **,** invia una chiamata a **::operator new( sizeof(** `type` **)** oppure, se non è definito alcun operatore definito dall'utente **new,** **::operator new( sizeof(** `type` **)**. Pertanto, l'operatore **new** può allocare la quantità di memoria corretta per l'oggetto.

> [!NOTE]
> L'argomento per **operator** `size_t`new è di tipo . Questo tipo è \<definito nei \<> di direct.h \<>, malloc.h>, memory.h \<>, search.h>, \<stddef.h>, \<stdio.h>, \<stdlib.h>, \<string.h> e \<time.h>.

Un'opzione nella grammatica consente di *specificare* il posizionamento (vedere la grammatica per il [nuovo operatore](../cpp/new-operator-cpp.md)). Il parametro *placement* può essere utilizzato solo per implementazioni definite dall'utente di **operator new**; consente di passare informazioni aggiuntive **all'operatore new**. Un'espressione con un `T *TObject = new ( 0x0040 ) T;` campo di `T *TObject = T::operator new( sizeof( T ), 0x0040 );` *posizionamento* come viene convertita `T *TObject = ::operator new( sizeof( T ), 0x0040 );`in se la classe T ha operatore membro new, in caso contrario in .

L'intenzione originale del campo di *posizionamento* era quella di consentire l'allocazione di oggetti dipendenti dall'hardware a indirizzi specificati dall'utente.

> [!NOTE]
> Anche se nell'esempio precedente viene illustrato un solo argomento nel campo *di posizionamento,* non vi è alcuna restrizione sul numero di argomenti aggiuntivi che possono essere passati all'operatore **new** in questo modo.

Anche quando **operator new** è stato definito per un tipo di classe, l'operatore globale può essere utilizzato utilizzando la forma di questo esempio:

```cpp
T *TObject =::new TObject;
```

L'operatore di`::`risoluzione dell'ambito ( ) impone l'utilizzo dell'operatore **new** globale.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Operatori new e delete](../cpp/new-and-delete-operators.md)
