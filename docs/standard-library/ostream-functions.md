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
ms.openlocfilehash: fa498f4acbb151eab4321bcddc6af027ee266237
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50636774"
---
# <a name="ltostreamgt-functions"></a>Funzioni &lt;ostream&gt;

Queste sono le funzioni di modello globale definite in &lt;ostream&gt;. Per le funzioni membro, vedere la [classe basic_ostream](basic-ostream-class.md) documentazione.

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

*Elem*<br/>
Tipo dell'elemento.

*Ostr*<br/>
Un oggetto di tipo **basic_ostream**.

*Tr*<br/>
Tratti di carattere.

### <a name="return-value"></a>Valore restituito

Un oggetto di tipo **basic_ostream**.

### <a name="remarks"></a>Note

Il manipolatore chiama *Ostr*.[ inserire](../standard-library/basic-ostream-class.md#put)(*Ostr*.[ Widen](../standard-library/basic-ios-class.md#widen)('\n')) e quindi chiama *Ostr*.[ scaricamento](../standard-library/basic-ostream-class.md#flush). Viene restituito *Ostr*.

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

*Elem*<br/>
Tipo dell'elemento.

*Ostr*<br/>
Oggetto di tipo `basic_ostream`.

*Tr*<br/>
Tratti di carattere.

### <a name="return-value"></a>Valore restituito

Oggetto di tipo `basic_ostream`.

### <a name="remarks"></a>Note

Il manipolatore chiama *Ostr*.[ inserire](../standard-library/basic-ostream-class.md#put)(*Elem*('\0')). Viene restituito *Ostr*.

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

*Elem*<br/>
Tipo dell'elemento.

*Ostr*<br/>
Oggetto di tipo `basic_ostream`.

*Tr*<br/>
Tratti di carattere.

### <a name="return-value"></a>Valore restituito

Oggetto di tipo `basic_ostream`.

### <a name="remarks"></a>Note

Il manipolatore chiama *Ostr*.[ scaricamento](../standard-library/basic-ostream-class.md#flush). Viene restituito *Ostr*.

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

*Elem*<br/>
Tipo dell'elemento.

*Tr*<br/>
Tratti di carattere.

*left*<br/>
Riferimento lvalue a un oggetto `basic_ostream`.

*right*<br/>
Riferimento lvalue a un oggetto `basic_ostream`.

### <a name="remarks"></a>Note

La funzione modello `swap` esegue `left.swap(right)`.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)
