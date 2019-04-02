---
title: Operatore new (C++)
ms.date: 11/04/2016
helpviewer_keywords:
- new keyword [C++]
ms.assetid: 69fee812-1c28-4882-8fda-d1ad17860004
ms.openlocfilehash: bcb7784e59966510970bd9b3ae0157ae982e462d
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58768068"
---
# <a name="new-operator-c"></a>Operatore new (C++)

Alloca memoria per un oggetto o una matrice di oggetti di *-nome del tipo* dall'archiviazione disponibile e restituisce un puntatore opportunamente tipizzato, diverso da zero per l'oggetto.

> [!NOTE]
>  Estensioni del componente C++ Microsoft fornisce il supporto per la **nuovo** (parola chiave) per aggiungere le voci dello slot vtable. Per altre informazioni, vedere [new (nuovo slot in vtable)](../extensions/new-new-slot-in-vtable-cpp-component-extensions.md)

## <a name="syntax"></a>Sintassi

```
[::] new [placement] new-type-name [new-initializer]
[::] new [placement] ( type-name ) [new-initializer]
```

## <a name="remarks"></a>Note

Se ha esito negativo **nuove** restituisce zero o genera un'eccezione, vedere [nuova ed eliminare operatori](../cpp/new-and-delete-operators.md) per altre informazioni. È possibile modificare questo comportamento predefinito scrivendo una routine di gestione delle eccezioni personalizzata e chiamando il [set_new_handler](../c-runtime-library/reference/set-new-handler.md) funzione della libreria run-time con il nome di funzione come relativo argomento.

Per informazioni su come creare un oggetto nell'heap gestito, vedere [gcnew](../extensions/ref-new-gcnew-cpp-component-extensions.md).

Quando **nuovo** viene usato per allocare memoria per un oggetto di classe C++, il costruttore dell'oggetto viene chiamato dopo che la memoria viene allocata.

Usare la [eliminare](../cpp/delete-operator-cpp.md) operatore per deallocare la memoria allocata con il **nuove** operatore.

Nell'esempio viene allocata e successivamente liberata una matrice bidimensionale di caratteri di dimensione `dim` per 10. Quando si alloca una matrice multidimensionale, tutte le dimensioni eccetto la prima devono essere espressioni costanti che restituiscono valori positivi; la dimensione più a sinistra della matrice può essere una qualsiasi espressione che restituisce un valore positivo. Quando si alloca una matrice usando il **nuove** operatore, la prima dimensione può essere zero, ovvero il **nuove** operatore restituisce un puntatore univoco.

```cpp
char (*pchar)[10] = new char[dim][10];
delete [] pchar;
```

Il *nome_tipo* non può contenere **const**, **volatile**, dichiarazioni di classi o dichiarazioni di enumerazioni. Pertanto, la seguente espressione non è valida:

```cpp
volatile char *vch = new volatile char[20];
```

Il **nuovo** operatore non alloca tipi di riferimento perché non sono oggetti.

Il **nuovo** operatore non può essere usato per allocare una funzione, ma può essere utilizzato per allocare i puntatori a funzioni. Nell'esempio seguente viene allocata e successivamente liberata una matrice di sette puntatori a funzioni che restituiscono numeri interi.

```cpp
int (**p) () = new (int (*[7]) ());
delete *p;
```

Se si usa l'operatore **nuove** senza argomenti aggiuntivi e compilare con la [/GX](../build/reference/gx-enable-exception-handling.md), [/EHa](../build/reference/eh-exception-handling-model.md), o [/EHs](../build/reference/eh-exception-handling-model.md) opzione, il compilatore effettuerà generare il codice per chiamare l'operatore **eliminare** se il costruttore genera un'eccezione.

Nell'elenco seguente descrive gli elementi di grammatica del **nuovo**:

*placement*<br/>
Fornisce un modo per passare argomenti aggiuntivi se si esegue l'overload **nuovo**.

*type-name*<br/>
Specifica il tipo da allocare; può essere un tipo incorporato o un tipo definito dall'utente. Se la specifica del tipo è complessa, è possibile racchiuderla tra parentesi per forzare l'ordine di associazione.

*initializer*<br/>
Fornisce un valore per l'oggetto inizializzato. Gli inizializzatori non possono essere specificati per le matrici. Il **nuovo** operatore creerà matrici di oggetti solo se la classe ha un costruttore predefinito.

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

Se si usa il nuovo form di posizione nel **nuove** (operatore), il modulo con gli argomenti oltre alla dimensione dell'allocazione, il compilatore non supporta un form di posizione le **eliminare** operatore se il costruttore genera un'eccezione. Ad esempio:

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

Facoltativo *inizializzatore* campo è incluso nella grammatica per i **nuove** operatore. In questo modo i nuovi oggetti possono essere inizializzati con i costruttori definiti dall'utente. Per altre informazioni sulla procedura di inizializzazione, vedere [inizializzatori](../cpp/initializers.md). L'esempio seguente illustra come usare un'espressione di inizializzazione con il **nuovo** operatore:

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

In questo esempio, l'oggetto `CheckingAcct` viene allocato usando il **nuovi** operatore, ma alcuna inizializzazione predefinita è specificato. Viene pertanto chiamato il costruttore predefinito della classe `Acct()`. L'oggetto `SavingsAcct` viene quindi allocato nello stesso modo, con l'eccezione che viene inizializzato in modo esplicito su 34,98. Poiché 34,98 è di tipo **doppie**, per gestire l'inizializzazione viene chiamato il costruttore che accetta un argomento di quel tipo. Infine, il tipo nonclass `HowMuch` viene inizializzato su 43,0.

Se un oggetto è di un tipo di classe e tale classe dispone di costruttori (come nell'esempio precedente), è possibile inizializzare l'oggetto per il **nuovo** operatore solo se viene soddisfatta una di queste condizioni:

- Gli argomenti forniti nell'inizializzatore concordano con quelli di un costruttore.

- La classe dispone di un costruttore predefinito (un costruttore che può essere chiamato senza argomenti).

Alcuna inizializzazione per elemento esplicita non può essere eseguita quando l'assegnazione alle matrici mediante il **nuovo** operatore; solo il costruttore predefinito, se presente, viene chiamato. Visualizzare [argomenti predefiniti](../cpp/default-arguments.md) per altre informazioni.

Se si verifica un errore di allocazione di memoria (**operatore new** restituisce un valore pari a 0), viene eseguita alcuna inizializzazione. In questo modo viene garantita la protezione contro i tentativi di inizializzare dati inesistenti.

Come nel caso delle chiamate di funzione, l'ordine in cui le espressioni vengono valutate non è definito. Non bisogna inoltre fare affidamento sul fatto che queste espressioni vengano completamente valutate prima che venga eseguita l'allocazione della memoria. Se l'allocazione di memoria ha esito negativo e il **nuovo** operatore restituisce zero, alcune espressioni nell'inizializzatore non possono essere valutati completamente.

## <a name="lifetime-of-objects-allocated-with-new"></a>Durata di oggetti allocati con new

Gli oggetti allocati con la **nuovo** operatore non vengono eliminati definitivamente quando viene terminata l'ambito in cui sono definiti. Poiché il **nuovo** operatore restituisce un puntatore a oggetti che alloca, il programma deve definire un puntatore con ambito appropriato per accedere a tali oggetti. Ad esempio:

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

Il *allocazione-expression* , ovvero l'espressione che contiene il **nuove** operatore, effettua tre operazioni:

- Individua e riserva uno spazio di archiviazione per l'oggetto o gli oggetti da allocare. Una volta completata questa fase, la quantità corretta di spazio di archiviazione viene allocata, ma non è ancora un oggetto.

- Inizializza l'oggetto/gli oggetti. Una volta che l'inizializzazione è stata completata, vi sono informazioni sufficienti affinché l'archiviazione allocata sia un oggetto.

- Restituisce un puntatore per gli oggetti di un tipo di puntatore derivato da *nuovo-type-name* oppure *nome_tipo*. Il programma usa questo puntatore per accedere all'oggetto appena allocato.

Il **nuove** operatore richiama la funzione **operatore new**. Per le matrici di qualsiasi tipo e per gli oggetti che non rivestono **classe**, **struct**, o **union** tipi, una funzione globale, **:: operatore new**, è chiamata eseguita per allocare spazio di archiviazione. Oggetti di tipo classe possono definire la propria **operatore new** una funzione membro statica per ogni classe.

Quando il compilatore rileva il **nuove** operatore per allocare un oggetto di tipo **tipo**, invia una chiamata a `type` **:: operatore new (sizeof (** `type` **))** o, se non definito dall'utente **operatore new** è definito **:: operatore new (sizeof (** `type` **))**. Pertanto, il **nuovo** operatore può allocare la quantità di memoria corretta per l'oggetto.

> [!NOTE]
>  L'argomento **operatore new** JE typu `size_t`. Questo tipo è definito in \<Direct. h >, \<malloc. h >, \<Memory. h >, \<Search. h >, \<STDDEF. h >, \<stdio. h >, \<STDLIB. h >, \<String. h >, e \<Time. h >.

Consente di specificare un'opzione nella grammatica *posizionamento* (vedere la grammatica per [operatore new](../cpp/new-operator-cpp.md)). Il *posizionamento* parametro può essere usato solo per le implementazioni definite dall'utente del **operatore new**; offre informazioni aggiuntive da passare al **operatore new**. Un'espressione con un *posizionamento* campo, ad esempio `T *TObject = new ( 0x0040 ) T;` viene tradotto `T *TObject = T::operator new( sizeof( T ), 0x0040 );` se classe T dispone dell'operatore membro new, in caso contrario a `T *TObject = ::operator new( sizeof( T ), 0x0040 );`.

L'intento originale del *posizionamento* campo era di consentire gli oggetti hardware dipendenti di essere allocati in indirizzi specificati dall'utente.

> [!NOTE]
>  Sebbene l'esempio precedente mostra un solo argomento in di *posizionamento* campo, non vi è alcuna restrizione sul numero di argomenti aggiuntivi da passare alla **operatore new** in questo modo.

Anche quando **operatore new** è stato definito per un tipo di classe, l'operatore globale può essere usato tramite il formato di questo esempio:

```cpp
T *TObject =::new TObject;
```

L'operatore di risoluzione dell'ambito (`::`) forza l'utilizzo della variabile globale **nuovi** operatore.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[nuovo ed eliminare operatori](../cpp/new-and-delete-operators.md)