---
title: Funzioni &lt;locale&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- locale/std::has_facet
- locale/std::isalnum
- locale/std::isalpha
- locale/std::iscntrl
- locale/std::isdigit
- locale/std::isgraph
- locale/std::islower
- locale/std::isprint
- locale/std::ispunct
- locale/std::isspace
- locale/std::isupper
- locale/std::isxdigit
- locale/std::tolower
- locale/std::toupper
- locale/std::use_facet
ms.assetid: b06c1ceb-33a7-48d3-8d4b-2714bbb27f14
helpviewer_keywords:
- std::has_facet [C++]
- std::isalnum [C++]
- std::isalpha [C++]
- std::iscntrl [C++]
- std::isdigit [C++]
- std::isgraph [C++]
- std::islower [C++]
- std::isprint [C++]
- std::ispunct [C++]
- std::isspace [C++]
- std::isupper [C++]
- std::isxdigit [C++]
- std::tolower [C++]
- std::toupper [C++]
- std::use_facet [C++]
ms.openlocfilehash: 8b3f6ed544bd4726b8bed2b63394a8b28c54c339
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38956072"
---
# <a name="ltlocalegt-functions"></a>Funzioni &lt;locale&gt;

||||
|-|-|-|
|[has_facet](#has_facet)|[isalnum](#isalnum)|[isalpha](#isalpha)|
|[iscntrl](#iscntrl)|[isdigit](#isdigit)|[isgraph](#isgraph)|
|[islower](#islower)|[isprint](#isprint)|[ispunct](#ispunct)|
|[isspace](#isspace)|[isupper](#isupper)|[isxdigit](#isxdigit)|
|[tolower](#tolower)|[toupper](#toupper)|[use_facet](#use_facet)|

## <a name="has_facet"></a>  has_facet

Verifica se un facet specifico viene archiviato nelle impostazioni locali specificate.

```cpp
template <class Facet>
bool has_facet(const locale& Loc);
```

### <a name="parameters"></a>Parametri

*Loc* le impostazioni locali di cui verificare la presenza di un facet.

### <a name="return-value"></a>Valore restituito

**true** se le impostazioni locali contengono il facet di cui è stata verificata la presenza; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello è utile per verificare, prima della chiamata a `use_facet`, se i facet non obbligatori sono elencati nelle impostazioni locali, in modo da evitare l'eccezione che verrebbe generata se non fossero presenti.

### <a name="example"></a>Esempio

```cpp
// locale_has_facet.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result = has_facet <ctype<char> > ( loc );
   cout << result << endl;
}
```

```Output
1
```

## <a name="isalnum"></a>  isalnum

Verifica se un elemento delle impostazioni locali è un carattere alfabetico o numerico.

```cpp
template <class CharType>
bool isalnum(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* l'elemento alfanumerico da verificare.

*Loc* le impostazioni locali contenenti l'elemento alfanumerico da verificare.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento verificato è alfanumerico; in caso contrario, **false**.

### <a name="example"></a>Esempio

```cpp
// locale_isalnum.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isalnum ( 'L', loc);
   bool result2 = isalnum ( '@', loc);
   bool result3 = isalnum ( '3', loc);

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "alphanumeric." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not alphanumeric." << endl;

   if ( result2 )
      cout << "The character '@' in the locale is "
           << "alphanumeric." << endl;
   else
      cout << "The character '@' in the locale is "
           << " not alphanumeric." << endl;

   if ( result3 )
      cout << "The character '3' in the locale is "
           << "alphanumeric." << endl;
   else
      cout << "The character '3' in the locale is "
           << " not alphanumeric." << endl;
}
```

```Output
The character 'L' in the locale is alphanumeric.
The character '@' in the locale is  not alphanumeric.
The character '3' in the locale is alphanumeric.
```

## <a name="isalpha"></a>  isalpha

Verifica se un elemento delle impostazioni locali è un carattere alfabetico.

```cpp
template <class CharType>
bool isalpha(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* l'elemento da verificare.

*Loc* le impostazioni locali contenenti l'elemento alfabetico da verificare.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento verificato è alfabetico; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **alpha**, `Ch`).

### <a name="example"></a>Esempio

```cpp
// locale_isalpha.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isalpha ( 'L', loc);
   bool result2 = isalpha ( '@', loc);
   bool result3 = isalpha ( '3', loc);

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "alphabetic." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not alphabetic." << endl;

   if ( result2 )
      cout << "The character '@' in the locale is "
           << "alphabetic." << endl;
   else
      cout << "The character '@' in the locale is "
           << " not alphabetic." << endl;

   if ( result3 )
      cout << "The character '3' in the locale is "
           << "alphabetic." << endl;
   else
      cout << "The character '3' in the locale is "
           << " not alphabetic." << endl;
}
```

## <a name="iscntrl"></a>  iscntrl

Verifica se un elemento delle impostazioni locali è un carattere di controllo.

```cpp
template <class CharType>
bool iscntrl(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* l'elemento da verificare.

*Loc* impostazioni locali contenenti l'elemento da verificare.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento verificato è un carattere di controllo; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **cntrl**, `Ch`).

### <a name="example"></a>Esempio

```cpp
// locale_iscntrl.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = iscntrl ( 'L', loc );
   bool result2 = iscntrl ( '\n', loc );
   bool result3 = iscntrl ( '\t', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a control character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a control character." << endl;

   if ( result2 )
      cout << "The character-set 'backslash-n' in the locale\n is "
           << "a control character." << endl;
   else
      cout << "The character-set 'backslash-n' in the locale\n is "
           << " not a control character." << endl;

   if ( result3 )
      cout << "The character-set 'backslash-t' in the locale\n is "
           << "a control character." << endl;
   else
      cout << "The character-set 'backslash-n' in the locale \n is "
           << " not a control character." << endl;
}
```

## <a name="isdigit"></a>  isdigit

Verifica se un elemento delle impostazioni locali è un carattere numerico.

```cpp
template <class CharType>
bool isdigit(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* l'elemento da verificare.

*Loc* impostazioni locali contenenti l'elemento da verificare.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento verificato è un carattere numerico; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **digit**, `Ch`).

### <a name="example"></a>Esempio

```cpp
// locale_is_digit.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isdigit ( 'L', loc );
   bool result2 = isdigit ( '@', loc );
   bool result3 = isdigit ( '3', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a numeric character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a numeric character." << endl;

   if ( result2 )
      cout << "The character '@' in the locale is "
           << "a numeric character." << endl;
   else
      cout << "The character '@' in the locale is "
           << " not a numeric character." << endl;

   if ( result3 )
      cout << "The character '3' in the locale is "
           << "a numeric character." << endl;
   else
      cout << "The character '3' in the locale is "
           << " not a numeric character." << endl;
}
```

## <a name="isgraph"></a>  isgraph

Verifica se un elemento delle impostazioni locali è un carattere alfanumerico o di punteggiatura.

```cpp
template <class CharType>
bool isgraph(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* l'elemento da verificare.

*Loc* impostazioni locali contenenti l'elemento da verificare.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento verificato è un carattere alfanumerico o di punteggiatura; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **graph**, `Ch`).

### <a name="example"></a>Esempio

```cpp
// locale_is_graph.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isgraph ( 'L', loc );
   bool result2 = isgraph ( '\t', loc );
   bool result3 = isgraph ( '.', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is\n "
           << "an alphanumeric or punctuation character." << endl;
   else
      cout << "The character 'L' in the locale is\n "
           << " not an alphanumeric or punctuation character." << endl;

   if ( result2 )
      cout << "The character 'backslash-t' in the locale is\n "
           << "an alphanumeric or punctuation character." << endl;
   else
      cout << "The character 'backslash-t' in the locale is\n "
           << "not an alphanumeric or punctuation character." << endl;

   if ( result3 )
      cout << "The character '.' in the locale is\n "
           << "an alphanumeric or punctuation character." << endl;
   else
      cout << "The character '.' in the locale is\n "
           << " not an alphanumeric or punctuation character." << endl;
}
```

## <a name="islower"></a>  islower

Verifica se un elemento delle impostazioni locali è un carattere minuscolo.

```cpp
template <class CharType>
bool islower(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* l'elemento da verificare.

*Loc* impostazioni locali contenenti l'elemento da verificare.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento verificato è un carattere minuscolo; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **lower**, `Ch`).

### <a name="example"></a>Esempio

```cpp
// locale_islower.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = islower ( 'L', loc );
   bool result2 = islower ( 'n', loc );
   bool result3 = islower ( '3', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a lowercase character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a lowercase character." << endl;

   if ( result2 )
      cout << "The character 'n' in the locale is "
           << "a lowercase character." << endl;
   else
      cout << "The character 'n' in the locale is "
           << " not a lowercase character." << endl;

   if ( result3 )
      cout << "The character '3' in the locale is "
           << "a lowercase character." << endl;
   else
      cout << "The character '3' in the locale is "
           << " not a lowercase character." << endl;
}
```

## <a name="isprint"></a>  isprint

Verifica se un elemento delle impostazioni locali è un carattere stampabile.

```cpp
template <class CharType>
bool isprint(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* l'elemento da verificare.

*Loc* impostazioni locali contenenti l'elemento da verificare.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento verificato è un carattere stampabile; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **print**, `Ch`).

### <a name="example"></a>Esempio

```cpp
// locale_isprint.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );

   bool result1 = isprint ( 'L', loc );
   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a printable character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a printable character." << endl;

   bool result2 = isprint( '\t', loc );
   if ( result2 )
      cout << "The character 'backslash-t' in the locale is "
           << "a printable character." << endl;
   else
      cout << "The character 'backslash-t' in the locale is "
           << " not a printable character." << endl;

   bool result3 = isprint( '\n', loc );
   if ( result3 )
      cout << "The character 'backslash-n' in the locale is "
           << "a printable character." << endl;
   else
      cout << "The character 'backslash-n' in the locale is "
           << " not a printable character." << endl;
}
```

## <a name="ispunct"></a>  ispunct

Verifica se un elemento delle impostazioni locali è un carattere di punteggiatura.

```cpp
template <class CharType>
bool ispunct(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* l'elemento da verificare.

*Loc* impostazioni locali contenenti l'elemento da verificare.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento verificato è un carattere di punteggiatura; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)`<`[ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **punct**, `Ch`).

### <a name="example"></a>Esempio

```cpp
// locale_ispunct.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = ispunct ( 'L', loc );
   bool result2 = ispunct ( ';', loc );
   bool result3 = ispunct ( '*', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a punctuation character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a punctuation character." << endl;

   if ( result2 )
      cout << "The character ';' in the locale is "
           << "a punctuation character." << endl;
   else
      cout << "The character ';' in the locale is "
           << " not a punctuation character." << endl;

   if ( result3 )
      cout << "The character '*' in the locale is "
           << "a punctuation character." << endl;
   else
      cout << "The character '*' in the locale is "
           << " not a punctuation character." << endl;
}
```

## <a name="isspace"></a>  isspace

Verifica se un elemento delle impostazioni locali è uno spazio vuoto.

```cpp
template <class CharType>
bool isspace(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* l'elemento da verificare.

*Loc* impostazioni locali contenenti l'elemento da verificare.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento verificato è uno spazio vuoto; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **space**, `Ch`).

### <a name="example"></a>Esempio

```cpp
// locale_isspace.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isspace ( 'L', loc );
   bool result2 = isspace ( '\n', loc );
   bool result3 = isspace ( ' ', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a whitespace character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a whitespace character." << endl;

   if ( result2 )
      cout << "The character 'backslash-n' in the locale is "
           << "a whitespace character." << endl;
   else
      cout << "The character 'backslash-n' in the locale is "
           << " not a whitespace character." << endl;

   if ( result3 )
      cout << "The character ' ' in the locale is "
           << "a whitespace character." << endl;
   else
      cout << "The character ' ' in the locale is "
           << " not a whitespace character." << endl;
}
```

## <a name="isupper"></a>  isupper

Verifica se un elemento delle impostazioni locali è un carattere maiuscolo.

```cpp
template <class CharType>
bool isupper(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* l'elemento da verificare.

*Loc* impostazioni locali contenenti l'elemento da verificare.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento verificato è un carattere maiuscolo; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **upper**, `Ch`).

### <a name="example"></a>Esempio

```cpp
// locale_isupper.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isupper ( 'L', loc );
   bool result2 = isupper ( 'n', loc );
   bool result3 = isupper ( '3', loc );

   if ( result1 )
      cout << "The character 'L' in the locale is "
           << "a uppercase character." << endl;
   else
      cout << "The character 'L' in the locale is "
           << " not a uppercase character." << endl;

   if ( result2 )
      cout << "The character 'n' in the locale is "
           << "a uppercase character." << endl;
   else
      cout << "The character 'n' in the locale is "
           << " not a uppercase character." << endl;

   if ( result3 )
      cout << "The character '3' in the locale is "
           << "a uppercase character." << endl;
   else
      cout << "The character '3' in the locale is "
           << " not a uppercase character." << endl;
}
```

## <a name="isxdigit"></a>  isxdigit

Verifica se un elemento delle impostazioni locali è un carattere utilizzato per rappresentare un numero esadecimale.

```cpp
template <class CharType>
bool isxdigit(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* l'elemento da verificare.

*Loc* impostazioni locali contenenti l'elemento da verificare.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento verificato è un carattere usato per rappresentare un numero esadecimale; in caso contrario, **false**.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [is](../standard-library/ctype-class.md#is)( **ctype**\< **CharType**>:: **xdigit**, `Ch`).

Le cifre esadecimali usano la base 16, con numeri da 0 a 9 e lettere da A a F senza distinzione tra maiuscole e minuscole, per rappresentare i numeri decimali da 0 a 15.

### <a name="example"></a>Esempio

```cpp
// locale_isxdigit.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>

using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   bool result1 = isxdigit ( '5', loc );
   bool result2 = isxdigit ( 'd', loc );
   bool result3 = isxdigit ( 'q', loc );

   if ( result1 )
      cout << "The character '5' in the locale is "
           << "a hexidecimal digit-character." << endl;
   else
      cout << "The character '5' in the locale is "
           << " not a hexidecimal digit-character." << endl;

   if ( result2 )
      cout << "The character 'd' in the locale is "
           << "a hexidecimal digit-character." << endl;
   else
      cout << "The character 'd' in the locale is "
           << " not a hexidecimal digit-character." << endl;

   if ( result3 )
      cout << "The character 'q' in the locale is "
           << "a hexidecimal digit-character." << endl;
   else
      cout << "The character 'q' in the locale is "
           << " not a hexidecimal digit-character." << endl;
}
```

## <a name="tolower"></a>  tolower

Converte un carattere in minuscolo.

```cpp
template <class CharType>
CharType tolower(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* il carattere da convertire in lettere minuscole.

*Loc* impostazioni locali contenenti il carattere da convertire.

### <a name="return-value"></a>Valore restituito

Carattere convertito in minuscolo.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [tolower](../standard-library/ctype-class.md#tolower)( `Ch`).

### <a name="example"></a>Esempio

```cpp
// locale_tolower.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   char result1 = tolower ( 'H', loc );
   cout << "The lower case of 'H' in the locale is: "
        << result1 << "." << endl;
   char result2 = tolower ( 'h', loc );
   cout << "The lower case of 'h' in the locale is: "
        << result2 << "." << endl;
   char result3 = tolower ( '$', loc );
   cout << "The lower case of '$' in the locale is: "
        << result3 << "." << endl;
}
```

## <a name="toupper"></a>  toupper

Converte un carattere in maiuscolo.

```cpp
template <class CharType>
CharType toupper(CharType Ch, const locale& Loc)
```

### <a name="parameters"></a>Parametri

*CH* il carattere da convertire in lettere maiuscole.

*Loc* impostazioni locali contenenti il carattere da convertire.

### <a name="return-value"></a>Valore restituito

Carattere convertito in maiuscolo.

### <a name="remarks"></a>Note

La funzione modello restituisce [use_facet](../standard-library/locale-functions.md#use_facet)< [ctype](../standard-library/ctype-class.md)\< **CharType**> >( `Loc`). [toupper](../standard-library/ctype-class.md#toupper)( `Ch`).

### <a name="example"></a>Esempio

```cpp
// locale_toupper.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc ( "German_Germany" );
   char result1 = toupper ( 'h', loc );
   cout << "The upper case of 'h' in the locale is: "
        << result1 << "." << endl;
   char result2 = toupper ( 'H', loc );
   cout << "The upper case of 'H' in the locale is: "
        << result2 << "." << endl;
   char result3 = toupper ( '$', loc );
   cout << "The upper case of '$' in the locale is: "
        << result3 << "." << endl;
}
```

## <a name="use_facet"></a>  use_facet

Restituisce un riferimento a un facet di un tipo specificato archiviato nelle impostazioni locali.

```cpp
template <class Facet>
const Facet& use_facet(const locale& Loc);
```

### <a name="parameters"></a>Parametri

*Loc* impostazioni locali const contenenti il tipo di facet a cui fa riferimento.

### <a name="return-value"></a>Valore restituito

Riferimento al facet della classe `Facet` contenuto nelle impostazioni locali dell'argomento.

### <a name="remarks"></a>Note

Il riferimento al facet restituito dalla funzione modello rimane valido a condizione che esista una copia delle impostazioni locali che contengono il facet. Se nelle impostazioni locali dell'argomento non è elencato alcun oggetto facet delle classe `Facet`, la funzione genera un'eccezione `bad_cast`.

### <a name="example"></a>Esempio

```cpp
// locale_use_facet.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
using namespace std;

int main( )
{
   locale loc1 ( "German_Germany" ), loc2 ( "English_Australia" );
   bool result1 = use_facet<ctype<char> > ( loc1 ).is(
   ctype_base::alpha, 'a'
);
   bool result2 = use_facet<ctype<char> > ( loc2 ).is( ctype_base::alpha, '!'
   );

   if ( result1 )
      cout << "The character 'a' in locale loc1 is alphabetic."
           << endl;
   else
      cout << "The character 'a' in locale loc1 is not alphabetic."
           << endl;

   if ( result2 )
      cout << "The character '!' in locale loc2 is alphabetic."
           << endl;
   else
      cout << "The character '!' in locale loc2 is not alphabetic."
           << endl;
}
```

```Output
The character 'a' in locale loc1 is alphabetic.
The character '!' in locale loc2 is not alphabetic.
```

## <a name="see-also"></a>Vedere anche

[\<locale>](../standard-library/locale.md)<br/>
