---
title: Funzioni &lt;new&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- new/std::nothrow
- new/std::set_new_handler
ms.assetid: e250f06a-b025-4509-ae7a-5356d56aad7d
ms.openlocfilehash: c52376f504e526c03d4f2c2afd39c029761f3c99
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33852608"
---
# <a name="ltnewgt-functions"></a>Funzioni &lt;new&gt;

|||
|-|-|
|[nothrow](#nothrow)|[set_new_handler](#set_new_handler)|

## <a name="nothrow"></a>  nothrow

Fornisce un oggetto da usare come argomento per le versioni `nothrow` di **new** e **delete**.

```cpp
extern const std::nothrow_t nothrow;
```

### <a name="remarks"></a>Note

L'oggetto viene usato come argomento di funzione in modo da stabilire una corrispondenza con il tipo di parametro [std::nothrow_t](../standard-library/nothrow-t-structure.md).

### <a name="example"></a>Esempio

Vedere [operator new](../standard-library/new-operators.md#op_new) e [operator new&#91;&#93;](../standard-library/new-operators.md#op_new_arr) per esempi relativi all'uso di `std::nothrow_t` come parametro di funzione.

## <a name="set_new_handler"></a>  set_new_handler

Installa una funzione utente che deve essere chiamata quando `operator new` non riesce ad allocare memoria.

```cpp
new_handler set_new_handler(new_handler Pnew) throw();
```

### <a name="parameters"></a>Parametri

`Pnew` New_handler da installare.

### <a name="return-value"></a>Valore restituito

0 nella prima chiamata e oggetto `new_handler` precedente nelle chiamate successive.

### <a name="remarks"></a>Note

La funzione archivia `Pnew` in un puntatore [new_handler](../standard-library/new-typedefs.md#new_handler) statico gestito e quindi restituisce il valore archiviato in precedenza nel puntatore. Il nuovo gestore viene usato da [operator new](../standard-library/new-operators.md#op_new)( **size_t**).

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

## <a name="see-also"></a>Vedere anche

[\<new>](../standard-library/new.md)<br/>
