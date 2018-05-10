---
title: Funzioni &lt;ostream&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
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
ms.openlocfilehash: e85ce2728aaaa8ae9b23067bfb1dcbb3ff2db7d0
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="ltostreamgt-functions"></a>Funzioni &lt;ostream&gt;

Queste sono le funzioni di modello globale definite in &lt;ostream&gt;. Per le funzioni membro, vedere il [classe basic_ostream](basic-ostream-class.md) documentazione.

||||
|-|-|-|
|[endl](#endl)|[ends](#ends)|[flush](#flush)|
|[swap](#swap)|

## <a name="endl"></a>endl

Termina una riga e scarica il buffer.

```cpp
template class<Elem, Tr>
basic_ostream<Elem, Tr>& endl(
   basic_ostream<Elem, Tr>& Ostr);
```

### <a name="parameters"></a>Parametri

*Elem* il tipo di elemento.

*Ostr* un oggetto di tipo **basic_ostream**.

*TR* tratti di carattere.

### <a name="return-value"></a>Valore restituito

Un oggetto di tipo **basic_ostream**.

### <a name="remarks"></a>Note

Le chiamate manipolatore *Ostr*.[ inserire](../standard-library/basic-ostream-class.md#put)(*Ostr*.[ ampliare](../standard-library/basic-ios-class.md#widen)('\n')), quindi chiama *Ostr*.[ scaricare](../standard-library/basic-ostream-class.md#flush). Restituisce *Ostr*.

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

*Elem* il tipo di elemento.

*Ostr* un oggetto di tipo **basic_ostream**.

*TR* tratti di carattere.

### <a name="return-value"></a>Valore restituito

Un oggetto di tipo **basic_ostream**.

### <a name="remarks"></a>Note

Le chiamate manipolatore *Ostr*.[ inserire](../standard-library/basic-ostream-class.md#put)(*Elem*('\0')). Restituisce *Ostr*.

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

*Elem* il tipo di elemento.

*Ostr* un oggetto di tipo **basic_ostream**.

*TR* tratti di carattere.

### <a name="return-value"></a>Valore restituito

Un oggetto di tipo **basic_ostream**.

### <a name="remarks"></a>Note

Le chiamate manipolatore *Ostr*.[ scaricare](../standard-library/basic-ostream-class.md#flush). Restituisce *Ostr*.

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

Scambia i valori di due **basic_ostream** oggetti.

```cpp
template <class Elem, class Tr>
void swap(
   basic_ostream<Elem, Tr>& left,
   basic_ostream<Elem, Tr>& right);
```

### <a name="parameters"></a>Parametri

*Elem* il tipo di elemento.

*TR* tratti di carattere.

*a sinistra* riferimento lvalue a un **basic_ostream** oggetto.

*a destra* riferimento lvalue a un **basic_ostream** oggetto.

### <a name="remarks"></a>Note

La funzione di modello **scambio** esegue `left.swap(right)`.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)
