---
title: Typedef `<ios>`
description: Descrive i typedef STL (Standard Template Library) C++ `<ios>` che supportano la `ios` classe dalla `iostream` libreria precedente.
ms.date: 11/06/2020
f1_keywords:
- iosfwd/std::ios
- iosfwd/std::streamoff
- iosfwd/std::streampos
- iosfwd/std::streamsize
- iosfwd/std::wios
- iosfwd/std::wstreampos
ms.openlocfilehash: 4af9636ab3317e7b81eb73dc74aef065b1287e21
ms.sourcegitcommit: 3f0c1dcdcce25865d1a1022bcc5b9eec79f69025
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2020
ms.locfileid: "94381636"
---
# <a name="ios-typedefs"></a>Typedef `<ios>`

## `ios`

Supporta la `ios` classe dalla libreria precedente `iostream` .

```cpp
typedef basic_ios<char, char_traits<char>> ios;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del modello di classe [`basic_ios`](../standard-library/basic-ios-class.md) , specializzato per gli elementi di tipo **`char`** con tratti di carattere predefiniti.

## `streamoff`

Supporta operazioni interne.

```cpp
#ifdef _WIN64
    typedef __int64 streamoff;
#else
    typedef long streamoff;
#endif
```

### <a name="remarks"></a>Commenti

Il tipo è un intero con segno. Descrive un oggetto in grado di archiviare un offset di byte nelle operazioni di posizionamento del flusso. La relativa rappresentazione contiene almeno 32 bit di valore. Non è necessariamente sufficientemente grande per rappresentare una posizione di byte arbitraria all'interno di un flusso. Il valore `streamoff(-1)` indica in genere un offset errato.

## `streampos`

Contiene la posizione corrente del puntatore a un buffer o del puntatore a un file.

```cpp
typedef fpos<mbstate_t> streampos;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo di [`fpos`](../standard-library/fpos-class.md) <  `mbstate_t`>.

### <a name="example"></a>Esempio

```cpp
// ios_streampos.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
   using namespace std;

   ofstream x( "iostream.txt" );
   x << "testing";
   streampos y = x.tellp( );
   cout << streamoff(y) << '\n';
}
```

```Output
7
```

## `streamsize`

Denota le dimensioni del flusso.

```cpp
#ifdef _WIN64
    typedef __int64 streamsize;
#else
    typedef int streamsize;
#endif
```

### <a name="remarks"></a>Commenti

Il tipo è un intero con segno che descrive un oggetto in grado di archiviare il numero totale di elementi interessati da varie operazioni di flusso. La relativa rappresentazione contiene almeno 16 bit. Non è necessariamente sufficientemente grande per rappresentare una posizione di byte arbitraria all'interno di un flusso.

### <a name="example"></a>Esempio

Dopo la compilazione e l'esecuzione del programma seguente, esaminare il file `test.txt` per vedere l'effetto dell'impostazione `streamsize` .

```cpp
// ios_streamsize.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
   using namespace std;
   char a[16] = "any such text";
   ofstream x( "test.txt" );
   streamsize y = 6;
   x.write( a, y );
}
```

## `wios`

Supporta la `wios` classe dalla libreria precedente `iostream` .

```cpp
typedef basic_ios<wchar_t, char_traits<wchar_t>> wios;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del modello di classe [`basic_ios`](../standard-library/basic-ios-class.md) , specializzato per gli elementi di tipo **`wchar_t`** con tratti di carattere predefiniti.

## `wstreampos`

Contiene la posizione corrente del puntatore a un buffer o del puntatore a un file.

```cpp
typedef fpos<mbstate_t> wstreampos;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo di [`fpos`](../standard-library/fpos-class.md) <  `mbstate_t`>.

### <a name="example"></a>Esempio

```cpp
// ios_wstreampos.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
   using namespace std;
   wofstream xw( "wiostream.txt" );
   xw << L"testing";
   wstreampos y = xw.tellp( );
   cout << y << endl;
}
```

```Output
7
```
