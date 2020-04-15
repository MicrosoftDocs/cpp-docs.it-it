---
title: Classe basic_filebuf
ms.date: 11/04/2016
f1_keywords:
- fstream/std::basic_filebuf
- fstream/std::basic_filebuf::char_type
- fstream/std::basic_filebuf::int_type
- fstream/std::basic_filebuf::off_type
- fstream/std::basic_filebuf::pos_type
- fstream/std::basic_filebuf::traits_type
- fstream/std::basic_filebuf::close
- fstream/std::basic_filebuf::is_open
- fstream/std::basic_filebuf::open
- fstream/std::basic_filebuf::overflow
- fstream/std::basic_filebuf::pbackfail
- fstream/std::basic_filebuf::seekoff
- fstream/std::basic_filebuf::seekpos
- fstream/std::basic_filebuf::setbuf
- fstream/std::basic_filebuf::Swap
- fstream/std::basic_filebuf::sync
- fstream/std::basic_filebuf::uflow
- fstream/std::basic_filebuf::underflow
helpviewer_keywords:
- std::basic_filebuf [C++]
- std::basic_filebuf [C++], char_type
- std::basic_filebuf [C++], int_type
- std::basic_filebuf [C++], off_type
- std::basic_filebuf [C++], pos_type
- std::basic_filebuf [C++], traits_type
- std::basic_filebuf [C++], close
- std::basic_filebuf [C++], is_open
- std::basic_filebuf [C++], open
- std::basic_filebuf [C++], overflow
- std::basic_filebuf [C++], pbackfail
- std::basic_filebuf [C++], seekoff
- std::basic_filebuf [C++], seekpos
- std::basic_filebuf [C++], setbuf
- std::basic_filebuf [C++], Swap
- std::basic_filebuf [C++], sync
- std::basic_filebuf [C++], uflow
- std::basic_filebuf [C++], underflow
ms.assetid: 3196ba5c-bf38-41bd-9a95-70323ddfca1a
ms.openlocfilehash: 35bed08f2495c971df7f79f62e32b3ff68dfb3d2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376877"
---
# <a name="basic_filebuf-class"></a>Classe basic_filebuf

Viene descritto un buffer di flusso che controlla la trasmissione di elementi di tipo *Char_T*, i cui tratti sono determinati dalla classe *Tr*, da e verso una sequenza di elementi archiviati in un file esterno.

## <a name="syntax"></a>Sintassi

```cpp
template <class Char_T, class Tr = char_traits<Char_T>>
class basic_filebuf : public basic_streambuf<Char_T, Tr>
```

### <a name="parameters"></a>Parametri

*Char_T*\
L'elemento di base del buffer di file.

*Tr*\
I tratti dell'elemento di base del `char_traits<Char_T>`buffer di file (in genere ).

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive un buffer di flusso che controlla la trasmissione di elementi di tipo *Char_T*, i cui tratti di carattere sono determinati dalla classe *Tr*, da e verso una sequenza di elementi archiviati in un file esterno.

> [!NOTE]
> Gli oggetti `basic_filebuf` di tipo vengono creati con un `char_type` buffer interno di tipo __char\* __ indipendentemente dall'oggetto specificato dal parametro type *Char_T*. Ciò significa che una stringa Unicode (contenente **caratteri wchar_t)** verrà convertita in una stringa ANSI (contenente caratteri **char)** prima di essere scritta nel buffer interno. Per archiviare le stringhe Unicode nel buffer, creare un [`basic_streambuf::pubsetbuf`](../standard-library/basic-streambuf-class.md#pubsetbuf) `()` nuovo buffer di tipo **wchar_t** e impostarlo utilizzando il metodo . Per visualizzare un esempio che illustri questo comportamento, vedere di seguito.

Un oggetto `basic_filebuf<Char_T, Tr>` della classe archivia un `FILE` puntatore al file, che definisce l'oggetto che controlla il flusso associato a un file aperto. Archivia anche i puntatori a due facet di conversione di file usati dalle funzioni membro protetto [overflow](#overflow) e [underflow](#underflow). Per ulteriori informazioni, vedere [`basic_filebuf::open`](#open).

## <a name="example"></a>Esempio

L'esempio seguente illustra come forzare un oggetto di tipo `basic_filebuf<wchar_t>` per archiviare i caratteri Unicode nel buffer interno chiamando il metodo `pubsetbuf()`.

```cpp
// unicode_basic_filebuf.cpp
// compile with: /EHsc

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <memory.h>
#include <string.h>

#define IBUFSIZE 16

using namespace std;

void hexdump(const string& filename);

int main()
{
    wchar_t* wszHello = L"Hello World";
    wchar_t wBuffer[128];

    basic_filebuf<wchar_t> wOutFile;

    // Open a file, wcHello.txt, then write to it, then dump the
    // file's contents in hex
    wOutFile.open("wcHello.txt",
        ios_base::out | ios_base::trunc | ios_base::binary);
    if(!wOutFile.is_open())
    {
        cout << "Error Opening wcHello.txt\n";
        return -1;
    }
    wOutFile.sputn(wszHello, (streamsize)wcslen(wszHello));
    wOutFile.close();
    cout << "Hex Dump of wcHello.txt - note that output is ANSI chars:\n";
    hexdump(string("wcHello.txt"));

    // Open a file, wwHello.txt, then set the internal buffer of
    // the basic_filebuf object to be of type wchar_t, then write
    // to the file and dump the file's contents in hex
    wOutFile.open("wwHello.txt",
        ios_base::out | ios_base::trunc | ios_base::binary);
    if(!wOutFile.is_open())
    {
        cout << "Error Opening wwHello.txt\n";
        return -1;
    }
    wOutFile.pubsetbuf(wBuffer, (streamsize)128);
    wOutFile.sputn(wszHello, (streamsize)wcslen(wszHello));
    wOutFile.close();
    cout << "\nHex Dump of wwHello.txt - note that output is wchar_t chars:\n";
    hexdump(string("wwHello.txt"));

    return 0;
}

// dump contents of filename to stdout in hex
void hexdump(const string& filename)
{
    fstream ifile(filename.c_str(),
        ios_base::in | ios_base::binary);
    char *ibuff = new char[IBUFSIZE];
    char *obuff = new char[(IBUFSIZE*2)+1];
    int i;

    if(!ifile.is_open())
    {
        cout << "Cannot Open " << filename.c_str()
             << " for reading\n";
        return;
    }
    if(!ibuff || !obuff)
    {
        cout << "Cannot Allocate buffers\n";
        ifile.close();
        return;
    }

    while(!ifile.eof())
    {
        memset(obuff,0,(IBUFSIZE*2)+1);
        memset(ibuff,0,IBUFSIZE);
        ifile.read(ibuff,IBUFSIZE);

        // corner case where file is exactly a multiple of
        // 16 bytes in length
        if(ibuff[0] == 0 && ifile.eof())
            break;

        for(i = 0; i < IBUFSIZE; i++)
        {
            if(ibuff[i] >= ' ')
                obuff[i] = ibuff[i];
            else
                obuff[i] = '.';

            cout << setfill('0') << setw(2) << hex
                 << (int)ibuff[i] << ' ';
        }
        cout << "  " << obuff << endl;
    }
    ifile.close();
}
```

```Output
Hex Dump of wcHello.txt - note that output is ANSI chars:
48 65 6c 6c 6f 20 57 6f 72 6c 64 00 00 00 00 00   Hello World.....

Hex Dump of wwHello.txt - note that output is wchar_t chars:
48 00 65 00 6c 00 6c 00 6f 00 20 00 57 00 6f 00   H.e.l.l.o. .W.o.
72 00 6c 00 64 00 00 00 00 00 00 00 00 00 00 00   r.l.d...........
```

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_filebuf](#basic_filebuf)|Costruisce un oggetto di tipo `basic_filebuf`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Associa un nome di tipo al parametro di modello `Char_T`.|
|[int_type](#int_type)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|
|[off_type](#off_type)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|
|[pos_type](#pos_type)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|
|[traits_type](#traits_type)|Associa un nome di tipo al parametro di modello `Tr`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[Vicino](#close)|Chiude un file.|
|[is_open](#is_open)|Indica se un file è aperto.|
|[open](#open)|Apre un file.|
|[Overflow](#overflow)|Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.|
|[pbackfail](#pbackfail)|La funzione membro virtuale protetta prova a usare un elemento in un flusso di input, quindi renderlo l'elemento corrente (a cui punta il puntatore successivo).|
|[seekoff](#seekoff)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|
|[seekpos](#seekpos)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|
|[setbuf](#setbuf)|La funzione membro virtuale protetta esegue una particolare operazione per ogni buffer del flusso derivato.|
|[Swap](#swap)|Scambia il contenuto di questo `basic_filebuf` con il contenuto del parametro `basic_filebuf` fornito.|
|[sync](#sync)|Funzione virtuale protetta che prova a sincronizzare i flussi controllati con qualsiasi flusso esterno associato.|
|[uflow](../standard-library/basic-streambuf-class.md#uflow)|Funzione virtuale protetta per estrarre l'elemento corrente dal flusso di input.|
|[underflow](#underflow)|Funzione virtuale protetta per estrarre l'elemento corrente dal flusso di input.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<fstream>

**Spazio dei nomi:** std

## <a name="basic_filebufbasic_filebuf"></a><a name="basic_filebuf"></a>basic_filebuf::basic_filebuf

Costruisce un oggetto di tipo `basic_filebuf`.

```cpp
basic_filebuf();

basic_filebuf(basic_filebuf&& right);
```

### <a name="remarks"></a>Osservazioni

Il primo costruttore archivia un puntatore null in tutti i puntatori che controllano il buffer di input e il buffer di output. Archivia anche un puntatore null nel puntatore del file.

Il secondo costruttore inizializza l'oggetto con il contenuto di *right*, considerato come un riferimento rvalue.

## <a name="basic_filebufchar_type"></a><a name="char_type"></a>basic_filebuf::char_type

Associa un nome di tipo al parametro di modello `Char_T`.

```cpp
typedef Char_T char_type;
```

## <a name="basic_filebufclose"></a><a name="close"></a>basic_filebuf::chiudi

Chiude un file.

```cpp
basic_filebuf<Char_T, Tr> *close();
```

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce un puntatore null se il puntatore del file è un puntatore null.

### <a name="remarks"></a>Osservazioni

`close` chiama `fclose(fp)`. Se la funzione restituisce un valore diverso da zero, la funzione restituisce un puntatore null. In caso contrario, restituisce **this** per indicare che il file è stato chiuso.

Per un flusso estensivo, se si sono verificati inserimenti `streampos`dall'apertura [`overflow`](#overflow)del flusso o dall'ultima chiamata a , la funzione chiama . Inserisce inoltre qualsiasi sequenza necessaria per ripristinare lo stato `fac` di `fac.unshift` conversione iniziale, utilizzando il facet di conversione del file da chiamare in base alle esigenze. Ogni elemento `byte` prodotto di tipo **char** viene scritto nel `fp` flusso associato designato `fputc(byte, fp)`dal puntatore al file come se fosse stato effettuato da chiamate successive nel formato . Se la `fac.unshift` chiamata a o qualsiasi scrittura ha esito negativo, la funzione non riesce.

### <a name="example"></a>Esempio

Nell'esempio seguente si presuppone che due file nella directory corrente: *basic_filebuf_close.txt* (il contenuto è "testing") e *iotest.txt* (il contenuto è "ssss").

```cpp
// basic_filebuf_close.cpp
// compile with: /EHsc
#include <fstream>
#include <iostream>

int main() {
   using namespace std;
   ifstream file;
   basic_ifstream <wchar_t> wfile;
   char c;
   // Open and close with a basic_filebuf
   file.rdbuf()->open( "basic_filebuf_close.txt", ios::in );
   file >> c;
   cout << c << endl;
   file.rdbuf( )->close( );

   // Open/close directly
   file.open( "iotest.txt" );
   file >> c;
   cout << c << endl;
   file.close( );

   // open a file with a wide character name
   wfile.open( L"iotest.txt" );

   // Open and close a nonexistent with a basic_filebuf
   file.rdbuf()->open( "ziotest.txt", ios::in );
   cout << file.fail() << endl;
   file.rdbuf( )->close( );

   // Open/close directly
   file.open( "ziotest.txt" );
   cout << file.fail() << endl;
   file.close( );
}
```

```Output
t
s
0
1
```

## <a name="basic_filebufint_type"></a><a name="int_type"></a>basic_filebuf::int_type

Rende questo `basic_filebuf` tipo all'interno dell'ambito equivalente `Tr` al tipo dello stesso nome nell'ambito.

```cpp
typedef typename traits_type::int_type int_type;
```

## <a name="basic_filebufis_open"></a><a name="is_open"></a>basic_filebuf::is_open

Indica se un file è aperto.

```cpp
bool is_open() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il puntatore del file non è null.

### <a name="example"></a>Esempio

```cpp
// basic_filebuf_is_open.cpp
// compile with: /EHsc
#include <fstream>
#include <iostream>

int main( )
{
   using namespace std;
   ifstream file;
   cout << boolalpha << file.rdbuf( )->is_open( ) << endl;

   file.open( "basic_filebuf_is_open.cpp" );
   cout << file.rdbuf( )->is_open( ) << endl;
}
```

```Output
false
true
```

## <a name="basic_filebufoff_type"></a><a name="off_type"></a>basic_filebuf::off_type

Rende questo `basic_filebuf` tipo all'interno dell'ambito equivalente `Tr` al tipo dello stesso nome nell'ambito.

```cpp
typedef typename traits_type::off_type off_type;
```

## <a name="basic_filebufopen"></a><a name="open"></a>basic_filebuf::aprire

Apre un file.

```cpp
basic_filebuf<Char_T, Tr> *open(
    const char* filename,
    ios_base::openmode mode,
    int protection = (int)ios_base::_Openprot);

basic_filebuf<Char_T, Tr> *open(
    const char* filename,
    ios_base::openmode mode);

basic_filebuf<Char_T, Tr> *open(
    const wchar_t* filename,
    ios_base::openmode mode,
    int protection = (int)ios_base::_Openprot);

basic_filebuf<Char_T, Tr> *open(
    const wchar_t* filename,
    ios_base::openmode mode);
```

### <a name="parameters"></a>Parametri

*Filename*\
Nome del file da aprire.

*Modalità*\
Una delle enumerazioni [`ios_base::openmode`](../standard-library/ios-base-class.md#openmode)in .

*Protezione*\
La protezione predefinita per l'apertura dei file, equivalente al parametro *shflag* in [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

### <a name="return-value"></a>Valore restituito

Se il buffer è già aperto o se il puntatore del file è un puntatore null, la funzione restituisce un puntatore null. In caso contrario, restituisce **this**.

### <a name="remarks"></a>Osservazioni

La funzione membro apre il file [`fopen`](../c-runtime-library/reference/fopen-wfopen.md) `(filename, strmode)`con *nomenome file*, chiamando . `strmode`è determinato `mode & ~(` [`ate`](../standard-library/ios-base-class.md#openmode) `|` [`binary`](../standard-library/ios-base-class.md#openmode) `)`da :

- `ios_base::in``"r"` (aprire il file esistente per la lettura).

- [ios_base::out](../standard-library/ios-base-class.md#fmtflags) `ios_base::out | ios_base::trunc` o `"w"` diventa (tronca il file esistente o crea per la scrittura).

- `ios_base::out | app`(aprire `"a"` il file esistente per l'aggiunta di tutte le scritture).

- `ios_base::in | ios_base::out``"r+"` (aprire il file esistente per la lettura e la scrittura).

- `ios_base::in | ios_base::out | ios_base::trunc`(troncare `"w+"` il file esistente o creare per la lettura e la scrittura).

- `ios_base::in | ios_base::out | ios_base::app`(aprire `"a+"` il file esistente per la lettura e per l'aggiunta di tutte le scritture).

Se `mode & ios_base::binary` è diverso da zero, la funzione si aggiunge `b` a `strmode` per aprire un flusso binario anziché un flusso di testo. Viene quindi archiviato il `fopen` valore restituito `fp`da nel puntatore del file. Se `mode & ios_base::ate` è diverso da zero e il puntatore del `fseek(fp, 0, SEEK_END)` file non è un puntatore null, la funzione chiama per posizionare il flusso alla fine del file. Se tale operazione di posizionamento [`close`](#close) `(fp)` ha esito negativo, la funzione chiama e archivia un puntatore null nel puntatore del file.

Se il puntatore del file non è un puntatore `use_facet<codecvt<Char_T, char, traits_type::` [`state_type`](../standard-library/char-traits-struct.md#state_type) `> >(` [`getloc`](../standard-library/basic-streambuf-class.md#getloc) `)`null, la funzione determina il facet di conversione del file: , per l'utilizzo da [parte di underflow](#underflow) e [overflow](#overflow).

Se il puntatore del file è un puntatore null, la funzione restituisce un puntatore null. In caso contrario, restituisce **this**.

### <a name="example"></a>Esempio

Vedere [`basic_filebuf::close`](#close) per un `open`esempio che utilizza .

## <a name="basic_filebufoperator"></a><a name="op_eq"></a>basic_filebuf::operatore

Assegna il contenuto di questo oggetto buffer del flusso. Si tratta di un'assegnazione di spostamento che coinvolge un rvalue che non lascia una copia.

```cpp
basic_filebuf& operator=(basic_filebuf&& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Riferimento rvalue a un oggetto [basic_filebuf](../standard-library/basic-filebuf-class.md).

### <a name="return-value"></a>Valore restituito

Restituisce __l'opzione this__.

### <a name="remarks"></a>Osservazioni

L'operatore membro sostituisce il contenuto dell'oggetto utilizzando il contenuto di *right*, considerato come un riferimento rvalue. Per ulteriori informazioni, vedere [dichiaratore di riferimento Rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="basic_filebufoverflow"></a><a name="overflow"></a>basic_filebuf::overflow

Chiamato quando viene inserito un nuovo carattere in un buffer completo.

```cpp
virtual int_type overflow(int_type _Meta = traits_type::eof);
```

### <a name="parameters"></a>Parametri

*_Meta*\
Carattere da inserire nel `traits_type::eof`buffer o .

### <a name="return-value"></a>Valore restituito

Se la funzione non riesce, restituisce `traits_type::eof`. In caso `traits_type::` [`not_eof`](../standard-library/char-traits-struct.md#not_eof) `(_Meta)`contrario, restituisce .

### <a name="remarks"></a>Osservazioni

Se `_Meta != traits_type::` [`eof`](../standard-library/char-traits-struct.md#eof), la funzione membro virtuale `ch = traits_type::` [`to_char_type`](../standard-library/char-traits-struct.md#to_char_type) `(_Meta)` protetta tenta di inserire l'elemento nel buffer di output. Questa operazione può essere eseguita in vari modi:

- Se è disponibile una posizione di scrittura, può archiviare l'elemento in tale posizione e incrementare il puntatore successivo per il buffer di output.

- Può rendere disponibile una posizione di scrittura allocando spazio di archiviazione nuovo o aggiuntivo per il buffer di output.

- Può convertire qualsiasi output in sospeso nel `ch`buffer di output, `fac` seguito `fac.out` da , utilizzando il facet di conversione del file per chiamare in base alle esigenze. Ogni elemento `ch` prodotto di tipo *char* viene scritto nel `fp` flusso associato designato `fputc(ch, fp)`dal puntatore al file come se fosse stato effettuato da chiamate successive nel formato . Se un'operazione di conversione o scrittura ha esito negativo, la funzione non viene eseguita.

## <a name="basic_filebufpbackfail"></a><a name="pbackfail"></a>basic_filebuf::pbackfail

Tenta di reinserire un elemento in un flusso di input, quindi lo imposta come elemento corrente (a cui punta il puntatore successivo).

```cpp
virtual int_type pbackfail(int_type _Meta = traits_type::eof);
```

### <a name="parameters"></a>Parametri

*_Meta*\
Carattere da inserire nel buffer o `traits_type::eof`.

### <a name="return-value"></a>Valore restituito

Se la funzione non riesce, restituisce `traits_type::eof`. In caso `traits_type::` [`not_eof`](../standard-library/char-traits-struct.md#not_eof) `(_Meta)`contrario, restituisce .

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta reinserisce un elemento nel buffer di input e quindi lo imposta come elemento corrente (a cui punta il puntatore successivo). Se `_Meta == traits_type::` [`eof`](../standard-library/char-traits-struct.md#eof), l'elemento da reinserire è effettivamente quello già presente nel flusso prima dell'elemento corrente. In caso contrario, `ch = traits_type::` [`to_char_type`](../standard-library/char-traits-struct.md#to_char_type) `(_Meta)`tale elemento viene sostituito da . La funzione può reinserire un elemento in vari modi:

- Se `putback` è disponibile una posizione e l'elemento `ch`archiviato in tale posizione è uguale a , può diminuire il puntatore successivo per il buffer di input.

- Se la funzione `putback` può rendere disponibile una posizione, può farlo, impostare il `ch` puntatore successivo in modo che punti a tale posizione e memorizzarlo.

- Se la funzione può reinserire un elemento nel flusso di input, `ungetc` può farlo, ad esempio chiamando un elemento di tipo **char**.

## <a name="basic_filebufpos_type"></a><a name="pos_type"></a>basic_filebuf:tipo:p

Rende questo `basic_filebuf` tipo all'interno dell'ambito equivalente `Tr` al tipo dello stesso nome nell'ambito.

```cpp
typedef typename traits_type::pos_type pos_type;
```

## <a name="basic_filebufseekoff"></a><a name="seekoff"></a>basic_filebuf::seekoff

Tenta di modificare le posizioni correnti per i flussi di controllati.

```cpp
virtual pos_type seekoff(
    off_type _Off,
    ios_base::seekdir _Way,
    ios_base::openmode _Which = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

*_Off*\
La posizione di ricerca rispetto a *_Way*.

*_Way*\
Punto iniziale per le operazioni di offset. Vedere [seekdir](../standard-library/ios-base-class.md#seekdir) per i valori possibili.

*_Which*\
Specifica la modalità per la posizione del puntatore. L'impostazione predefinita consente di modificare le posizioni di lettura e scrittura.

### <a name="return-value"></a>Valore restituito

Restituisce la nuova posizione o una posizione di flusso non valida.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta tenta di modificare le posizioni correnti per i flussi controllati. Per un oggetto [`basic_filebuf`](../standard-library/basic-filebuf-class.md) `<Char_T, Tr>`di classe , una posizione del `fpos_t`flusso può essere rappresentata da un oggetto di tipo , che archivia un offset e tutte le informazioni sullo stato necessarie per analizzare un flusso wide. L'offset zero si riferisce al primo elemento del flusso. Un oggetto di [`pos_type`](../standard-library/basic-streambuf-class.md#pos_type) tipo archivia almeno un `fpos_t` oggetto.

Per un file aperto per la lettura e la scrittura, entrambi i flussi di input e output vengono posizionati in parallelo. Per passare dall'inserimento all'estrazione [`pubseekoff`](../standard-library/basic-streambuf-class.md#pubseekoff) e [`pubseekpos`](../standard-library/basic-streambuf-class.md#pubseekpos)dall'estrazione, è necessario chiamare uno o più . Le `pubseekoff` chiamate a `seekoff`(e quindi a ) presentano varie limitazioni per [i flussi](../c-runtime-library/text-and-binary-streams.md)di testo, [i flussi binari](../c-runtime-library/text-and-binary-streams.md)e i [flussi wide](../c-runtime-library/byte-and-wide-streams.md).

Se il `fp` puntatore del file è un puntatore null, la funzione ha esito negativo. In caso contrario, tenta di `fseek(fp, _Off, _Way)`modificare la posizione del flusso chiamando . Se la funzione ha esito positivo e la posizione `fposn` risultante può essere determinata chiamando `fgetpos(fp, &fposn)`, la funzione ha esito positivo. Se la funzione ha esito positivo, restituisce un valore di tipo `pos_type` contenente `fposn`. In caso contrario, restituisce una posizione di flusso non valida.

## <a name="basic_filebufseekpos"></a><a name="seekpos"></a>basic_filebuf::seekpos

Tenta di modificare le posizioni correnti per i flussi di controllati.

```cpp
virtual pos_type seekpos(
    pos_type _Sp,
    ios_base::openmode _Which = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

*_Sp*\
Posizione da cercare.

*_Which*\
Specifica la modalità per la posizione del puntatore. L'impostazione predefinita consente di modificare le posizioni di lettura e scrittura.

### <a name="return-value"></a>Valore restituito

Se il `fp` puntatore del file è un puntatore null, la funzione ha esito negativo. In caso contrario, tenta di `fsetpos(fp, &fposn)`modificare `fposn` la `fpos_t` posizione `pos`del flusso chiamando , dove è l'oggetto archiviato in . Se tale funzione ha esito positivo, la funzione restituisce `pos`. In caso contrario, restituisce una posizione di flusso non valida. Per stabilire se la posizione del flusso non è valida, confrontare il valore restituito con `pos_type(off_type(-1))`.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta tenta di modificare le posizioni correnti per i flussi controllati. Per un oggetto [`basic_filebuf`](../standard-library/basic-filebuf-class.md) `<Char_T, Tr>`di classe , una posizione del `fpos_t`flusso può essere rappresentata da un oggetto di tipo , che archivia un offset e tutte le informazioni sullo stato necessarie per analizzare un flusso wide. L'offset zero si riferisce al primo elemento del flusso. (Un oggetto di tipo `pos_type` archivia almeno un oggetto `fpos_t`).

Per un file aperto per la lettura e la scrittura, entrambi i flussi di input e output vengono posizionati in parallelo. Per passare dall'inserimento all'estrazione [`pubseekoff`](../standard-library/basic-streambuf-class.md#pubseekoff) e [`pubseekpos`](../standard-library/basic-streambuf-class.md#pubseekpos)dall'estrazione, è necessario chiamare uno o più . Le `pubseekoff` chiamate a `seekoff`(e a ) hanno varie limitazioni per i flussi di testo, i flussi binari e i flussi wide.

Per un flusso wide, se si sono verificati inserimenti dall'apertura del flusso o dall'ultima chiamata a `streampos`, la funzione chiama [overflow](#overflow). Inserisce inoltre qualsiasi sequenza necessaria per ripristinare lo stato `fac` di `fac.unshift` conversione iniziale, utilizzando il facet di conversione del file da chiamare in base alle esigenze. Ogni elemento `byte` prodotto di tipo **char** viene scritto nel `fp` flusso associato designato `fputc(byte, fp)`dal puntatore al file come se fosse stato effettuato da chiamate successive nel formato . Se la `fac.unshift` chiamata a o qualsiasi scrittura ha esito negativo, la funzione non riesce.

## <a name="basic_filebufsetbuf"></a><a name="setbuf"></a>basic_filebuf::setbuf

Esegue una particolare operazione in ogni buffer del flusso derivato.

```cpp
virtual basic_streambuf<Char_T, Tr> *setbuf(
    char_type* _Buffer,
    streamsize count);
```

### <a name="parameters"></a>Parametri

*_Buffer*\
Puntatore a un buffer.

*Conteggio*\
Dimensioni del buffer.

### <a name="return-value"></a>Valore restituito

La funzione membro protetto restituisce zero se il puntatore del file `fp` è un puntatore null.

### <a name="remarks"></a>Osservazioni

`setbuf`chiama `setvbuf( fp, (char*) _Buffer, _IOFBF, count * sizeof( Char_T))` per offrire `count` la matrice di elementi che iniziano da *_Buffer* come buffer per il flusso. Se la funzione restituisce un valore diverso da zero, la funzione restituisce un puntatore null. In caso contrario, restituisce **this** per il successo di segnale.

## <a name="basic_filebufswap"></a><a name="swap"></a>basic_filebuf::swap

Scambia il contenuto di questo `basic_filebuf` con il contenuto dell'oggetto `basic_filebuf` fornito.

```cpp
void swap(basic_filebuf& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Un riferimento lvalue `basic_filebuf`a un altro oggetto .

## <a name="basic_filebufsync"></a><a name="sync"></a>basic_filebuf::sync

Tenta di sincronizzare i flussi controllati con qualsiasi flusso esterno associato.

```cpp
virtual int sync();
```

### <a name="return-value"></a>Valore restituito

Restituisce zero se `fp` il puntatore del file è un puntatore null. In caso contrario, restituisce [overflow](#overflow) zero `fflush(fp)` solo se le chiamate a overflow e riescono a scaricare qualsiasi output in sospeso nel flusso.

## <a name="basic_filebuftraits_type"></a><a name="traits_type"></a>basic_filebuf::traits_type

Associa un nome di tipo al parametro di modello `Tr`.

```cpp
typedef Tr traits_type;
```

## <a name="basic_filebufunderflow"></a><a name="underflow"></a>basic_filebuf::underflow

Estrae l'elemento corrente dal flusso di input.

```cpp
virtual int_type underflow();
```

### <a name="return-value"></a>Valore restituito

Se la funzione non riesce, restituisce `traits_type::` [`eof`](../standard-library/char-traits-struct.md#eof). In caso `ch`contrario, restituisce , convertito come descritto nella sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta `ch` tenta di estrarre l'elemento `traits_type::` [`to_int_type`](../standard-library/char-traits-struct.md#to_int_type) `(ch)`corrente dal flusso di input e restituire l'elemento come . Questa operazione può essere eseguita in vari modi:

- Se è disponibile una posizione `ch` di lettura, accetta come elemento memorizzato nella posizione di lettura e fa avanzare il puntatore successivo per il buffer di input.

- Può leggere uno o più elementi di tipo **char**, `fgetc(fp)`come se da `ch` chiamate `Char_T` successive del form `fac` , `fac.in` e convertirli in un elemento di tipo utilizzando il facet di conversione del file per chiamare in base alle esigenze. Se un'operazione di lettura o conversione ha esito negativo, la funzione non viene eseguita.

## <a name="see-also"></a>Vedere anche

[\<>fstream](../standard-library/fstream.md)\
[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
