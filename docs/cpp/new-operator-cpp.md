---
title: Operatore new (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- new keyword [C++]
ms.assetid: 69fee812-1c28-4882-8fda-d1ad17860004
ms.openlocfilehash: 81dd7483c49a699ac53ea53d33481fa6539d484c
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223655"
---
# <a name="new-operator-c"></a>Operatore new (C++)

Alloca la memoria per un oggetto o una matrice di oggetti di *tipo Type* dall'archivio gratuito e restituisce un puntatore di tipo diverso da zero all'oggetto.

> [!NOTE]
> Le estensioni del componente Microsoft C++ forniscono il supporto per la **`new`** parola chiave per aggiungere le voci dello slot vtable. Per ulteriori informazioni, vedere [New (nuovo slot in vtable)](../extensions/new-new-slot-in-vtable-cpp-component-extensions.md)

## <a name="syntax"></a>Sintassi

```
[::] new [placement] new-type-name [new-initializer]
[::] new [placement] ( type-name ) [new-initializer]
```

## <a name="remarks"></a>Osservazioni

Se ha esito negativo, **`new`** restituisce zero o genera un'eccezione; per ulteriori informazioni, vedere [gli operatori new e Delete](../cpp/new-and-delete-operators.md) . È possibile modificare questo comportamento predefinito scrivendo una routine di gestione delle eccezioni personalizzata e chiamando la funzione della libreria di runtime [_set_new_handler](../c-runtime-library/reference/set-new-handler.md) con il nome della funzione come argomento.

Per informazioni su come creare un oggetto nell'heap gestito, vedere [gcnew](../extensions/ref-new-gcnew-cpp-component-extensions.md).

Quando **`new`** viene usato per allocare memoria per un oggetto della classe C++, il costruttore dell'oggetto viene chiamato dopo che la memoria è stata allocata.

Utilizzare l'operatore [Delete](../cpp/delete-operator-cpp.md) per deallocare la memoria allocata con l' **`new`** operatore.

Nell'esempio viene allocata e successivamente liberata una matrice bidimensionale di caratteri di dimensione `dim` per 10. Quando si alloca una matrice multidimensionale, tutte le dimensioni eccetto la prima devono essere espressioni costanti che restituiscono valori positivi; la dimensione più a sinistra della matrice può essere una qualsiasi espressione che restituisce un valore positivo. Quando si alloca una matrice usando l' **`new`** operatore, la prima dimensione può essere zero, l' **`new`** operatore restituisce un puntatore univoco.

```cpp
char (*pchar)[10] = new char[dim][10];
delete [] pchar;
```

Il *nome del tipo* non può contenere **`const`** , **`volatile`** , dichiarazioni di classe o dichiarazioni di enumerazione. Pertanto, la seguente espressione non è valida:

```cpp
volatile char *vch = new volatile char[20];
```

L' **`new`** operatore non alloca i tipi di riferimento perché non sono oggetti.

L' **`new`** operatore non può essere usato per allocare una funzione, ma può essere usato per allocare i puntatori alle funzioni. Nell'esempio seguente viene allocata e successivamente liberata una matrice di sette puntatori a funzioni che restituiscono numeri interi.

```cpp
int (**p) () = new (int (*[7]) ());
delete *p;
```

Se si usa l'operatore **`new`** senza argomenti aggiuntivi e si compila con l'opzione [/GX](../build/reference/gx-enable-exception-handling.md), [/EHA](../build/reference/eh-exception-handling-model.md)o [/EHS](../build/reference/eh-exception-handling-model.md) , il compilatore genererà il codice per chiamare operator **`delete`** se il costruttore genera un'eccezione.

Nell'elenco seguente vengono descritti gli elementi di grammatica di **`new`** :

*posizionamento*<br/>
Fornisce un modo per passare argomenti aggiuntivi se si esegue l'overload di **`new`** .

*Nome-tipo*<br/>
Specifica il tipo da allocare; può essere un tipo incorporato o un tipo definito dall'utente. Se la specifica del tipo è complessa, è possibile racchiuderla tra parentesi per forzare l'ordine di associazione.

*initializer*<br/>
Fornisce un valore per l'oggetto inizializzato. Gli inizializzatori non possono essere specificati per le matrici. L' **`new`** operatore creerà matrici di oggetti solo se la classe dispone di un costruttore predefinito.

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

Se si usa il nuovo form di posizione dell' **`new`** operatore, il form con gli argomenti oltre alla dimensione dell'allocazione, il compilatore non supporta un form di posizione dell' **`delete`** operatore se il costruttore genera un'eccezione. Ad esempio:

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

Un campo facoltativo dell' *inizializzatore* è incluso nella grammatica per l' **`new`** operatore. In questo modo i nuovi oggetti possono essere inizializzati con i costruttori definiti dall'utente. Per ulteriori informazioni sul modo in cui viene eseguita l'inizializzazione, vedere [inizializzatori](../cpp/initializers.md). Nell'esempio seguente viene illustrato come utilizzare un'espressione di inizializzazione con l' **`new`** operatore:

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

In questo esempio, l'oggetto `CheckingAcct` viene allocato usando l' **`new`** operatore, ma non viene specificata alcuna inizializzazione predefinita. Viene pertanto chiamato il costruttore predefinito della classe `Acct()`. L'oggetto `SavingsAcct` viene quindi allocato nello stesso modo, con l'eccezione che viene inizializzato in modo esplicito su 34,98. Poiché 34,98 è di tipo **`double`** , il costruttore che accetta un argomento di tale tipo viene chiamato per gestire l'inizializzazione. Infine, il tipo nonclass `HowMuch` viene inizializzato su 43,0.

Se un oggetto è di un tipo di classe e tale classe dispone di costruttori, come nell'esempio precedente, l'oggetto può essere inizializzato dall' **`new`** operatore solo se viene soddisfatta una di queste condizioni:

- Gli argomenti forniti nell'inizializzatore concordano con quelli di un costruttore.

- La classe dispone di un costruttore predefinito (un costruttore che può essere chiamato senza argomenti).

Non è possibile eseguire l'inizializzazione esplicita per ogni elemento quando si allocano matrici usando l' **`new`** operatore. viene chiamato solo il costruttore predefinito, se presente. Per ulteriori informazioni, vedere [argomenti predefiniti](../cpp/default-arguments.md) .

Se l'allocazione di memoria ha esito negativo (**operator new** restituisce un valore pari a 0), non viene eseguita alcuna inizializzazione. In questo modo viene garantita la protezione contro i tentativi di inizializzare dati inesistenti.

Come nel caso delle chiamate di funzione, l'ordine in cui le espressioni vengono valutate non è definito. Non bisogna inoltre fare affidamento sul fatto che queste espressioni vengano completamente valutate prima che venga eseguita l'allocazione della memoria. Se l'allocazione di memoria ha esito negativo e l' **`new`** operatore restituisce zero, alcune espressioni nell'inizializzatore potrebbero non essere completamente valutate.

## <a name="lifetime-of-objects-allocated-with-new"></a>Durata di oggetti allocati con new

Gli oggetti allocati con l' **`new`** operatore non vengono eliminati definitivamente quando viene terminato l'ambito in cui sono definiti. Poiché l' **`new`** operatore restituisce un puntatore agli oggetti allocati, il programma deve definire un puntatore con ambito appropriato per accedere a tali oggetti. Ad esempio:

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

*Allocation-Expression* , ovvero l'espressione che contiene l' **`new`** operatore, esegue tre operazioni:

- Individua e riserva uno spazio di archiviazione per l'oggetto o gli oggetti da allocare. Una volta completata questa fase, la quantità corretta di spazio di archiviazione viene allocata, ma non è ancora un oggetto.

- Inizializza l'oggetto/gli oggetti. Una volta che l'inizializzazione è stata completata, vi sono informazioni sufficienti affinché l'archiviazione allocata sia un oggetto.

- Restituisce un puntatore agli oggetti di un tipo di puntatore derivato da *New-Type-Name* o *Type-Name*. Il programma usa questo puntatore per accedere all'oggetto appena allocato.

L' **`new`** operatore richiama la funzione **operator new**. Per le matrici di qualsiasi tipo e per gli oggetti che non sono di tipo **`class`** , **`struct`** o **`union`** , viene chiamata una funzione globale, **:: operator new**, per allocare spazio di archiviazione. Gli oggetti di tipo classe possono definire il proprio **operatore nuova** funzione membro statica per ogni classe.

Quando il compilatore rileva l' **`new`** operatore per allocare un oggetto di tipo **Type**, emette una chiamata a `type` **:: operator new (sizeof (** `type` **))** o, se non è definito alcun **operatore New** definito dall'utente, **:: operator new (sizeof (** `type` **))**. Pertanto, l' **`new`** operatore può allocare la quantità di memoria corretta per l'oggetto.

> [!NOTE]
> L'argomento per **operator new** è di tipo `size_t` . Questo tipo è definito in \<direct.h> ,,, \<malloc.h> \<memory.h> \<search.h> , \<stddef.h> , \<stdio.h> , \<stdlib.h> , \<string.h> e \<time.h> .

Un'opzione nella grammatica consente la specifica della *selezione host* (vedere la grammatica per il [nuovo operatore](../cpp/new-operator-cpp.md)). Il parametro *Placement* può essere usato solo per le implementazioni definite dall'utente di **operator new**. consente di passare informazioni aggiuntive a **operator new**. Un'espressione con un campo di *posizionamento* , ad esempio `T *TObject = new ( 0x0040 ) T;` , viene convertita in `T *TObject = T::operator new( sizeof( T ), 0x0040 );` se la classe T ha un operatore membro New; in caso contrario, `T *TObject = ::operator new( sizeof( T ), 0x0040 );` .

Lo scopo originale del campo di *posizionamento* era consentire l'allocazione di oggetti dipendenti dall'hardware in corrispondenza degli indirizzi specificati dall'utente.

> [!NOTE]
> Sebbene l'esempio precedente mostri un solo argomento nel campo *posizionamento* , non esiste alcuna restrizione sul numero di argomenti aggiuntivi che è possibile passare a **operator new** in questo modo.

Anche quando è stato definito **operator new** per un tipo di classe, l'operatore globale può essere usato usando il formato di questo esempio:

```cpp
T *TObject =::new TObject;
```

L'operatore di risoluzione dell'ambito ( `::` ) impone l'uso dell' **`new`** operatore globale.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Operatori new e delete](../cpp/new-and-delete-operators.md)
