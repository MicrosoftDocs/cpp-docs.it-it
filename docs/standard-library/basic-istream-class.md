---
title: Classe basic_istream
ms.date: 11/04/2016
f1_keywords:
- istream/std::basic_istream
- istream/std::basic_istream::gcount
- istream/std::basic_istream::get
- istream/std::basic_istream::getline
- 'istream/std::basic_istream::'
- istream/std::basic_istream::peek
- istream/std::basic_istream::putback
- istream/std::basic_istream::read
- istream/std::basic_istream::readsome
- istream/std::basic_istream::seekg
- istream/std::basic_istream::sentry
- istream/std::basic_istream::swap
- istream/std::basic_istream::sync
- istream/std::basic_istream::tellg
- istream/std::basic_istream::unget
helpviewer_keywords:
- std::basic_istream [C++]
- std::basic_istream [C++], gcount
- std::basic_istream [C++], get
- std::basic_istream [C++], getline
- std::basic_istream [C++], OVERWRITE
- std::basic_istream [C++], peek
- std::basic_istream [C++], putback
- std::basic_istream [C++], read
- std::basic_istream [C++], readsome
- std::basic_istream [C++], seekg
- std::basic_istream [C++], sentry
- std::basic_istream [C++], swap
- std::basic_istream [C++], sync
- std::basic_istream [C++], tellg
- std::basic_istream [C++], unget
ms.assetid: c7c27111-de6d-42b4-95a3-a7e65259bf17
ms.openlocfilehash: 03a6e3a65d6dc8c2fa896949855bd23a01578e5a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376831"
---
# <a name="basic_istream-class"></a>Classe basic_istream

Descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer di flusso con elementi di tipo `Char_T`, chiamato anche [char_type](../standard-library/basic-ios-class.md#char_type), i cui tratti di carattere sono determinati dalla classe *Tr*, chiamata anche [traits_type](../standard-library/basic-ios-class.md#traits_type).

## <a name="syntax"></a>Sintassi

```cpp
template <class Char_T, class Tr = char_traits<Char_T>>
class basic_istream : virtual public basic_ios<Char_T, Tr>
```

## <a name="remarks"></a>Osservazioni

La maggior parte delle funzioni membro che sono in rapporto di overload con [operator>>](#op_gt_gt) è costituita da funzioni di input formattato. Le funzioni seguono questo schema:

```cpp
iostate state = goodbit;
const sentry ok(*this);

if (ok)
{
    try
    {
        /*extract elements and convert
            accumulate flags in state.
            store a successful conversion*/
    }
    catch (...)
    {
        try
        {
            setstate(badbit);

        }
        catch (...)
        {
        }
        if ((exceptions()& badbit) != 0)
            throw;
    }
}
setstate(state);

return (*this);
```

Molte altre funzioni membro sono funzioni di input formattate. Le funzioni seguono questo schema:

```cpp
iostate state = goodbit;
count = 0;    // the value returned by gcount
const sentry ok(*this, true);

if (ok)
{
    try
    {
        /* extract elements and deliver
            count extracted elements in count
            accumulate flags in state */
    }
    catch (...)
    {
        try
        {
            setstate(badbit);

        }
        catch (...)
        {
        }
        if ((exceptions()& badbit) != 0)
            throw;
    }
}
setstate(state);
```

Entrambi i gruppi [`setstate`](../standard-library/basic-ios-class.md#setstate) `(eofbit)` di funzioni chiamano se incontrano la fine del file durante l'estrazione di elementi.

Oggetto di `basic_istream<Char_T, Tr>` archivi di classe:

- Oggetto base pubblico virtuale [`basic_ios`](../standard-library/basic-ios-class.md) `<Char_T, Tr>`della classe .

- Un conteggio di estrazione per l'ultima `count` operazione di input non formattata (chiamata nel codice precedente).

## <a name="example"></a>Esempio

Per altre informazioni sui flussi di input, vedere l'esempio per la [Classe basic_ifstream](../standard-library/basic-ifstream-class.md).

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_istream](#basic_istream)|Costruisce un oggetto di tipo `basic_istream`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[gcount](#gcount)|Restituisce il numero di caratteri letti durante l'ultimo input non formattato.|
|[get](#get)|Legge uno o più caratteri dal flusso di input.|
|[Getline](#getline)|Legge una riga dal flusso di input.|
|[Ignorare](#ignore)|Fa sì che un certo numero di elementi venga ignorato dalla posizione di lettura corrente.|
|[Sbirciatina](#peek)|Restituisce il carattere successivo da leggere.|
|[putback](#putback)|Inserisce un carattere specificato nel flusso.|
|[Leggere](#read)|Legge un numero specificato di caratteri dal flusso e li archivia in una matrice.|
|[readsome](#readsome)|Legge solo dal buffer.|
|[seekg](#seekg)|Sposta la posizione di lettura in un flusso.|
|[sentry](#sentry)|La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di input formattate e quelle non formattate.|
|[Swap](#swap)|Scambia questo oggetto `basic_istream` con il parametro dell'oggetto `basic_istream` specificato.|
|[sync](#sync)|Sincronizza il dispositivo di input associato del flusso con il buffer del flusso.|
|[tellg](#tellg)|Segnala la posizione corrente all'interno del flusso.|
|[unget](#unget)|Reinserisce il carattere letto più di recente nel flusso.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[>>operatore](#op_gt_gt)|Chiama una funzione nel flusso di input o legge dati formattati dal flusso di input.|
|[operatore di comando](#op_eq)|Assegna l'oggetto `basic_istream` a destra dell'operatore a questo oggetto. Si tratta di un'assegnazione di spostamento che coinvolge un `rvalue` riferimento che non lascia una copia alle spalle.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<istream>

**Spazio dei nomi:** std

## <a name="basic_istreambasic_istream"></a><a name="basic_istream"></a>basic_istream::basic_istream

Costruisce un oggetto di tipo `basic_istream`.

```cpp
explicit basic_istream(
    basic_streambuf<Char_T, Tr>* strbuf,
    bool _Isstd = false);

basic_istream(basic_istream&& right);
```

### <a name="parameters"></a>Parametri

*strbuf*\
Un oggetto di tipo [basic_streambuf](../standard-library/basic-streambuf-class.md).

*_Isstd*\
**true** se si tratta di un flusso standard; in caso contrario, **false**.

*va bene*\
Oggetto `basic_istream` da copiare.

### <a name="remarks"></a>Osservazioni

Il primo costruttore inizializza la [`init`](../standard-library/basic-ios-class.md#init) `(strbuf)`classe base chiamando . Archivia anche zero nel conteggio di estrazione. Per ulteriori informazioni su questo conteggio delle estrazioni, vedere la sezione Osservazioni dei cenni preliminari sulla [classe basic_istream.](../standard-library/basic-istream-class.md)

Il secondo costruttore inizializza la classe base chiamando `move(right)`. Memorizza `right.gcount()` anche il conteggio di estrazione e memorizza zero nel conteggio di estrazione per "right".

### <a name="example"></a>Esempio

Per altre informazioni sui flussi di input, vedere l'esempio [basic_ifstream::basic_ifstream](../standard-library/basic-ifstream-class.md#basic_ifstream).

## <a name="basic_istreamgcount"></a><a name="gcount"></a>basic_istream::gcount

Restituisce il numero di caratteri letti durante l'ultimo input non formattato.

```cpp
streamsize gcount() const;
```

### <a name="return-value"></a>Valore restituito

Il conteggio di estrazione.

### <a name="remarks"></a>Osservazioni

Usare [basic_istream::get](#get) per leggere i caratteri non formattati.

### <a name="example"></a>Esempio

```cpp
// basic_istream_gcount.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   cout << "Type the letter 'a': ";

   ws( cin );
   char c[10];

   cin.get( &c[0],9 );
   cout << c << endl;

   cout << cin.gcount( ) << endl;
}
```

```Input
a
```

```Output
Type the letter 'a': a
1
```

## <a name="basic_istreamget"></a><a name="get"></a>basic_istream::ottenere

Legge uno o più caratteri dal flusso di input.

```cpp
int_type get();

basic_istream<Char_T, Tr>& get(Char_T& Ch);
basic_istream<Char_T, Tr>& get(Char_T* str, streamsize count);
basic_istream<Char_T, Tr>& get(Char_T* str, streamsize count, Char_T delimiter);

basic_istream<Char_T, Tr>& get(basic_streambuf<Char_T, Tr>& strbuf);
basic_istream<Char_T, Tr>& get(basic_streambuf<Char_T, Tr>& strbuf, Char_T delimiter);
```

### <a name="parameters"></a>Parametri

*Conteggio*\
Numero di caratteri da leggere da *strbuf*.

*Delimitatore*\
Carattere che deve terminare la lettura se viene rilevato prima *di count*.

*Str*\
Una stringa in cui scrivere.

*Ch*\
Un carattere da ottenere.

*strbuf*\
Un buffer in cui scrivere.

### <a name="return-value"></a>Valore restituito

Il form senza parametri di get restituisce l'elemento letto come integer o fine del file. I form rimanenti restituiscono il flusso (* `this`).

### <a name="remarks"></a>Osservazioni

La prima funzione di input non formattata estrae `rdbuf->sbumpc`un elemento, se possibile, come se restituisse . In caso `traits_type::` [`eof`](../standard-library/char-traits-struct.md#eof)contrario, restituisce . Se la funzione non estrae alcun elemento, chiama [`setstate`](../standard-library/basic-ios-class.md#setstate) `(failbit)`.

La seconda funzione estrae `meta` dell'elemento [int_type](../standard-library/basic-ios-class.md#int_type) allo stesso modo. Se `meta` confronta uguale a `traits_type::eof` `setstate(failbit)`, la funzione chiama . In caso `traits_type::` [`to_char_type`](../standard-library/char-traits-struct.md#to_char_type) `(meta)` contrario, memorizza in *Ch*. La funzione restituisce __l'opzione this __.

La terza `get(str, count, widen('\n'))`funzione restituisce .

La quarta funzione estrae fino a `count - 1` elementi e li memorizza nella matrice a partire da *str*. `char_type` viene sempre archiviato dopo gli elementi estratti archiviati. In ordine di test, l'estrazione si interrompe:

- Alla fine del file.

- Dopo che la funzione estrae un elemento che confronta uguale a *delimitatore*. In questo caso, l'elemento viene reinserito nella sequenza controllata.

- Dopo che la `count - 1` funzione estrae gli elementi.

Se non estrae alcun elemento, la funzione chiama `setstate(failbit)`. In ogni caso, restituisce __: this__.

La quinta `get(strbuf, widen('\n'))`funzione restituisce .

La sesta funzione estrae gli elementi e li inserisce in *strbuf*. L'estrazione viene interrotta alla fine del file o su un elemento che confronta uguale a *delimitatore*, che non viene estratto. L'estrazione si interrompe anche, senza estrazione dell'elemento, se un inserimento ha esito negativo o genera un'eccezione che viene rilevata ma non generata nuovamente. Se non estrae alcun elemento, la funzione chiama `setstate(failbit)`. In ogni caso, la funzione restituisce __.__

### <a name="example"></a>Esempio

```cpp
// basic_istream_get.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char c[10];

   c[0] = cin.get( );
   cin.get( c[1] );
   cin.get( &c[2],3 );
   cin.get( &c[4], 4, '7' );

   cout << c << endl;
}
```

```Output
1111
```

## <a name="basic_istreamgetline"></a><a name="getline"></a>basic_istream::getline

Ottiene una riga dal flusso di input.

```cpp
basic_istream<Char_T, Tr>& getline(
    char_type* str,
    streamsize count);

basic_istream<Char_T, Tr>& getline(
    char_type* str,
    streamsize count,
    char_type delimiter);
```

### <a name="parameters"></a>Parametri

*Conteggio*\
Numero di caratteri da leggere da *strbuf*.

*Delimitatore*\
Carattere che deve terminare la lettura se viene rilevato prima *di count*.

*Str*\
Una stringa in cui scrivere.

### <a name="return-value"></a>Valore restituito

Il flusso (__: this__).

### <a name="remarks"></a>Osservazioni

La prima di queste funzioni `getline(str, count, widen('\n'))`di input non formattate restituisce .

La seconda funzione estrae fino agli `count - 1` elementi e li memorizza nella matrice a partire da *str*. La funzione archivia sempre il carattere di terminazione della stringa dopo gli elementi estratti archiviati. In ordine di test, l'estrazione si interrompe:

- Alla fine del file.

- Dopo che la funzione estrae un elemento che confronta uguale a *delimitatore*. In questo caso, l'elemento non viene reinserito e non viene aggiunto alla sequenza controllata.

- Dopo che la `count - 1` funzione estrae gli elementi.

Se la funzione non `count - 1` estrae [`setstate`](../standard-library/basic-ios-class.md#setstate) `(failbit)`elementi o elementi, chiama . In ogni caso, restituisce __: this__.

### <a name="example"></a>Esempio

```cpp
// basic_istream_getline.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char c[10];

   cin.getline( &c[0], 5, '2' );
   cout << c << endl;
}
```

```Output
121
```

## <a name="basic_istreamignore"></a><a name="ignore"></a>basic_istream::ignora

Fa sì che un certo numero di elementi venga ignorato dalla posizione di lettura corrente.

```cpp
basic_istream<Char_T, Tr>& ignore(
    streamsize count = 1,
    int_type delimiter = traits_type::eof());
```

### <a name="parameters"></a>Parametri

*Conteggio*\
Numero di elementi da ignorare dalla posizione di lettura corrente.

*Delimitatore*\
Elemento che, se rilevato prima `ignore` di count, causa la restituzione e consente la lettura di tutti gli elementi dopo il *delimitatore.*

### <a name="return-value"></a>Valore restituito

Il flusso (__: this__).

### <a name="remarks"></a>Osservazioni

La funzione di input non formattata estrae fino a *contare* gli elementi e li elimina. Se *count* `numeric_limits<int>::max`è uguale a , tuttavia, è preso come arbitrariamente grande. L'estrazione si interrompe presto alla `Ch` fine `traits_type::` [`to_int_type`](../standard-library/char-traits-struct.md#to_int_type) `(Ch)` del file o su un elemento che confronta uguale al *delimitatore* (che viene anche estratto). La funzione restituisce __l'opzione this __.

### <a name="example"></a>Esempio

```cpp
// basic_istream_ignore.cpp
// compile with: /EHsc
#include <iostream>
int main( )
{
   using namespace std;
   char chararray[10];
   cout << "Type 'abcdef': ";
   cin.ignore( 5, 'c' );
   cin >> chararray;
   cout << chararray;
}
```

```Output
Type 'abcdef': abcdef
def
```

## <a name="basic_istreamoperator"></a><a name="op_gt_gt"></a>>>\_istream::operatore di basei

Chiama una funzione nel flusso di input o legge dati formattati dal flusso di input.

```cpp
basic_istream& operator>>(basic_istream& (* Pfn)(basic_istream&));
basic_istream& operator>>(ios_base& (* Pfn)(ios_base&));
basic_istream& operator>>(basic_ios<Char_T, Tr>& (* Pfn)(basic_ios<Char_T, Tr>&));
basic_istream& operator>>(basic_streambuf<Char_T, Tr>* strbuf);
basic_istream& operator>>(bool& val);
basic_istream& operator>>(short& val);
basic_istream& operator>>(unsigned short& val);
basic_istream& operator>>(int& val);
basic_istream& operator>>(unsigned int& val);
basic_istream& operator>>(long& val);
basic_istream& operator>>(unsigned long& val);
basic_istream& operator>>(long long& val);
basic_istream& operator>>(unsigned long long& val);
basic_istream& operator>>(void *& val);
basic_istream& operator>>(float& val);
basic_istream& operator>>(double& val);
basic_istream& operator>>(long double& val);
```

### <a name="parameters"></a>Parametri

*Pfn*\
Un puntatore di funzione.

*strbuf*\
Oggetto di tipo `stream_buf`.

*Val*\
Valore che deve essere letto dal flusso.

### <a name="return-value"></a>Valore restituito

Il flusso (__: this__).

### <a name="remarks"></a>Osservazioni

L'intestazione \<istream> definisce anche diversi operatori di estrazione globale. Per altre informazioni, vedere [operator>> (\<istream>)](../standard-library/istream-operators.md#op_gt_gt).

La prima funzione membro assicura che `istr >> ws` un'espressione del form chiami [`ws`](../standard-library/istream-functions.md#ws) `(istr)`, quindi __restituisce__. La seconda e la terza funzione assicurano [`hex`](../standard-library/ios-functions.md#hex)che altri manipolatori, ad esempio , si comportino in modo simile. Le funzioni rimanenti sono le funzioni di input formattate.

La funzione:

```cpp
basic_istream& operator>>(
    basic_streambuf<Char_T, Tr>* strbuf);
```

estrae gli elementi, se *strbuf* non è un puntatore null, e li inserisce in *strbuf*. L'estrazione si interrompe alla fine del file. L'estrazione si interrompe anche, senza estrazione dell'elemento, se un inserimento ha esito negativo o genera un'eccezione che viene rilevata ma non generata nuovamente. Se la funzione non estrae alcun elemento, chiama [`setstate`](../standard-library/basic-ios-class.md#setstate) `(failbit)`. In ogni caso, la funzione restituisce __.__

La funzione:

```cpp
basic_istream& operator>>(bool& val);
```

estrae un campo e lo converte in un valore booleano chiamando [`use_facet`](../standard-library/basic-filebuf-class.md#open) `< num_get<Char_T, InIt>(` [`getloc`](../standard-library/ios-base-class.md#getloc) `).` [`get`](../standard-library/ios-base-class.md#getloc) `( InIt(` [`rdbuf`](../standard-library/basic-ios-class.md#rdbuf) `), Init(0), *this, getloc, val)`. In `InIt` questo caso, è definito come [`istreambuf_iterator`](../standard-library/istreambuf-iterator-class.md) `<Char_T, Tr>`. La funzione restituisce __l'opzione this __.

Ciascuna delle funzioni:

```cpp
basic_istream& operator>>(short& val);
basic_istream& operator>>(unsigned short& val);
basic_istream& operator>>(int& val);
basic_istream& operator>>(unsigned int& val);
basic_istream& operator>>(long& val);
basic_istream& operator>>(unsigned long& val);
basic_istream& operator>>(long long& val);
basic_istream& operator>>(unsigned long long& val);
basic_istream& operator>>(void *& val);
```

estrarre un campo e convertirlo `use_facet<num_get<Char_T, InIt>(getloc).` [`get`](#get) `(InIt(rdbuf), Init(0), *this, getloc, val)`in un valore numerico chiamando . In `InIt` questo caso, è definito `istreambuf_iterator<Char_T, Tr>`come , e *val* è di tipo **long**, **unsigned long**o **void** <strong>\*</strong> in base alle esigenze.

Se il valore convertito non può essere rappresentato come [`setstate`](../standard-library/basic-ios-class.md#setstate) `(failbit)`il tipo di *val*, la funzione chiama . In ogni caso, la funzione restituisce __.__

Ciascuna delle funzioni:

```cpp
basic_istream& operator>>(float& val);
basic_istream& operator>>(double& val);
basic_istream& operator>>(long double& val);
```

estrarre un campo e convertirlo `use_facet<num_get<Char_T, InIt>(getloc).get(InIt(rdbuf), Init(0), *this, getloc, val)`in un valore numerico chiamando . In `InIt` questo caso, è `istreambuf_iterator<Char_T, Tr>`definito come , e *val* ha il tipo **double** o long **double** in base alle esigenze.

Se il valore convertito non può essere *val*rappresentato come `setstate(failbit)`il tipo di val , la funzione chiama . In ogni caso, restituisce __: this__.

### <a name="example"></a>Esempio

```cpp
// istream_basic_istream_op_is.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;

ios_base& hex2( ios_base& ib )
{
   ib.unsetf( ios_base::dec );
   ib.setf( ios_base::hex );
   return ib;
}

basic_istream<char, char_traits<char> >& somefunc(basic_istream<char, char_traits<char> > &i)
{
   if ( i == cin )
   {
      cerr << "i is cin" << endl;
   }
   return i;
}

int main( )
{
   int i = 0;
   cin >> somefunc;
   cin >> i;
   cout << i << endl;
   cin >> hex2;
   cin >> i;
   cout << i << endl;
}
```

## <a name="basic_istreamoperator"></a><a name="op_eq"></a>basic_istream::operatore

Assegna l'oggetto `basic_istream` a destra dell'operatore a questo oggetto. Si tratta di un'assegnazione di spostamento che coinvolge un `rvalue` riferimento che non lascia una copia alle spalle.

```cpp
basic_istream& operator=(basic_istream&& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Riferimento `rvalue` a un oggetto `basic_ifstream`.

### <a name="return-value"></a>Valore restituito

Restituisce __l'opzione this__.

### <a name="remarks"></a>Osservazioni

L'operatore `swap(right)`membro chiama .

## <a name="basic_istreampeek"></a><a name="peek"></a>basic_istream::peek

Restituisce il carattere successivo da leggere.

```cpp
int_type peek();
```

### <a name="return-value"></a>Valore restituito

Il carattere successivo che verrà letto.

### <a name="remarks"></a>Osservazioni

La funzione di input non formattata estrae un `rdbuf->` [`sgetc`](../standard-library/basic-streambuf-class.md#sgetc)elemento, se possibile, come se restituisse . In caso `traits_type::` [`eof`](../standard-library/char-traits-struct.md#eof)contrario, restituisce .

### <a name="example"></a>Esempio

```cpp
// basic_istream_peek.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char c[10], c2;
   cout << "Type 'abcde': ";

   c2 = cin.peek( );
   cin.getline( &c[0], 9 );

   cout << c2 << " " << c << endl;
}
```

```Input
abcde
```

```Output
Type 'abcde': abcde
a abcde
```

## <a name="basic_istreamputback"></a><a name="putback"></a>basic_istream::putback

Inserisce un carattere specificato nel flusso.

```cpp
basic_istream<Char_T, Tr>& putback(
    char_type Ch);
```

### <a name="parameters"></a>Parametri

*Ch*\
Carattere da inserire nuovamente nel flusso.

### <a name="return-value"></a>Valore restituito

Il flusso (__: this__).

### <a name="remarks"></a>Osservazioni

La funzione di [input non formattata](../standard-library/basic-istream-class.md) riinserisce [`rdbuf`](../standard-library/basic-ios-class.md#rdbuf) `->` [`sputbackc`](../standard-library/basic-streambuf-class.md#sputbackc) *Ch*, se possibile, come se chiamando . Se `rdbuf` è un puntatore null `sputbackc` o `traits_type::` [`eof`](../standard-library/char-traits-struct.md#eof)se la [`setstate`](../standard-library/basic-ios-class.md#setstate) `(badbit)`chiamata a restituisce , la funzione chiama . In ogni caso, restituisce __: this__.

### <a name="example"></a>Esempio

```cpp
// basic_istream_putback.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char c[10], c2, c3;

   c2 = cin.get( );
   c3 = cin.get( );
   cin.putback( c2 );
   cin.getline( &c[0], 9 );
   cout << c << endl;
}
```

```Output
qwq
```

## <a name="basic_istreamread"></a><a name="read"></a>basic_istream::lettura

Legge un numero specificato di caratteri dal flusso e li archivia in una matrice.

Questo metodo è potenzialmente pericoloso poiché si basa sul controllo dei valori passati effettuato dal chiamante.

```cpp
basic_istream<Char_T, Tr>& read(
    char_type* str,
    streamsize count);
```

### <a name="parameters"></a>Parametri

*Str*\
Matrice in cui leggere i caratteri.

*Conteggio*\
Numero di caratteri da leggere.

### <a name="return-value"></a>Valore restituito

Il flusso ( `*this`).

### <a name="remarks"></a>Osservazioni

La funzione di input non formattata estrae fino a *contare* gli elementi e li memorizza nella matrice a partire da *str*. L'estrazione viene interrotta anticipatamente [`setstate`](../standard-library/basic-ios-class.md#setstate) `(failbit)`alla fine del file, nel qual caso la funzione chiama . In ogni caso, restituisce __: this__.

### <a name="example"></a>Esempio

```cpp
// basic_istream_read.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main()
{
    char c[10];
    int count = 5;

    cout << "Type 'abcde': ";

    // Note: cin::read is potentially unsafe, consider
    // using cin::_Read_s instead.
    cin.read(&c[0], count);
    c[count] = 0;

    cout << c << endl;
}
```

```Input
abcde
```

```Output
Type 'abcde': abcde
abcde
```

## <a name="basic_istreamreadsome"></a><a name="readsome"></a>basic_istream::readsome

Legge il numero specificato di valori di carattere.

Questo metodo è potenzialmente pericoloso poiché si basa sul controllo dei valori passati effettuato dal chiamante.

```cpp
streamsize readsome(
    char_type* str,
    streamsize count);
```

### <a name="parameters"></a>Parametri

*Str*\
La matrice in cui `readsome` archivia i caratteri letti.

*Conteggio*\
Numero di caratteri da leggere.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri [`gcount`](#gcount)effettivamente letti, .

### <a name="remarks"></a>Osservazioni

Questa funzione di input non formattata estrae gli *elementi* dal flusso di input e li memorizza nella matrice *str*.

Questa funzione non attende l'input. Legge tutti i dati disponibili.

### <a name="example"></a>Esempio

```cpp
// basic_istream_readsome.cpp
// compile with: /EHsc /W3
#include <iostream>
using namespace std;

int main( )
{
   char c[10];
   int count = 5;

   cout << "Type 'abcdefgh': ";

   // cin.read blocks until user types input.
   // Note: cin::read is potentially unsafe, consider
   // using cin::_Read_s instead.
   cin.read(&c[0], 2);

   // Note: cin::readsome is potentially unsafe, consider
   // using cin::_Readsome_s instead.
   int n = cin.readsome(&c[0], count);  // C4996
   c[n] = 0;
   cout << n << " characters read" << endl;
   cout << c << endl;
}
```

## <a name="basic_istreamseekg"></a><a name="seekg"></a>basic_istream::seekg

Sposta la posizione di lettura in un flusso.

```cpp
basic_istream<Char_T, Tr>& seekg(pos_type pos);

basic_istream<Char_T, Tr>& seekg(off_type off, ios_base::seekdir way);
```

### <a name="parameters"></a>Parametri

*Pos*\
Posizione assoluta in cui spostare il puntatore di lettura.

*Fuori*\
Offset per spostare il puntatore di lettura rispetto al *modo*.

*Modo*\
Una delle enumerazioni [ios_base::seekdir](../standard-library/ios-base-class.md#seekdir).

### <a name="return-value"></a>Valore restituito

Il flusso (__: this__).

### <a name="remarks"></a>Osservazioni

La prima funzione membro esegue una ricerca assoluta, la seconda funzione membro esegue una ricerca relativa.

> [!NOTE]
> Non usare la seconda funzione membro con file di testo poiché C++ standard non supporta le ricerche relative nei file di testo.

Se [`fail`](../standard-library/basic-ios-class.md#fail) è false, la `newpos =` [`rdbuf`](../standard-library/basic-ios-class.md#rdbuf) `->` [`pubseekpos`](../standard-library/basic-streambuf-class.md#pubseekpos) `(pos)`prima funzione `pos_type` membro `newpos`chiama , per un oggetto temporaneo. Se `fail` è false, la `newpos = rdbuf->` [`pubseekoff`](../standard-library/basic-streambuf-class.md#pubseekoff) `( off, way)`seconda funzione chiama . In entrambi i `(off_type)newpos == (off_type)(-1)` casi, se (l'operazione `istr.` [`setstate`](../standard-library/basic-ios-class.md#setstate) `(failbit)`di posizionamento non riesce), la funzione chiama . Entrambe le funzioni restituiscono __: this__.

Se [`fail`](../standard-library/basic-ios-class.md#fail) è true, le funzioni membro non eseguono alcuna operazione.

### <a name="example"></a>Esempio

```cpp
// basic_istream_seekg.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main ( )
{
   using namespace std;
   ifstream file;
   char c, c1;

   file.open( "basic_istream_seekg.txt" );
   file.seekg(2);   // seek to position 2
   file >> c;
   cout << c << endl;
}
```

## <a name="basic_istreamsentry"></a><a name="sentry"></a>basic_istream::sentry

La classe annidata descrive un oggetto la cui dichiarazione struttura le funzioni di input formattato e non formattato.

```cpp
class sentry {
   public:
   explicit sentry(
      basic_istream<Char_T, Tr>& _Istr,
      bool _Noskip = false);
   operator bool() const;
   };
```

### <a name="remarks"></a>Osservazioni

Se `_Istr.` [`good`](../standard-library/basic-ios-class.md#good) è true, il costruttore:

- `_Istr.` [`tie`](../standard-library/basic-ios-class.md#tie) Chiama `->` se `_Istr.tie` non è un puntatore [`flush`](../standard-library/basic-ostream-class.md#flush) null.

- [`ws`](../standard-library/istream-functions.md#ws) `(_Istr)` Chiama effettivamente `_Istr.` [`flags`](../standard-library/ios-base-class.md#flags) `&` [`skipws`](../standard-library/ios-functions.md#skipws) se è diverso da zero.

Se dopo una `_Istr.good` tale preparazione, è `_Istr.` [`setstate`](../standard-library/basic-ios-class.md#setstate) `(failbit)`false, il costruttore chiama . In ogni caso, il costruttore `_Istr.good` archivia il valore restituito da in `status`. Una chiamata `operator bool` successiva per recapitare questo valore archiviato.

## <a name="basic_istreamswap"></a><a name="swap"></a>basic_istream::swap

Scambia il contenuto di due oggetti `basic_istream`.

```cpp
void swap(basic_istream& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Riferimento lvalue a un oggetto `basic_istream`.

### <a name="remarks"></a>Osservazioni

La funzione [`basic_ios::swap`](../standard-library/basic-ios-class.md#swap) `(right)`membro chiama . Inoltre, scambia il conteggio delle estrazioni con il conteggio di estrazione per *right*.

## <a name="basic_istreamsync"></a><a name="sync"></a>basic_istream::sync

Sincronizza il dispositivo di input associato del flusso con il buffer del flusso.

```cpp
int sync();
```

### <a name="return-value"></a>Valore restituito

Se [`rdbuf`](../standard-library/basic-ios-class.md#rdbuf) è un puntatore null, la funzione restituisce -1. In caso `rdbuf->` [`pubsync`](../standard-library/basic-streambuf-class.md#pubsync)contrario, chiama . Se tale chiamata restituisce -1, la funzione chiama [`setstate`](../standard-library/basic-ios-class.md#setstate) `(badbit)` e restituisce -1. In caso contrario, la funzione restituisce zero.

## <a name="basic_istreamtellg"></a><a name="tellg"></a>basic_istream::tellg

Segnala la posizione corrente all'interno del flusso.

```cpp
pos_type tellg();
```

### <a name="return-value"></a>Valore restituito

Posizione corrente all'interno del flusso.

### <a name="remarks"></a>Osservazioni

Se [`fail`](../standard-library/basic-ios-class.md#fail) è false, la [`rdbuf`](../standard-library/basic-ios-class.md#rdbuf) `->` [`pubseekoff`](../standard-library/basic-streambuf-class.md#pubseekoff) `(0, cur, in)`funzione membro restituisce . In caso contrario, viene restituito `pos_type(-1)`.

### <a name="example"></a>Esempio

```cpp
// basic_istream_tellg.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main()
{
    using namespace std;
    ifstream file;
    char c;
    streamoff i;

    file.open("basic_istream_tellg.txt");
    i = file.tellg();
    file >> c;
    cout << c << " " << i << endl;

    i = file.tellg();
    file >> c;
    cout << c << " " << i << endl;
}
```

## <a name="basic_istreamunget"></a><a name="unget"></a>basic_istream::unget

Reinserisce il carattere letto più di recente nel flusso.

```cpp
basic_istream<Char_T, Tr>& unget();
```

### <a name="return-value"></a>Valore restituito

Il flusso (__: this__).

### <a name="remarks"></a>Osservazioni

La funzione di [input non formattata](../standard-library/basic-istream-class.md) inserisce l'elemento precedente `rdbuf->` [`sungetc`](../standard-library/basic-streambuf-class.md#sungetc)nel flusso, se possibile, come se chiamando . Se [`rdbuf`](../standard-library/basic-ios-class.md#rdbuf) è un puntatore null `sungetc` o `traits_type::` [`eof`](../standard-library/basic-ios-class.md#eof)se la [`setstate`](../standard-library/basic-ios-class.md#setstate) `(badbit)`chiamata a restituisce , la funzione chiama . In ogni caso, restituisce __: this__.

Per informazioni `unget` su come [`basic_streambuf::sungetc`](../standard-library/basic-streambuf-class.md#sungetc)potrebbe non riuscire, vedere .

### <a name="example"></a>Esempio

```cpp
// basic_istream_unget.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

int main( )
{
   char c[10], c2;

   cout << "Type 'abc': ";
   c2 = cin.get( );
   cin.unget( );
   cin.getline( &c[0], 9 );
   cout << c << endl;
}
```

```Input
abc
```

```Output
Type 'abc': abc
abc
```

## <a name="see-also"></a>Vedere anche

[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
