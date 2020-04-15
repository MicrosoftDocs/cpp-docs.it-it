---
title: Classe ostreambuf_iterator
ms.date: 11/04/2016
f1_keywords:
- streambuf/std::ostreambuf_iterator
- iterator/std::ostreambuf_iterator::char_type
- iterator/std::ostreambuf_iterator::ostream_type
- iterator/std::ostreambuf_iterator::streambuf_type
- iterator/std::ostreambuf_iterator::traits_type
- iterator/std::ostreambuf_iterator::failed
helpviewer_keywords:
- std::ostreambuf_iterator [C++]
- std::ostreambuf_iterator [C++], char_type
- std::ostreambuf_iterator [C++], ostream_type
- std::ostreambuf_iterator [C++], streambuf_type
- std::ostreambuf_iterator [C++], traits_type
- std::ostreambuf_iterator [C++], failed
ms.assetid: dad1e624-2f45-4e94-8887-a885e95f9071
ms.openlocfilehash: 8e9fa10888b511ad2a500f64faf610dc7dd5ba03
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373572"
---
# <a name="ostreambuf_iterator-class"></a>Classe ostreambuf_iterator

Il modello di classe ostreambuf_iterator descrive un oggetto iteratore di output che scrive elementi carattere successivi nel flusso di output con **l'operatore **di estrazione>>. Gli oggetti `ostreambuf_iterator` differiscono da quelli della [classe ostream_iterator](../standard-library/ostream-iterator-class.md) per il fatto che hanno caratteri anziché un tipo generico in corrispondenza del tipo di oggetto inserito nel flusso di output.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType = char class Traits = char_traits <CharType>>
```

### <a name="parameters"></a>Parametri

*Chartype*\
Tipo che rappresenta il tipo di carattere per ostreambuf_iterator. Questo argomento è facoltativo e il valore predefinito è **char**.

*Tratti*\
Tipo che rappresenta il tipo di carattere per ostreambuf_iterator. Questo argomento è facoltativo e il valore predefinito è `char_traits`\< *CharType>.*

## <a name="remarks"></a>Osservazioni

La classe ostreambuf_iterator deve soddisfare i requisiti per un iteratore di output. Gli algoritmi possono essere scritti direttamente nei flussi di output utilizzando un `ostreambuf_iterator`. La classe fornisce un iteratore del flusso di basso livello che consente l'accesso al flusso I/O non elaborato (non formattato) sotto forma di caratteri e la possibilità di ignorare le conversioni dei caratteri e del buffer associate agli iteratori del flusso di alto livello.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[ostreambuf_iterator](#ostreambuf_iterator_ostreambuf_iterator)|Costruisce un `ostreambuf_iterator` inizializzato per scrivere i caratteri nel flusso di output.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Tipo che fornisce il tipo di carattere di `ostreambuf_iterator`.|
|[ostream_type](#ostreambuf_iterator_ostream_type)|Tipo che fornisce il tipo di flusso di `ostream_iterator`.|
|[streambuf_type](#streambuf_type)|Tipo che fornisce il tipo di flusso di `ostreambuf_iterator`.|
|[traits_type](#traits_type)|Tipo che fornisce il tipo di tratti di `ostream_iterator`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[Fallito](#failed)|Verifica l'esito negativo di un inserimento nel buffer del flusso di output.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore](#op_star)|Operatore di dereferezione utilizzato \* `i`  =  `x`per implementare l'espressione iteratore di output.|
|[operatore .](#op_add_add)|Operatore di incremento non funzionale che restituisce `ostreambuf_iterator` allo stesso oggetto a cui ha puntato prima che venisse chiamata l'operazione.|
|[operatore di comando](#op_eq)|L'operatore inserisce un carattere nel buffer del flusso associato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="ostreambuf_iteratorchar_type"></a><a name="char_type"></a>ostreambuf_iterator::char_type

Tipo che fornisce il tipo di carattere di `ostreambuf_iterator`.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `CharType`.

### <a name="example"></a>Esempio

```cpp
// ostreambuf_iterator_char_type.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   typedef ostreambuf_iterator<char>::char_type CHT1;
   typedef ostreambuf_iterator<char>::traits_type CHTR1;

   // ostreambuf_iterator for stream cout
   // with new line delimiter:
    ostreambuf_iterator< CHT1, CHTR1> charOutBuf ( cout );

   // Standard iterator interface for writing
   // elements to the output streambuf:
   cout << "The characters written to the output stream\n"
        << " by charOutBuf are: ";
*charOutBuf = 'O';
   charOutBuf++;
*charOutBuf = 'U';
   charOutBuf++;
*charOutBuf = 'T';
   charOutBuf++;
   cout << "." << endl;
}
/* Output:
The characters written to the output stream
by charOutBuf are: OUT.
*/
```

## <a name="ostreambuf_iteratorfailed"></a><a name="failed"></a>ostreambuf_iterator:: non riuscito

Verifica l'esito negativo di un inserimento nel buffer del flusso di output.

```cpp
bool failed() const throw();
```

### <a name="return-value"></a>Valore restituito

**true** se in precedenza nessun inserimento nel buffer del flusso di output ha avuto esito negativo; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce **true** se, in qualsiasi uso precedente del membro `operator=`, la chiamata a **subf**_-> `sputc` ha restituito **eof**.

### <a name="example"></a>Esempio

```cpp
// ostreambuf_iterator_failed.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // ostreambuf_iterator for stream cout
   ostreambuf_iterator<char> charOut ( cout );

*charOut = 'a';
   charOut ++;
*charOut  = 'b';
   charOut ++;
*charOut = 'c';
   cout << " are characters output individually." << endl;

   bool b1 = charOut.failed ( );
   if (b1)
       cout << "At least one insertion failed." << endl;
   else
       cout << "No insertions failed." << endl;
}
/* Output:
abc are characters output individually.
No insertions failed.
*/
```

## <a name="ostreambuf_iteratoroperator"></a><a name="op_star"></a>ostreambuf_iterator::operatore\*

Operatore di dereferenza non funzionale utilizzato \* per implementare l'espressione dell'iteratore *di* = output i*x*.

```cpp
ostreambuf_iterator<CharType, Traits>& operator*();
```

### <a name="return-value"></a>Valore restituito

Oggetto iteratore ostreambuf.

### <a name="remarks"></a>Osservazioni

Questo operatore funziona solo \* nell'espressione dell'iteratore *di* = output i*x* ai caratteri di output nel buffer del flusso. Applicato a un iteratore ostreambuf, restituisce l'iteratore; iter restituisce **iter**, ** \***

### <a name="example"></a>Esempio

```cpp
// ostreambuf_iterator_op_deref.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // ostreambuf_iterator for stream cout
   // with new line delimiter
   ostreambuf_iterator<char> charOutBuf ( cout );

   // Standard iterator interface for writing
   // elements to the output stream
   cout << "Elements written to output stream:" << endl;
*charOutBuf = 'O';
   charOutBuf++;   // no effect on iterator position
*charOutBuf = 'U';
*charOutBuf = 'T';
}
/* Output:
Elements written to output stream:
OUT
*/
```

## <a name="ostreambuf_iteratoroperator"></a><a name="op_add_add"></a>ostreambuf_iterator::operatore

Operatore di incremento non funzionale che restituisce un iteratore ostream allo stesso carattere a cui puntava prima che venisse chiamata l'operazione.

```cpp
ostreambuf_iterator<CharType, Traits>& operator++();
ostreambuf_iterator<CharType, Traits>& operator++(int);
```

### <a name="return-value"></a>Valore restituito

Riferimento al carattere a cui puntava originariamente o a un oggetto definito dall'implementazione, convertibile in `ostreambuf_iterator`\< **CharType**, **Traits**>.

### <a name="remarks"></a>Osservazioni

L'operatore viene utilizzato per \* implementare l'espressione iteratore *di* = output i*x*.

### <a name="example"></a>Esempio

```cpp
// ostreambuf_iterator_op_incr.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // ostreambuf_iterator for stream cout
   // with new line delimiter
   ostreambuf_iterator<char> charOutBuf ( cout );

   // Standard iterator interface for writing
   // elements to the output stream
   cout << "Elements written to output stream:" << endl;
*charOutBuf = 'O';
   charOutBuf++;      // No effect on iterator position
*charOutBuf = 'U';
*charOutBuf = 'T';
}
/* Output:
Elements written to output stream:
OUT
*/
```

## <a name="ostreambuf_iteratoroperator"></a><a name="op_eq"></a>ostreambuf_iterator::operatore

L'operatore inserisce un carattere nel buffer del flusso associato.

```cpp
ostreambuf_iterator<CharType, Traits>& operator=(CharType _Char);
```

### <a name="parameters"></a>Parametri

*_Char*\
Carattere da inserire nel buffer del flusso.

### <a name="return-value"></a>Valore restituito

Riferimento al carattere inserito nel buffer del flusso.

### <a name="remarks"></a>Osservazioni

Operatore di assegnazione utilizzato \* per implementare l'espressione dell'iteratore *di* = output i*x* per la scrittura in un flusso di output.

### <a name="example"></a>Esempio

```cpp
// ostreambuf_iterator_op_assign.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // ostreambuf_iterator for stream cout
   // with new line delimiter
   ostreambuf_iterator<char> charOutBuf ( cout );

   // Standard iterator interface for writing
   // elements to the output stream
   cout << "Elements written to output stream:" << endl;
*charOutBuf = 'O';
   charOutBuf++;      // No effect on iterator position
*charOutBuf = 'U';
*charOutBuf = 'T';
}
/* Output:
Elements written to output stream:
OUT
*/
```

## <a name="ostreambuf_iteratorostreambuf_iterator"></a><a name="ostreambuf_iterator_ostreambuf_iterator"></a>ostreambuf_iterator::ostreambuf_iterator

Costruisce un `ostreambuf_iterator` inizializzato per scrivere i caratteri nel flusso di output.

```cpp
ostreambuf_iterator(streambuf_type* strbuf) throw();
ostreambuf_iterator(ostream_type& Ostr) throw();
```

### <a name="parameters"></a>Parametri

*strbuf*\
Oggetto streambuf di output usato per inizializzare il puntatore del buffer del flusso di output.

*Ostr*\
Oggetto del flusso di output usato per inizializzare il puntatore del buffer del flusso di output.

### <a name="remarks"></a>Osservazioni

Il primo costruttore inizializza il puntatore del buffer del flusso di output con *strbuf*.

Il secondo costruttore inizializza il puntatore del buffer del flusso di output con `Ostr`. `rdbuf`. Il puntatore archiviato non deve essere un puntatore null.

### <a name="example"></a>Esempio

```cpp
// ostreambuf_iteratorOstreambuf_iterator.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   // ostreambuf_iterator for stream cout
   ostreambuf_iterator<char> charOut ( cout );

*charOut = 'O';
   charOut ++;
*charOut  = 'U';
   charOut ++;
*charOut = 'T';
   cout << " are characters output individually." << endl;

   ostreambuf_iterator<char> strOut ( cout );
   string str = "These characters are being written to the output stream.\n ";
   copy ( str.begin ( ), str. end ( ), strOut );
}
/* Output:
OUT are characters output individually.
These characters are being written to the output stream.
*/
```

## <a name="ostreambuf_iteratorostream_type"></a><a name="ostreambuf_iterator_ostream_type"></a>ostreambuf_iterator::ostream_type

Tipo che fornisce il tipo di flusso di `ostream_iterator`.

```cpp
typedef basicOstream<CharType, Traits> ostream_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo `basicOstream` \< di **CharType**, **Traits**>

### <a name="example"></a>Esempio

Vedere [ostreambuf_iterator](#ostreambuf_iterator_ostreambuf_iterator) per indicazioni su come dichiarare e usare `ostream_type`.

## <a name="ostreambuf_iteratorstreambuf_type"></a><a name="streambuf_type"></a>ostreambuf_iterator::streambuf_type

Tipo che fornisce il tipo di flusso di `ostreambuf_iterator`.

```cpp
typedef basic_streambuf<CharType, Traits> streambuf_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo `basic_streambuf` \< di **CharType**, **Traits**>, una classe di `streambuf` flusso per i buffer di I/O che diventa specializzata nel tipo di carattere **char**.

### <a name="example"></a>Esempio

Vedere [ostreambuf_iterator](#ostreambuf_iterator_ostreambuf_iterator) per indicazioni su come dichiarare e usare `streambuf_type`.

## <a name="ostreambuf_iteratortraits_type"></a><a name="traits_type"></a>ostreambuf_iterator::traits_type

Tipo che fornisce il tipo di tratti di `ostream_iterator`.

```cpp
typedef Traits traits_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `Traits`.

### <a name="example"></a>Esempio

```cpp
// ostreambuf_iterator_traits_type.cpp
// compile with: /EHsc
#include <iterator>
#include <vector>
#include <iostream>

int main( )
{
   using namespace std;

   typedef ostreambuf_iterator<char>::char_type CHT1;
   typedef ostreambuf_iterator<char>::traits_type CHTR1;

   // ostreambuf_iterator for stream cout
   // with new line delimiter:
    ostreambuf_iterator< CHT1, CHTR1> charOutBuf ( cout );

   // Standard iterator interface for writing
   // elements to the output streambuf:
   cout << "The characters written to the output stream\n"
        << " by charOutBuf are: ";
*charOutBuf = 'O';
   charOutBuf++;
*charOutBuf = 'U';
   charOutBuf++;
*charOutBuf = 'T';
   charOutBuf++;
   cout << "." << endl;
}
/* Output:
The characters written to the output stream
by charOutBuf are: OUT.
*/
```

## <a name="see-also"></a>Vedere anche

[\<>iteratore](../standard-library/iterator.md)\
[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per librerie standard di C](../standard-library/cpp-standard-library-reference.md)
