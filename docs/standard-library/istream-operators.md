---
title: Operatori &lt;istream&gt;
ms.date: 11/04/2016
f1_keywords:
- istream/std::operator&gt;&gt;
ms.assetid: 7174da41-f301-4a34-b631-0ab918b188d2
ms.openlocfilehash: 3b9521fde1b5a03389bfc1ad3e35fa407d9d6ac0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363030"
---
# <a name="ltistreamgt-operators"></a>Operatori &lt;istream&gt;

## <a name="operatorgtgt"></a><a name="op_gt_gt"></a>Operatore&gt;&gt;

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

*Ch*\
Carattere.

*Istr*\
Flusso.

*Str*\
Stringa.

*Val*\
Tipo.

### <a name="return-value"></a>Valore restituito

Flusso.

### <a name="remarks"></a>Osservazioni

La classe `basic_istream` definisce anche diversi operatori di estrazione. Per altre informazioni, vedere [basic_istream::operator>>](../standard-library/basic-istream-class.md#op_gt_gt).

Il modello di funzione:

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem* str);
```

estrae `N - 1` fino a elementi e li memorizza nella matrice a partire da *str*. Se `Istr.` [width](../standard-library/ios-base-class.md#width) è maggiore di zero, *N* è `Istr.width`; in caso contrario, è la `Elem` dimensione della matrice più grande di che può essere dichiarata. La funzione archivia `Elem()` sempre il valore dopo tutti gli elementi estratti archiviati. L'estrazione si interrompe presto alla fine `Elem(0)` del file, su un carattere con valore (che non viene estratto) o su qualsiasi elemento (che non viene estratto) che verrebbe eliminato da [ws](../standard-library/istream-functions.md#ws). Se la funzione non estrae alcun elemento, chiama `Istr.` [`setstate`](../standard-library/basic-ios-class.md#setstate) `(failbit)`. In ogni caso, `Istr.width(0)` chiama e restituisce *Istr*.

**Nota sulla sicurezza** La stringa con terminazione null estratta dal flusso di input non deve superare la dimensione del buffer di destinazione *str*. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

Il modello di funzione:

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem& Ch);
```

estrae un elemento, se possibile, e lo memorizza in *Ch*. In caso `is.` [`setstate`](../standard-library/basic-ios-class.md#setstate) `(failbit)`contrario, chiama . In ogni caso, restituisce *Istr*.

Il modello di funzione:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, signed char* str);
```

Restituisce `Istr >> ( char * ) str`.

Il modello di funzione:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, signed char& Ch);
```

Restituisce `Istr >> ( char& ) Ch`.

Il modello di funzione:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, unsigned char* str);
```

Restituisce `Istr >> ( char * ) str`.

Il modello di funzione:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, unsigned char& Ch);
```

Restituisce `Istr >> ( char& ) Ch`.

Il modello di funzione:

```cpp
template <class Elem, class Tr, class Type>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<char, Tr>&& Istr,
    Type& val);
```

restituisce `Istr >> val` (e converte un `Istr` riferimento rvalue in un lvalue nel processo).

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

[\<istream>](../standard-library/istream.md)
