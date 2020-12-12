---
description: 'Altre informazioni su: &lt; IStream &gt; Operators'
title: Operatori &lt;istream&gt;
ms.date: 11/04/2016
f1_keywords:
- istream/std::operator&gt;&gt;
ms.assetid: 7174da41-f301-4a34-b631-0ab918b188d2
ms.openlocfilehash: 68bf59480af68248533f55ef32de4525a4d900d5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277882"
---
# <a name="ltistreamgt-operators"></a>Operatori &lt;istream&gt;

## <a name="operatorgtgt"></a><a name="op_gt_gt"></a> operatore&gt;&gt;

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

### <a name="remarks"></a>Commenti

La classe `basic_istream` definisce anche diversi operatori di estrazione. Per altre informazioni, vedere [basic_istream::operator>>](../standard-library/basic-istream-class.md#op_gt_gt).

Il modello di funzione:

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem* str);
```

estrae fino a `N - 1` elementi e li archivia nella matrice a partire da *Str*. Se `Istr.` [Width](../standard-library/ios-base-class.md#width) è maggiore di zero, *N* è `Istr.width` ; in caso contrario, è la dimensione della matrice più grande di `Elem` che può essere dichiarata. La funzione archivia sempre il valore `Elem()` dopo gli elementi estratti archiviati. L'estrazione si interrompe prima della fine del file, su un carattere con valore `Elem(0)` (non estratto) o su qualsiasi elemento (che non viene estratto) che verrebbe rimosso da [WS](../standard-library/istream-functions.md#ws). Se la funzione non estrae alcun elemento, chiama `Istr.` [`setstate`](../standard-library/basic-ios-class.md#setstate) `(failbit)` . In ogni caso, chiama `Istr.width(0)` e restituisce *istr*.

**Nota sulla sicurezza** La stringa con terminazione null da estrarre dal flusso di input non deve superare la dimensione dello *Str* del buffer di destinazione. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

Il modello di funzione:

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem& Ch);
```

estrae un elemento, se possibile, e lo archivia in *ch*. In caso contrario, chiama `is.` [`setstate`](../standard-library/basic-ios-class.md#setstate) `(failbit)` . In ogni caso, restituisce *istr*.

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

restituisce `Istr >> val` e converte un riferimento rvalue in in `Istr` un lvalue nel processo.

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
