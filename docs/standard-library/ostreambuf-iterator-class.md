---
title: Classe ostreambuf_iterator | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- streambuf/std::ostreambuf_iterator
- iterator/std::ostreambuf_iterator::char_type
- iterator/std::ostreambuf_iterator::ostream_type
- iterator/std::ostreambuf_iterator::streambuf_type
- iterator/std::ostreambuf_iterator::traits_type
- iterator/std::ostreambuf_iterator::failed
dev_langs:
- C++
helpviewer_keywords:
- std::ostreambuf_iterator [C++]
- std::ostreambuf_iterator [C++], char_type
- std::ostreambuf_iterator [C++], ostream_type
- std::ostreambuf_iterator [C++], streambuf_type
- std::ostreambuf_iterator [C++], traits_type
- std::ostreambuf_iterator [C++], failed
ms.assetid: dad1e624-2f45-4e94-8887-a885e95f9071
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6693fe0c4e34ce4749feef05bf0a1fe0213ac866
ms.sourcegitcommit: 7eadb968405bcb92ffa505e3ad8ac73483e59685
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/23/2018
ms.locfileid: "39207721"
---
# <a name="ostreambufiterator-class"></a>Classe ostreambuf_iterator

La classe modello ostreambuf_iterator descrive un oggetto iteratore di output che consente di scrivere gli elementi dei caratteri consecutivi nel flusso di output con l'estrazione **operator>>**. Gli oggetti `ostreambuf_iterator` differiscono da quelli della [classe ostream_iterator](../standard-library/ostream-iterator-class.md) per il fatto che hanno caratteri anziché un tipo generico in corrispondenza del tipo di oggetto inserito nel flusso di output.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType = char class Traits = char_traits <CharType>>
```

### <a name="parameters"></a>Parametri

*CharType* tipo che rappresenta il tipo di carattere per ostreambuf_iterator. Questo argomento è facoltativo e il valore predefinito è **char**.

*Tratti* tipo che rappresenta il tipo di carattere per ostreambuf_iterator. Questo argomento è facoltativo e il valore predefinito è `char_traits`\< *CharType>.*

## <a name="remarks"></a>Note

La classe ostreambuf_iterator deve soddisfare i requisiti per un iteratore di output. Gli algoritmi possono essere scritti direttamente nei flussi di output utilizzando un `ostreambuf_iterator`. La classe fornisce un iteratore del flusso di basso livello che consente l'accesso al flusso I/O non elaborato (non formattato) sotto forma di caratteri e la possibilità di ignorare le conversioni dei caratteri e del buffer associate agli iteratori del flusso di alto livello.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[ostreambuf_iterator](#ostreambuf_iterator_ostreambuf_iterator)|Costruisce un `ostreambuf_iterator` inizializzato per scrivere i caratteri nel flusso di output.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Tipo che fornisce il tipo di carattere di `ostreambuf_iterator`.|
|[ostream_type](#ostreambuf_iterator_ostream_type)|Tipo che fornisce il tipo di flusso di `ostream_iterator`.|
|[streambuf_type](#streambuf_type)|Tipo che fornisce il tipo di flusso di `ostreambuf_iterator`.|
|[traits_type](#traits_type)|Tipo che fornisce il tipo di tratti di `ostream_iterator`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[failed](#failed)|Verifica l'esito negativo di un inserimento nel buffer del flusso di output.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator*](#op_star)|Operatore di dereferenziazione usato per implementare l'espressione dell'iteratore di output \* `i`  =  `x`.|
|[operator++](#op_add_add)|Operatore di incremento non funzionale che restituisce `ostreambuf_iterator` allo stesso oggetto a cui ha puntato prima che venisse chiamata l'operazione.|
|[operator=](#op_eq)|L'operatore inserisce un carattere nel buffer del flusso associato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<iterator>

**Spazio dei nomi:** std

## <a name="char_type"></a>  ostreambuf_iterator::char_type

Tipo che fornisce il tipo di carattere di `ostreambuf_iterator`.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Note

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
\* Output:
The characters written to the output stream
 by charOutBuf are: OUT.
*\
```

## <a name="failed"></a>  ostreambuf_iterator::failed

Verifica l'esito negativo di un inserimento nel buffer del flusso di output.

```cpp
bool failed() const throw();
```

### <a name="return-value"></a>Valore restituito

**true** se in precedenza nessun inserimento nel buffer del flusso di output ha avuto esito negativo; in caso contrario, **false**.

### <a name="remarks"></a>Note

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
\* Output:
abc are characters output individually.
No insertions failed.
*\
```

## <a name="op_star"></a>  ostreambuf_iterator:: operator\*

Operatore di dereferenziazione non funzionale usato per implementare l'espressione dell'iteratore di output \* *i* = *x*.

```cpp
ostreambuf_iterator<CharType, Traits>& operator*();
```

### <a name="return-value"></a>Valore restituito

Oggetto iteratore ostreambuf.

### <a name="remarks"></a>Note

Questo operatore funziona solo nell'espressione dell'iteratore di output \* *i* = *x* per generare caratteri nel buffer del flusso. Applicato a un iteratore ostreambuf, restituisce l'iteratore; **\*iter** restituisce **iter**,

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
\* Output:
Elements written to output stream:
OUT
*\
```

## <a name="op_add_add"></a>  ostreambuf_iterator::operator++

Operatore di incremento non funzionale che restituisce un iteratore ostream allo stesso carattere a cui puntava prima che venisse chiamata l'operazione.

```cpp
ostreambuf_iterator<CharType, Traits>& operator++();
ostreambuf_iterator<CharType, Traits>& operator++(int);
```

### <a name="return-value"></a>Valore restituito

Riferimento al carattere a cui puntava originariamente o a un oggetto definito dall'implementazione, convertibile in `ostreambuf_iterator`\< **CharType**, **Traits**>.

### <a name="remarks"></a>Note

L'operatore viene usato per implementare l'espressione dell'iteratore di output \* *i* = *x*.

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
\* Output:
Elements written to output stream:
OUT
*\
```

## <a name="op_eq"></a>  ostreambuf_iterator::operator=

L'operatore inserisce un carattere nel buffer del flusso associato.

```cpp
ostreambuf_iterator<CharType, Traits>& operator=(CharType _Char);
```

### <a name="parameters"></a>Parametri

*_Char* il carattere da inserire nel buffer del flusso.

### <a name="return-value"></a>Valore restituito

Riferimento al carattere inserito nel buffer del flusso.

### <a name="remarks"></a>Note

Operatore di assegnazione usato per implementare l'espressione dell'iteratore di output \* *i* = *x* per la scrittura in un flusso di output.

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
\* Output:
Elements written to output stream:
OUT
*\
```

## <a name="ostreambuf_iterator_ostreambuf_iterator"></a>  ostreambuf_iterator::ostreambuf_iterator

Costruisce un `ostreambuf_iterator` inizializzato per scrivere i caratteri nel flusso di output.

```cpp
ostreambuf_iterator(streambuf_type* strbuf) throw();
ostreambuf_iterator(ostream_type& Ostr) throw();
```

### <a name="parameters"></a>Parametri

*strbuf* oggetto streambuf di output utilizzato per inizializzare il puntatore del buffer del flusso di output.

*Ostr* l'oggetto di flusso di output utilizzato per inizializzare il puntatore del buffer del flusso di output.

### <a name="remarks"></a>Note

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
\* Output:
OUT are characters output individually.
These characters are being written to the output stream.
*\
```

## <a name="ostreambuf_iterator_ostream_type"></a>  ostreambuf_iterator::ostream_type

Tipo che fornisce il tipo di flusso di `ostream_iterator`.

```cpp
typedef basicOstream<CharType, Traits> ostream_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo di `basicOstream`\< **CharType**, **Traits**>

### <a name="example"></a>Esempio

Vedere [ostreambuf_iterator](#ostreambuf_iterator_ostreambuf_iterator) per indicazioni su come dichiarare e usare `ostream_type`.

## <a name="streambuf_type"></a>  ostreambuf_iterator::streambuf_type

Tipo che fornisce il tipo di flusso di `ostreambuf_iterator`.

```cpp
typedef basic_streambuf<CharType, Traits> streambuf_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo `basic_streambuf` \< **CharType**, **Traits**>, una classe di flusso per i buffer dei / o che diventa `streambuf` quando è specializzata per il tipo di carattere **char**.

### <a name="example"></a>Esempio

Vedere [ostreambuf_iterator](#ostreambuf_iterator_ostreambuf_iterator) per indicazioni su come dichiarare e usare `streambuf_type`.

## <a name="traits_type"></a>  ostreambuf_iterator::traits_type

Tipo che fornisce il tipo di tratti di `ostream_iterator`.

```cpp
typedef Traits traits_type;
```

### <a name="remarks"></a>Note

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
\* Output:
The characters written to the output stream
 by charOutBuf are: OUT.
*\
```

## <a name="see-also"></a>Vedere anche

[\<iterator>](../standard-library/iterator.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)<br/>
