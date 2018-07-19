---
title: Classe basic_ostream | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- ostream/std::basic_ostream
- ostream/std::basic_ostream::flush
- ostream/std::basic_ostream::put
- ostream/std::basic_ostream::seekp
- ostream/std::basic_ostream::sentry
- ostream/std::basic_ostream::swap
- ostream/std::basic_ostream::tellp
- ostream/std::basic_ostream::write
dev_langs:
- C++
helpviewer_keywords:
- std::basic_ostream [C++]
- std::basic_ostream [C++], flush
- std::basic_ostream [C++], put
- std::basic_ostream [C++], seekp
- std::basic_ostream [C++], sentry
- std::basic_ostream [C++], swap
- std::basic_ostream [C++], tellp
- std::basic_ostream [C++], write
ms.assetid: 5baadc65-b662-4fab-8c9f-94457c58cda1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: be74641b229fbf888504df72a97f8a5c025d9b7b
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38963716"
---
# <a name="basicostream-class"></a>Classe basic_ostream

Questa classe modello descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso con elementi di tipo `Elem`, noto anche come [char_type](../standard-library/basic-ios-class.md#char_type), cui tratti di carattere sono determinati dalla classe `Tr`, noto anche come [traits_type](../standard-library/basic-ios-class.md#traits_type).

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_ostream : virtual public basic_ios<Elem, Tr>
```

### <a name="parameters"></a>Parametri

*Elem* oggetto `char_type`.

*TR* carattere `traits_type`.

## <a name="remarks"></a>Note

La maggior parte delle funzioni membro che sono in rapporto di overload con [operator<<](#op_lt_lt) è costituita da funzioni di output formattato. Le funzioni seguono questo schema:

```cpp
iostate state = goodbit;
const sentry ok(*this);

if (ok)
 {try
 {<convert and insert elements
    accumulate flags in state> }
    catch (...)
 {try
 {setstate(badbit);

}
    catch (...)
 {}
    if ((exceptions()& badbit) != 0)
    throw; }}
width(0);
// Except for operator<<(Elem)
setstate(state);

return (*this);
```

Due altre funzioni membro sono funzioni di output formattate. Le funzioni seguono questo schema:

```cpp
iostate state = goodbit;
const sentry ok(*this);

if (!ok)
    state |= badbit;
else
 {try
 {<obtain and insert elements
    accumulate flags in state> }
    catch (...)
 {try
 {setstate(badbit);

}
    catch (...)
 {}
    if ((exceptions()& badbit) != 0)
    throw; }}
setstate(state);

return (*this);
```

Entrambi i gruppi di funzioni chiamano [setstate](../standard-library/basic-ios-class.md#setstate)(**badbit**) se riscontrano un errore durante l'inserimento di elementi.

Un oggetto della classe basic_istream\< **Elem**, **Tr**> archivia solo un oggetto di base pubblico virtuale della classe [basic_ios](../standard-library/basic-ios-class.md)**\<Elem**, **Tr>**.

## <a name="example"></a>Esempio

Per altre informazioni sui flussi di output, vedere l'esempio per la [Classe basic_ofstream](../standard-library/basic-ofstream-class.md).

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_ostream](#basic_ostream)|Costruisce un oggetto `basic_ostream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[flush](#flush)|Scarica il buffer.|
|[put](#put)|Inserisce un carattere in un flusso.|
|[seekp](#seekp)|Reimposta la posizione nel flusso di output.|
|[sentry](#sentry)|La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di output formattate e quelle non formattate.|
|[swap](#op_eq)|Scambia i valori in questo oggetto `basic_ostream` con quelli dell'oggetto `basic_ostream` fornito.|
|[tellp](#tellp)|Indica la posizione nel flusso di output.|
|[write](#write)|Inserisce i caratteri in un flusso.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator=](#basic_ostream_operator_eq)|Assegna il valore del parametro di oggetto `basic_ostream` fornito a questo oggetto.|
|[operator<<](#basic_ostream_operator_lt_lt)|Scrive nel flusso.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<ostream>

**Spazio dei nomi:** std

## <a name="basic_ostream"></a>  basic_ostream::basic_ostream

Costruisce un oggetto `basic_ostream`.

```cpp
explicit basic_ostream(
    basic_streambuf<Elem, Tr>* strbuf,
    bool _Isstd = false);

basic_ostream(basic_ostream&& right);
```

### <a name="parameters"></a>Parametri

*strbuf* un oggetto di tipo [basic_streambuf](../standard-library/basic-streambuf-class.md).

*_Isstd* **true** se si tratta di un flusso standard; in caso contrario, **false**.

*a destra* riferimento rvalue a un oggetto di tipo `basic_ostream`.

### <a name="remarks"></a>Note

Il primo costruttore inizializza la classe base chiamando [init](../standard-library/basic-ios-class.md#init)(`strbuf`). Il secondo costruttore inizializza la classe base chiamando [basic_ios::move](../standard-library/basic-ios-class.md#move)`(right)`.

### <a name="example"></a>Esempio

Per altre informazioni sui flussi di output, vedere l'esempio per [basic_ofstream::basic_ofstream](../standard-library/basic-ofstream-class.md#basic_ofstream).

## <a name="flush"></a>  basic_ostream::flush

Scarica il buffer.

```cpp
basic_ostream<Elem, Tr>& flush();
```

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto basic_ostream.

### <a name="remarks"></a>Note

Se [rdbuf](../standard-library/basic-ios-class.md#rdbuf) non è un puntatore null, la funzione chiama **rdbuf->**[pubsync](../standard-library/basic-streambuf-class.md#pubsync). Se restituisce -1, la funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)(**badbit**). Restituisce **\*this**.

### <a name="example"></a>Esempio

```cpp
// basic_ostream_flush.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   cout << "test";
   cout.flush();
}
```

```Output
test
```

## <a name="basic_ostream_operator_lt_lt"></a>  basic_ostream::operator&lt;&lt;

Scrive nel flusso.

```cpp
basic_ostream<Elem, Tr>& operator<<(
    basic_ostream<Elem, Tr>& (* Pfn)(basic_ostream<Elem, Tr>&));

basic_ostream<Elem, Tr>& operator<<(
    ios_base& (* Pfn)(ios_base&));

basic_ostream<Elem, Tr>& operator<<(
    basic_ios<Elem, Tr>& (* Pfn)(basic_ios<Elem, Tr>&));

basic_ostream<Elem, Tr>& operator<<(basic_streambuf<Elem, Tr>* strbuf);
basic_ostream<Elem, Tr>& operator<<(bool val);
basic_ostream<Elem, Tr>& operator<<(short val);
basic_ostream<Elem, Tr>& operator<<(unsigned short val);
basic_ostream<Elem, Tr>& operator<<(int __w64  val);
basic_ostream<Elem, Tr>& operator<<(unsigned int __w64  val);
basic_ostream<Elem, Tr>& operator<<(long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long __w64  val);
basic_ostream<Elem, Tr>& operator<<(long long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long long val);
basic_ostream<Elem, Tr>& operator<<(float val);
basic_ostream<Elem, Tr>& operator<<(double val);
basic_ostream<Elem, Tr>& operator<<(long double val);
basic_ostream<Elem, Tr>& operator<<(const void* val);
```

### <a name="parameters"></a>Parametri

*Pfn* un puntatore a funzione.

*strbuf* un puntatore a un `stream_buf` oggetto.

*Val* un elemento da scrivere nel flusso.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto basic_ostream.

### <a name="remarks"></a>Note

Il \<ostream > intestazione definisce anche numerosi operatori di inserimento globali. Per altre informazioni, vedere [operatore <<](../standard-library/ostream-operators.md#op_lt_lt).

La prima funzione membro garantisce che un'espressione nel formato `ostr << endl` chiamate [endl](../standard-library/ostream-functions.md#endl)**(ostr)**, quindi restituisce  **\*ciò**. La seconda e la terza funzione garantiscono che gli altri manipolatori, ad esempio [hex](../standard-library/ios-functions.md#hex), si comportino in modo analogo. Le funzioni rimanenti sono tutte funzioni di output formattato.

La funzione

```cpp
basic_ostream<Elem, Tr>& operator<<(basic_streambuf<Elem, Tr>* strbuf);
```

Estrae gli elementi da *strbuf*, se *strbuf* non è un puntatore null e li inserisce. L'estrazione si interrompe alla fine del file o se un'estrazione genera un'eccezione (che viene generata nuovamente). L'estrazione si interrompe, senza estrazione dell'elemento, se un inserimento ha esito negativo. Se la funzione non inserisce alcun elemento o se un'estrazione genera un'eccezione, la funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)(**failbit**). In tutti i casi, la funzione restituisce **\*this**.

La funzione

```cpp
basic_ostream<Elem, Tr>& operator<<(bool val);
```

Consente di convertire `_Val` in un campo booleano e lo inserisce chiamando [use_facet](../standard-library/basic-filebuf-class.md#open)**< num_put\<Elem, OutIt >**`(`[getloc](../standard-library/ios-base-class.md#getloc)). [put](#put)(**OutIt**([rdbuf](../standard-library/basic-ios-class.md#rdbuf)), **\*this**, `getloc`, **val**). In questo caso, `OutIt` viene definito come [ostreambuf_iterator](../standard-library/ostreambuf-iterator-class.md)**\<Elem, Tr >**. La funzione restituisce **\*this**.

Ogni funzione

```cpp
basic_ostream<Elem, Tr>& operator<<(short val);
basic_ostream<Elem, Tr>& operator<<(unsigned short val);
basic_ostream<Elem, Tr>& operator<<(int val);
basic_ostream<Elem, Tr>& operator<<(unsigned int __w64  val);
basic_ostream<Elem, Tr>& operator<<(long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long val);
basic_ostream<Elem, Tr>& operator<<(long long val);
basic_ostream<Elem, Tr>& operator<<(unsigned long long val);
basic_ostream<Elem, Tr>& operator<<(const void* val);
```

Converte *val* a un valore numerico campo e lo inserisce chiamando **use_facet < num_put\<Elem, OutIt >**(`getloc`). **put**(**OutIt**(`rdbuf`), **\*this**, `getloc`, **val**). In questo caso, **OutIt** è definito come **ostreambuf_iterator\<Elem, Tr>**. La funzione restituisce **\*this**.

Ogni funzione

```cpp
basic_ostream<Elem, Tr>& operator<<(float val);
basic_ostream<Elem, Tr>& operator<<(double val);
basic_ostream<Elem, Tr>& operator<<(long double val);
```

Converte *val* a un valore numerico campo e lo inserisce chiamando **use_facet < num_put\<Elem, OutIt >**(`getloc`)**. inserire**(**OutIt**(`rdbuf`),  **\*ciò**, `getloc`, **val**). In questo caso, **OutIt** è definito come **ostreambuf_iterator\<Elem, Tr>**. La funzione restituisce **\*this**.

### <a name="example"></a>Esempio

```cpp
// basic_ostream_op_write.cpp
// compile with: /EHsc
#include <iostream>
#include <string.h>

using namespace std;

ios_base& hex2( ios_base& ib )
{
   ib.unsetf( ios_base::dec );
   ib.setf( ios_base::hex );
   return ib;
}

basic_ostream<char, char_traits<char> >& somefunc(basic_ostream<char, char_traits<char> > &i)
{
    if (i == cout)
    {
        i << "i is cout" << endl;
    }
    return i;
}

class CTxtStreambuf : public basic_streambuf< char, char_traits< char > >
{
public:
    CTxtStreambuf(char *_pszText)
    {
        pszText = _pszText;
        setg(pszText, pszText, pszText + strlen(pszText));
    };
    char *pszText;
};

int main()
{
    cout << somefunc;
    cout << 21 << endl;

    hex2(cout);
    cout << 21 << endl;

    CTxtStreambuf f("text in streambuf");
    cout << &f << endl;
}
```

## <a name="op_eq"></a>  basic_ostream::operator=

Assegna i valori per il parametro dell'oggetto `basic_ostream` specificato in questo oggetto.

```cpp
basic_ostream& operator=(basic_ostream&& right);
```

### <a name="parameters"></a>Parametri

*a destra* un' `rvalue` fanno riferimento a un `basic_ostream` oggetto.

### <a name="remarks"></a>Note

L'operatore membro chiama swap `(right)`.

## <a name="put"></a>  basic_ostream::put

Inserisce un carattere in un flusso.

```cpp
basic_ostream<Elem, Tr>& put(char_type _Ch);
```

### <a name="parameters"></a>Parametri

*CH* un carattere.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto basic_ostream.

### <a name="remarks"></a>Note

La funzione di output non formattato inserisce l'elemento *CH*. Restituisce **\*this**.

### <a name="example"></a>Esempio

```cpp
// basic_ostream_put.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   cout.put( 'v' );
   cout << endl;
   wcout.put( L'l' );
}
```

```Output
v
l
```

## <a name="seekp"></a>  basic_ostream::seekp

Reimposta la posizione nel flusso di output.

```cpp
basic_ostream<Elem, Tr>& seekp(pos_type _Pos);

basic_ostream<Elem, Tr>& seekp(off_type _Off, ios_base::seekdir _Way);
```

### <a name="parameters"></a>Parametri

*POS* la posizione nel flusso.

*Off* offset relativo alla *Way*.

*Way* tra il [ios_base:: seekdir](../standard-library/ios-base-class.md#seekdir) enumerazioni.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto basic_ostream.

### <a name="remarks"></a>Note

Se [esito negativo](../standard-library/basic-ios-class.md#fail) viene **false**, la prima funzione membro chiama **newpos =** [rdbuf](../standard-library/basic-ios-class.md#rdbuf) **->** [pubseekpos](../standard-library/basic-streambuf-class.md#pubseekpos)(*POS*), per alcune `pos_type` oggetto temporaneo `newpos`. Se `fail` è false, la seconda funzione chiama **newpos = rdbuf - >** [pubseekoff](../standard-library/basic-streambuf-class.md#pubseekoff)(*OFF, Way*). In entrambi i casi, se (`off_type`)**newpos ==** (`off_type`)(-1) (l'operazione di posizionamento ha esito negativo), la funzione chiama **istr.**[setstate](../standard-library/basic-ios-class.md#setstate)(**failbit**). Entrambe le funzioni restituiscono **\*this**.

### <a name="example"></a>Esempio

```cpp
// basic_ostream_seekp.cpp
// compile with: /EHsc
#include <fstream>
#include <iostream>

int main()
{
    using namespace std;
    ofstream x("basic_ostream_seekp.txt");
    streamoff i = x.tellp();
    cout << i << endl;
    x << "testing";
    i = x.tellp();
    cout << i << endl;
    x.seekp(2);   // Put char in third char position in file
    x << " ";

    x.seekp(2, ios::end);   // Put char two after end of file
    x << "z";
}
```

```Output
0
7
```

## <a name="sentry"></a>  basic_ostream::sentry

La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di output formattate e quelle non formattate.

sentry classe {public: sentry esplicita (basic_ostream\<Elem, Tr > & _Ostr); operator bool () const; ~ sentry();};

### <a name="remarks"></a>Note

La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di output formattate e quelle non formattate. Se **ostr.**[good](../standard-library/basic-ios-class.md#good) è **true** e **ostr.**[tie](../standard-library/basic-ios-class.md#tie) non è un puntatore null, il costruttore chiama **ostr.tie->**[flush](#flush). Il costruttore archivia quindi il valore restituito da `ostr.good` in `status`. Una chiamata successiva a `operator bool` fornisce questo valore archiviato.

Se `uncaught_exception` restituisce **false** e [flags](../standard-library/ios-base-class.md#flags) **&** [unitbuf](../standard-library/ios-functions.md#unitbuf) è diverso da zero, il distruttore chiama [flush](#flush).

## <a name="swap"></a>  basic_ostream::swap

Scambia i valori in questo oggetto `basic_ostream` con quelli dell'oggetto `basic_ostream` specificato.

```cpp
void swap(basic_ostream& right);
```

### <a name="parameters"></a>Parametri

*a destra* un riferimento a un `basic_ostream` oggetto.

### <a name="remarks"></a>Note

La funzione membro chiama [basic_ios:: swap](../standard-library/basic-ios-class.md#swap) `(right)` per scambiare il contenuto di questo oggetto per il contenuto del *a destra*.

## <a name="tellp"></a>  basic_ostream::tellp

Indica la posizione nel flusso di output.

```cpp
pos_type tellp();
```

### <a name="return-value"></a>Valore restituito

La posizione nel flusso di output.

### <a name="remarks"></a>Note

Se [fail](../standard-library/basic-ios-class.md#fail) è **false**, la funzione membro restituisce [rdbuf](../standard-library/basic-ios-class.md#rdbuf)**->** [pubseekoff](../standard-library/basic-streambuf-class.md#pubseekoff)(0, `cur`, **in**). In caso contrario, restituisce `pos_type`(-1).

### <a name="example"></a>Esempio

Vedere [seekp](#seekp) per un esempio in cui viene usato `tellp`.

## <a name="write"></a>  basic_ostream::write

Inserisce i caratteri in un flusso.

```cpp
basic_ostream<Elem, Tr>& write(const char_type* str, streamsize count);
```

### <a name="parameters"></a>Parametri

*conteggio* numero di caratteri da inserire nel flusso.

*str* caratteri da inserire nel flusso.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto basic_ostream.

### <a name="remarks"></a>Note

Il [funzione di output non formattato](../standard-library/basic-ostream-class.md) inserisce la sequenza dei *conteggio* elementi a partire *str*.

### <a name="example"></a>Esempio

Vedere [streamsize](../standard-library/ios-typedefs.md#streamsize) per un esempio in cui viene usato `write`.

## <a name="see-also"></a>Vedere anche

[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
