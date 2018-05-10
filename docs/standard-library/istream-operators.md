---
title: Operatori &lt;istream&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- istream/std::operator&gt;&gt;
dev_langs:
- C++
ms.assetid: 7174da41-f301-4a34-b631-0ab918b188d2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5068c0bd540b1c44d2cdc484c2e511276bd12666
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="ltistreamgt-operators"></a>Operatori &lt;istream&gt;

## <a name="op_gt_gt"></a>  operator&gt;&gt;

Estrae caratteri e stringhe dal flusso.

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr,
    Elem* str);

template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr,
    Elem& Ch);

template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,
    signed char* str);

template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,
    signed char& Ch);

template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,
    unsigned char* str);

template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr,
    unsigned char& Ch);

template <class Elem, class Tr, class Type>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<char, Tr>&& Istr,
    Type& val);
```

### <a name="parameters"></a>Parametri

`Ch` Un carattere.

`Istr` Un flusso.

`str` Una stringa.

`val` Un tipo.

### <a name="return-value"></a>Valore restituito

Flusso.

### <a name="remarks"></a>Note

La classe `basic_istream` definisce anche diversi operatori di estrazione. Per altre informazioni, vedere [basic_istream::operator>>](../standard-library/basic-istream-class.md#op_gt_gt).

La funzione modello:

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem* str);
```

estrae un massimo di *N* - 1 elementi e li archivia nella matrice a partire da _ *Str*. Se `Istr`. [width](../standard-library/ios-base-class.md#width) è maggiore di zero, *N* è `Istr`. **width**; in caso contrario, è possibile dichiarare la dimensione della matrice più grande di **Elem**. La funzione archivia sempre il valore **Elem()** dopo gli elementi estratti archiviati. L'estrazione termina prima della fine del file, in corrispondenza di un carattere con valore **Elem**(0) (non estratto) o di qualsiasi elemento (non estratto) che verrebbe rimosso da [ws](../standard-library/istream-functions.md#ws). Se non estrae alcun elemento, la funzione chiama `Istr`. [setstate](../standard-library/basic-ios-class.md#setstate)( **failbit**). In tutti i casi, chiama `Istr`. **width**(0) e restituisce `Istr`.

**Nota sulla sicurezza** La stringa con terminazione Null estratta dal flusso di input non deve superare la dimensione del buffer di destinazione `str`. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).

La funzione modello:

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem& Ch);
```

estrae un elemento, se possibile, e lo archivia in `Ch`. In caso contrario, chiama **is**. [setstate](../standard-library/basic-ios-class.md#setstate)( **failbit**). In tutti i casi, restituisce `Istr`.

La funzione modello:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, signed char* str);
```

restituisce `Istr` >> ( `char`**\***) `str`.

La funzione modello:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, signed char& Ch);
```

restituisce `Istr` >> ( **char&**) `Ch`.

La funzione modello:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, unsigned char* str);
```

restituisce `Istr` >> ( **char \***) `str`.

La funzione modello:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, unsigned char& Ch);
```

restituisce `Istr` >> ( **char&**) `Ch`.

La funzione modello:

```cpp
template <class Elem, class Tr, class Type>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<char, Tr>&& Istr,
    Type& val);
```

restituisce `Istr` `>>` `val` e converte un `rvalue reference` a `Istr` in un `lvalue` nel processo.

### <a name="example"></a>Esempio

```cpp
// istream_op_extract.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   ws( cin );
   char c[10];

   cin.width( 9 );
   cin >> c;
   cout << c << endl;
}
```

## <a name="see-also"></a>Vedere anche

[\<istream>](../standard-library/istream.md)<br/>
