---
description: 'Altre informazioni su: istreambuf_iterator Class'
title: Classe istreambuf_iterator
ms.date: 11/04/2016
f1_keywords:
- streambuf/std::istreambuf_iterator
- iterator/std::istreambuf_iterator::char_type
- iterator/std::istreambuf_iterator::int_type
- iterator/std::istreambuf_iterator::istream_type
- iterator/std::istreambuf_iterator::streambuf_type
- iterator/std::istreambuf_iterator::traits_type
- iterator/std::istreambuf_iterator::equal
helpviewer_keywords:
- std::istreambuf_iterator [C++]
- std::istreambuf_iterator [C++], char_type
- std::istreambuf_iterator [C++], int_type
- std::istreambuf_iterator [C++], istream_type
- std::istreambuf_iterator [C++], streambuf_type
- std::istreambuf_iterator [C++], traits_type
- std::istreambuf_iterator [C++], equal
ms.assetid: 39002da2-61a6-48a5-9d0c-5df8271f6038
ms.openlocfilehash: 221141f5dd97be80b6f13b677f4ed253d75e1054
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97306729"
---
# <a name="istreambuf_iterator-class"></a>Classe istreambuf_iterator

Il modello di classe istreambuf_iterator descrive un oggetto iteratore di input che estrae gli elementi character da un buffer del flusso di input, a cui accede tramite un oggetto archiviato di tipo pointer a `basic_streambuf` \< **CharType**, **Traits**> .

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType class Traits = char_traits <CharType>>
class istreambuf_iterator
: public iterator<input_iterator_tag, CharType, typename Traits ::off_type, CharType*, CharType&>
```

### <a name="parameters"></a>Parametri

*CharType*\
Tipo che rappresenta il tipo di carattere per istreambuf_iterator.

*Tratti*\
Tipo che rappresenta il tipo di carattere per istreambuf_iterator. Questo argomento è facoltativo e il valore predefinito è `char_traits` \< *CharType> . *

## <a name="remarks"></a>Commenti

La classe istreambuf_iterator deve soddisfare i requisiti per un iteratore di input.

Dopo la costruzione o l'incremento di un oggetto della classe istreambuf_iterator con un puntatore archiviato diverso da Null, l'oggetto prova a estrarre e ad archiviare un oggetto di tipo *CharType* dal flusso di input associato. L'estrazione può essere tuttavia ritardata fino a quando l'oggetto non viene dereferenziato o copiato. Se l'estrazione ha esito negativo, l'oggetto sostituisce il puntatore archiviato con un puntatore Null, creando così un indicatore di fine della sequenza.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[istreambuf_iterator](#istreambuf_iterator)|Costruisce un `istreambuf_iterator` inizializzato per leggere i caratteri dal flusso di input.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[char_type](#char_type)|Tipo che fornisce il tipo di carattere di `ostreambuf_iterator`.|
|[int_type](#int_type)|Tipo che fornisce un tipo Integer per `istreambuf_iterator`.|
|[istream_type](#istream_type)|Tipo che fornisce il tipo di flusso di `istream_iterator`.|
|[streambuf_type](#streambuf_type)|Tipo che fornisce il tipo di flusso di `istreambuf_iterator`.|
|[traits_type](../standard-library/istream-iterator-class.md#traits_type)|Tipo che fornisce il tipo di tratti di `istream_iterator`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[uguale](#equal)|Test per verificare l'uguaglianza tra due iteratori del buffer del flusso di input.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore](#op_star)|L'operatore di dereferenziazione restituisce il carattere successivo del flusso.|
|[operatore + +](#op_add_add)|Restituisce il carattere successivo del flusso di input oppure copia l'oggetto prima di incrementarlo e restituisce la copia.|
|[operatore->](#op_arrow)|Restituisce il valore di un numero, se presente.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<iterator>

**Spazio dei nomi:** std

## <a name="istreambuf_iteratorchar_type"></a><a name="char_type"></a> istreambuf_iterator:: char_type

Tipo che fornisce il tipo di carattere di `ostreambuf_iterator`.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello *CharType*.

### <a name="example"></a>Esempio

```cpp
// istreambuf_iterator_char_type.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>

int main( )
{
   using namespace std;

   typedef istreambuf_iterator<char>::char_type CHT1;
   typedef istreambuf_iterator<char>::traits_type CHTR1;

   cout << "(Try the example: 'So many dots to be done'\n"
        << " then an Enter key to insert into the output,\n"
        << " & use a ctrl-Z Enter key combination to exit): ";

   // istreambuf_iterator for input stream
   istreambuf_iterator< CHT1, CHTR1> charInBuf ( cin );
   ostreambuf_iterator<char> charOut ( cout );

   // Used in conjunction with replace_copy algorithm
   // to insert into output stream and replace spaces
   // with dot-separators
   replace_copy ( charInBuf , istreambuf_iterator<char>( ),
        charOut , ' ' , '.' );
}
```

## <a name="istreambuf_iteratorequal"></a><a name="equal"></a> istreambuf_iterator:: EQUAL

Test per verificare l'equivalenza tra due iteratori del buffer del flusso di input.

```cpp
bool equal(const istreambuf_iterator<CharType, Traits>& right) const;
```

### <a name="parameters"></a>Parametri

*Ok*\
Iteratore per cui verificare l'equivalenza.

### <a name="return-value"></a>Valore restituito

**`true`** Se entrambi `istreambuf_iterator` i sono iteratori di fine flusso o se nessuno dei due è un iteratore di fine flusso; in caso contrario, **`false`** .

### <a name="remarks"></a>Commenti

Un intervallo viene definito dall'oggetto `istreambuf_iterator` alla posizione corrente e all'iteratore di fine flusso, ma poiché tutti gli iteratori non di fine flusso sono equivalenti nella `equal` funzione membro, non è possibile definire intervalli secondari utilizzando `istreambuf_iterator` s. Gli operatori `==` e `!=` hanno la stessa semantica.

### <a name="example"></a>Esempio

```cpp
// istreambuf_iterator_equal.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

int main( )
{
   using namespace std;

   cout << "(Try the example: 'Hello world!'\n"
        << " then an Enter key to insert into the output,\n"
        << " & use a ctrl-Z Enter key combination to exit): ";

   istreambuf_iterator<char> charReadIn1 ( cin );
   istreambuf_iterator<char> charReadIn2 ( cin );

   bool b1 = charReadIn1.equal ( charReadIn2 );

   if (b1)
      cout << "The iterators are equal." << endl;
   else
      cout << "The iterators are not equal." << endl;
}
```

## <a name="istreambuf_iteratorint_type"></a><a name="int_type"></a> istreambuf_iterator:: int_type

Tipo che fornisce un tipo Integer per `istreambuf_iterator`.

```cpp
typedef typename traits_type::int_type int_type;
```

### <a name="remarks"></a>Commenti

Il tipo è sinonimo di `Traits::int_type`.

### <a name="example"></a>Esempio

```cpp
// istreambuf_iterator_int_type.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

int main( )
{
   using namespace std;
   istreambuf_iterator<char>::int_type inttype1 = 100;
   cout << "The inttype1 = " << inttype1 << "." << endl;
}
/* Output:
The inttype1 = 100.
*/
```

## <a name="istreambuf_iteratoristream_type"></a><a name="istream_type"></a> istreambuf_iterator:: istream_type

Tipo che fornisce il tipo di flusso di `istreambuf_iterator`.

```cpp
typedef basic_istream<CharType, Traits> istream_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo di `basic_istream` \< **CharType**, **Traits**> .

### <a name="example"></a>Esempio

Vedere [istreambuf_iterator](#istreambuf_iterator) per un esempio di come dichiarare e usare `istream_type`.

## <a name="istreambuf_iteratoristreambuf_iterator"></a><a name="istreambuf_iterator"></a> istreambuf_iterator:: istreambuf_iterator

Costruisce un oggetto istreambuf_iterator inizializzato per la lettura di caratteri dal flusso di input.

```cpp
istreambuf_iterator(streambuf_type* strbuf = 0) throw();
istreambuf_iterator(istream_type& _Istr) throw();
```

### <a name="parameters"></a>Parametri

*Strbuf*\
Buffer del flusso di input a cui viene collegato l'oggetto `istreambuf_iterator`.

*_Istr*\
Flusso di input a cui viene collegato l'oggetto `istreambuf_iterator`.

### <a name="remarks"></a>Commenti

Il primo costruttore inizializza il puntatore del buffer del flusso di input con *Strbuf*. Il secondo costruttore inizializza il puntatore del buffer del flusso di input con *_Istr*. `rdbuf`e, infine, tenta di estrarre e archiviare un oggetto di tipo `CharType` .

### <a name="example"></a>Esempio

```cpp
// istreambuf_iterator_istreambuf_iterator.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <algorithm>
#include <iostream>

int main( )
{
   using namespace std;

   // Following declarations will not compile:
   istreambuf_iterator<char>::istream_type &istrm = cin;
   istreambuf_iterator<char>::streambuf_type *strmbf = cin.rdbuf( );

   cout << "(Try the example: 'Oh what a world!'\n"
      << " then an Enter key to insert into the output,\n"
      << " & use a ctrl-Z Enter key combination to exit): ";
   istreambuf_iterator<char> charReadIn ( cin );
   ostreambuf_iterator<char> charOut ( cout );

   // Used in conjunction with replace_copy algorithm
   // to insert into output stream and replace spaces
   // with hyphen-separators
   replace_copy ( charReadIn , istreambuf_iterator<char>( ),
      charOut , ' ' , '-' );
}
```

## <a name="istreambuf_iteratoroperator"></a><a name="op_star"></a> istreambuf_iterator:: operator *

L'operatore di dereferenziazione restituisce il carattere successivo del flusso.

```cpp
CharType operator*() const;
```

### <a name="return-value"></a>Valore restituito

Carattere successivo nel flusso.

### <a name="example"></a>Esempio

```cpp
// istreambuf_iterator_operator_deref.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

int main( )
{
   using namespace std;

   cout << "Type string of characters & enter to output it,\n"
      << " with stream buffer iterators,(try: 'I'll be back.')\n"
      << " repeat as many times as desired,\n"
      << " then keystroke ctrl-Z Enter to exit program: ";
   istreambuf_iterator<char> inpos ( cin );
   istreambuf_iterator<char> endpos;
   ostreambuf_iterator<char> outpos ( cout );
   while ( inpos != endpos )
   {
*outpos = *inpos;   //Put value of outpos equal to inpos
      ++inpos;
      ++outpos;
   }
}
```

## <a name="istreambuf_iteratoroperator"></a><a name="op_add_add"></a> istreambuf_iterator:: operator + +

Restituisce il carattere successivo del flusso di input oppure copia l'oggetto prima di incrementarlo e restituisce la copia.

```cpp
istreambuf_iterator<CharType, Traits>& operator++();
istreambuf_iterator<CharType, Traits> operator++(int);
```

### <a name="return-value"></a>Valore restituito

Oggetto `istreambuf_iterator` o riferimento a un oggetto `istreambuf_iterator`.

### <a name="remarks"></a>Commenti

Il primo operatore tenta infine di estrarre e archiviare un oggetto di tipo `CharType` dal flusso di input associato. Il secondo operatore esegue una copia dell'oggetto, incrementa l'oggetto, quindi restituisce la copia.

### <a name="example"></a>Esempio

```cpp
// istreambuf_iterator_operator_incr.cpp
// compile with: /EHsc
#include <iterator>
#include <iostream>

int main( )
{
   using namespace std;

   cout << "Type string of characters & enter to output it,\n"
      << " with stream buffer iterators,(try: 'I'll be back.')\n"
      << " repeat as many times as desired,\n"
      << " then keystroke ctrl-Z Enter to exit program: ";
   istreambuf_iterator<char> inpos ( cin );
   istreambuf_iterator<char> endpos;
   ostreambuf_iterator<char> outpos ( cout );
   while ( inpos != endpos )
   {
*outpos = *inpos;
      ++inpos;   //Increment istreambuf_iterator
      ++outpos;
   }
}
```

## <a name="istreambuf_iteratoroperator-gt"></a><a name="op_arrow"></a> istreambuf_iterator:: operator-&gt;

Restituisce il valore di un numero, se presente.

```cpp
const Elem* operator->() const;
```

### <a name="return-value"></a>Valore restituito

L'operatore restituisce **& \* \* this**.

## <a name="istreambuf_iteratorstreambuf_type"></a><a name="streambuf_type"></a> istreambuf_iterator:: streambuf_type

Tipo che fornisce il tipo di flusso dell'oggetto istreambuf_iterator.

```cpp
typedef basic_streambuf<CharType, Traits> streambuf_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo di `basic_streambuf` \< **CharType**, **Traits**> .

### <a name="example"></a>Esempio

Vedere [istreambuf_iterator](#istreambuf_iterator) per un esempio di come dichiarare e usare `istreambuf_type`.

## <a name="istreambuf_iteratortraits_type"></a><a name="traits_type"></a> istreambuf_iterator:: traits_type

Tipo che fornisce il tipo di tratti di `istream_iterator`.

```cpp
typedef Traits traits_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello *Traits*.

### <a name="example"></a>Esempio

```cpp
// istreambuf_iterator_traits_type.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>

int main( )
{
   using namespace std;

   typedef istreambuf_iterator<char>::char_type CHT1;
   typedef istreambuf_iterator<char>::traits_type CHTR1;

   cout << "(Try the example: 'So many dots to be done'\n"
        << " then an Enter key to insert into the output,\n"
        << " & use a ctrl-Z Enter key combination to exit): ";

   // istreambuf_iterator for input stream
   istreambuf_iterator< CHT1, CHTR1> charInBuf ( cin );
   ostreambuf_iterator<char> charOut ( cout );

   // Used in conjunction with replace_copy algorithm
   // to insert into output stream and replace spaces
   // with dot-separators
   replace_copy ( charInBuf , istreambuf_iterator<char>( ),
        charOut , ' ' , '.' );
}
```

## <a name="see-also"></a>Vedere anche

[Struct iterator](../standard-library/iterator-struct.md)\
[\<iterator>](../standard-library/iterator.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
