---
title: Struct char_traits | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- iosfwd/std::char_traits
- iosfwd/std::char_traits::char_type
- iosfwd/std::char_traits::int_type
- iosfwd/std::char_traits::off_type
- iosfwd/std::char_traits::pos_type
- iosfwd/std::char_traits::state_type
- iosfwd/std::char_traits::assign
- iosfwd/std::char_traits::compare
- iosfwd/std::char_traits::copy
- iosfwd/std::char_traits::_Copy_s
- iosfwd/std::char_traits::eof
- iosfwd/std::char_traits::eq
- iosfwd/std::char_traits::eq_int_type
- iosfwd/std::char_traits::find
- iosfwd/std::char_traits::length
- iosfwd/std::char_traits::lt
- iosfwd/std::char_traits::move
- iosfwd/std::char_traits::_Move_s
- iosfwd/std::char_traits::not_eof
- iosfwd/std::char_traits::to_char_type
- iosfwd/std::char_traits::to_int_type
dev_langs:
- C++
helpviewer_keywords:
- char_traits struct
- char_traits class
ms.assetid: 568e59f0-4521-4207-9223-9dcf6a16d620
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1c2346ed8a7d9cc2359c0bdf984b52993a13b05a
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38956882"
---
# <a name="chartraits-struct"></a>Struct char_traits

La struct char_traits descrive gli attributi associati a un carattere.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType>
struct char_traits;
```

### <a name="parameters"></a>Parametri

*CharType* il tipo di dati elemento.

## <a name="remarks"></a>Note

Lo struct modello descrive vari tratti di carattere per il tipo `CharType`. La classe modello [basic_string](../standard-library/basic-string-class.md) nonché diverse classi modello iostream, inclusa [basic_ios](../standard-library/basic-ios-class.md), usare queste informazioni per modificare elementi di tipo `CharType`. Un elemento di questo tipo non deve richiedere una costruzione o una distruzione esplicita. Deve fornire un costruttore predefinito, un costruttore di copia e un operatore di assegnazione con la semantica prevista. Una copia bit per bit deve avere lo stesso effetto di un'assegnazione. Nessuna delle funzioni membro di struct char_traits può generare eccezioni.

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Tipo di carattere.|
|[int_type](#int_type)|Un tipo Integer che può rappresentare un carattere di tipo `char_type` o un carattere EOF.|
|[off_type](#off_type)|Un tipo Integer che può rappresentare offset tra posizioni in un flusso.|
|[pos_type](#pos_type)|Un tipo Integer che può rappresentare posizioni in un flusso.|
|[state_type](#state_type)|Tipo che rappresenta lo stato di conversione per caratteri multibyte in un flusso.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[assign](#assign)|Assegna un valore del carattere a un altro.|
|[compare](#compare)|Confronta un numero specificato di caratteri in due stringhe.|
|[copy](#copy)|Copia un numero specificato di caratteri da una stringa a un'altra. Deprecato. Usare invece [char_traits::_Copy_s](#copy_s).|
|[_Copy_s](#copy_s)|Copia un numero specificato di caratteri da una stringa a un'altra.|
|[eof](#eof)|Restituisce il carattere EOF.|
|[eq](#eq)|Verifica se due caratteri `char_type` sono uguali.|
|[eq_int_type](#eq_int_type)|Verifica se due caratteri rappresentati come `int_type` sono uguali.|
|[find](#find)|Cerca la prima occorrenza di un carattere specificato in un intervallo di caratteri.|
|[length](#length)|Restituisce la lunghezza di una stringa.|
|[lt](#lt)|Verifica se un carattere è minore di un altro.|
|[move](#move)|Copia un numero specificato di caratteri in una sequenza in un'altra sequenza possibile di sovrapposizione. Deprecato. Usare invece [char_traits::_Move_s](#move_s).|
|[_Move_s](#move_s)|Copia un numero specificato di caratteri in una sequenza in un'altra sequenza possibile di sovrapposizione.|
|[not_eof](#not_eof)|Verifica se un carattere è il carattere EOF.|
|[to_char_type](#to_char_type)|Converte un carattere `int_type` in quello `char_type` corrispondente e restituisce il risultato.|
|[to_int_type](#to_int_type)|Converte un carattere `char_type` in quello `int_type` corrispondente e restituisce il risultato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<string>

**Spazio dei nomi:** std

## <a name="assign"></a>  char_traits::assign

Assegna un valore del carattere a un altro elemento o un intervallo di elementi in una stringa.

```cpp
static void assign(char_type& _CharTo,
    const char_type& _CharFrom);

static char_type *assign(char_type* strTo,
    size_t _Num,
    char_type _CharFrom);
```

### <a name="parameters"></a>Parametri

**_** *CharFrom* il carattere il cui valore deve essere assegnato.

*_CharTo* l'elemento che deve essere assegnato il valore del carattere.

* strTo * la matrice di stringhe o caratteri cui elementi iniziali devono essere assegnati i valori di carattere.

*_Num* il numero di elementi che verranno assegnati i valori.

### <a name="return-value"></a>Valore restituito

La seconda funzione membro restituisce un puntatore alla stringa il cui primo *_Num* elementi sono stati assegnati i valori di *charfrom*.

### <a name="example"></a>Esempio

```cpp
// char_traits_assign.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   // The first member function assigning
   // one character value to another character
   char ChTo = 't';
   const char ChFrom = 'f';
   cout << "The initial characters ( ChTo , ChFrom ) are: ( "
        << ChTo << " , " << ChFrom << " )." << endl;
   char_traits<char>::assign ( ChTo , ChFrom );
   cout << "After assigning, the characters ( ChTo , ChFrom ) are: ( "
        << ChTo << " , " << ChFrom << " )." << endl << endl;

   // The second member function assigning
   // character values to initial part of a string
   char_traits<char>::char_type s1[] = "abcd-1234-abcd";
   char_traits<char>::char_type* result1;
   cout << "The target string s1 is: " << s1 << endl;
   result1 = char_traits<char>::assign ( s1 , 4 , 'f' );
   cout << "The result1 = assign ( s1 , 4 , 'f' ) is: "
        << result1 << endl;
}
```

```Output
The initial characters ( ChTo , ChFrom ) are: ( t , f ).
After assigning, the characters ( ChTo , ChFrom ) are: ( f , f ).

The target string s1 is: abcd-1234-abcd
The result1 = assign ( s1 , 4 , 'f' ) is: ffff-1234-abcd
```

## <a name="char_type"></a>  char_traits::char_type

Tipo di carattere.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `CharType`.

### <a name="example"></a>Esempio

Vedere l'esempio di [copy](#copy) per informazioni su come dichiarare e usare `char_type`.

## <a name="compare"></a>  char_traits::compare

Confronta un numero specificato di caratteri in due stringhe.

```cpp
static int compare(const char_type* str1,
    const char_type* str2,
    size_t _Num);
```

### <a name="parameters"></a>Parametri

* str1 * il primo di due stringhe da confrontare tra loro.

* str2 * il secondo di due stringhe da confrontare tra loro.

*_Num* il numero di elementi nelle stringhe da confrontare.

### <a name="return-value"></a>Valore restituito

Un valore negativo se la prima stringa è minore della seconda stringa, 0 se le due stringhe sono uguali o un valore positivo se la prima stringa è maggiore della seconda stringa.

### <a name="remarks"></a>Note

Il confronto tra le stringhe viene eseguito elemento per elemento, testando prima l'uguaglianza, quindi, se in una coppia di elementi della sequenza risulta una disuguaglianza, vengono testate per stabilire qual è la minore.

Se due stringhe risultano uguali in un intervallo, ma una è più lunga dell'altra, la più corta delle due è minore di quella più lunga.

### <a name="example"></a>Esempio

```cpp
// char_traits_compare.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main() {
   using namespace std;

   char_traits<char>::char_type* s1 = "CAB";
   char_traits<char>::char_type* s2 = "ABC";
   char_traits<char>::char_type* s3 = "ABC";
   char_traits<char>::char_type* s4 = "ABCD";

   cout << "The string s1 is: " << s1 << endl;
   cout << "The string s2 is: " << s2 << endl;
   cout << "The string s3 is: " << s3 << endl;
   cout << "The string s4 is: " << s4 << endl;

   int comp1, comp2, comp3, comp4;
   comp1 = char_traits<char>::compare ( s1 , s2 , 2 );
   comp2 = char_traits<char>::compare ( s2 , s3 , 3 );
   comp3 = char_traits<char>::compare ( s3 , s4 , 4 );
   comp4 = char_traits<char>::compare ( s4 , s3 , 4 );
   cout << "compare ( s1 , s2 , 2 ) = " << comp1 << endl;
   cout << "compare ( s2 , s3 , 3 ) = " << comp2 << endl;
   cout << "compare ( s3 , s4 , 4 ) = " << comp3 << endl;
   cout << "compare ( s4 , s3 , 4 ) = " << comp4 << endl;
}
```

## <a name="copy"></a>  char_traits::copy

Copia un numero specificato di caratteri da una stringa a un'altra.

Questo metodo è potenzialmente non sicuro, poiché si basa sul chiamante per verificare che i valori passati siano corretti. È preferibile usare [char_traits::_Copy_s](#copy_s).

```cpp
static char_type *copy(char_type* _To,
    const char_type* _From,
    size_t _Num);
```

### <a name="parameters"></a>Parametri

*_To* l'elemento all'inizio della matrice di stringhe o caratteri di destinazione per ricevere la sequenza di caratteri copiata.

*FROM* l'elemento all'inizio della matrice di stringhe o caratteri di origine da copiare.

*_Num* il numero di elementi da copiare.

### <a name="return-value"></a>Valore restituito

Il primo elemento copiato nella matrice di stringhe o caratteri che deve ricevere la sequenza di caratteri copiata.

### <a name="remarks"></a>Note

Le sequenze di caratteri di origine e di destinazione non devono sovrapporsi.

### <a name="example"></a>Esempio

```cpp
// char_traits_copy.cpp
// compile with: /EHsc /W3
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   char_traits<char>::char_type s1[] = "abcd-1234-abcd";
   char_traits<char>::char_type s2[] = "ABCD-1234";
   char_traits<char>::char_type* result1;
   cout << "The source string is: " << s1 << endl;
   cout << "The destination string is: " << s2 << endl;
   // Note: char_traits::copy is potentially unsafe, consider
   // using char_traits::_Copy_s instead.
   result1 = char_traits<char>::copy ( s1 , s2 , 4 );  // C4996
   cout << "The result1 = copy ( s1 , s2 , 4 ) is: "
        << result1 << endl;
}
```

```Output
The source string is: abcd-1234-abcd
The destination string is: ABCD-1234
The result1 = copy ( s1 , s2 , 4 ) is: ABCD-1234-abcd
```

## <a name="copy_s"></a>  char_traits::_Copy_s

Copia un numero specificato di caratteri da una stringa a un'altra.

```cpp
static char_type *_Copy_s(
    char_type* dest,
    size_t dest_size,
    const char_type* _From,
    size_t count);
```

### <a name="parameters"></a>Parametri

*dest* la matrice di stringhe o caratteri di destinazione per ricevere la sequenza di caratteri copiata.

*dest_size* le dimensioni dei *dest*. Se `char_type` viene **char**, questa dimensione è espressa in byte. Se `char_type` viene **wchar_t**, questa dimensione è espressa in parole.

*FROM* matrice di stringhe o caratteri di origine da copiare.

*conteggio* il numero di elementi da copiare.

### <a name="return-value"></a>Valore restituito

La matrice di stringhe o caratteri che deve ricevere la sequenza di caratteri copiata.

### <a name="remarks"></a>Note

Le sequenze di caratteri di origine e di destinazione non devono sovrapporsi.

### <a name="example"></a>Esempio

```cpp
// char_traits__Copy_s.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
    using namespace std;

    char_traits<char>::char_type s1[] = "abcd-1234-abcd";
    char_traits<char>::char_type s2[] = "ABCD-1234";
    char_traits<char>::char_type* result1;
    cout << "The source string is: " << s1 << endl;
    cout << "The destination string is: " << s2 << endl;
    result1 = char_traits<char>::_Copy_s(s1,
        char_traits<char>::length(s1), s2, 4);
    cout << "The result1 = _Copy_s(s1, "
         << "char_traits<char>::length(s1), s2, 4) is: "
         << result1 << endl;
}
```

```Output
The source string is: abcd-1234-abcd
The destination string is: ABCD-1234
The result1 = _Copy_s(s1, char_traits<char>::length(s1), s2, 4) is: ABCD-1234-abcd
```

## <a name="eof"></a>  char_traits::eof

Restituisce il carattere EOF.

```cpp
static int_type eof();
```

### <a name="return-value"></a>Valore restituito

Il carattere EOF.

### <a name="remarks"></a>Note

Un valore che rappresenta di fine del file (ad esempio EOF o WEOF).

Lo standard C++ stabilisce che questo valore non deve corrispondere a un valore `char_type` valido. Il compilatore Visual C++ applica questo vincolo al tipo **char**, ma non per tipo **wchar_t**. Nell'esempio che segue viene illustrato quanto descritto.

### <a name="example"></a>Esempio

```cpp
// char_traits_eof.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main()
{
    using namespace std;

    char_traits<char>::char_type ch1 = 'x';
    char_traits<char>::int_type int1;
    int1 = char_traits<char>::to_int_type(ch1);
    cout << "char_type ch1 is '" << ch1 << "' and corresponds to int_type "
         << int1 << "." << endl << endl;

    char_traits<char>::int_type int2 = char_traits<char>::eof();
    cout << "The eof marker for char_traits<char> is: " << int2 << endl;

    char_traits<wchar_t>::int_type int3 = char_traits<wchar_t>::eof();
    cout << "The eof marker for char_traits<wchar_t> is: " << int3 << endl;
}
```

```Output
char_type ch1 is 'x' and corresponds to int_type 120.

The eof marker for char_traits<char> is: -1
The eof marker for char_traits<wchar_t> is: 65535
```

## <a name="eq"></a>  char_traits::eq

Verifica se due caratteri `char_type` sono uguali.

```cpp
static bool eq(const char_type& _Ch1, const char_type& _Ch2);
```

### <a name="parameters"></a>Parametri

*_Ch1* il primo di due caratteri in cui verificare l'uguaglianza.

*_Ch2* il secondo di due caratteri di cui verificare l'uguaglianza.

### <a name="return-value"></a>Valore restituito

**true** se il primo carattere è uguale al secondo carattere, in caso contrario **false**.

### <a name="example"></a>Esempio

```cpp
// char_traits_eq.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   char_traits<char>::char_type ch1 =  'x';
   char_traits<char>::char_type ch2 =  'y';
   char_traits<char>::char_type ch3 =  'x';

   // Testing for equality
   bool b1 = char_traits<char>::eq ( ch1 , ch2 );
   if ( b1 )
      cout << "The character ch1 is equal "
           << "to the character ch2." << endl;
   else
      cout << "The character ch1 is not equal "
           << "to the character ch2." << endl;

   // An equivalent and alternatively test procedure
   if ( ch1 == ch3 )
      cout << "The character ch1 is equal "
           << "to the character ch3." << endl;
   else
      cout << "The character ch1 is not equal "
           << "to the character ch3." << endl;
}
```

```Output
The character ch1 is not equal to the character ch2.
The character ch1 is equal to the character ch3.
```

## <a name="eq_int_type"></a>  char_traits::eq_int_type

Verifica se due caratteri rappresentati come `int_type` sono uguali.

```cpp
static bool eq_int_type(const int_type& _Ch1, const int_type& _Ch2);
```

### <a name="parameters"></a>Parametri

*_Ch1* il primo di due caratteri di cui verificare l'uguaglianza come `int_type`s.

*_Ch2* il secondo di due caratteri di cui verificare l'uguaglianza come `int_type`s.

### <a name="return-value"></a>Valore restituito

**true** se il primo carattere è uguale al secondo carattere, in caso contrario **false**.

### <a name="example"></a>Esempio

```cpp
// char_traits_eq_int_type.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   char_traits<char>::char_type ch1 =  'x';
   char_traits<char>::char_type ch2 =  'y';
   char_traits<char>::char_type ch3 =  'x';

   // Converting from char_type to int_type
   char_traits<char>::int_type int1, int2 , int3;
   int1 =char_traits<char>:: to_int_type ( ch1 );
   int2 =char_traits<char>:: to_int_type ( ch2 );
   int3 =char_traits<char>:: to_int_type ( ch3 );

   cout << "The char_types and corresponding int_types are:"
        << "\n    ch1 = " << ch1 << " corresponding to int1 = "
        << int1 << "."
        << "\n    ch2 = " << ch2 << " corresponding to int1 = "
        << int2 << "."
        << "\n    ch3 = " << ch3 << " corresponding to int1 = "
        << int3 << "." << endl << endl;

   // Testing for equality of int_type representations
   bool b1 = char_traits<char>::eq_int_type ( int1 , int2 );
   if ( b1 )
      cout << "The int_type representation of character ch1\n "
           << "is equal to the int_type representation of ch2."
           << endl;
   else
      cout << "The int_type representation of character ch1\n is "
           << "not equal to the int_type representation of ch2."
           << endl;

   // An equivalent and alternatively test procedure
   if ( int1 == int3 )
      cout << "The int_type representation of character ch1\n "
           << "is equal to the int_type representation of ch3."
           << endl;
   else
      cout << "The int_type representation of character ch1\n is "
           << "not equal to the int_type representation of ch3."
           << endl;
}
```

```Output
The char_types and corresponding int_types are:
    ch1 = x corresponding to int1 = 120.
    ch2 = y corresponding to int1 = 121.
    ch3 = x corresponding to int1 = 120.

The int_type representation of character ch1
 is not equal to the int_type representation of ch2.
The int_type representation of character ch1
 is equal to the int_type representation of ch3.
```

## <a name="find"></a>  char_traits::find

Cerca la prima occorrenza di un carattere specificato in un intervallo di caratteri.

```cpp
static const char_type* find(const char_type* str,
    size_t _Num,
    const char_type& _Ch);
```

### <a name="parameters"></a>Parametri

*str* il primo carattere nella stringa da cercare.

*_Num* il numero di posizioni, contando dalla prima, compreso nell'intervallo da cercare.

*CH* il carattere da ricercare nell'intervallo.

### <a name="return-value"></a>Valore restituito

Un puntatore alla prima occorrenza del carattere specificato nell'intervallo se viene trovata una corrispondenza. In caso contrario, un puntatore Null.

### <a name="example"></a>Esempio

```cpp
// char_traits_find.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   const char* s1 = "f2d-1234-abcd";
   const char* result1;
   cout << "The string to be searched is: " << s1 << endl;

   // Searching for a 'd' in the first 6 positions of string s1
   result1 = char_traits<char>::find ( s1 , 6 , 'd');
   cout << "The character searched for in s1 is: "
        << *result1 << endl;
   cout << "The string beginning with the first occurrence\n "
        << "of the character 'd' is: " << result1 << endl;

   // When no match is found the NULL value is returned
   const char* result2;
   result2 = char_traits<char>::find ( s1 , 3 , 'a');
   if ( result2 == NULL )
      cout << "The result2 of the search is NULL." << endl;
   else
      cout << "The result2 of the search  is: " << result1
           << endl;
}
```

```Output
The string to be searched is: f2d-1234-abcd
The character searched for in s1 is: d
The string beginning with the first occurrence
 of the character 'd' is: d-1234-abcd
The result2 of the search is NULL.
```

## <a name="int_type"></a>  char_traits::int_type

Un tipo Integer che può rappresentare un carattere di tipo `char_type` o un carattere EOF.

```cpp
typedef long int_type;
```

### <a name="remarks"></a>Note

Deve essere possibile digitare un valore di tipo cast `CharType` al `int_type` quindi di nuovo a `CharType` senza alterare il valore originale.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [eq_int_type](#eq_int_type) per informazioni su come dichiarare e usare `int_type`.

## <a name="length"></a>  char_traits::length

Restituisce la lunghezza di una stringa.

```cpp
static size_t length(const char_type* str);
```

### <a name="parameters"></a>Parametri

*str* stringa C la cui lunghezza viene misurata.

### <a name="return-value"></a>Valore restituito

Il numero di elementi della sequenza misurati, escluso il carattere di terminazione NULL.

### <a name="example"></a>Esempio

```cpp
// char_traits_length.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   const char* str1= "Hello";
   cout << "The C-string str1 is: " << str1 << endl;

   size_t lenStr1;
   lenStr1 = char_traits<char>::length ( str1 );
   cout << "The length of C-string str1 is: "
        << lenStr1 << "." << endl;
}
```

```Output
The C-string str1 is: Hello
The length of C-string str1 is: 5.
```

## <a name="lt"></a>  char_traits::lt

Verifica se un carattere è minore di un altro.

```cpp
static bool lt(const char_type& _Ch1, const char_type& _Ch2);
```

### <a name="parameters"></a>Parametri

*_Ch1* il primo di due caratteri di cui verificare la minore.

*_Ch2* secondo di due caratteri di cui verificare la minore.

### <a name="return-value"></a>Valore restituito

**true** se il primo carattere è minore del secondo carattere, in caso contrario **false**.

### <a name="example"></a>Esempio

```cpp
// char_traits_lt.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   char_traits<char>::char_type ch1 =  'x';
   char_traits<char>::char_type ch2 =  'y';
   char_traits<char>::char_type ch3 =  'z';

   // Testing for less than
   bool b1 = char_traits<char>::lt ( ch1 , ch2 );
   if ( b1 )
      cout << "The character ch1 is less than "
           << "the character ch2." << endl;
   else
      cout << "The character ch1 is not less "
           << "than the character ch2." << endl;

   // An equivalent and alternatively test procedure
   if ( ch3 <  ch2 )
      cout << "The character ch3 is less than "
           << "the character ch2." << endl;
   else
      cout << "The character ch3 is not less "
           << "than the character ch2." << endl;
}
```

```Output
The character ch1 is less than the character ch2.
The character ch3 is not less than the character ch2.
```

## <a name="move"></a>  char_traits::move

Copia un numero specificato di caratteri di una sequenza in un'altra sequenza che potrebbe sovrapporsi.

Questo metodo è potenzialmente pericoloso poiché si basa sul controllo dei valori passati effettuato dal chiamante. È preferibile usare [char_traits::_Move_s](#move_s).

```cpp
static char_type *move(char_type* _To,
    const char_type* _From,
    size_t _Num);
```

### <a name="parameters"></a>Parametri

*_To* l'elemento all'inizio della matrice di stringhe o caratteri di destinazione per ricevere la sequenza di caratteri copiata.

*FROM* l'elemento all'inizio della matrice di stringhe o caratteri di origine da copiare.

*_Num* il numero di elementi da copiare dalla stringa di origine.

### <a name="return-value"></a>Valore restituito

Il primo elemento *_To* copiato nella matrice di stringhe o caratteri di destinazione per ricevere la sequenza di caratteri copiata.

### <a name="remarks"></a>Note

L'origine e la destinazione possono sovrapporsi.

### <a name="example"></a>Esempio

```cpp
// char_traits_move.cpp
// compile with: /EHsc /W3
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   char_traits<char>::char_type sFrom1[] =  "abcd-1234-abcd";
   char_traits<char>::char_type sTo1[] =  "ABCD-1234";
   char_traits<char>::char_type* result1;
   cout << "The source string sFrom1 is: " << sFrom1 << endl;
   cout << "The destination stringsTo1 is: " << sTo1 << endl;
   // Note: char_traits::move is potentially unsafe, consider
   // using char_traits::_Move_s instead.
   result1 = char_traits<char>::move ( sTo1 ,  sFrom1 , 4 );  // C4996
   cout << "The result1 = move ( sTo1 , sFrom1 , 4 ) is: "
        << result1 << endl << endl;

   // When source and destination overlap
   char_traits<char>::char_type sToFrom2[] = "abcd-1234-ABCD";
   char_traits<char>::char_type* result2;
   cout << "The source/destination string sToFrom2 is: "
        << sToFrom2 << endl;
   const char* findc = char_traits<char>::find ( sToFrom2 , 4 , 'c' );
   // Note: char_traits::move is potentially unsafe, consider
   // using char_traits::_Move_s instead.
   result2 = char_traits<char>::move ( sToFrom2 , findc , 8 );  // C4996
   cout << "The result2 = move ( sToFrom2 , findc , 8 ) is: "
        << result2 << endl;
}
```

```Output
The source string sFrom1 is: abcd-1234-abcd
The destination stringsTo1 is: ABCD-1234
The result1 = move ( sTo1 , sFrom1 , 4 ) is: abcd-1234

The source/destination string sToFrom2 is: abcd-1234-ABCD
The result2 = move ( sToFrom2 , findc , 8 ) is: cd-1234-4-ABCD
```

## <a name="move_s"></a>  char_traits::_Move_s

Copia un numero specificato di caratteri di una sequenza in un'altra sequenza che potrebbe sovrapporsi.

```cpp
static char_type *_Move_s(
    char_type* dest,
    size_t dest_size,
    const char_type* _From,
    size_t count);
```

### <a name="parameters"></a>Parametri

*dest* l'elemento all'inizio della matrice di stringhe o caratteri di destinazione per ricevere la sequenza di caratteri copiata.

*dest_size* le dimensioni dei *dest*. Se `char_type` viene **char**, questo è espresso in byte. Se `char_type` viene **wchar_t**, questo è espresso in parole.

*FROM* l'elemento all'inizio della matrice di stringhe o caratteri di origine da copiare.

*conteggio* il numero di elementi da copiare dalla stringa di origine.

### <a name="return-value"></a>Valore restituito

Il primo elemento *dest* copiato nella matrice di stringhe o caratteri di destinazione per ricevere la sequenza di caratteri copiata.

### <a name="remarks"></a>Note

L'origine e la destinazione possono sovrapporsi.

### <a name="example"></a>Esempio

```cpp
// char_traits__Move_s.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
    using namespace std;

    char_traits<char>::char_type sFrom1[] =  "abcd-1234-abcd";
    char_traits<char>::char_type sTo1[] =  "ABCD-1234";
    char_traits<char>::char_type* result1;
    cout << "The source string sFrom1 is: " << sFrom1 << endl;
    cout << "The destination stringsTo1 is: " << sTo1 << endl;
    result1 = char_traits<char>::_Move_s(sTo1,
        char_traits<char>::length(sTo1), sFrom1, 4);
    cout << "The result1 = _Move_s(sTo1, "
         << "char_traits<char>::length(sTo1), sFrom1, 4) is: "
         << result1 << endl << endl;

    // When source and destination overlap
    char_traits<char>::char_type sToFrom2[] = "abcd-1234-ABCD";
    char_traits<char>::char_type* result2;
    cout << "The source/destination string sToFrom2 is: "
         << sToFrom2 << endl;
    const char* findc = char_traits<char>::find(sToFrom2, 4, 'c');
    result2 = char_traits<char>::_Move_s(sToFrom2,
        char_traits<char>::length(sToFrom2), findc, 8);
    cout << "The result2 = _Move_s(sToFrom2, "
        << "char_traits<char>::length(sToFrom2), findc, 8) is: "
         << result2 << endl;
}
```

```Output
The source string sFrom1 is: abcd-1234-abcd
The destination stringsTo1 is: ABCD-1234
The result1 = _Move_s(sTo1, char_traits<char>::length(sTo1), sFrom1, 4) is: abcd-1234

The source/destination string sToFrom2 is: abcd-1234-ABCD
The result2 = _Move_s(sToFrom2, char_traits<char>::length(sToFrom2), findc, 8) is: cd-1234-4-ABCD
```

## <a name="not_eof"></a>  char_traits::not_eof

Verifica se un carattere è il carattere EOF (fine del file) o non lo è.

```cpp
static int_type not_eof(const int_type& _Ch);
```

### <a name="parameters"></a>Parametri

*CH* il carattere rappresentato come un `int_type` in cui verificare se è il carattere EOF o meno.

### <a name="return-value"></a>Valore restituito

Il `int_type` rappresentazione del carattere testato, se il `int_type` del carattere non è uguale a quello del carattere EOF.

Se il valore `int_type` del carattere è uguale al valore `int_type` del carattere EOF, **false**.

### <a name="example"></a>Esempio

```cpp
// char_traits_not_eof.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( ) {
   using namespace std;

   char_traits<char>::char_type ch1 =  'x';
   char_traits<char>::int_type int1;
   int1 = char_traits<char>:: to_int_type ( ch1 );
   cout << "The char_type ch1 is " << ch1
        << " corresponding to int_type: "
        << int1 << "." << endl;

   // EOF member function
   char_traits <char>::int_type int2 = char_traits<char>::eof ( );
   cout << "The eofReturn is: " << int2 << endl;

   // Testing for EOF or another character
   char_traits <char>::int_type eofTest1, eofTest2;
   eofTest1 = char_traits<char>::not_eof ( int1 );
   if ( !eofTest1 )
      cout << "The eofTest1 indicates ch1 is an EOF character."
              << endl;
   else
      cout << "The eofTest1 returns: " << eofTest1
           << ", which is the character: "
           <<  char_traits<char>::to_char_type ( eofTest1 )
           << "." << endl;

   eofTest2 = char_traits<char>::not_eof ( int2 );
   if ( !eofTest2 )
      cout << "The eofTest2 indicates int2 is an EOF character."
           << endl;
   else
      cout << "The eofTest1 returns: " << eofTest2
           << ", which is the character: "
           <<  char_traits<char>::to_char_type ( eofTest2 )
           << "." << endl;
}
```

```Output
The char_type ch1 is x corresponding to int_type: 120.
The eofReturn is: -1
The eofTest1 returns: 120, which is the character: x.
The eofTest2 indicates int2 is an EOF character.
```

## <a name="off_type"></a>  char_traits::off_type

Un tipo Integer che può rappresentare offset tra posizioni in un flusso.

```cpp
typedef streamoff off_type;
```

### <a name="remarks"></a>Note

Il tipo è un intero con segno che descrive un oggetto in grado di archiviare un offset di byte interessato da varie operazioni di posizionamento del flusso. In genere è un sinonimo di [streamoff](../standard-library/ios-typedefs.md#streamoff) e ha essenzialmente le stesse proprietà di quel tipo.

## <a name="pos_type"></a>  char_traits::pos_type

Un tipo Integer che può rappresentare posizioni in un flusso.

```cpp
typedef streampos pos_type;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto in grado di archiviare tutte le informazioni necessarie per ripristinare un indicatore di posizione del file arbitrario all'interno di un flusso. In genere è un sinonimo di [streampos](../standard-library/ios-typedefs.md#streampos) e in ogni caso ha essenzialmente le stesse proprietà di quel tipo.

## <a name="state_type"></a>  char_traits::state_type

Tipo che rappresenta lo stato di conversione per i caratteri multibyte in un flusso.

```cpp
typedef implementation-defined state_type;
```

### <a name="remarks"></a>Note

Il tipo descrive un oggetto che può rappresentare uno stato di conversione. In genere è un sinonimo di `mbstate_t` e in ogni caso ha essenzialmente le stesse proprietà di quel tipo.

## <a name="to_char_type"></a>  char_traits::to_char_type

Converte un carattere `int_type` in quello `char_type` corrispondente e restituisce il risultato.

```cpp
static char_type to_char_type(const int_type& _Ch);
```

### <a name="parameters"></a>Parametri

*CH* il `int_type` carattere per essere rappresentato come un `char_type`.

### <a name="return-value"></a>Valore restituito

Il carattere `char_type` corrispondente al carattere `int_type`.

Un valore pari *CH* che non può essere rappresentato come tale produce un risultato non specificato.

### <a name="remarks"></a>Note

Le operazioni di conversione [to_int_type](#to_int_type) e `to_char_type` sono l'una l'inverso dell'altra, in modo che:

`to_int_type` ( `to_char_type` ( *x* ) ) == *x*

per qualsiasi `int_type` *x* e

`to_char_type` ( `to_int_type` ( *x* ) ) == *x*

per qualsiasi `char_type` *x*.

### <a name="example"></a>Esempio

```cpp
// char_traits_to_char_type.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;

   char_traits<char>::char_type ch1 =  'a';
   char_traits<char>::char_type ch2 =  'b';
   char_traits<char>::char_type ch3 =  'a';

   // Converting from char_type to int_type
   char_traits<char>::int_type int1, int2 , int3;
   int1 =char_traits<char>:: to_int_type ( ch1 );
   int2 =char_traits<char>:: to_int_type ( ch2 );
   int3 =char_traits<char>:: to_int_type ( ch3 );

   cout << "The char_types and corresponding int_types are:"
        << "\n    ch1 = " << ch1 << " corresponding to int1 = "
        << int1 << "."
        << "\n    ch2 = " << ch2 << " corresponding to int1 = "
        << int2 << "."
        << "\n    ch3 = " << ch3 << " corresponding to int1 = "
        << int3 << "." << endl << endl;

   // Converting from int_type back to char_type
   char_traits<char>::char_type rec_ch1;
   rec_ch1 = char_traits<char>:: to_char_type ( int1);
   char_traits<char>::char_type rec_ch2;
   rec_ch2 = char_traits<char>:: to_char_type ( int2);

   cout << "The recovered char_types and corresponding int_types are:"
        << "\n    recovered ch1 = " << rec_ch1 << " from int1 = "
        << int1 << "."
        << "\n    recovered ch2 = " << rec_ch2 << " from int2 = "
        << int2 << "." << endl << endl;

   // Testing that the conversions are inverse operations
   bool b1 = char_traits<char>::eq ( rec_ch1 , ch1 );
   if ( b1 )
      cout << "The recovered char_type of ch1"
           << " is equal to the original ch1." << endl;
   else
      cout << "The recovered char_type of ch1"
           << " is not equal to the original ch1." << endl;

   // An equivalent and alternatively test procedure
   if ( rec_ch2 == ch2 )
      cout << "The recovered char_type of ch2"
           << " is equal to the original ch2." << endl;
   else
      cout << "The recovered char_type of ch2"
           << " is not equal to the original ch2." << endl;
}
```

```Output
The char_types and corresponding int_types are:
    ch1 = a corresponding to int1 = 97.
    ch2 = b corresponding to int1 = 98.
    ch3 = a corresponding to int1 = 97.

The recovered char_types and corresponding int_types are:
    recovered ch1 = a from int1 = 97.
    recovered ch2 = b from int2 = 98.

The recovered char_type of ch1 is equal to the original ch1.
The recovered char_type of ch2 is equal to the original ch2.
```

## <a name="to_int_type"></a>  char_traits::to_int_type

Converte un carattere `char_type` in quello `int_type` corrispondente e restituisce il risultato.

```cpp
static int_type to_int_type(const char_type& _Ch);
```

### <a name="parameters"></a>Parametri

*CH* il `char_type` carattere per essere rappresentato come un `int_type`.

### <a name="return-value"></a>Valore restituito

Il carattere `int_type` corrispondente al carattere `char_type`.

### <a name="remarks"></a>Note

Le operazioni di conversione `to_int_type` e [to_char_type](#to_char_type) sono l'una l'inverso dell'altra, in modo che:

`to_int_type` ( `to_char_type` ( *x* ) ) == *x*

per qualsiasi `int_type` *x* e

`to_char_type` ( `to_int_type` ( *x* ) ) == *x*

per qualsiasi `char_type` *x*.

### <a name="example"></a>Esempio

```cpp
// char_traits_to_int_type.cpp
// compile with: /EHsc
#include <string>
#include <iostream>

int main( )
{
   using namespace std;
   char_traits<char>::char_type ch1 = 'a';
   char_traits<char>::char_type ch2 = 'b';
   char_traits<char>::char_type ch3 = 'a';

   // Converting from char_type to int_type
   char_traits<char>::int_type int1, int2 , int3;
   int1 =char_traits<char>:: to_int_type ( ch1 );
   int2 =char_traits<char>:: to_int_type ( ch2 );
   int3 =char_traits<char>:: to_int_type ( ch3 );

   cout << "The char_types and corresponding int_types are:"
        << "\n    ch1 = " << ch1 << " corresponding to int1 = "
        << int1 << "."
        << "\n    ch2 = " << ch2 << " corresponding to int1 = "
        << int2 << "."
        << "\n    ch3 = " << ch3 << " corresponding to int1 = "
        << int3 << "." << endl << endl;

   // Converting from int_type back to char_type
   char_traits<char>::char_type rec_ch1;
   rec_ch1 = char_traits<char>:: to_char_type ( int1);
   char_traits<char>::char_type rec_ch2;
   rec_ch2 = char_traits<char>:: to_char_type ( int2);

   cout << "The recovered char_types and corresponding int_types are:"
        << "\n    recovered ch1 = " << rec_ch1 << " from int1 = "
        << int1 << "."
        << "\n    recovered ch2 = " << rec_ch2 << " from int2 = "
        << int2 << "." << endl << endl;

   // Testing that the conversions are inverse operations
   bool b1 = char_traits<char>::eq ( rec_ch1 , ch1 );
   if ( b1 )
      cout << "The recovered char_type of ch1"
           << " is equal to the original ch1." << endl;
   else
      cout << "The recovered char_type of ch1"
           << " is not equal to the original ch1." << endl;

   // An equivalent and alternatively test procedure
   if ( rec_ch2 == ch2 )
      cout << "The recovered char_type of ch2"
           << " is equal to the original ch2." << endl;
   else
      cout << "The recovered char_type of ch2"
           << " is not equal to the original ch2." << endl;
}
```

```Output
The char_types and corresponding int_types are:
    ch1 = a corresponding to int1 = 97.
    ch2 = b corresponding to int1 = 98.
    ch3 = a corresponding to int1 = 97.

The recovered char_types and corresponding int_types are:
    recovered ch1 = a from int1 = 97.
    recovered ch2 = b from int2 = 98.

The recovered char_type of ch1 is equal to the original ch1.
The recovered char_type of ch2 is equal to the original ch2.
```

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
