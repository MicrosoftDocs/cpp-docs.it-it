---
title: Classe ios_base
ms.date: 11/04/2016
f1_keywords:
- xiosbase/std::ios_base
- ios/std::ios_base::event_callback
- xiosbase/std::ios_base::fmtflags
- xiosbase/std::ios_base::iostate
- xiosbase/std::ios_base::openmode
- xiosbase/std::ios_base::seekdir
- xiosbase/std::ios_base::event
- xiosbase/std::ios_base::adjustfield
- xiosbase/std::ios_base::app
- xiosbase/std::ios_base::ate
- xiosbase/std::ios_base::badbit
- xiosbase/std::ios_base::basefield
- xiosbase/std::ios_base::beg
- xiosbase/std::ios_base::binary
- xiosbase/std::ios_base::boolalpha
- xiosbase/std::ios_base::cur
- xiosbase/std::ios_base::dec
- xiosbase/std::ios_base::end
- xiosbase/std::ios_base::eofbit
- xiosbase/std::ios_base::failbit
- xiosbase/std::ios_base::fixed
- xiosbase/std::ios_base::floatfield
- xiosbase/std::ios_base::goodbit
- xiosbase/std::ios_base::hex
- xiosbase/std::ios_base::in
- xiosbase/std::ios_base::internal
- xiosbase/std::ios_base::left
- xiosbase/std::ios_base::oct
- xiosbase/std::ios_base::out
- xiosbase/std::ios_base::right
- xiosbase/std::ios_base::scientific
- xiosbase/std::ios_base::showbase
- xiosbase/std::ios_base::showpoint
- xiosbase/std::ios_base::showpos
- xiosbase/std::ios_base::skipws
- xiosbase/std::ios_base::trunc
- xiosbase/std::ios_base::unitbuf
- xiosbase/std::ios_base::uppercase
- xiosbase/std::ios_base::failure
- xiosbase/std::ios_base::flags
- xiosbase/std::ios_base::getloc
- xiosbase/std::ios_base::imbue
- xiosbase/std::ios_base::Init
- xiosbase/std::ios_base::iword
- xiosbase/std::ios_base::precision
- xiosbase/std::ios_base::pword
- ios/std::ios_base::register_callback
- xiosbase/std::ios_base::setf
- xiosbase/std::ios_base::sync_with_stdio
- xiosbase/std::ios_base::unsetf
- xiosbase/std::ios_base::width
- xiosbase/std::ios_base::xalloc
helpviewer_keywords:
- std::ios_base [C++]
- std::ios_base [C++], event_callback
- std::ios_base [C++], fmtflags
- std::ios_base [C++], iostate
- std::ios_base [C++], openmode
- std::ios_base [C++], seekdir
- std::ios_base [C++], event
- std::ios_base [C++], adjustfield
- std::ios_base [C++], app
- std::ios_base [C++], ate
- std::ios_base [C++], badbit
- std::ios_base [C++], basefield
- std::ios_base [C++], beg
- std::ios_base [C++], binary
- std::ios_base [C++], boolalpha
- std::ios_base [C++], cur
- std::ios_base [C++], dec
- std::ios_base [C++], end
- std::ios_base [C++], eofbit
- std::ios_base [C++], failbit
- std::ios_base [C++], fixed
- std::ios_base [C++], floatfield
- std::ios_base [C++], goodbit
- std::ios_base [C++], hex
- std::ios_base [C++], in
- std::ios_base [C++], internal
- std::ios_base [C++], left
- std::ios_base [C++], oct
- std::ios_base [C++], out
- std::ios_base [C++], right
- std::ios_base [C++], scientific
- std::ios_base [C++], showbase
- std::ios_base [C++], showpoint
- std::ios_base [C++], showpos
- std::ios_base [C++], skipws
- std::ios_base [C++], trunc
- std::ios_base [C++], unitbuf
- std::ios_base [C++], uppercase
- std::ios_base [C++], failure
- std::ios_base [C++], flags
- std::ios_base [C++], getloc
- std::ios_base [C++], imbue
- std::ios_base [C++], Init
- std::ios_base [C++], iword
- std::ios_base [C++], precision
- std::ios_base [C++], pword
- std::ios_base [C++], register_callback
- std::ios_base [C++], setf
- std::ios_base [C++], sync_with_stdio
- std::ios_base [C++], unsetf
- std::ios_base [C++], width
- std::ios_base [C++], xalloc
ms.assetid: 0f9e0abc-f70f-49bc-aa1f-003859f56cfe
ms.openlocfilehash: da7c8eee2653a34035f39fe272378ae63165bfc2
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88845497"
---
# <a name="ios_base-class"></a>Classe ios_base

La classe descrive le funzioni membro e di archiviazione comuni ai flussi di input e di output che non dipendono dai parametri di modello. Il modello di classe [basic_ios](../standard-library/basic-ios-class.md) descrive gli elementi comuni che dipendono dai parametri di modello.

Un oggetto della classe ios_base archivia le informazioni di formattazione che sono costituite da:

- Flag di formato in un oggetto di tipo [`fmtflags`](#fmtflags) .

- Maschera di eccezione in un oggetto di tipo [`iostate`](#iostate) .

- Larghezza del campo in un oggetto di tipo **`int`** .

- Precisione di visualizzazione in un oggetto di tipo **`int`** .

- Oggetto delle impostazioni locali in un oggetto di tipo `locale` .

- Due matrici estendibili con elementi di tipo **`long`** e **`void`** puntatore.

Un oggetto della classe ios_base archivia anche le informazioni sullo stato del flusso, in un oggetto di tipo [`iostate`](#iostate) e uno stack di callback.

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Nome|Descrizione|
|-|-|
|[ios_base](#ios_base)|Costruisce oggetti `ios_base`.|

### <a name="typedefs"></a>Typedef

|Nome|Descrizione|
|-|-|
|[event_callback](#event_callback)|Descrive una funzione passata a [register_call](#register_callback).|
|[`fmtflags`](#fmtflags)|Costanti per specificare l'aspetto dell'output.|
|[`iostate`](#iostate)|Definisce le costanti che descrivono lo stato di un flusso.|
|[openmode](#openmode)|Descrive come interagire con un flusso.|
|[seekdir](#seekdir)|Specifica il punto iniziale per operazioni di offset.|

### <a name="enums"></a>Enumerazioni

|Nome|Descrizione|
|-|-|
|[event](#event)|Specifica i tipi di evento.|

### <a name="constants"></a>Costanti

|Nome|Descrizione|
|-|-|
|[adjustfield](#fmtflags)|Maschera di bit definita come `internal` &#124; `left` &#124; `right`.|
|[app](#openmode)|Specifica la ricerca alla fine di un flusso prima di ogni inserimento.|
|[ate](#openmode)|Specifica la ricerca alla fine di un flusso quando il relativo oggetto di controllo viene inizialmente creato.|
|[badbit](#iostate)|Registra una perdita di integrità del buffer del flusso.|
|[basefield](#fmtflags)|Maschera di bit definita come `dec` &#124; `hex` &#124; `oct`.|
|[beg](#seekdir)|Specifica la ricerca relativa all'inizio di una sequenza.|
|[binary](#openmode)|Specifica che un file deve essere letto come flusso binario, anziché come flusso di testo.|
|[boolalpha](#fmtflags)|Specifica l'inserimento o l'estrazione di oggetti di tipo **`bool`** come nomi (ad esempio **`true`** e **`false`** ) anziché come valori numerici.|
|[cur](#seekdir)|Specifica la ricerca relativa alla posizione corrente all'interno di una sequenza.|
|[Dec](#fmtflags)|Specifica l'inserimento o l'estrazione di valori interi in formato decimale.|
|[fine](#seekdir)|Specifica la ricerca relativa alla fine di una sequenza.|
|[eofbit](#iostate)|Registra la fine del file durante l'estrazione da un flusso.|
|[failbit](#iostate)|Registra un errore per estrarre un campo valido da un flusso.|
|[fissa](#fmtflags)|Specifica l'inserimento di valori a virgola mobile in formato a virgola fissa (senza il campo dell'esponente).|
|[floatfield](#fmtflags)|Maschera di bit definita come `fixed` &#124; `scientific`|
|[goodbit](#iostate)|Tutti i bit dello stato vengono cancellati.|
|[hex](#fmtflags)|Specifica l'inserimento o l'estrazione di valori interi in formato esadecimale.|
|[in](#openmode)|Specifica l'estrazione da un flusso.|
|[internal](#fmtflags)|Inserendo caratteri di riempimento in un punto interno a un campo numerico generato, riempie la larghezza di un campo.|
|[sinistra](#fmtflags)|Specifica la giustificazione a sinistra.|
|[ottobre](#fmtflags)|Specifica l'inserimento o l'estrazione di valori interi in formato ottale.|
|[out](#openmode)|Specifica l'inserimento in un flusso.|
|[Ok](#fmtflags)|Specifica la giustificazione a destra.|
|[scientifico](#fmtflags)|Specifica l'inserimento di valori a virgola mobile in formato a virgola fissa (con un campo dell'esponente).|
|[showbase](#fmtflags)|Specifica l'inserimento di un prefisso che consente di visualizzare la base di un campo Integer generato.|
|[showpoint](#fmtflags)|Specifica l'inserimento non condizionale di un punto decimale in un campo a virgola mobile generato.|
|[showpos](#fmtflags)|Specifica l'inserimento di un segno più in un campo numerico generato non negativo.|
|[skipws](#fmtflags)|Specifica di ignorare lo spazio vuoto iniziale prima di determinate estrazioni.|
|[trunc](#openmode)|Specifica l'eliminazione di contenuti di un file esistente quando viene creato l'oggetto di controllo.|
|[unitbuf](#fmtflags)|Provoca lo scaricamento dell'output dopo ogni inserimento.|
|[maiuscolo](#fmtflags)|Specifica l'inserimento di equivalenti in lettere maiuscole di lettere minuscole in determinati inserimenti.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|-|-|
|[errore](#failure)|La classe membro funge da classe base per tutte le eccezioni generate dalla funzione membro [Clear](../standard-library/basic-ios-class.md#clear) nel modello di classe [basic_ios](../standard-library/basic-ios-class.md).|
|[flags](#flags)|Imposta o restituisce le impostazioni dei flag correnti.|
|[getloc](#getloc)|Restituisce l'oggetto delle impostazioni locali archiviate.|
|[imbue](#imbue)|Modifica le impostazioni locali.|
|[Init](#init)|Crea gli `iostream` oggetti standard quando viene costruito.|
|[iword](#iword)|Assegna un valore da archiviare come un `iword`.|
|[precisione](#precision)|Specifica il numero di cifre da visualizzare in un numero a virgola mobile.|
|[pword](#pword)|Assegna un valore da archiviare come un `pword`.|
|[register_callback](#register_callback)|Specifica una funzione di callback.|
|[setf](#setf)|Imposta i flag specificati.|
|[sync_with_stdio](#sync_with_stdio)|Assicura che `iostream` le operazioni della libreria di runtime di e C vengano eseguite nell'ordine in cui sono visualizzate nel codice sorgente.|
|[unsetf](#unsetf)|Provoca la disattivazione dei flag specificati.|
|[width](#width)|Imposta la lunghezza del flusso di output.|
|[xalloc](#xalloc)|Specifica che una variabile deve far parte del flusso.|

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[operatore =](#op_eq)|L'operatore di assegnazione per gli oggetti `ios_base`.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<ios>

**Spazio dei nomi:** std

## <a name="event"></a>Evento<a name="event"></a>

Specifica i tipi di evento.

```cpp
enum event {
    erase_event,
    imbue_event,
    copyfmt_event};
```

### <a name="remarks"></a>Osservazioni

Il tipo è costituito da un tipo non enumerato che descrive un oggetto in grado di archiviare l'evento di callback usato come argomento di una funzione registrata con [register_callback](#register_callback). I valori distinti degli eventi sono:

- `copyfmt_event`, per identificare un callback che si verifica in prossimità della fine di una chiamata a [copyfmt](../standard-library/basic-ios-class.md#copyfmt), immediatamente prima che venga copiata la [maschera delle eccezioni](../standard-library/ios-base-class.md) .

- `erase_event`, per identificare un callback che si verifica all'inizio di una chiamata a [copyfmt](../standard-library/basic-ios-class.md#copyfmt)o all'inizio di una chiamata al distruttore per ** \* questo**oggetto.

- `imbue_event`, per identificare un callback che si verifica alla fine di una chiamata a [imbue](#imbue), immediatamente prima della restituzione della funzione.

### <a name="example"></a>Esempio

Vedere [register_callback](#register_callback) per un esempio.

## <a name="event_callback"></a><a name="event_callback"></a> event_callback

Descrive una funzione passata a [register_call](#register_callback).

```cpp
typedef void (__cdecl *event_callback)(
    event _E,
    ios_base& _Base,
    int _I);
```

### <a name="parameters"></a>Parametri

*_E*\
[Evento](#event).

*_Base*\
Flusso in cui è stato chiamato l'evento.

*_I*\
Numero definito dall'utente.

### <a name="remarks"></a>Osservazioni

Il tipo descrive un puntatore a una funzione che può essere registrata con [register_callback](#register_callback). Questo tipo di funzione non deve generare un'eccezione.

### <a name="example"></a>Esempio

Vedere [register_call](#register_callback) per un esempio d'uso di `event_callback`.

## <a name="failure"></a><a name="failure"></a> errore

La classe `failure` definisce la classe di base per tutti i tipi di oggetti generati come eccezioni dalle funzioni della libreria `iostreams` per segnalare gli errori rilevati durante le operazioni del buffer del flusso.

```cpp
namespace std {
    class failure : public system_error {
    public:
        explicit failure(
            const string& _Message,
            const error_code& _Code = io_errc::stream);

        explicit failure(
            const char* str,
            const error_code& _Code = io_errc::stream);
    };
}
```

### <a name="remarks"></a>Osservazioni

Il valore restituito da `what()` è una copia di `_Message`, possibilmente aumentato con un test basato su `_Code`. Se `_Code` non viene specificato, il valore predefinito è `make_error_code(io_errc::stream)`.

### <a name="example"></a>Esempio

```cpp
// ios_base_failure.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main ( )
{
    using namespace std;
    fstream file;
    file.exceptions(ios::failbit);
    try
    {
        file.open( "rm.txt", ios_base::in );
        // Opens nonexistent file for reading
    }
    catch( ios_base::failure f )
    {
        cout << "Caught an exception: " << f.what() << endl;
    }
}
```

```Output
Caught an exception: ios_base::failbit set
```

## <a name="flags"></a><a name="flags"></a> Bandiere

Imposta o restituisce le impostazioni dei flag correnti.

```cpp
fmtflags flags() const;
fmtflags flags(fmtflags fmtfl);
```

### <a name="parameters"></a>Parametri

*fmtfl*\
Nuova impostazione `fmtflags`.

### <a name="return-value"></a>Valore restituito

Impostazione `fmtflags` precedente o corrente.

### <a name="remarks"></a>Osservazioni

Vedere [ios_base::fmtflags](#fmtflags) per un elenco dei flag.

La prima funzione membro restituisce i flag di formato archiviati. La seconda funzione membro Archivia *fmtfl* nei flag di formato e restituisce il relativo valore archiviato precedente.

### <a name="example"></a>Esempio

```cpp
// ios_base_flags.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main ( )
{
    using namespace std;
    cout << cout.flags( ) << endl;
    cout.flags( ios::dec | ios::boolalpha );
    cout << cout.flags( );
}
```

```Output
513
16896
```

## <a name="fmtflags"></a><a name="fmtflags"></a> fmtflags

Costanti per specificare l'aspetto dell'output.

```cpp
class ios_base {
public:
   typedef implementation-defined-bitmask-type fmtflags;
   static const fmtflags boolalpha;
   static const fmtflags dec;
   static const fmtflags fixed;
   static const fmtflags hex;
   static const fmtflags internal;
   static const fmtflags left;
   static const fmtflags oct;
   static const fmtflags right;
   static const fmtflags scientific;
   static const fmtflags showbase;
   static const fmtflags showpoint;
   static const fmtflags showpos;
   static const fmtflags skipws;
   static const fmtflags unitbuf;
   static const fmtflags uppercase;
   static const fmtflags adjustfield;
   static const fmtflags basefield;
   static const fmtflags floatfield;
   // ...
};
```

### <a name="remarks"></a>Osservazioni

Supporta i manipolatori in [ios](../standard-library/ios.md).

Il tipo è un tipo maschera di bit che descrive un oggetto in grado di archiviare flag di formato. I valori flag distinti (elementi) sono:

- `dec`, per inserire o estrarre i valori interi in formato decimale.

- `hex`, per inserire o estrarre i valori interi in formato esadecimale.

- `oct`, per inserire o estrarre i valori interi in formato ottale.

- `showbase`, per inserire un prefisso che consente di visualizzare la base di un campo Integer generato.

- `internal`, per riempire la larghezza del campo in base alle necessità inserendo caratteri di riempimento in un punto interno di un campo numerico generato. Per informazioni sull'impostazione della larghezza del campo, vedere [`setw`](../standard-library/iomanip-functions.md#setw) .

- `left`, per riempire la larghezza del campo in base alle necessità inserendo caratteri di riempimento alla fine di un campo generato (giustificazione a sinistra).

- `right`, per riempire la larghezza del campo in base alle necessità inserendo caratteri di riempimento all'inizio di un campo generato (giustificazione a destra).

- `boolalpha`, per inserire o estrarre oggetti di tipo **`bool`** come nomi (ad esempio **`true`** e **`false`** ) anziché come valori numerici.

- `fixed`, per inserire valori a virgola mobile in formato a virgola fissa (senza il campo dell'esponente).

- `scientific`, per inserire valori a virgola mobile in formato scientifico (con un campo dell'esponente).

- `showpoint`, per inserire in modo non condizionale un punto decimale in un campo a virgola mobile generato.

- `showpos`, per inserire un segno più in un campo numerico generato non negativo.

- `skipws`, per ignorare lo spazio vuoto iniziale prima di determinate estrazioni.

- `unitbuf`, per scaricare l'output dopo ogni inserimento.

- `uppercase`, per inserire gli equivalenti in lettere maiuscole di lettere minuscole in determinati inserimenti.

Inoltre, altri valori utili sono:

- `adjustfield`, una maschera di bit definita come `internal` &#124; `left` &#124; `right`

- `basefield`, definito come `dec` &#124; `hex` &#124; `oct`

- `floatfield`, definito come `fixed` &#124; `scientific`

Per esempi di funzioni che modificano questi flag di formato, vedere [\<iomanip>](../standard-library/iomanip.md) .

## <a name="getloc"></a><a name="getloc"></a> getloc

Restituisce l'oggetto delle impostazioni locali archiviate.

```cpp
locale getloc() const;
```

### <a name="return-value"></a>Valore restituito

L'oggetto delle impostazioni locali archiviato.

### <a name="example"></a>Esempio

```cpp
// ios_base_getlock.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
    using namespace std;
    cout << cout.getloc( ).name( ).c_str( ) << endl;
}
```

```Output
C
```

## <a name="imbue"></a><a name="imbue"></a> imbue

Modifica le impostazioni locali.

```cpp
locale imbue(const locale& _Loc);
```

### <a name="parameters"></a>Parametri

*_Loc*\
Nuove impostazioni locali.

### <a name="return-value"></a>Valore restituito

Impostazioni locali precedenti.

### <a name="remarks"></a>Osservazioni

La funzione membro Archivia *_Loc* nell'oggetto delle impostazioni locali, quindi segnala l'evento di callback e `imbue_event` . Restituisce il valore archiviato precedente.

### <a name="example"></a>Esempio

Vedere [basic_ios::imbue](../standard-library/basic-ios-class.md#imbue) per un esempio.

## <a name="init"></a><a name="init"></a> Init

Crea gli `iostream` oggetti standard quando viene costruito.

```cpp
class Init { };
```

### <a name="remarks"></a>Osservazioni

La classe annidata descrive un oggetto la cui costruzione garantisce che gli `iostream` oggetti standard siano costruiti correttamente, anche prima dell'esecuzione di un costruttore per un oggetto statico arbitrario.

## <a name="ios_base"></a><a name="ios_base"></a> ios_base

Crea oggetti ios_base.

```cpp
ios_base();
```

### <a name="remarks"></a>Osservazioni

Il costruttore (protetto) non esegue alcuna operazione. Una chiamata successiva a `basic_ios::` [init](../standard-library/basic-ios-class.md#init) deve inizializzare l'oggetto prima che possa essere eliminato definitivamente. Pertanto, l'unico utilizzo sicuro per la classe ios_base è come classe di base per [basic_ios](../standard-library/basic-ios-class.md)modello di classe.

## <a name="iostate"></a><a name="iostate"></a> iostate

Tipo di costanti che descrivono lo stato di un flusso.

```cpp
class ios_base {
public:
   typedef implementation-defined-bitmask-type iostate;
   static const iostate badbit;
   static const iostate eofbit;
   static const iostate failbit;
   static const iostate goodbit;
   // ...
};
```

### <a name="remarks"></a>Osservazioni

Il tipo è costituito da un tipo maschera di bit che descrive un oggetto in grado di archiviare informazioni sullo stato del flusso. I valori flag distinti (elementi) sono:

- `badbit`, per registrare una perdita di integrità del buffer del flusso.

- `eofbit`, per registrare la fine del file durante l'estrazione da un flusso.

- `failbit`, per registrare un errore per l'estrazione di un campo valido da un flusso.

Inoltre, un valore utile è `goodbit` , in cui nessuno dei bit indicati in precedenza è impostato ( `goodbit` è sicuramente zero).

## <a name="iword"></a><a name="iword"></a> iword

Assegna un valore da archiviare come un `iword`.

```cpp
long& iword(int idx);
```

### <a name="parameters"></a>Parametri

*idx*\
Indice del valore da archiviare come `iword`.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento all'elemento *idx* della matrice estendibile con elementi di tipo **`long`** . Tutti gli elementi sono effettivamente presenti e archiviano inizialmente il valore zero. Il riferimento restituito non è valido dopo la chiamata successiva a `iword` per l'oggetto, dopo che l'oggetto è stato modificato da una chiamata a `basic_ios::` [copyfmt](../standard-library/basic-ios-class.md#copyfmt)o dopo che l'oggetto è stato eliminato definitivamente.

Se *idx* è negativo o se l'archiviazione univoca non è disponibile per l'elemento, la funzione chiama [`setstate`](../standard-library/basic-ios-class.md#setstate) `(badbit)` e restituisce un riferimento che potrebbe non essere univoco.

Per ottenere un indice univoco, da usare in tutti gli oggetti di tipo `ios_base` , chiamare [`xalloc`](#xalloc) .

### <a name="example"></a>Esempio

[`xalloc`](#xalloc)Per un esempio di come usare, vedere `iword` .

## <a name="openmode"></a><a name="openmode"></a> OpenMode

Descrive come interagire con un flusso.

```cpp
class ios_base {
public:
   typedef implementation-defined-bitmask-type iostate;
   static const iostate badbit;
   static const iostate eofbit;
   static const iostate failbit;
   static const iostate goodbit;
   // ...
};
```

### <a name="remarks"></a>Osservazioni

Il tipo è un `bitmask type` oggetto che descrive un oggetto in grado di archiviare la modalità di apertura per diversi `iostream` oggetti. I valori flag distinti (elementi) sono:

- `app`, per cercare alla fine di un flusso prima di ogni inserimento.

- `ate`, per cercare alla fine di un flusso quando viene creato per la prima volta l'oggetto di controllo.

- `binary`, per leggere un file come flusso binario, anziché come flusso di testo.

- `in`, per consentire l'estrazione da un flusso.

- `out`, per consentire l'inserimento in un flusso.

- `trunc`, per eliminare il contenuto di un file esistente quando viene creato l'oggetto di controllo.

### <a name="example"></a>Esempio

```cpp
// ios_base_openmode.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main ( )
{
    using namespace std;
    fstream file;
    file.open( "rm.txt", ios_base::out | ios_base::trunc );

    file << "testing";
}
```

## <a name="operator"></a><a name="op_eq"></a> operatore =

L'operatore di assegnazione per oggetti ios_base.

```cpp
ios_base& operator=(const ios_base& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Oggetto di tipo `ios_base`.

### <a name="return-value"></a>Valore restituito

Oggetto destinatario dell'assegnazione.

### <a name="remarks"></a>Osservazioni

L'operatore copia le informazioni di formattazione archiviate e crea così una nuova copia delle matrici estendibili. Restituisce quindi ** \* questo**. Tenere presente che lo stack di callback non viene copiato.

Questo operatore viene usato solo dalle classi derivate da `ios_base`.

## <a name="precision"></a><a name="precision"></a> precisione

Specifica il numero di cifre da visualizzare in un numero a virgola mobile.

```cpp
streamsize precision() const;
streamsize precision(streamsize _Prec);
```

### <a name="parameters"></a>Parametri

*_Prec*\
Numero di cifre significative da visualizzare o numero di cifre dopo il separatore decimale nella notazione fissa.

### <a name="return-value"></a>Valore restituito

La prima funzione membro restituisce la [precisione di visualizzazione](../standard-library/ios-base-class.md) archiviata. La seconda funzione membro Archivia *_Prec* nella precisione di visualizzazione e restituisce il relativo valore archiviato precedente.

### <a name="remarks"></a>Osservazioni

I numeri a virgola mobile vengono visualizzati nella notazione fissa con la funzione [fixed](../standard-library/ios-functions.md#fixed).

### <a name="example"></a>Esempio

```cpp
// ios_base_precision.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
    using namespace std;
    float i = 31.31234F;

    cout.precision( 3 );
    cout << i << endl;          // display three significant digits
    cout << fixed << i << endl; // display three digits after decimal
                                // point
}
```

```Output
31.3
31.312
```

## <a name="pword"></a><a name="pword"></a> pword

Assegna un valore da archiviare come un `pword`.

```cpp
void *& pword(int index);
```

### <a name="parameters"></a>Parametri

*Indice*\
Indice del valore da archiviare come `pword`.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento all' *Indice* dell'elemento della matrice estendibile con elementi di tipo **`void`** pointer. Tutti gli elementi sono effettivamente presenti e archiviano inizialmente il puntatore Null. Il riferimento restituito non è valido dopo la chiamata successiva a `pword` per l'oggetto, dopo che l'oggetto è stato modificato da una chiamata a `basic_ios::` [copyfmt](../standard-library/basic-ios-class.md#copyfmt)o dopo che l'oggetto è stato eliminato definitivamente.

Se *index* è negativo o se l'archiviazione univoca non è disponibile per l'elemento, la funzione chiama [`setstate`](../standard-library/basic-ios-class.md#setstate) `(badbit)` e restituisce un riferimento che potrebbe non essere univoco.

Per ottenere un indice univoco, da usare in tutti gli oggetti di tipo `ios_base` , chiamare [`xalloc`](#xalloc) .

### <a name="example"></a>Esempio

[`xalloc`](#xalloc)Per un esempio dell'utilizzo di `pword` , vedere.

## <a name="register_callback"></a><a name="register_callback"></a> register_callback

Specifica una funzione di callback.

```cpp
void register_callback(
    event_callback pfn, int idx);
```

### <a name="parameters"></a>Parametri

*PFN*\
Puntatore alla funzione di callback.

*idx*\
Numero definito dall'utente.

### <a name="remarks"></a>Osservazioni

La funzione membro inserisce la coppia nello `{pfn, idx}` [stack di callback](../standard-library/ios-base-class.md)dello stack di callback archiviato. Quando viene segnalato un evento di callback **EV** , le funzioni vengono chiamate, in ordine inverso del registro di sistema, dall'espressione `(*pfn)(ev, *this, idx)` .

### <a name="example"></a>Esempio

```cpp
// ios_base_register_callback.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

using namespace std;

void callback1( ios_base::event e, ios_base& stream, int arg )
{
    cout << "in callback1" << endl;
    switch ( e )
    {
    case ios_base::erase_event:
        cout << "an erase event" << endl;
        break;
    case ios_base::imbue_event:
        cout << "an imbue event" << endl;
        break;
    case ios_base::copyfmt_event:
        cout << "an copyfmt event" << endl;
        break;
    };
}

void callback2( ios_base::event e, ios_base& stream, int arg )
{
    cout << "in callback2" << endl;
    switch ( e )
    {
    case ios_base::erase_event:
        cout << "an erase event" << endl;
        break;
    case ios_base::imbue_event:
        cout << "an imbue event" << endl;
        break;
    case ios_base::copyfmt_event:
        cout << "an copyfmt event" << endl;
        break;
    };
}

int main( )
{
    // Make sure the imbue will not throw an exception
    // assert( setlocale( LC_ALL, "german" )!=NULL );

    cout.register_callback( callback1, 0 );
    cin.register_callback( callback2, 0 );

    try
    {
        // If no exception because the locale's not found,
        // generate an imbue_event on callback1
        cout.imbue(locale("german"));
    }
    catch(...)
    {
        cout << "exception" << endl;
    }

    // This will
    // (1) erase_event on callback1
    // (2) copyfmt_event on callback2
    cout.copyfmt(cin);

    // We get two erase events from callback2 at the end because
    // both cin and cout have callback2 registered when cin and cout
    // are destroyed at the end of program.
}
```

```Output
in callback1
an imbue event
in callback1
an erase event
in callback2
an copyfmt event
in callback2
an erase event
in callback2
an erase event
```

## <a name="seekdir"></a><a name="seekdir"></a> seekdir

Specifica il punto iniziale per operazioni di offset.

```cpp
namespace std {
    class ios_base {
    public:
        typedef implementation-defined-enumerated-type seekdir;
        static const seekdir beg;
        static const seekdir cur;
        static const seekdir end;
        // ...
    };
}
```

### <a name="remarks"></a>Osservazioni

Il tipo è un tipo enumerato che descrive un oggetto in grado di archiviare la modalità di ricerca utilizzata come argomento per le funzioni membro di più `iostream` classi. I valori flag distinti sono:

- `beg`, per cercare (modificare la posizione di lettura o scrittura corrente) rispetto all'inizio di una sequenza (matrice, flusso o file).

- `cur`, per eseguire la ricerca relativa alla posizione corrente all'interno di una sequenza.

- `end`, per eseguire la ricerca relativa alla fine di una sequenza.

### <a name="example"></a>Esempio

```cpp
// ios_base_seekdir.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main ( )
{
    using namespace std;
    fstream file;
    file.open( "rm.txt", ios_base::out | ios_base::trunc );

    file << "testing";
    file.seekp( 0, ios_base::beg );
    file << "a";
    file.seekp( 0, ios_base::end );
    file << "a";
}
```

## <a name="setf"></a><a name="setf"></a> setf

Imposta i flag specificati.

```cpp
fmtflags setf(
    fmtflags _Mask
);
fmtflags setf(
    fmtflags _Mask,
    fmtflags _Unset
);
```

### <a name="parameters"></a>Parametri

*_Mask*\
Flag da attivare.

*_Unset*\
Flag da disattivare.

### <a name="return-value"></a>Valore restituito

Flag di formato precedenti

### <a name="remarks"></a>Osservazioni

La prima funzione membro chiama in modo efficace i [flag](#flags) `(_Mask | _Flags)` (imposta i bit selezionati) e quindi restituisce i flag di formato precedenti. La seconda funzione membro chiama in modo efficace `flags(_Mask & fmtfl, flags & ~_Mask)` (sostituisce i bit selezionati in una maschera) e quindi restituisce i flag di formato precedenti.

### <a name="example"></a>Esempio

```cpp
// ios_base_setf.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
    using namespace std;
    int i = 10;
    cout << i << endl;

    cout.unsetf( ios_base::dec );
    cout.setf( ios_base::hex );
    cout << i << endl;

    cout.setf( ios_base::dec );
    cout << i << endl;
    cout.setf( ios_base::hex, ios_base::dec );
    cout << i << endl;
}
```

## <a name="sync_with_stdio"></a><a name="sync_with_stdio"></a> sync_with_stdio

Assicura che `iostream` le operazioni della libreria di runtime di e C vengano eseguite nell'ordine in cui sono visualizzate nel codice sorgente.

```cpp
static bool sync_with_stdio(
   bool _Sync = true
);
```

### <a name="parameters"></a>Parametri

*_Sync*\
Indica se tutti i flussi sono sincronizzati con `stdio` .

### <a name="return-value"></a>Valore restituito

Impostazione precedente per questa funzione.

### <a name="remarks"></a>Osservazioni

La funzione membro statica archivia un `stdio` flag di sincronizzazione, che inizialmente corrisponde a **`true`** . Quando **`true`** , questo flag garantisce che le operazioni nello stesso file vengano sincronizzate correttamente tra le [`iostreams`](../standard-library/iostreams-conventions.md) funzioni e quelle definite nella libreria standard C++. In caso contrario, la sincronizzazione può essere garantita o meno, ma le prestazioni potrebbero essere migliorate. La funzione Archivia *_Sync* nel `stdio` flag di sincronizzazione e restituisce il relativo valore archiviato precedente. È possibile chiamarlo in modo affidabile solo prima di eseguire qualsiasi operazione sui flussi standard.

## <a name="unsetf"></a><a name="unsetf"></a> unsetf

Provoca la disattivazione dei flag specificati.

```cpp
void unsetf(
   fmtflags _Mask
);
```

### <a name="parameters"></a>Parametri

*_Mask*\
Flag che si vuole disattivare.

### <a name="remarks"></a>Osservazioni

La funzione membro chiama in modo efficace i [flag](#flags)( `~` *_Mask* **& flag**) (Cancella i bit selezionati).

### <a name="example"></a>Esempio

Per un esempio di utilizzo di, vedere [ios_base:: setf](#setf) `unsetf` .

## <a name="width"></a><a name="width"></a> Larghezza

Imposta la lunghezza del flusso di output.

```cpp
streamsize width( ) const;
streamsize width(
   streamsize _Wide
);
```

### <a name="parameters"></a>Parametri

*_Wide*\
Dimensione desiderata del flusso di output.

### <a name="return-value"></a>Valore restituito

Impostazione della larghezza corrente.

### <a name="remarks"></a>Osservazioni

La prima funzione membro restituisce la larghezza del campo archiviato. La seconda funzione membro Archivia *_Wide* nella larghezza del campo e restituisce il relativo valore archiviato precedente.

### <a name="example"></a>Esempio

```cpp
// ios_base_width.cpp
// compile with: /EHsc
#include <iostream>

int main( ) {
    using namespace std;

    cout.width( 20 );
    cout << cout.width( ) << endl;
    cout << cout.width( ) << endl;
}
```

```Output
20
0
```

## <a name="xalloc"></a><a name="xalloc"></a> xalloc

Specifica che una variabile fa parte del flusso.

```cpp
static int xalloc( );
```

### <a name="return-value"></a>Valore restituito

La funzione membro statica restituisce un valore statico archiviato, che incrementa a ogni chiamata.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare il valore restituito come argomento di indice univoco quando si chiamano le funzioni membro [`iword`](#iword) o [`pword`](#pword) .

### <a name="example"></a>Esempio

```cpp
// ios_base_xalloc.cpp
// compile with: /EHsc
// Lets you store user-defined information.
// iword, jword, xalloc
#include <iostream>

int main( )
{
    using namespace std;

    static const int i = ios_base::xalloc();
    static const int j = ios_base::xalloc();
    cout.iword( i ) = 11;
    cin.iword( i ) = 13;
    cin.pword( j ) = "testing";
    cout << cout.iword( i ) << endl;
    cout << cin.iword( i ) << endl;
    cout << ( char * )cin.pword( j ) << endl;
}
```

```Output
11
13
testing
```

## <a name="see-also"></a>Vedere anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
