---
title: Typedef &lt;ios&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::ios
- iosfwd/std::streamoff
- iosfwd/std::streampos
- iosfwd/std::streamsize
- iosfwd/std::wios
- iosfwd/std::wstreampos
ms.assetid: 0b962632-3439-44de-bf26-20c67a7f0ff3
ms.openlocfilehash: 0f63f65fb4c10fbe2ad538852222e6468b9061d0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375395"
---
# <a name="ltiosgt-typedefs"></a>Typedef &lt;ios&gt;

## <a name="ios"></a><a name="ios"></a>Ios

Supporta la classe ios dalla libreria iostream precedente.

```cpp
typedef basic_ios<char, char_traits<char>> ios;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di modello di classe [basic_ios](../standard-library/basic-ios-class.md), specializzato per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="streamoff"></a><a name="streamoff"></a>streamoff

Supporta operazioni interne.

```cpp
#ifdef _WIN64
    typedef __int64 streamoff;
#else
    typedef long streamoff;
#endif
```

### <a name="remarks"></a>Osservazioni

Il tipo è un intero con segno che descrive un oggetto in grado di archiviare un offset di byte interessato da varie operazioni di posizionamento del flusso. La relativa rappresentazione contiene almeno 32 bit di valore. Non necessariamente è abbastanza ampia da rappresentare una posizione di byte arbitraria all'interno di un flusso. Il `streamoff(-1)` valore indica in genere un offset errato.

## <a name="streampos"></a><a name="streampos"></a>streampos

Contiene la posizione corrente del puntatore a un buffer o del puntatore a un file.

```cpp
typedef fpos<mbstate_t> streampos;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di [fpos](../standard-library/fpos-class.md) <  `mbstate_t`>.

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
   cout << y << endl;
}
```

```Output
7
```

## <a name="streamsize"></a><a name="streamsize"></a>streamsize

Denota le dimensioni del flusso.

```cpp
#ifdef _WIN64
    typedef __int64 streamsize;
#else
    typedef int streamsize;
#endif
```

### <a name="remarks"></a>Osservazioni

Il tipo è un intero con segno che descrive un oggetto in grado di archiviare il numero totale di elementi interessati da varie operazioni di flusso. La relativa rappresentazione contiene almeno 16 bit. Non necessariamente è abbastanza ampia da rappresentare una posizione di byte arbitraria all'interno di un flusso.

### <a name="example"></a>Esempio

Dopo aver compilato ed eseguito il programma seguente, esaminare il file test.txt per visualizzare l'effetto dell'impostazione `streamsize`.

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

## <a name="wios"></a><a name="wios"></a>wios

Supporta la classe wios dalla libreria iostream precedente.

```cpp
typedef basic_ios<wchar_t, char_traits<wchar_t>> wios;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di modello di classe [basic_ios](../standard-library/basic-ios-class.md), specializzato per gli elementi di tipo **wchar_t** con tratti carattere predefiniti.

## <a name="wstreampos"></a><a name="wstreampos"></a>wstreampos

Contiene la posizione corrente del puntatore a un buffer o del puntatore a un file.

```cpp
typedef fpos<mbstate_t> wstreampos;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di [fpos](../standard-library/fpos-class.md) <  `mbstate_t`>.

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
