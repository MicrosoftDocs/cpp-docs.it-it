---
description: 'Altre informazioni su: &lt; nuove &gt; funzioni'
title: Funzioni &lt;new&gt;
ms.date: 11/04/2016
f1_keywords:
- new/std::get_new_handler
- new/std::nothrow
- new/std::set_new_handler
ms.assetid: e250f06a-b025-4509-ae7a-5356d56aad7d
ms.openlocfilehash: b46a21223fcee4f1e208f97e087e47445d5526c5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338186"
---
# <a name="ltnewgt-functions"></a>Funzioni &lt;new&gt;

## <a name="get_new_handler"></a><a name="get_new_handler"></a> get_new_handler

```cpp
new_handler get_new_handler() noexcept;
```

### <a name="remarks"></a>Commenti

Restituisce l'oggetto corrente `new_handler` .

## <a name="launder"></a><a name="launder"></a> riciclare

```cpp
template <class T>
    constexpr T* launder(T* ptr) noexcept;
```

### <a name="parameters"></a>Parametri

*PTR*\
Indirizzo di un byte in memoria che include un oggetto il cui tipo è simile a *T*.

### <a name="return-value"></a>Valore restituito

Valore di tipo *T \** che punta a X.

### <a name="remarks"></a>Commenti

Definito anche barriera di ottimizzazione del puntatore.

Usato come espressione costante quando il valore del relativo argomento può essere usato in un'espressione costante. Un byte di archiviazione è raggiungibile tramite un valore di puntatore che punta a un oggetto se all'interno dell'archiviazione occupata da un altro oggetto, un oggetto con un puntatore simile.

### <a name="example"></a>Esempio

```cpp
struct X { const int n; };

X *p = new X{3};
const int a = p->n;
new (p) X{5}; // p does not point to new object because X::n is const
const int b = p->n; // undefined behavior
const int c = std::launder(p)->n; // OK
```

## <a name="nothrow"></a><a name="nothrow"></a> nothrow

Fornisce un oggetto da usare come argomento per le **`nothrow`** versioni di **`new`** e **`delete`** .

```cpp
extern const std::nothrow_t nothrow;
```

### <a name="remarks"></a>Commenti

L'oggetto viene usato come argomento di funzione in modo da stabilire una corrispondenza con il tipo di parametro [std::nothrow_t](../standard-library/nothrow-t-structure.md).

### <a name="example"></a>Esempio

Vedere [operator new](../standard-library/new-operators.md#op_new) e [operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr) per esempi relativi all'uso di `std::nothrow_t` come parametro di funzione.

## <a name="set_new_handler"></a><a name="set_new_handler"></a> set_new_handler

Installa una funzione utente che deve essere chiamata quando l' **operatore New** non riesce nel tentativo di allocare memoria.

```cpp
new_handler set_new_handler(new_handler Pnew) throw();
```

### <a name="parameters"></a>Parametri

*Pnew*\
Oggetto `new_handler` da installare.

### <a name="return-value"></a>Valore restituito

0 nella prima chiamata e oggetto `new_handler` precedente nelle chiamate successive.

### <a name="remarks"></a>Commenti

La funzione Archivia *Pnew* in un puntatore a un [nuovo gestore](../standard-library/new-typedefs.md#new_handler) statico che gestisce, quindi restituisce il valore archiviato in precedenza nel puntatore. Il nuovo gestore viene usato da [operator new](../standard-library/new-operators.md#op_new)(**size_t**).

### <a name="example"></a>Esempio

```cpp
// new_set_new_handler.cpp
// compile with: /EHsc
#include<new>
#include<iostream>

using namespace std;
void __cdecl newhandler( )
{
   cout << "The new_handler is called:" << endl;
   throw bad_alloc( );
   return;
}

int main( )
{
   set_new_handler (newhandler);
   try
   {
      while ( 1 )
      {
         new int[5000000];
         cout << "Allocating 5000000 ints." << endl;
      }
   }
   catch ( exception e )
   {
      cout << e.what( ) << endl;
   }
}
```

```Output
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
Allocating 5000000 ints.
The new_handler is called:
bad allocation
```
