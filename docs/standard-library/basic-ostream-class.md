---
description: 'Altre informazioni su: basic_ostream Class'
title: Classe basic_ostream
ms.date: 03/27/2019
f1_keywords:
- ostream/std::basic_ostream
- ostream/std::basic_ostream::flush
- ostream/std::basic_ostream::put
- ostream/std::basic_ostream::seekp
- ostream/std::basic_ostream::sentry
- ostream/std::basic_ostream::swap
- ostream/std::basic_ostream::tellp
- ostream/std::basic_ostream::write
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
ms.openlocfilehash: 19bcc5fddd7ae73a77492f88ed516beb03182839
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325654"
---
# <a name="basic_ostream-class"></a>Classe basic_ostream

Questo modello di classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer di flusso con elementi di tipo `Elem` , noti anche come [char_type](../standard-library/basic-ios-class.md#char_type), i cui tratti di carattere sono determinati dalla classe `Tr` , nota anche come [traits_type](../standard-library/basic-ios-class.md#traits_type).

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_ostream : virtual public basic_ios<Elem, Tr>
```

### <a name="parameters"></a>Parametri

*Elem*\
Oggetto `char_type`.

*TR*\
Il carattere `traits_type`.

## <a name="remarks"></a>Commenti

La maggior parte delle funzioni membro che sono in rapporto di overload con [operator<<](#basic_ostream_operator_lt_lt) è costituita da funzioni di output formattato. Le funzioni seguono questo schema:

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

Entrambi i gruppi di funzioni chiamano [sestate](../standard-library/basic-ios-class.md#setstate)(**badbit**) se si verifica un errore durante l'inserimento di elementi.

Un oggetto della classe basic_istream \< **Elem**, **Tr**> archivia solo un oggetto di base pubblico virtuale della classe [basic_ios](../standard-library/basic-ios-class.md) **\<Elem**, **Tr>** .

## <a name="example"></a>Esempio

Per altre informazioni sui flussi di output, vedere l'esempio per la [Classe basic_ofstream](../standard-library/basic-ofstream-class.md).

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_ostream](#basic_ostream)|Costruisce un oggetto `basic_ostream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[filo](#flush)|Scarica il buffer.|
|[mettere](#put)|Inserisce un carattere in un flusso.|
|[seekp](#seekp)|Reimposta la posizione nel flusso di output.|
|[Sentry](#sentry)|La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di output formattate e quelle non formattate.|
|[scambio](#swap)|Scambia i valori in questo oggetto `basic_ostream` con quelli dell'oggetto `basic_ostream` fornito.|
|[tellp](#tellp)|Indica la posizione nel flusso di output.|
|[scrittura](#write)|Inserisce i caratteri in un flusso.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore =](#op_eq)|Assegna il valore del parametro di oggetto `basic_ostream` fornito a questo oggetto.|
|[operatore<<](#basic_ostream_operator_lt_lt)|Scrive nel flusso.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<ostream>

**Spazio dei nomi:** std

## <a name="basic_ostreambasic_ostream"></a><a name="basic_ostream"></a> basic_ostream:: basic_ostream

Costruisce un oggetto `basic_ostream`.

```cpp
explicit basic_ostream(
    basic_streambuf<Elem, Tr>* strbuf,
    bool _Isstd = false);

basic_ostream(basic_ostream&& right);
```

### <a name="parameters"></a>Parametri

*Strbuf*\
Un oggetto di tipo [basic_streambuf](../standard-library/basic-streambuf-class.md).

*_Isstd*\
**`true`** Se si tratta di un flusso standard; in caso contrario, **`false`** .

*Ok*\
Riferimento rvalue a un oggetto di tipo `basic_ostream`.

### <a name="remarks"></a>Commenti

Il primo costruttore inizializza la classe base chiamando [init](../standard-library/basic-ios-class.md#init)( `strbuf` ). Il secondo costruttore inizializza la classe base chiamando [basic_ios:: Move](../standard-library/basic-ios-class.md#move) `(right)` .

### <a name="example"></a>Esempio

Per altre informazioni sui flussi di output, vedere l'esempio per [basic_ofstream::basic_ofstream](../standard-library/basic-ofstream-class.md#basic_ofstream).

## <a name="basic_ostreamflush"></a><a name="flush"></a> basic_ostream:: Flush

Scarica il buffer.

```cpp
basic_ostream<Elem, Tr>& flush();
```

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto basic_ostream.

### <a name="remarks"></a>Commenti

Se [rdbuf](../standard-library/basic-ios-class.md#rdbuf) non è un puntatore null, la funzione chiama **rdbuf->**[pubsync](../standard-library/basic-streambuf-class.md#pubsync). Se restituisce -1, la funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)(**badbit**). Restituisce **\* this**.

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

## <a name="basic_ostreamoperatorltlt"></a><a name="basic_ostream_operator_lt_lt"></a> operatore basic_ostream::&lt;&lt;

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

*PFN*\
Un puntatore di funzione.

*Strbuf*\
Puntatore a un oggetto `stream_buf`.

*Val*\
Un elemento da scrivere nel flusso.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto basic_ostream.

### <a name="remarks"></a>Commenti

L'intestazione \<ostream> definisce anche numerosi operatori di inserimento globali. Per ulteriori informazioni, vedere [operator<<](../standard-library/ostream-operators.md#op_lt_lt).

La prima funzione membro garantisce che un'espressione del form `ostr << endl` chiami [endl](../standard-library/ostream-functions.md#endl)**(OSTR)**, quindi restituisce **\* this**. La seconda e la terza funzione garantiscono che gli altri manipolatori, ad esempio [hex](../standard-library/ios-functions.md#hex), si comportino in modo analogo. Le funzioni rimanenti sono tutte funzioni di output formattato.

La funzione

```cpp
basic_ostream<Elem, Tr>& operator<<(basic_streambuf<Elem, Tr>* strbuf);
```

estrae gli elementi da *Strbuf*, se *Strbuf* non è un puntatore null e li inserisce. L'estrazione si interrompe alla fine del file o se un'estrazione genera un'eccezione (che viene generata nuovamente). L'estrazione si interrompe, senza estrazione dell'elemento, se un inserimento ha esito negativo. Se la funzione non inserisce alcun elemento o se un'estrazione genera un'eccezione, la funzione chiama [setstate](../standard-library/basic-ios-class.md#setstate)(**failbit**). In ogni caso, la funzione restituisce **\* this**.

La funzione

```cpp
basic_ostream<Elem, Tr>& operator<<(bool val);
```

Converte `_Val` in un campo booleano e lo inserisce chiamando [use_facet](../standard-library/basic-filebuf-class.md#open) **<num_put \<Elem, OutIt>** `(` [getloc](../standard-library/ios-base-class.md#getloc)). [put](#put)(**OutIt**([rdbuf](../standard-library/basic-ios-class.md#rdbuf)), **\*this**, `getloc`, **val**). Qui, `OutIt` viene definito come [ostreambuf_iterator](../standard-library/ostreambuf-iterator-class.md) **\<Elem, Tr>** . La funzione restituisce **\* this**.

Funzioni

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

ogni converte *Val* in un campo numerico e lo inserisce chiamando **use_facet<num_put \<Elem, OutIt>**( `getloc` ). **put**(**OutIt**( `rdbuf` ), **\* this**, `getloc` , **Val**). In questo caso, **OutIt** viene definito come **ostreambuf_iterator \<Elem, Tr>**. La funzione restituisce **\* this**.

Funzioni

```cpp
basic_ostream<Elem, Tr>& operator<<(float val);
basic_ostream<Elem, Tr>& operator<<(double val);
basic_ostream<Elem, Tr>& operator<<(long double val);
```

ogni converte *Val* in un campo numerico e lo inserisce chiamando **use_facet<num_put \<Elem, OutIt>**( `getloc` )**. Put**(**OutIt**( `rdbuf` ), **\* this**, `getloc` , **Val**). In questo caso, **OutIt** viene definito come **ostreambuf_iterator \<Elem, Tr>**. La funzione restituisce **\* this**.

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

## <a name="basic_ostreamoperator"></a><a name="op_eq"></a> basic_ostream:: operator =

Assegna i valori per il parametro dell'oggetto `basic_ostream` specificato in questo oggetto.

```cpp
basic_ostream& operator=(basic_ostream&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Riferimento `rvalue` a un oggetto `basic_ostream`.

### <a name="remarks"></a>Commenti

L'operatore membro chiama swap `(right)`.

## <a name="basic_ostreamput"></a><a name="put"></a> basic_ostream::p UT

Inserisce un carattere in un flusso.

```cpp
basic_ostream<Elem, Tr>& put(char_type _Ch);
```

### <a name="parameters"></a>Parametri

*_Ch*\
Carattere.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto basic_ostream.

### <a name="remarks"></a>Commenti

La funzione di output non formattato inserisce l'elemento *_Ch*. Restituisce **\* this**.

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

## <a name="basic_ostreamseekp"></a><a name="seekp"></a> basic_ostream:: seekp

Reimposta la posizione nel flusso di output.

```cpp
basic_ostream<Elem, Tr>& seekp(pos_type _Pos);

basic_ostream<Elem, Tr>& seekp(off_type _Off, ios_base::seekdir _Way);
```

### <a name="parameters"></a>Parametri

*_Pos*\
La posizione all'interno del flusso.

*_Off*\
Offset relativo a *_Way*.

*_Way*\
Una delle enumerazioni [ios_base::seekdir](../standard-library/ios-base-class.md#seekdir).

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto basic_ostream.

### <a name="remarks"></a>Commenti

Se [Fail](../standard-library/basic-ios-class.md#fail) è **`false`** , la prima funzione membro chiama **newpos =** [rdbuf](../standard-library/basic-ios-class.md#rdbuf) **->** [pubseekpos](../standard-library/basic-streambuf-class.md#pubseekpos)(*_Pos*) per alcuni `pos_type` oggetti temporanei `newpos` . Se `fail` è false, la seconda funzione chiama **newpos = rdbuf->** [pubseekoff](../standard-library/basic-streambuf-class.md#pubseekoff)(*_Off, _Way*). In entrambi i casi, se ( `off_type` )**newpos = =** ( `off_type` ) (-1) (l'operazione di posizionamento ha esito negativo), la funzione chiama **istr.** [sestate](../standard-library/basic-ios-class.md#setstate)(**failbit**). Entrambe le funzioni restituiscono **\* this**.

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

## <a name="basic_ostreamsentry"></a><a name="sentry"></a> basic_ostream:: Sentry

La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di output formattate e quelle non formattate.

Classe Sentry {public: Explicit Sentry (basic_ostream \<Elem, Tr>& _Ostr); operator bool () const; ~ Sentry ();};

### <a name="remarks"></a>Commenti

La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di output formattate e quelle non formattate. Se **OSTR.** [bene](../standard-library/basic-ios-class.md#good) è **`true`** e **OSTR.** [Tie](../standard-library/basic-ios-class.md#tie) non è un puntatore null, il costruttore chiama **OSTR. tie->** [Flush](#flush). Il costruttore archivia quindi il valore restituito da `ostr.good` in `status` . Una chiamata successiva a `operator bool` recapita questo valore archiviato.

Se `uncaught_exception` restituisce **`false`** e [Flags](../standard-library/ios-base-class.md#flags) **&** [unitbuf](../standard-library/ios-functions.md#unitbuf) è diverso da zero, il distruttore chiama [Flush](#flush).

## <a name="basic_ostreamswap"></a><a name="swap"></a> basic_ostream:: swap

Scambia i valori in questo oggetto `basic_ostream` con quelli dell'oggetto `basic_ostream` specificato.

```cpp
void swap(basic_ostream& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Riferimento a un oggetto `basic_ostream`.

### <a name="remarks"></a>Commenti

La funzione membro chiama [basic_ios:: swap](../standard-library/basic-ios-class.md#swap) `(right)` per scambiare il contenuto di questo oggetto per il contenuto di *right*.

## <a name="basic_ostreamtellp"></a><a name="tellp"></a> basic_ostream:: tellp

Indica la posizione nel flusso di output.

```cpp
pos_type tellp();
```

### <a name="return-value"></a>Valore restituito

La posizione nel flusso di output.

### <a name="remarks"></a>Commenti

Se l' [esito è negativo](../standard-library/basic-ios-class.md#fail) **`false`** , la funzione membro restituisce [rdbuf](../standard-library/basic-ios-class.md#rdbuf) **->** [pubseekoff](../standard-library/basic-streambuf-class.md#pubseekoff)(0, `cur` , **in**). In caso contrario, restituisce `pos_type`(-1).

### <a name="example"></a>Esempio

Vedere [seekp](#seekp) per un esempio in cui viene usato `tellp`.

## <a name="basic_ostreamwrite"></a><a name="write"></a> basic_ostream:: Write

Inserisce i caratteri in un flusso.

```cpp
basic_ostream<Elem, Tr>& write(const char_type* str, streamsize count);
```

### <a name="parameters"></a>Parametri

*conteggio*\
Numero di caratteri da inserire nel flusso.

*Str*\
Caratteri da inserire nel flusso.

### <a name="return-value"></a>Valore restituito

Un riferimento all'oggetto basic_ostream.

### <a name="remarks"></a>Commenti

La [funzione di output non formattato](../standard-library/basic-ostream-class.md) inserisce la sequenza di elementi *count* a partire da *Str*.

### <a name="example"></a>Esempio

Vedere [streamsize](../standard-library/ios-typedefs.md#streamsize) per un esempio in cui viene usato `write`.

## <a name="see-also"></a>Vedi anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
