---
title: '&lt;nuovi &gt; operatori ed enumerazioni'
ms.date: 11/04/2016
f1_keywords:
- new/std::operator delete
- new/std::operator new
ms.assetid: d1af4b56-9a95-4c65-ab01-bf43e982c7bd
ms.openlocfilehash: 2af2b3bc24e045d66626607781bc97f83686d559
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87215634"
---
# <a name="ltnewgt-operators-and-enums"></a>&lt;nuovi &gt; operatori ed enumerazioni

## <a name="enum-align_val_t"></a><a name="op_align_val_t"></a>align_val_t enum

```cpp
enum class align_val_t : size_t {};
```

## <a name="operator-delete"></a><a name="op_delete"></a>operatore delete

Funzione chiamata da un'espressione delete per deallocare lo spazio di archiviazione per i singoli oggetti.

```cpp
void operator delete(void* ptr) throw();
void operator delete(void *, void*) throw();
void operator delete(void* ptr, const std::nothrow_t&) throw();
```

### <a name="parameters"></a>Parametri

*PTR*\
Puntatore il cui valore deve essere reso non valido dall'eliminazione.

### <a name="remarks"></a>Osservazioni

La prima funzione viene chiamata da un'espressione delete per eseguire il rendering del valore di *ptr* non valido. Il programma può definire una funzione con questa firma che sostituisce la versione predefinita della libreria standard C++. Il comportamento richiesto consiste nell'accettare un valore di *ptr* che è null o che è stato restituito da una precedente chiamata a [operator new](../standard-library/new-operators.md#op_new)(**size_t**).

Il comportamento predefinito per un valore null di *ptr* è quello di non eseguire alcuna operazione. Qualsiasi altro valore di *ptr* deve essere un valore restituito in precedenza da una chiamata come descritto in precedenza. Il comportamento predefinito per un valore non null di *ptr* consiste nel recuperare l'archiviazione allocata dalla chiamata precedente. Non è specificato in base alle condizioni che vengono allocate da una chiamata successiva a `operator new` (**size_t**) o a uno qualsiasi di `calloc` ( **size_t**), `malloc` ( **size_t**) o `realloc` ( **`void`** <strong>\*</strong> **size_t**).

La seconda funzione viene chiamata da un'espressione delete di posizionamento corrispondente a una nuova espressione del form **`new`** ( **std:: size_t**). Non esegue alcuna operazione.

La terza funzione viene chiamata da un'espressione delete di posizionamento corrispondente a una nuova espressione nel formato **`new`** ( **std:: size_t**, **conststd:: nothrow_t&**). Il programma può definire una funzione con questa firma che sostituisce la versione predefinita della libreria standard C++. Il comportamento richiesto consiste nell'accettare un valore di `ptr` che è Null o che è stato restituito da una precedente chiamata a `operator new`( **size_t**). Il comportamento predefinito prevede la valutazione di **`delete`** ( `ptr` ).

### <a name="example"></a>Esempio

Vedere [operator new](../standard-library/new-operators.md#op_new) per un esempio che usa **operator delete**.

## <a name="operator-delete"></a><a name="op_delete_arr"></a>operator delete []

Funzione chiamata da un'espressione delete per deallocare memoria per una matrice di oggetti.

```cpp
void operator delete[](void* ptr) throw();
void operator delete[](void *, void*) throw();
void operator delete[](void* ptr, const std::nothrow_t&) throw();
```

### <a name="parameters"></a>Parametri

*PTR*\
Puntatore il cui valore deve essere reso non valido dall'eliminazione.

### <a name="remarks"></a>Osservazioni

La prima funzione viene chiamata da un' `delete[]` espressione per eseguire il rendering del valore di *ptr* non valido. La funzione è sostituibile perché il programma può definire una funzione con questa firma che sostituisce la versione predefinita della libreria standard C++. Il comportamento richiesto consiste nell'accettare un valore di *ptr* che è null o che è stato restituito da una precedente chiamata a [operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr)(**size_t**). Il comportamento predefinito per un valore null di *ptr* è quello di non eseguire alcuna operazione. Qualsiasi altro valore di *ptr* deve essere un valore restituito in precedenza da una chiamata come descritto in precedenza. Il comportamento predefinito per un valore non null di *ptr* consiste nel recuperare l'archiviazione allocata dalla chiamata precedente. Non è specificato in base alle condizioni in cui la parte o tutte le risorse di archiviazione recuperate vengono allocate da una chiamata successiva a [operator new](../standard-library/new-operators.md#op_new)(**size_t**) o a qualsiasi `calloc` (**size_t**), `malloc` (**size_t**) o `realloc` ( **`void`** <strong>\*</strong> , **size_t**).

La seconda funzione viene chiamata da un' `delete[]` espressione di posizionamento corrispondente a un' `new[]` espressione nel formato `new[]` (**std:: size_t**). Non esegue alcuna operazione.

La terza funzione viene chiamata da un'espressione delete di posizionamento corrispondente a un'espressione `new[]` nel formato `new[]`( **std::size_t**, **const std::nothrow_t&**). Il programma può definire una funzione con questa firma che sostituisce la versione predefinita della libreria standard C++. Il comportamento richiesto consiste nell'accettare un valore di *ptr* che è null o che è stato restituito da una chiamata precedente a operator `new[]` (**size_t**). Il comportamento predefinito consiste nel valutare `delete[]`( `ptr`).

### <a name="example"></a>Esempio

Vedere [operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr) per esempi d'uso di `operator delete[]`.

## <a name="operator-new"></a><a name="op_new"></a>operatore New

Funzione chiamata da un'espressione new per allocare memoria per singoli oggetti.

```cpp
void* operator new(std::size_t count) throw(bad_alloc);
void* operator new(std::size_t count, const std::nothrow_t&) throw();
void* operator new(std::size_t count, void* ptr) throw();
```

### <a name="parameters"></a>Parametri

*conteggio*\
Numero di byte di memoria da allocare.

*PTR*\
Puntatore da restituire.

### <a name="return-value"></a>Valore restituito

Puntatore all'indirizzo di byte più basso della memoria appena allocata. O *ptr*.

### <a name="remarks"></a>Osservazioni

La prima funzione viene chiamata da un'espressione new per allocare `count` byte di memoria allineati correttamente per rappresentare qualsiasi oggetto di tale dimensione. Il programma può definire una funzione alternativa con questa firma che sostituisce la versione predefinita della libreria standard C++ ed è quindi sostituibile.

Il comportamento richiesto consiste nel restituire un puntatore non null solo se l'archiviazione può essere allocata come richiesto. Ogni allocazione di questo tipo genera un puntatore alla memoria indipendente da qualsiasi altra allocazione di memoria. L'ordine e la contiguità della memoria allocata dalle chiamate successive non sono specificati. Il valore memorizzato iniziale non è specificato. Il puntatore restituito punta all'inizio (indirizzo di byte più basso) della memoria allocata. Se il conteggio è zero, il valore restituito non risulta uguale a qualsiasi altro valore restituito dalla funzione.

Il comportamento predefinito consiste nell'eseguire un ciclo. Nell'ambito del ciclo, la funzione prova innanzitutto ad allocare la memoria richiesta. Non è specificato se il tentativo coinvolge una chiamata a `malloc`( **size_t**). Se l'esito è positivo, la funzione restituisce un puntatore alla memoria allocata. In caso contrario, la funzione chiama il puntatore [new_handler](../standard-library/new-typedefs.md#new_handler) designato. Se la funzione chiamata restituisce un risultato, il ciclo viene ripetuto. Il ciclo termina quando un tentativo di allocare la memoria richiesta ha esito positivo o quando una funzione chiamata non restituisce alcun risultato.

Il comportamento richiesto per un nuovo gestore consiste nell'eseguire una delle operazioni seguenti:

- Rendere disponibile altra memoria per l'allocazione e quindi restituire un risultato.

- Chiamare `abort` o `exit` .

- Genera un oggetto di tipo `bad_alloc` .

Il comportamento predefinito di un puntatore [new_handler](../standard-library/new-typedefs.md#new_handler) prevede la generazione di un oggetto di tipo `bad_alloc`. Un puntatore Null designa il nuovo gestore predefinito.

L'ordine e il contiguità di spazio di archiviazione allocato dalle chiamate successive a `operator new` (**size_t**) non sono specificati, così come i valori iniziali archiviati.

La seconda funzione viene chiamata da un'espressione new di posizionamento per allocare `count` byte di memoria allineati correttamente per rappresentare qualsiasi oggetto di tale dimensione. Il programma può definire una funzione alternativa con questa firma che sostituisce la versione predefinita della libreria standard C++ ed è quindi sostituibile.

Il comportamento predefinito prevede la restituzione di `operator new` ( `count` ) se la funzione ha esito positivo. In caso contrario, viene restituito un puntatore Null.

La terza funzione viene chiamata da un' **`new`** espressione di posizionamento, nel formato `new ( args ) T` . In questo caso, *args* è costituito da un puntatore a un singolo oggetto. Questo può essere utile per costruire un oggetto in corrispondenza di un indirizzo noto. La funzione restituisce *ptr*.

Per liberare spazio di archiviazione allocato dall' **operatore New**, chiamare [operator delete](../standard-library/new-operators.md#op_delete).

Per informazioni sul comportamento di generazione o non generazione di nuovi, vedere [operatori new e Delete](../cpp/new-and-delete-operators.md).

### <a name="example"></a>Esempio

```cpp
// new_op_new.cpp
// compile with: /EHsc
#include<new>
#include<iostream>

using namespace std;

class MyClass
{
public:
   MyClass( )
   {
      cout << "Construction MyClass." << this << endl;
   };

   ~MyClass( )
   {
      imember = 0; cout << "Destructing MyClass." << this << endl;
   };
   int imember;
};

int main( )
{
   // The first form of new delete
   MyClass* fPtr = new MyClass;
   delete fPtr;

   // The second form of new delete
   MyClass* fPtr2 = new( nothrow ) MyClass;
   delete fPtr2;

   // The third form of new delete
   char x[sizeof( MyClass )];
   MyClass* fPtr3 = new( &x[0] ) MyClass;
   fPtr3 -> ~MyClass();
   cout << "The address of x[0] is : " << ( void* )&x[0] << endl;
}
```

## <a name="operator-new"></a><a name="op_new_arr"></a>operator new []

Funzione di allocazione chiamata da un'espressione new per allocare memoria per una matrice di oggetti.

```cpp
void* operator new[](std::size_t count) throw(std::bad_alloc);
void* operator new[](std::size_t count, const std::nothrow_t&) throw();
void* operator new[](std::size_t count, void* ptr) throw();
```

### <a name="parameters"></a>Parametri

*conteggio*\
Numero di byte di memoria da allocare per l'oggetto matrice.

*PTR*\
Puntatore da restituire.

### <a name="return-value"></a>Valore restituito

Puntatore all'indirizzo di byte più basso della memoria appena allocata. O *ptr*.

### <a name="remarks"></a>Osservazioni

La prima funzione viene chiamata da un'espressione `new[]` per allocare `count` byte di memoria allineati correttamente in modo da rappresentare qualsiasi oggetto matrice di dimensione uguale o minore. Il programma può definire una funzione con questa firma che sostituisce la versione predefinita della libreria standard C++. Il comportamento richiesto è identico a quello di [operator new](../standard-library/new-operators.md#op_new)(**size_t**). Il comportamento predefinito consiste nel restituire `operator new`( `count`).

La seconda funzione viene chiamata da un'espressione `new[]` di posizionamento per allocare `count` byte di memoria allineati correttamente in modo da rappresentare qualsiasi oggetto matrice di tale dimensione. Il programma può definire una funzione con questa firma che sostituisce la versione predefinita della libreria standard C++. Il comportamento predefinito prevede la restituzione di **operatornew**( `count` ) se la funzione ha esito positivo. In caso contrario, viene restituito un puntatore Null.

La terza funzione viene chiamata da un' `new[]` espressione di posizionamento, nel formato **`new`** ( *args*) **T**[ **N**]. In questo caso, *args* è costituito da un puntatore a un singolo oggetto. La funzione restituisce `ptr`.

Per liberare la memoria allocata da `operator new[]`, chiamare [operator delete&#91;&#93;](../standard-library/new-operators.md#op_delete_arr).

Per informazioni sul comportamento di new per quanto riguarda la generazione di eccezioni, vedere [Operatori new e delete](../cpp/new-and-delete-operators.md).

### <a name="example"></a>Esempio

```cpp
// new_op_alloc.cpp
// compile with: /EHsc
#include <new>
#include <iostream>

using namespace std;

class MyClass {
public:
   MyClass() {
      cout << "Construction MyClass." << this << endl;
   };

   ~MyClass() {
      imember = 0; cout << "Destructing MyClass." << this << endl;
      };
   int imember;
};

int main() {
   // The first form of new delete
   MyClass* fPtr = new MyClass[2];
   delete[ ] fPtr;

   // The second form of new delete
   char x[2 * sizeof( MyClass ) + sizeof(int)];

   MyClass* fPtr2 = new( &x[0] ) MyClass[2];
   fPtr2[1].~MyClass();
   fPtr2[0].~MyClass();
   cout << "The address of x[0] is : " << ( void* )&x[0] << endl;

   // The third form of new delete
   MyClass* fPtr3 = new( nothrow ) MyClass[2];
   delete[ ] fPtr3;
}
```
