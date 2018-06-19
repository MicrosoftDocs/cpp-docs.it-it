---
title: Classe basic_filebuf | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 65dc91bebf55c617d5c18d86d308558e57cbd3c3
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33848866"
---
# <a name="basicfilebuf-class"></a>Classe basic_filebuf

Descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`, verso e da una sequenza di elementi archiviati in un file esterno.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_filebuf : public basic_streambuf<Elem, Tr>
```

### <a name="parameters"></a>Parametri

`Elem` Elemento di base del buffer di file.

`Tr` I tratti dell'elemento di base del buffer di file (in genere `char_traits` <  `Elem`>).

## <a name="remarks"></a>Note

La classe modello descrive un buffer del flusso che controlla la trasmissione di elementi di tipo `Elem`, i cui tratti di carattere sono determinati dalla classe `Tr`, verso e da una sequenza di elementi archiviati in un file esterno.

> [!NOTE]
> Gli oggetti di tipo `basic_filebuf` vengono creati con un buffer interno di tipo `char *` indipendentemente dal `char_type` specificato dal parametro di tipo `Elem`. Ciò significa che una stringa Unicode (contenente i caratteri `wchar_t`) verrà convertita in una stringa ANSI (contenente i caratteri `char`) prima che venga scritta nel buffer interno. Per archiviare stringhe Unicode nel buffer, creare un nuovo buffer di tipo `wchar_t` e impostarlo usando il metodo [basic_streambuf::pubsetbuf](../standard-library/basic-streambuf-class.md#pubsetbuf)`()`. Per visualizzare un esempio che illustri questo comportamento, vedere di seguito.

Un oggetto della classe `basic_filebuf`< `Elem`, `Tr`> archivia un puntatore di file che definisce l'oggetto `FILE` che controlla il flusso associato a un file aperto. Archivia anche i puntatori a due facet di conversione di file usati dalle funzioni membro protetto [overflow](#overflow) e [underflow](#underflow). Per altre informazioni, vedere [basic_filebuf::open](#open).

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

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Associa un nome di tipo al parametro di modello `Elem`.|
|[int_type](#int_type)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|
|[off_type](#off_type)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|
|[pos_type](#pos_type)|Rende questo tipo all'interno dell'ambito di `basic_filebuf` equivalente al tipo con lo stesso nome nell'ambito `Tr`.|
|[traits_type](#traits_type)|Associa un nome di tipo al parametro di modello `Tr`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[close](#close)|Chiude un file.|
|[is_open](#is_open)|Indica se un file è aperto.|
|[open](#open)|Apre un file.|
|[overflow](#overflow)|Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.|
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

## <a name="basic_filebuf"></a>  basic_filebuf::basic_filebuf

Costruisce un oggetto di tipo `basic_filebuf`.

```cpp
basic_filebuf();

basic_filebuf(basic_filebuf&& right);
```

### <a name="remarks"></a>Note

Il primo costruttore archivia un puntatore null in tutti i puntatori che controllano il buffer di input e il buffer di output. Archivia anche un puntatore null nel puntatore del file.

Il secondo costruttore inizializza l'oggetto con il contenuto di `right`, considerato come riferimento rvalue.

## <a name="char_type"></a>  basic_filebuf::char_type

Associa un nome di tipo al parametro di modello **Elem**.

```cpp
typedef Elem char_type;
```

## <a name="close"></a>  basic_filebuf::close

Chiude un file.

```cpp
basic_filebuf<Elem, Tr> *close();
```

### <a name="return-value"></a>Valore restituito

La funzione membro restituisce un puntatore null se il puntatore del file è un puntatore null.

### <a name="remarks"></a>Note

**close** chiama `fclose`( **fp**). Se la funzione restituisce un valore diverso da zero, la funzione restituisce un puntatore null. In caso contrario, restituisce **this** per indicare che il file è stato chiuso.

Per un flusso wide, se si sono verificati inserimenti dall'apertura del flusso o dall'ultima chiamata a `streampos`, la funzione chiama [overflow](#overflow). La funzione inserisce anche qualsiasi sequenza necessaria per ripristinare lo stato di conversione iniziale usando il facet di conversione file **fac** per chiamare **fac.unshift** quando necessario. Ogni elemento **byte** di tipo `char` prodotto viene scritto nel flusso associato designato dal puntatore di file **fp** come tramite le chiamate successive del form `fputc`( **byte**, **fp**). Se la chiamata a **fac.unshift** o la scrittura ha esito negativo, la funzione non viene eseguita.

### <a name="example"></a>Esempio

L'esempio seguente presuppone la presenza di due file nella directory corrente: basic_filebuf_close.txt (il contenuto è "testing") e iotest.txt (il contenuto è "ssss").

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

## <a name="int_type"></a>  basic_filebuf::int_type

Rende questo tipo all'interno dell'ambito di basic_filebuf equivalente al tipo con lo stesso nome nell'ambito **Tr**.

```cpp
typedef typename traits_type::int_type int_type;
```

## <a name="is_open"></a>  basic_filebuf::is_open

Indica se un file è aperto.

```cpp
bool is_open() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il puntatore del file non è un puntatore null.

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

## <a name="off_type"></a>  basic_filebuf::off_type

Rende questo tipo all'interno dell'ambito di basic_filebuf equivalente al tipo con lo stesso nome nell'ambito **Tr**.

```cpp
typedef typename traits_type::off_type off_type;
```

## <a name="open"></a>  basic_filebuf::open

Apre un file.

```cpp
basic_filebuf<Elem, Tr> *open(
    const char* _Filename,
    ios_base::openmode _Mode,
    int _Prot = (int)ios_base::_Openprot);

basic_filebuf<Elem, Tr> *open(
    const char* _Filename,
    ios_base::openmode _Mode);

basic_filebuf<Elem, Tr> *open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode,
    int _Prot = (int)ios_base::_Openprot);

basic_filebuf<Elem, Tr> *open(
    const wchar_t* _Filename,
    ios_base::openmode _Mode);
```

### <a name="parameters"></a>Parametri

`_Filename` Il nome del file da aprire.

`_Mode` Una delle enumerazioni negli [ios_base:: OpenMode](../standard-library/ios-base-class.md#openmode).

`_Prot` Il file predefinito aprendo protezione, equivalente ai `shflag` parametro nel [fsopen, wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md).

### <a name="return-value"></a>Valore restituito

Se il puntatore del file è un puntatore null, la funzione restituisce un puntatore null. In caso contrario, restituisce **this**.

### <a name="remarks"></a>Note

La funzione membro apre il file con nome file *filename* chiamando [fopen](../c-runtime-library/reference/fopen-wfopen.md)( *filename*, **strmode**). **strmode** è determinato da **mode &**~( [ate](../standard-library/ios-base-class.md#openmode) & &#124; [binary](../standard-library/ios-base-class.md#openmode)):

- **ios_base::in** diventa **"r"** (aprire il file esistente per la lettura).

- [ios_base::out](../standard-library/ios-base-class.md#fmtflags) o **ios_base::out &#124; ios_base::trunc** diventa **"w"** (troncare il file esistente o creare per la scrittura).

- **ios_base::out &#124; app** diventa **"a"** (aprire il file esistente per aggiungere tutte le operazioni di scrittura).

- **ios_base::in &#124; ios_base::out** diventa **"r+"** (aprire il file esistente per la lettura e la scrittura).

- **ios_base::in &#124; ios_base::out &#124; ios_base::trunc** diventa **"w+"** (troncare il file esistente o creare per la lettura e la scrittura).

- **ios_base::in &#124; ios_base::out &#124; ios_base::app** diventa **"a+"** (aprire il file esistente per la lettura e per aggiungere tutte le operazioni di scrittura).

Se **mode & ios_base::binary** è diverso da zero, la funzione aggiunge **b** a **strmode** per aprire un flusso binario anziché un flusso di testo. Quindi archivia il valore restituito da `fopen` nel puntatore del file **fp**. Se **mode & ios_base::ate** è diverso da zero e il puntatore del file non è un puntatore null, la funzione chiama `fseek`( **fp**, 0, `SEEK_END`) per posizionare il flusso alla fine del file. Se l'operazione di posizionamento non riesce, la funzione chiama [close](#close)( **fp**) e archivia un puntatore null nel puntatore del file.

Se il puntatore del file non è un puntatore null, la funzione determina il facet di conversione file: `use_facet`< `codecvt`< **Elem**, `char`, **traits_type::**[state_type](../standard-library/char-traits-struct.md#state_type)> >( [getloc](../standard-library/basic-streambuf-class.md#getloc)) usato da [underflow](#underflow) e [overflow](#overflow).

Se il puntatore del file è un puntatore null, la funzione restituisce un puntatore null. In caso contrario, restituisce **this**.

### <a name="example"></a>Esempio

Vedere [basic_filebuf::close](#close) per un esempio di utilizzo di **open**.

## <a name="op_eq"></a>  basic_filebuf::operator=

Assegna il contenuto di questo oggetto buffer del flusso. Si tratta di un'assegnazione di spostamento che implica un riferimento rvalue che non lascia alcuna copia.

```cpp
basic_filebuf& operator=(basic_filebuf&& right);
```

### <a name="parameters"></a>Parametri

`right` Un riferimento rvalue a un [basic_filebuf](../standard-library/basic-filebuf-class.md) oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce *this.

### <a name="remarks"></a>Note

L'operatore del membro sostituisce i contenuti dell'oggetto usando i contenuti di `right`, gestiti come un riferimento rvalue. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="overflow"></a>  basic_filebuf::overflow

Chiamato quando viene inserito un nuovo carattere in un buffer completo.

```cpp
virtual int_type overflow(int_type _Meta = traits_type::eof);
```

### <a name="parameters"></a>Parametri

`_Meta` Carattere da inserire nel buffer o **traits_type::eof**.

### <a name="return-value"></a>Valore restituito

Se la funzione non può essere eseguita correttamente, restituisce **traits_type::eof**. In caso contrario, restituisce **traits_type::**[not_eof](../standard-library/char-traits-struct.md#not_eof)(_ *Meta*).

### <a name="remarks"></a>Note

Se _ * Meta ***! = traits_type::**[eof](../standard-library/char-traits-struct.md#eof), la funzione membro virtuale protetta incentrati inserire l'elemento **ch = traits_type::**[to_char_type](../standard-library/char-traits-struct.md#to_char_type) (\_ *Meta*) nel buffer di output. Questa operazione può essere eseguita in vari modi:

- Se è disponibile una posizione di scrittura, la funzione può archiviare l'elemento in tale posizione e incrementare il puntatore successivo per il buffer di output.

- Una posizione di scrittura può essere resa disponibile allocando spazio di archiviazione nuovo o aggiuntivo per il buffer di output.

- la funzione può convertire qualsiasi output in sospeso nel buffer di output, seguito da **ch**, usando il facet di conversione file **fac** per chiamare **fac.out** quando necessario. Ogni elemento `ch` di tipo *char* prodotto viene scritto nel flusso associato designato dal puntatore di file **fp** come tramite le chiamate successive del form `fputc`( **ch**, **fp**). Se un'operazione di conversione o scrittura ha esito negativo, la funzione non viene eseguita.

## <a name="pbackfail"></a>  basic_filebuf::pbackfail

Tenta di reinserire un elemento in un flusso di input, quindi lo imposta come elemento corrente (a cui punta il puntatore successivo).

```cpp
virtual int_type pbackfail(int_type _Meta = traits_type::eof);
```

### <a name="parameters"></a>Parametri

`_Meta` Carattere da inserire nel buffer, oppure **traits_type::eof**.

### <a name="return-value"></a>Valore restituito

Se la funzione non può essere eseguita correttamente, restituisce **traits_type::eof**. In caso contrario, restituisce **traits_type::**[not_eof](../standard-library/char-traits-struct.md#not_eof)(_ *Meta*).

### <a name="remarks"></a>Note

La funzione membro virtuale protetta reinserisce un elemento nel buffer di input e quindi lo imposta come elemento corrente (a cui punta il puntatore successivo). Se _ *Meta* **== traits_type::**[eof](../standard-library/char-traits-struct.md#eof), l'elemento da reinserire è effettivamente quello già presente nel flusso prima dell'elemento corrente. In caso contrario, l'elemento viene sostituito da **ch = traits_type::**[to_char_type](../standard-library/char-traits-struct.md#to_char_type)(\_ *Meta*). La funzione può reinserire un elemento in vari modi:

- Se è disponibile una posizione di reinserimento e l'elemento archiviato in tale posizione risulta uguale a **ch**, può diminuire il puntatore successivo per il buffer di input.

- Se può rendere disponibile una posizione `putback`, la funzione può quindi impostare il puntatore successivo in modo che punti a quella posizione e archiviare **ch** nella posizione.

- Se la funzione può inserire un elemento in coda al flusso di input, è possibile farlo, ad esempio chiamando `ungetc` per un elemento di tipo `char`.

## <a name="pos_type"></a>  basic_filebuf::pos_type

Rende questo tipo all'interno dell'ambito di basic_filebuf equivalente al tipo con lo stesso nome nell'ambito **Tr**.

```cpp
typedef typename traits_type::pos_type pos_type;
```

## <a name="seekoff"></a>  basic_filebuf::seekoff

Tenta di modificare le posizioni correnti per i flussi di controllati.

```cpp
virtual pos_type seekoff(off_type _Off,
    ios_base::seekdir _Way,
    ios_base::openmode _Which = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

`_Off` La posizione per ricercare per relativo a `_Way`.

`_Way` Il punto di partenza per le operazioni di offset. Vedere [seekdir](../standard-library/ios-base-class.md#seekdir) per i valori possibili.

`_Which` Specifica la modalità per la posizione del puntatore. L'impostazione predefinita consente di modificare le posizioni di lettura e scrittura.

### <a name="return-value"></a>Valore restituito

Restituisce la nuova posizione o una posizione di flusso non valida.

### <a name="remarks"></a>Note

La funzione membro virtuale protetto tenta di modificare le posizioni correnti per i flussi controllati. Per un oggetto di classe [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`, `Tr`>, una posizione di flusso può essere rappresentata da un oggetto di tipo `fpos_t` che archivia un offset e le informazioni sullo stato necessari per l'analisi di un flusso wide. L'offset zero designa il primo elemento del flusso. (Un oggetto di tipo [pos_type](../standard-library/basic-streambuf-class.md#pos_type) archivia almeno un oggetto `fpos_t`).

Per un file aperto per la lettura e la scrittura, entrambi i flussi di input e output vengono posizionati in parallelo. Per passare dall'inserimento e all'estrazione e viceversa, è necessario chiamare [pubseekoff](../standard-library/basic-streambuf-class.md#pubseekoff) o [pubseekpos](../standard-library/basic-streambuf-class.md#pubseekpos). Le chiamate a `pubseekoff`, e di conseguenza a `seekoff`, presentano diverse limitazioni per i [flussi di testo](../c-runtime-library/text-and-binary-streams.md), i [flussi binari](../c-runtime-library/text-and-binary-streams.md) e i [flussi wide](../c-runtime-library/byte-and-wide-streams.md).

Se il puntatore di file **fp** è un puntatore null, la funzione non viene eseguita. In caso contrario, la funzione tenta di modificare la posizione del flusso chiamando `fseek`( **fp**, `_Off`, `_Way`). Se tale funzione ha esito positivo e la posizione risultante **fposn** può essere determinata chiamando `fgetpos`( **fp**, **&fposn**), la funzione viene eseguita. Se tale funzione ha esito positivo, restituisce un valore di tipo **pos_type** contenente **fposn**. In caso contrario, restituisce una posizione di flusso non valida.

## <a name="seekpos"></a>  basic_filebuf::seekpos

Tenta di modificare le posizioni correnti per i flussi di controllati.

```cpp
virtual pos_type seekpos(pos_type _Sp, ios_base::openmode _Which = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

`_Sp` La posizione per ricercare per.

`_Which` Specifica la modalità per la posizione del puntatore. L'impostazione predefinita consente di modificare le posizioni di lettura e scrittura.

### <a name="return-value"></a>Valore restituito

Se il puntatore di file **fp** è un puntatore null, la funzione non viene eseguita. In caso contrario, la funzione tenta di modificare la posizione del flusso chiamando `fsetpos`( **fp**, **&fposn**), dove **fposn** è l'oggetto `fpos_t` archiviato in `pos`. Se tale funzione ha esito positivo, la funzione restituisce `pos`. In caso contrario, restituisce una posizione di flusso non valida. Per stabilire se la posizione del flusso non è valida, confrontare il valore restituito con `pos_type(off_type(-1))`.

### <a name="remarks"></a>Note

La funzione membro virtuale protetto tenta di modificare le posizioni correnti per i flussi controllati. Per un oggetto di classe [basic_filebuf](../standard-library/basic-filebuf-class.md)\< **Elem**, **Tr**>, una posizione di flusso può essere rappresentata da un oggetto di tipo `fpos_t` che archivia un offset e le informazioni sullo stato necessari per l'analisi di un flusso wide. L'offset zero designa il primo elemento del flusso. (Un oggetto di tipo `pos_type` archivia almeno un oggetto `fpos_t`).

Per un file aperto per la lettura e la scrittura, entrambi i flussi di input e output vengono posizionati in parallelo. Per passare dall'inserimento e all'estrazione e viceversa, è necessario chiamare [pubseekoff](../standard-library/basic-streambuf-class.md#pubseekoff) o [pubseekpos](../standard-library/basic-streambuf-class.md#pubseekpos). Le chiamate a `pubseekoff`, e di conseguenza a `seekoff`, presentano diverse limitazioni per i flussi di testo, i flussi binari e i flussi wide.

Per un flusso wide, se si sono verificati inserimenti dall'apertura del flusso o dall'ultima chiamata a `streampos`, la funzione chiama [overflow](#overflow). La funzione inserisce anche qualsiasi sequenza necessaria per ripristinare lo stato di conversione iniziale usando il facet di conversione file **fac** per chiamare **fac**`.unshift` quando necessario. Ogni elemento **byte** di tipo `char` prodotto viene scritto nel flusso associato designato dal puntatore di file **fp** come tramite le chiamate successive del form `fputc`( **byte**, **fp**). Se la chiamata a **fac.unshift** o la scrittura ha esito negativo, la funzione non viene eseguita.

## <a name="setbuf"></a>  basic_filebuf::setbuf

Esegue una particolare operazione in ogni buffer del flusso derivato.

```cpp
virtual basic_streambuf<Elem, Tr> *setbuf(
    char_type* _Buffer,
    streamsize count);
```

### <a name="parameters"></a>Parametri

`_Buffer` Puntatore a un buffer.

`count` Dimensione del buffer.

### <a name="return-value"></a>Valore restituito

La funzione membro protetto restituisce zero se il puntatore del file `fp` è un puntatore null.

### <a name="remarks"></a>Note

`setbuf` chiama `setvbuf`( **fp**, ( `char` \*) `_Buffer`, `_IOFBF`, `count` \* `sizeof` ( **Elem**) ) per offrire la matrice di elementi `count` che ha inizio da _ *Buffer* come buffer per il flusso. Se la funzione restituisce un valore diverso da zero, la funzione restituisce un puntatore null. In caso contrario, restituisce **this** per il successo di segnale.

## <a name="swap"></a>  basic_filebuf::swap

Scambia il contenuto di questo `basic_filebuf` con il contenuto dell'oggetto `basic_filebuf` fornito.

```cpp
void swap(basic_filebuf& right);
```

### <a name="parameters"></a>Parametri

`right` Un' `lvalue` riferimento a un altro `basic_filebuf`.

## <a name="sync"></a>  basic_filebuf::sync

Tenta di sincronizzare i flussi controllati con qualsiasi flusso esterno associato.

```cpp
virtual int sync();
```

### <a name="return-value"></a>Valore restituito

Restituisce zero se il puntatore di file **fp** è un puntatore null. In caso contrario, restituisce zero solo se le chiamate a [overflow](#overflow) e `fflush`( **fp**) scaricano tutti gli output in sospeso nel flusso.

## <a name="traits_type"></a>  basic_filebuf::traits_type

Associa un nome di tipo al parametro di modello **Tr**.

```cpp
typedef Tr traits_type;
```

## <a name="underflow"></a>  basic_filebuf::underflow

Estrae l'elemento corrente dal flusso di input.

```cpp
virtual int_type underflow();
```

### <a name="return-value"></a>Valore restituito

Se la funzione non può essere eseguita correttamente, restituisce **traits_type::**[eof](../standard-library/char-traits-struct.md#eof). In caso contrario, restituisce **ch**, convertito come descritto nella sezione Note.

### <a name="remarks"></a>Note

La funzione membro virtuale protetto tenta di estrarre l'elemento corrente **ch** dal flusso di input e restituisce l'elemento come **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#to_int_type)( **ch**). Questa operazione può essere eseguita in vari modi:

- Se è disponibile una posizione di lettura, accetta **ch** come elemento archiviato nella posizione di lettura e incrementa il puntatore successivo per il buffer di input.

- È possibile leggere uno o più elementi di tipo `char`, come se le chiamate successive del modulo `fgetc`(**fp**) e convertirli in un elemento **ch** di tipo **Elem**usando il /FAc facet di conversione file per chiamare **fac.in** in base alle esigenze. Se un'operazione di lettura o conversione ha esito negativo, la funzione non viene eseguita.

## <a name="see-also"></a>Vedere anche

[\<fstream>](../standard-library/fstream.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
