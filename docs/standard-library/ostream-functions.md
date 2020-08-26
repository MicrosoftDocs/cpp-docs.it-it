---
title: Funzioni &lt;ostream&gt;
ms.date: 11/04/2016
f1_keywords:
- ostream/std::swap
- ostream/std::endl
- ostream/std::ends
- ostream/std::flush
ms.assetid: d6e56cc0-c8df-4dbe-be10-98e14c35ed3a
helpviewer_keywords:
- std::swap [C++]
- std::endl [C++]
- std::ends [C++]
- std::flush [C++]
ms.openlocfilehash: 4db966797202b16911aa67b6fda7c81785d98166
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88842637"
---
# <a name="ltostreamgt-functions"></a>Funzioni &lt;ostream&gt;

Queste sono le funzioni del modello globale definite in &lt; ostream &gt; . Per le funzioni membro, vedere la documentazione relativa alla [classe basic_ostream](basic-ostream-class.md) .

[Endl](#endl)\
[finisce](#ends)\
[filo](#flush)\
[scambio](#swap)

## <a name="endl"></a>endl

Termina una riga e scarica il buffer.

```cpp
template class<Elem, Tr>
basic_ostream<Elem, Tr>& endl(
   basic_ostream<Elem, Tr>& Ostr);
```

### <a name="parameters"></a>Parametri

*Elem*\
Tipo dell'elemento.

*OSTR*\
Oggetto di tipo **basic_ostream**.

*TR*\
Tratti di carattere.

### <a name="return-value"></a>Valore restituito

Oggetto di tipo **basic_ostream**.

### <a name="remarks"></a>Osservazioni

Il manipolatore chiama *OSTR*. [put](../standard-library/basic-ostream-class.md#put)(*OSTR*.[ Wide](../standard-library/basic-ios-class.md#widen)(' \n ')), quindi chiama *OSTR*. [Scarica](../standard-library/basic-ostream-class.md#flush). Restituisce *OSTR*.

### <a name="example"></a>Esempio

```cpp
// ostream_endl.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   cout << "testing" << endl;
}
```

```Output
testing
```

## <a name="ends"></a>estremità

Termina una stringa.

```cpp
template class<Elem, Tr>
basic_ostream<Elem, Tr>& ends(
   basic_ostream<Elem, Tr>& Ostr);
```

### <a name="parameters"></a>Parametri

*Elem*\
Tipo dell'elemento.

*OSTR*\
Oggetto di tipo `basic_ostream`.

*TR*\
Tratti di carattere.

### <a name="return-value"></a>Valore restituito

Oggetto di tipo `basic_ostream`.

### <a name="remarks"></a>Osservazioni

Il manipolatore chiama *OSTR*. [put](../standard-library/basic-ostream-class.md#put)(*elem*(' \ 0')). Restituisce *OSTR*.

### <a name="example"></a>Esempio

```cpp
// ostream_ends.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   cout << "a";
   cout << "b" << ends;
   cout << "c" << endl;
}
```

```Output
ab c
```

## <a name="flush"></a>flush

Scarica il buffer.

```cpp
template class<Elem, Tr>
basic_ostream<Elem, Tr>& flush(
   basic_ostream<Elem, Tr>& Ostr);
```

### <a name="parameters"></a>Parametri

*Elem*\
Tipo dell'elemento.

*OSTR*\
Oggetto di tipo `basic_ostream`.

*TR*\
Tratti di carattere.

### <a name="return-value"></a>Valore restituito

Oggetto di tipo `basic_ostream`.

### <a name="remarks"></a>Osservazioni

Il manipolatore chiama *OSTR*. [Scarica](../standard-library/basic-ostream-class.md#flush). Restituisce *OSTR*.

### <a name="example"></a>Esempio

```cpp
// ostream_flush.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   cout << "testing" << flush;
}
```

```Output
testing
```

## <a name="swap"></a>swap

Scambia i valori di due oggetti `basic_ostream`.

```cpp
template <class Elem, class Tr>
void swap(
   basic_ostream<Elem, Tr>& left,
   basic_ostream<Elem, Tr>& right);
```

### <a name="parameters"></a>Parametri

*Elem*\
Tipo dell'elemento.

*TR*\
Tratti di carattere.

*sinistra*\
Riferimento lvalue a un oggetto `basic_ostream`.

*Ok*\
Riferimento lvalue a un oggetto `basic_ostream`.

### <a name="remarks"></a>Osservazioni

La funzione modello `swap` esegue `left.swap(right)`.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)
