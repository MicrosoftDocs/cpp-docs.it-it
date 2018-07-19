---
title: Operatori &lt;string&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- string/std::operator!=
- string/std::operator&gt;
- string/std::operator&gt;&gt;
- string/std::operator&gt;=
- string/std::operator&lt;
- string/std::operator&lt;&lt;
- string/std::operator&lt;=
- string/std::operator+
- string/std::operator==
dev_langs:
- C++
ms.assetid: 33ce8f05-06c7-45d3-a0cb-bcd27cf93910
helpviewer_keywords:
- std::operator!= (string)
- std::operator&gt; (string)
- std::operator&gt;&gt; (string)
- std::operator&gt;= (string)
- std::operator&lt; (string)
- std::operator&lt;&lt; (string)
- std::operator&lt;= (string), std::operator== (string)
ms.openlocfilehash: 728a0f643a77b47bf857d409517407bec3a1b8b4
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38966626"
---
# <a name="ltstringgt-operators"></a>Operatori &lt;string&gt;

||||
|-|-|-|
|[operator!=](#op_neq)|[operator&gt;](#op_gt)|[operator&gt;&gt;](#op_gt_gt)|
|[operator&gt;=](#op_gt_eq)|[operator&lt;](#op_lt)|[operator&lt;&lt;](#op_lt_lt)|
|[operator&lt;=](#op_lt_eq)|[operator+](#op_add)|[operator==](#op_eq_eq)|

## <a name="op_add"></a>  operator+

Concatena due oggetti stringa.

```cpp
template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator> operator+(
    const basic_string<CharType, Traits, Allocator>& left,
    const basic_string<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator> operator+(
    const basic_string<CharType, Traits, Allocator>& left,
    const CharType* right);

template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator> operator+(
    const basic_string<CharType, Traits, Allocator>& left,
    const CharType right);

template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator> operator+(
    const CharType* left,
    const basic_string<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator> operator+(
    const CharType left,
    const basic_string<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator>&& operator+(
    const basic_string<CharType, Traits, Allocator>& left,
    const basic_string<CharType, Traits, Allocator>&& right);

template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator>&& operator+(
    const basic_string<CharType, Traits, Allocator>&& left,
    const basic_string<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator>&& operator+(
    const basic_string<CharType, Traits, Allocator>&& left,
    const basic_string<CharType, Traits, Allocator>&& right);

template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator>&& operator+(
    const basic_string<CharType, Traits, Allocator>&& left,
    const CharType* right);

template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator>&& operator+(
    const basic_string<CharType, Traits, Allocator>&& left,
    CharType right);

template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator>&& operator+(
    const CharType* left,
    const basic_string<CharType, Traits, Allocator>&& right);

template <class CharType, class Traits, class Allocator>
basic_string<CharType, Traits, Allocator>&& operator+(
    CharType left,
    const basic_string<CharType, Traits, Allocator>&& right);
```

### <a name="parameters"></a>Parametri

*a sinistra* una stringa di tipo C o un oggetto di tipo `basic_string` da concatenare.

*a destra* una stringa di tipo C o un oggetto di tipo `basic_string` da concatenare.

### <a name="return-value"></a>Valore restituito

La stringa che rappresenta la concatenazione delle stringhe di input.

### <a name="remarks"></a>Note

Le funzioni eseguono ciascuna l'overload `operator+` per concatenare due oggetti della classe modello [basic_string](../standard-library/basic-string-class.md). Tutte restituiscono `basic_string`\< **CharType**, **Traits**, **Allocator**>(_ *Left*). [append](../standard-library/basic-string-class.md#append)(\_ *Right*).

### <a name="example"></a>Esempio

```cpp
// string_op_con.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   // Declaring an object of type basic_string<char>
   string s1 ( "anti" );
   string s2 ( "gravity" );
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   // Declaring a C-style string
   char *s3 = "heroine";
   cout << "The C-style string s3 = " << s3 << "." << endl;

   // Declaring a character constant
   char c1 = '!';
   cout << "The character constant c1 = " << c1 << "." << endl;

   // First member function: concatenates an  object
   // of type basic_string with an object of type basic_string
   string s12 = s1 + s2;
   cout << "The string concatenating s1 & s2 is: " << s12 << endl;

   // Second & fourth member functions: concatenate an object
   // of type basic_string with an object of C-syle string type
   string s1s3 = s1 + s3;
   cout << "The string concatenating s1 & s3 is: " << s1s3 << endl;

   // Third & fifth member functions: concatenate an object
   // of type basic_string with a character constant
   string s1s3c1 = s1s3 + c1;
   cout << "The string concatenating s1 & s3 is: " << s1s3c1 << endl;
}
```

```Output
The basic_string s1 = anti.
The basic_string s2 = gravity.
The C-style string s3 = heroine.
The character constant c1 = !.
The string concatenating s1 & s2 is: antigravity
The string concatenating s1 & s3 is: antiheroine
The string concatenating s1 & s3 is: antiheroine!
```

## <a name="op_neq"></a>  operator!=

Verifica se l'oggetto stringa a sinistra dell'operatore non è uguale all'oggetto stringa a destra.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator!=(
    const basic_string<CharType, Traits, Allocator>& left,
    const basic_string<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
bool operator!=(
    const basic_string<CharType, Traits, Allocator>& left,
const CharType* right);

template <class CharType, class Traits, class Allocator>
bool operator!=(
    const CharType* left,
    const basic_string<CharType, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*a sinistra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

*a destra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto stringa a sinistra dell'operatore non è uguale, dal punto di vista lessicografico, all'oggetto stringa a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Il confronto tra gli oggetti stringa è basato su un confronto lessicografico a coppie dei relativi caratteri. Due stringhe sono uguali se contengono lo stesso numero di caratteri e se i rispettivi caratteri hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// string_op_ne.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string<char>
   string s1 ( "pluck" );
   string s2 ( "strum" );
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   // Declaring a C-style string
   char *s3 = "pluck";
   cout << "The C-style string s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string & right-side object of type basic_string
   if ( s1 != s2 )
      cout << "The strings s1 & s2 are not equal." << endl;
   else
      cout << "The strings s1 & s2 are equal." << endl;

   // Second member function: comparison between left-side object
   // of type basic_string & right-side object of C-syle string type
   if ( s1 != s3 )
      cout << "The strings s1 & s3 are not equal." << endl;
   else
      cout << "The strings s1 & s3 are equal." << endl;

   // Third member function: comparison between left-side object
   // of C-syle string type & right-side object of type basic_string
   if ( s3 != s2 )
      cout << "The strings s3 & s2 are not equal." << endl;
   else
      cout << "The strings s3 & s2 are equal." << endl;
}
```

```Output
The basic_string s1 = pluck.
The basic_string s2 = strum.
The C-style string s3 = pluck.
The strings s1 & s2 are not equal.
The strings s1 & s3 are equal.
The strings s3 & s2 are not equal.
```

## <a name="op_eq_eq"></a>  operator==

Verifica se l'oggetto stringa a sinistra dell'operatore è uguale all'oggetto stringa a destra.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator==(
    const basic_string<CharType, Traits, Allocator>& left,
    const basic_string<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
bool operator==(
    const basic_string<CharType, Traits, Allocator>& left,
    const CharType* right);

template <class CharType, class Traits, class Allocator>
bool operator==(
    const CharType* left,
    const basic_string<CharType, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*a sinistra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

*a destra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto stringa a sinistra dell'operatore è uguale, dal punto di vista lessicografico, all'oggetto stringa a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Il confronto tra gli oggetti stringa è basato su un confronto lessicografico a coppie dei relativi caratteri. Due stringhe sono uguali se contengono lo stesso numero di caratteri e se i rispettivi caratteri hanno gli stessi valori. In caso contrario, non sono uguali.

### <a name="example"></a>Esempio

```cpp
// string_op_eq.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string<char>
   string s1 ( "pluck" );
   string s2 ( "strum" );
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   // Declaring a C-style string
   char *s3 = "pluck";
   cout << "The C-style string s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string & right-side object of type basic_string
   if ( s1 == s2 )
      cout << "The strings s1 & s2 are equal." << endl;
   else
      cout << "The strings s1 & s2 are not equal." << endl;

   // Second member function: comparison between left-side object
   // of type basic_string & right-side object of C-syle string type
   if ( s1 == s3 )
      cout << "The strings s1 & s3 are equal." << endl;
   else
      cout << "The strings s1 & s3 are not equal." << endl;

   // Third member function: comparison between left-side object
   // of C-syle string type & right-side object of type basic_string
   if ( s3 == s2 )
      cout << "The strings s3 & s2 are equal." << endl;
   else
      cout << "The strings s3 & s2 are not equal." << endl;
}
```

```Output
The basic_string s1 = pluck.
The basic_string s2 = strum.
The C-style string s3 = pluck.
The strings s1 & s2 are not equal.
The strings s1 & s3 are equal.
The strings s3 & s2 are not equal.
```

## <a name="op_lt"></a>  operator&lt;

Verifica se l'oggetto stringa a sinistra dell'operatore è minore dell'oggetto stringa a destra.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator<(
    const basic_string<CharType, Traits, Allocator>& left,
    const basic_string<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
bool operator<(
    const basic_string<CharType, Traits, Allocator>& left,
    const CharType* right);

template <class CharType, class Traits, class Allocator>
bool operator<(
    const CharType* left,
    const basic_string<CharType, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*a sinistra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

*a destra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto stringa a sinistra dell'operatore è minore, dal punto di vista lessicografico, dell'oggetto stringa a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Un confronto lessicografico tra stringhe le confronta carattere per carattere fino a quando:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

```cpp
// string_op_lt.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   // Declaring an objects of type basic_string<char>
   string s1 ( "strict" );
   string s2 ( "strum" );
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   // Declaring a C-style string
   char *s3 = "strict";
   cout << "The C-style string s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string & right-side object of type basic_string
   if ( s1 < s2 )
      cout << "The string s1 is less than the string s2." << endl;
   else
      cout << "The string s1 is not less than the string s2." << endl;

   // Second member function: comparison between left-hand object
   // of type basic_string & right-hand object of C-syle string type
   if ( s1 < s3 )
      cout << "The string s1 is less than the string s3." << endl;
   else
      cout << "The string s1 is not less than the string s3." << endl;

   // Third member function: comparison between left-hand object
   // of C-syle string type & right-hand object of type basic_string
   if ( s3 < s2 )
      cout << "The string s3 is less than the string s2." << endl;
   else
      cout << "The string s3 is not less than the string s2." << endl;
}
```

```Output
The basic_string s1 = strict.
The basic_string s2 = strum.
The C-style string s3 = strict.
The string s1 is less than the string s2.
The string s1 is not less than the string s3.
The string s3 is less than the string s2.
```

## <a name="op_lt_eq"></a>  operator&lt;=

Verifica se l'oggetto stringa a sinistra dell'operatore è minore o uguale all'oggetto stringa a destra.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator<=(
    const basic_string<CharType, Traits, Allocator>& left,
    const basic_string<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
bool operator<=(
    const basic_string<CharType, Traits, Allocator>& left,
    const CharType* right);

template <class CharType, class Traits, class Allocator>
bool operator<=(
    const CharType* left,
    const basic_string<CharType, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*a sinistra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

*a destra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto stringa a sinistra dell'operatore è minore o uguale, dal punto di vista lessicografico, all'oggetto stringa a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Un confronto lessicografico tra stringhe le confronta carattere per carattere fino a quando:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

```cpp
// string_op_le.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string<char>
   string s1 ( "strict" );
   string s2 ( "strum" );
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   // Declaring a C-style string
   char *s3 = "strict";
   cout << "The C-style string s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string & right-side object of type basic_string
   if ( s1 <= s2 )
      cout << "The string s1 is less than or equal to "
           << "the string s2." << endl;
   else
      cout << "The string s1 is greater than "
           << "the string s2." << endl;

   // Second member function: comparison between left-side object
   // of type basic_string & right-side object of C-syle string type
   if ( s1 <= s3 )
      cout << "The string s1 is less than or equal to "
           << "the string s3." << endl;
   else
      cout << "The string s1 is greater than "
           << "the string s3." << endl;

   // Third member function: comparison between left-side object
   // of C-syle string type  & right-side object of type basic_string
   if ( s2 <= s3 )
      cout << "The string s2 is less than or equal to "
           << "the string s3." << endl;
   else
      cout << "The string s2 is greater than "
           << "the string s3." << endl;
}
```

```Output
The basic_string s1 = strict.
The basic_string s2 = strum.
The C-style string s3 = strict.
The string s1 is less than or equal to the string s2.
The string s1 is less than or equal to the string s3.
The string s2 is greater than the string s3.
```

## <a name="op_lt_lt"></a>  operator&lt;&lt;

Funzione modello che scrive una stringa nel flusso di output.

```cpp
template <class CharType, class Traits, class Allocator>
basic_ostream<CharType, Traits>& operator<<(
    basic_ostream<CharType, Traits>& _Ostr,
    const basic_string<CharType, Traits, Allocator>& str);
```

### <a name="parameters"></a>Parametri

*_Ostr* il flusso di output su cui scritto.

*str* la stringa deve essere immesso nel flusso di output.

### <a name="return-value"></a>Valore restituito

Scrive il valore della stringa specificata nel flusso di output *_Ostr*.

### <a name="remarks"></a>Note

La funzione modello esegue l'overload di **operator<<** per inserire un oggetto _ *Str* della classe modello [basic_string](../standard-library/basic-string-class.md) nel flusso \_ *Ostr.* La funzione restituisce effettivamente \_ *Ostr*. **write**( \_ *Str*. [c_str](../standard-library/basic-string-class.md#c_str), \_ *Str*. [size](../standard-library/basic-string-class.md#size)).

## <a name="op_gt"></a>  operator&gt;

Verifica se l'oggetto stringa a sinistra dell'operatore è maggiore dell'oggetto stringa a destra.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator>(
    const basic_string<CharType, Traits, Allocator>& left,
    const basic_string<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
bool operator>(
    const basic_string<CharType, Traits, Allocator>& left,
    const CharType* right);

template <class CharType, class Traits, class Allocator>
bool operator>(
    const CharType* left,
    const basic_string<CharType, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*a sinistra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

*a destra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto stringa a sinistra dell'operatore è maggiore, dal punto di vista lessicografico, dell'oggetto stringa a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Un confronto lessicografico tra stringhe le confronta carattere per carattere fino a quando:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

```cpp
// string_op_gt.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string<char>
   string s1 ( "strict" );
   string s2 ( "strum" );
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   // Declaring a C-style string
   char *s3 = "stricture";
   cout << "The C-style string s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string & right-side object of type basic_string
   if ( s1 > s2 )
      cout << "The string s1 is greater than "
           << "the string s2." << endl;
   else
      cout << "The string s1 is not greater than "
           << "the string s2." << endl;

   // Second member function: comparison between left-side object
   // of type basic_string & right-side object of C-syle string type
   if ( s3 > s1 )
      cout << "The string s3 is greater than "
           << "the string s1." << endl;
   else
      cout << "The string s3 is not greater than "
           << "the string s1." << endl;

   // Third member function: comparison between left-side object
   // of C-syle string type & right-side object of type basic_string
   if ( s2 > s3 )
      cout << "The string s2 is greater than "
           << "the string s3." << endl;
   else
      cout << "The string s2 is not greater than "
           << "the string s3." << endl;
}
```

```Output
The basic_string s1 = strict.
The basic_string s2 = strum.
The C-style string s3 = stricture.
The string s1 is not greater than the string s2.
The string s3 is greater than the string s1.
The string s2 is greater than the string s3.
```

## <a name="op_gt_eq"></a>  operator&gt;=

Verifica se l'oggetto stringa a sinistra dell'operatore è maggiore o uguale all'oggetto stringa a destra.

```cpp
template <class CharType, class Traits, class Allocator>
bool operator>=(
    const basic_string<CharType, Traits, Allocator>& left,
    const basic_string<CharType, Traits, Allocator>& right);

template <class CharType, class Traits, class Allocator>
bool operator>=(
    const basic_string<CharType, Traits, Allocator>& left,
    const CharType* right);

template <class CharType, class Traits, class Allocator>
bool operator>=(
    const CharType* left,
    const basic_string<CharType, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*a sinistra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

*a destra* una stringa di tipo C o un oggetto di tipo `basic_string` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto stringa a sinistra dell'operatore è maggiore o uguale, dal punto di vista lessicografico, all'oggetto stringa a destra; in caso contrario, **false**.

### <a name="remarks"></a>Note

Un confronto lessicografico tra stringhe le confronta carattere per carattere fino a quando:

- Vengono trovati due caratteri corrispondenti non uguali e il risultato del loro confronto viene accettato come risultato del confronto tra le stringhe.

- Non viene trovata alcuna disuguaglianza, ma una stringa include più caratteri dell'altra e la stringa più breve è considerata minore della stringa più lunga.

- Non viene trovata alcuna disuguaglianza e le stringhe includono lo stesso numero di caratteri. Di conseguenza, le stringhe sono uguali.

### <a name="example"></a>Esempio

```cpp
// string_op_ge.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // Declaring an objects of type basic_string<char>
   string s1 ( "strict" );
   string s2 ( "strum" );
   cout << "The basic_string s1 = " << s1 << "." << endl;
   cout << "The basic_string s2 = " << s2 << "." << endl;

   // Declaring a C-style string
   char *s3 = "stricture";
   cout << "The C-style string s3 = " << s3 << "." << endl;

   // First member function: comparison between left-side object
   // of type basic_string & right-side object of type basic_string
   if ( s1 >= s2 )
      cout << "The string s1 is greater than or equal to "
           << "the string s2." << endl;
   else
      cout << "The string s1 is less than "
           << "the string s2." << endl;

   // Second member function: comparison between left-side object
   // of type basic_string & right-side object of C-syle string type
   if ( s3 >= s1 )
      cout << "The string s3 is greater than or equal to "
           << "the string s1." << endl;
   else
      cout << "The string s3 is less than "
           << "the string s1." << endl;

   // Third member function: comparison between left-side object
   // of C-syle string type & right-side object of type basic_string
   if ( s2 >= s3 )
      cout << "The string s2 is greater than or equal to "
           << "the string s3." << endl;
   else
      cout << "The string s2 is less than "
           << "the string s3." << endl;
}
```

```Output
The basic_string s1 = strict.
The basic_string s2 = strum.
The C-style string s3 = stricture.
The string s1 is less than the string s2.
The string s3 is greater than or equal to the string s1.
The string s2 is greater than or equal to the string s3.
```

## <a name="op_gt_gt"></a>  operator&gt;&gt;

Funzione modello che legge una stringa dal flusso di input.

```cpp
template <class CharType, class Traits, class Allocator>
basic_istream<CharType, Traits>& operator>>(
    basic_istream<CharType, Traits>& _Istr,
    basic_string<CharType, Traits, Allocator>& right);
```

### <a name="parameters"></a>Parametri

*_Istr* il flusso di input utilizzato per estrarre la sequenza

*a destra* la stringa da cui vengono estratti dal flusso di input.

### <a name="return-value"></a>Valore restituito

Legge il valore della stringa specificata da *_Istr* e lo restituisce in *a destra*.

### <a name="remarks"></a>Note

L'operatore ignora gli spazi iniziali a meno che il flag `skipws` non sia impostato. Legge tutti i caratteri successivi fino a quando incontra uno spazio vuoto o arriva alla fine del file.

Gli overload della funzione modello **operatore >>** per sostituire la sequenza controllata da *destro* con una sequenza di elementi estratti dal flusso *_Istr*. L'estrazione termina:

- Alla fine del file.

- Dopo che la funzione ha estratto elementi `_Istr`. **width**, se il valore è diverso da zero.

Dopo che la funzione ha estratto elementi `_Istr`. [max_size](../standard-library/basic-string-class.md#max_size).

- Dopo che la funzione ha estratto un elemento *ch* per cui [use_facet](../standard-library/basic-filebuf-class.md#open)< **ctype**\< **CharType**> >( `getloc`). **is**( **ctype**\< **CharType**>:: **space**, *ch*) è true, nel qual caso il carattere viene reinserito.

Se la funzione non estrae alcun elemento, chiama il metodo [setstate](../standard-library/basic-ios-class.md#setstate)(`ios_base::failbit`). In tutti i casi, chiama **istr**. **width**(0) e restituisce \* **this**.

### <a name="example"></a>Esempio

```cpp
// string_op_read_.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   string c0;
   cout << "Input a string c0 ( try: Fibonacci numbers ): ";
   cin >> c0;
   cout << "The string entered is c0 = " << c0 << endl;
}
```

## <a name="see-also"></a>Vedere anche

[\<string>](../standard-library/string.md)<br/>
