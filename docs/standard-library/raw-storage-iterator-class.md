---
title: Classe raw_storage_iterator | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- memory/std::raw_storage_iterator
- memory/std::raw_storage_iterator::element_type
- memory/std::raw_storage_iterator::iter_type
dev_langs:
- C++
helpviewer_keywords:
- std::raw_storage_iterator [C++]
- std::raw_storage_iterator [C++], element_type
- std::raw_storage_iterator [C++], iter_type
ms.assetid: 6f033f15-f48e-452a-a326-647ea2cf346f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 848612f59c2d5cc24289b6d8c56b0c9eeaebc961
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45712790"
---
# <a name="rawstorageiterator-class"></a>Classe raw_storage_iterator

Classe dell'adattatore fornita per consentire agli algoritmi di archiviare i rispettivi risultati nella memoria non inizializzata.

## <a name="syntax"></a>Sintassi

```cpp
template <class OutputIterator, class Type>
class raw_storage_iterator
```

### <a name="parameters"></a>Parametri

*OutputIterator*<br/>
Specifica l'iteratore di output per l'oggetto archiviato.

*Type*<br/>
Tipo di oggetto per cui viene allocata archiviazione.

## <a name="remarks"></a>Note

La classe descrive un iteratore di output che costruisce oggetti di tipo `Type` nella sequenza che genera. Un oggetto della classe `raw_storage_iterator` \< **ForwardIterator**, **tipo**> accede all'archiviazione attraverso un oggetto iteratore in avanti della classe `ForwardIterator`, che si specifica quando si costruire l'oggetto. Per un oggetto prima della classe `ForwardIterator`, l'espressione  **& \*primo** deve designare l'archiviazione per l'oggetto successivo (di tipo `Type`) nella sequenza generata.

Questa classe di adattatori viene usata quando è necessario separare allocazione di memoria e costruzione di oggetti. L'oggetto `raw_storage_iterator` può essere usato per copiare oggetti nell'archiviazione non inizializzata, ad esempio la memoria allocata usando la funzione `malloc`.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[raw_storage_iterator](#raw_storage_iterator)|Costruisce un iteratore di archiviazione non elaborato con un iteratore di output sottostante specificato.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[element_type](#element_type)|Fornisce un tipo che descrive un elemento da archiviare in un iteratore di archiviazione non elaborato.|
|[iter_type](#iter_type)|Fornisce un tipo che descrive un iteratore sottostante a un iteratore di archiviazione non elaborato.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator*](#op_star)|Operatore di dereferenziazione usato per implementare l'espressione dell'iteratore di output \* `ii`  =  `x`.|
|[operator=](#op_eq)|Operatore di assegnazione usato per implementare l'espressione dell'iteratore di archiviazione non elaborato \* `i`  =  `x` per l'archiviazione in memoria.|
|[operator++](#op_add_add)|Operatori di incremento prefisso e incremento suffisso per iteratori di archiviazione non elaborati.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<memory>

**Spazio dei nomi:** std

## <a name="element_type"></a>  raw_storage_iterator::element_type

Fornisce un tipo che descrive un elemento da archiviare in un iteratore di archiviazione non elaborato.

```cpp
typedef Type element_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello di classe raw_storage_iterator `Type`.

## <a name="iter_type"></a>  raw_storage_iterator::iter_type

Fornisce un tipo che descrive un iteratore sottostante a un iteratore di archiviazione non elaborato.

```cpp
typedef ForwardIterator iter_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `ForwardIterator`.

## <a name="op_star"></a>  raw_storage_iterator:: operator\*

Operatore di dereferenziazione usato per implementare l'espressione dell'iteratore di archiviazione non elaborato \* *ii* = *x*.

```cpp
raw_storage_iterator<ForwardIterator, Type>& operator*();
```

### <a name="return-value"></a>Valore restituito

Riferimento all'iteratore di archiviazione non elaborato

### <a name="remarks"></a>Note

I requisiti per un `ForwardIterator` prevedono che non elaborato iteratore di archiviazione deve soddisfare richiedono solo che l'espressione \* *ii* = *t* sia valida e non riguardano individualmente il **operator** o il `operator=` in modo indipendente. Gli operatori membro in questa implementazione restituisce  **\*ciò**, in modo che [operatore =](#op_eq)(**constType**&) può eseguire l'effettiva archiviazione in un'espressione, ad esempio \* *ptr* = `val`.

### <a name="example"></a>Esempio

```cpp
// raw_storage_iterator_op_deref.cpp
// compile with: /EHsc
#include <iostream>
#include <iterator>
#include <memory>
#include <list>
using namespace std;

class Int
{
public:
   Int(int i)
   {
      cout << "Constructing " << i << endl;
      x = i;
      bIsConstructed = true;
   };

   Int &operator=(int i)
   {
      if (!bIsConstructed)
         cout << "Not constructed.\n";
      cout << "Copying " << i << endl;
      x = i;
      return *this;
   };

   int x;

private:
   bool bIsConstructed;
};

int main( void)
{
   Int *pInt = ( Int* ) malloc( sizeof( Int ) );
   memset( pInt, 0, sizeof( Int ) ); // Set bIsConstructed to false;
*pInt = 5;
   raw_storage_iterator< Int*, Int > it( pInt );
*it = 5;
}
/* Output:
Not constructed.
Copying 5
Constructing 5
*/
```

## <a name="op_eq"></a>  raw_storage_iterator::operator=

Operatore di assegnazione usato per implementare l'espressione dell'iteratore di archiviazione non elaborato \* *i* = *x* per l'archiviazione in memoria.

```cpp
raw_storage_iterator<ForwardIterator, Type>& operator=(
    const Type& val);
```

### <a name="parameters"></a>Parametri

*Val*<br/>
Il valore dell'oggetto di tipo `Type` da inserire in memoria.

### <a name="return-value"></a>Valore restituito

L'operatore inserisce `val` in memoria, quindi restituisce un riferimento all'iteratore di archiviazione non elaborato.

### <a name="remarks"></a>Note

I requisiti per un `ForwardIterator` lo stato che deve soddisfare l'iteratore di archiviazione non elaborato richiedono solo che l'espressione \* *ii* = *t* sia valido e che non riguardano individualmente il **operator** o il `operator=` in modo indipendente. Questi operatori membro restituiscono **\*this**.

L'operatore di assegnazione costruisce l'oggetto successivo nella sequenza di output usando innanzitutto il valore dell'iteratore archiviato, mediante la valutazione della nuova espressione della posizione **new** ( ( `void` \*)&\* **first**) **Type**( `val`).

### <a name="example"></a>Esempio

```cpp
// raw_storage_iterator_op_assign.cpp
// compile with: /EHsc
#include <iostream>
#include <iterator>
#include <memory>
#include <list>
using namespace std;

class Int
{
public:
   Int( int i )
   {
      cout << "Constructing " << i << endl;
      x = i;
      bIsConstructed = true;
   };
   Int &operator=( int i )
   {
      if ( !bIsConstructed )
         cout << "Not constructed.\n";
      cout << "Copying " << i << endl; x = i;
      return *this;
   };
   int x;
private:
   bool bIsConstructed;
};

int main( void )
{
   Int *pInt = ( Int* )malloc( sizeof( Int ) );
   memset( pInt, 0, sizeof( Int ) ); // Set bIsConstructed to false;

*pInt = 5;

   raw_storage_iterator<Int*, Int> it( pInt );
*it = 5;
}
/* Output:
Not constructed.
Copying 5
Constructing 5
*/
```

## <a name="op_add_add"></a>  raw_storage_iterator::operator++

Operatori di incremento prefisso e incremento suffisso per iteratori di archiviazione non elaborati.

```cpp
raw_storage_iterator<ForwardIterator, Type>& operator++();

raw_storage_iterator<ForwardIterator, Type> operator++(int);
```

### <a name="return-value"></a>Valore restituito

Iteratore di archiviazione non elaborato o relativo riferimento.

### <a name="remarks"></a>Note

Il primo operatore prova a estrarre e archiviare un oggetto di tipo `CharType` dal flusso di input associato. Il secondo operatore esegue una copia dell'oggetto, lo incrementa, quindi restituisce la copia.

Il primo operatore di pre-incremento incrementa l'oggetto iteratore dell'output archiviato, quindi restituisce **\*this**.

Il secondo operatore di post-incremento esegue una copia di **\*this**, incrementa l'oggetto iteratore dell'output archiviato, quindi restituisce la copia.

Il costruttore Archivia `first` come oggetto iteratore di output.

### <a name="example"></a>Esempio

```cpp
// raw_storage_iterator_op_incr.cpp
// compile with: /EHsc
#include <iostream>
#include <iterator>
#include <memory>
#include <list>
using namespace std;

int main( void )
{
   int *pInt = new int[5];
   std::raw_storage_iterator<int*,int> it( pInt );
   for ( int i = 0; i < 5; i++, it++ ) {
      *it = 2 * i;
   };

   for ( int i = 0; i < 5; i++ ) cout << "array " << i << " = " << pInt[i] << endl;;

   delete[] pInt;
}
/* Output:
array 0 = 0
array 1 = 2
array 2 = 4
array 3 = 6
array 4 = 8
*/
```

## <a name="raw_storage_iterator"></a>  raw_storage_iterator::raw_storage_iterator

Costruisce un iteratore di archiviazione non elaborato con un iteratore di output sottostante specificato.

```cpp
explicit raw_storage_iterator(ForwardIterator first);
```

### <a name="parameters"></a>Parametri

*first*<br/>
L'iteratore in avanti sottostante all'oggetto `raw_storage_iterator` costruito.

### <a name="example"></a>Esempio

```cpp
// raw_storage_iterator_ctor.cpp
// compile with: /EHsc /W3
#include <iostream>
#include <iterator>
#include <memory>
#include <list>
using namespace std;

class Int
{
public:
   Int(int i)
   {
      cout << "Constructing " << i << endl;
      x = i;
      bIsConstructed = true;
   };
   Int &operator=( int i )
   {
      if (!bIsConstructed)
         cout << "Error! I'm not constructed!\n";
      cout << "Copying " << i << endl;  x = i; return *this;
   };
   int x;
   bool bIsConstructed;
};

int main( void )
{
   std::list<int> l;
   l.push_back( 1 );
   l.push_back( 2 );
   l.push_back( 3 );
   l.push_back( 4 );

   Int *pInt = (Int*)malloc(sizeof(Int)*l.size( ));
   memset (pInt, 0, sizeof(Int)*l.size( ));
   // Hack: make sure bIsConstructed is false

   std::copy( l.begin( ), l.end( ), pInt );  // C4996
   for (unsigned int i = 0; i < l.size( ); i++)
      cout << "array " << i << " = " << pInt[i].x << endl;;

   memset (pInt, 0, sizeof(Int)*l.size( ));
   // hack: make sure bIsConstructed is false

   std::copy( l.begin( ), l.end( ),
      std::raw_storage_iterator<Int*,Int>(pInt));  // C4996
   for (unsigned int i = 0; i < l.size( ); i++ )
      cout << "array " << i << " = " << pInt[i].x << endl;

   free(pInt);
}
/* Output:
Error! I'm not constructed!
Copying 1
Error! I'm not constructed!
Copying 2
Error! I'm not constructed!
Copying 3
Error! I'm not constructed!
Copying 4
array 0 = 1
array 1 = 2
array 2 = 3
array 3 = 4
Constructing 1
Constructing 2
Constructing 3
Constructing 4
array 0 = 1
array 1 = 2
array 2 = 3
array 3 = 4
*/
```

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
