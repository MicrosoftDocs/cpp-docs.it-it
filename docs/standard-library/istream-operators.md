---
title: Operatori &lt;istream&gt;
ms.date: 11/04/2016
f1_keywords:
- istream/std::operator&gt;&gt;
ms.assetid: 7174da41-f301-4a34-b631-0ab918b188d2
ms.openlocfilehash: c10692194c80051b10ecbe776c7d23a03860d508
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68447793"
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

### <a name="remarks"></a>Note

La classe `basic_istream` definisce anche diversi operatori di estrazione. Per altre informazioni, vedere [basic_istream::operator>>](../standard-library/basic-istream-class.md#op_gt_gt).

La funzione modello:

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem* str);
```

estrae un massimo di *N* - 1 elementi e li archivia nella matrice a partire da _ *Str*. Se `Istr`. [width](../standard-library/ios-base-class.md#width) è maggiore di zero, *N* è `Istr`. **larghezza**; in caso contrario, è la dimensione della matrice più grande `Elem` di che può essere dichiarata. La funzione archivia sempre il valore `Elem()` dopo gli elementi estratti archiviati. L'estrazione termina prima della fine del file, in corrispondenza di un carattere con valore **Elem**(0) (non estratto) o di qualsiasi elemento (non estratto) che verrebbe rimosso da [ws](../standard-library/istream-functions.md#ws). Se non estrae alcun elemento, la funzione chiama `Istr`. [sestato](../standard-library/basic-ios-class.md#setstate) (**failbit**). In tutti i casi, chiama `Istr`. **larghezza** (0) e restituisce *istr*.

**Nota sulla sicurezza** La stringa con terminazione null da estrarre dal flusso di input non deve superare la dimensione dello *Str*del buffer di destinazione. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/desktop/SecBP/avoiding-buffer-overruns).

La funzione modello:

```cpp
template <class Elem, class Tr>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<Elem, Tr>& Istr, Elem& Ch);
```

estrae un elemento, se possibile, e lo archivia in *ch*. In caso contrario, chiama **is**. [setstate](../standard-library/basic-ios-class.md#setstate)( **failbit**). In ogni caso, restituisce *istr*.

La funzione modello:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, signed char* str);
```

Restituisce `Istr >> ( char * ) str`.

La funzione modello:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, signed char& Ch);
```

Restituisce `Istr >> ( char& ) Ch`.

La funzione modello:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, unsigned char* str);
```

Restituisce `Istr >> ( char * ) str`.

La funzione modello:

```cpp
template <class Tr>
basic_istream<char, Tr>& operator>>(
    basic_istream<char, Tr>& Istr, unsigned char& Ch);
```

Restituisce `Istr >> ( char& ) Ch`.

La funzione modello:

```cpp
template <class Elem, class Tr, class Type>
basic_istream<Elem, Tr>& operator>>(
    basic_istream<char, Tr>&& Istr,
    Type& val);
```

restituisce `Istr >> val` e converte un `Istr` riferimento rvalue in in un lvalue nel processo.

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
