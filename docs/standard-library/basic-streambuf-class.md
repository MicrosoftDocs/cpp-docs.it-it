---
title: Classe basic_streambuf
ms.date: 11/04/2016
f1_keywords:
- streambuf/std::basic_streambuf
- streambuf/std::basic_streambuf::char_type
- streambuf/std::basic_streambuf::int_type
- streambuf/std::basic_streambuf::off_type
- streambuf/std::basic_streambuf::pos_type
- streambuf/std::basic_streambuf::traits_type
- streambuf/std::basic_streambuf::eback
- streambuf/std::basic_streambuf::egptr
- streambuf/std::basic_streambuf::epptr
- streambuf/std::basic_streambuf::gbump
- streambuf/std::basic_streambuf::getloc
- streambuf/std::basic_streambuf::gptr
- streambuf/std::basic_streambuf::imbue
- streambuf/std::basic_streambuf::in_avail
- streambuf/std::basic_streambuf::overflow
- streambuf/std::basic_streambuf::pbackfail
- streambuf/std::basic_streambuf::pbase
- streambuf/std::basic_streambuf::pbump
- streambuf/std::basic_streambuf::pptr
- streambuf/std::basic_streambuf::pubimbue
- streambuf/std::basic_streambuf::pubseekoff
- streambuf/std::basic_streambuf::pubseekpos
- streambuf/std::basic_streambuf::pubsetbuf
- streambuf/std::basic_streambuf::pubsync
- streambuf/std::basic_streambuf::sbumpc
- streambuf/std::basic_streambuf::seekoff
- streambuf/std::basic_streambuf::seekpos
- streambuf/std::basic_streambuf::setbuf
- streambuf/std::basic_streambuf::setg
- streambuf/std::basic_streambuf::setp
- streambuf/std::basic_streambuf::sgetc
- streambuf/std::basic_streambuf::sgetn
- streambuf/std::basic_streambuf::showmanyc
- streambuf/std::basic_streambuf::snextc
- streambuf/std::basic_streambuf::sputbackc
- streambuf/std::basic_streambuf::sputc
- streambuf/std::basic_streambuf::sputn
- streambuf/std::basic_streambuf::stossc
- streambuf/std::basic_streambuf::sungetc
- streambuf/std::basic_streambuf::swap
- streambuf/std::basic_streambuf::sync
- streambuf/std::basic_streambuf::uflow
- streambuf/std::basic_streambuf::underflow
- streambuf/std::basic_streambuf::xsgetn
- streambuf/std::basic_streambuf::xsputn
helpviewer_keywords:
- std::basic_streambuf [C++]
- std::basic_streambuf [C++], char_type
- std::basic_streambuf [C++], int_type
- std::basic_streambuf [C++], off_type
- std::basic_streambuf [C++], pos_type
- std::basic_streambuf [C++], traits_type
- std::basic_streambuf [C++], eback
- std::basic_streambuf [C++], egptr
- std::basic_streambuf [C++], epptr
- std::basic_streambuf [C++], gbump
- std::basic_streambuf [C++], getloc
- std::basic_streambuf [C++], gptr
- std::basic_streambuf [C++], imbue
- std::basic_streambuf [C++], in_avail
- std::basic_streambuf [C++], overflow
- std::basic_streambuf [C++], pbackfail
- std::basic_streambuf [C++], pbase
- std::basic_streambuf [C++], pbump
- std::basic_streambuf [C++], pptr
- std::basic_streambuf [C++], pubimbue
- std::basic_streambuf [C++], pubseekoff
- std::basic_streambuf [C++], pubseekpos
- std::basic_streambuf [C++], pubsetbuf
- std::basic_streambuf [C++], pubsync
- std::basic_streambuf [C++], sbumpc
- std::basic_streambuf [C++], seekoff
- std::basic_streambuf [C++], seekpos
- std::basic_streambuf [C++], setbuf
- std::basic_streambuf [C++], setg
- std::basic_streambuf [C++], setp
- std::basic_streambuf [C++], sgetc
- std::basic_streambuf [C++], sgetn
- std::basic_streambuf [C++], showmanyc
- std::basic_streambuf [C++], snextc
- std::basic_streambuf [C++], sputbackc
- std::basic_streambuf [C++], sputc
- std::basic_streambuf [C++], sputn
- std::basic_streambuf [C++], stossc
- std::basic_streambuf [C++], sungetc
- std::basic_streambuf [C++], swap
- std::basic_streambuf [C++], sync
- std::basic_streambuf [C++], uflow
- std::basic_streambuf [C++], underflow
- std::basic_streambuf [C++], xsgetn
- std::basic_streambuf [C++], xsputn
ms.assetid: 136af6c3-13bf-4501-9288-b93da26efac7
ms.openlocfilehash: 0cf7b61bde86a4643836346dafd36680fb8cf302
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376736"
---
# <a name="basic_streambuf-class"></a>Classe basic_streambuf

Descrive una classe base astratta per la derivazione di un buffer di flusso, che controlla la trasmissione di elementi verso e da una rappresentazione specifica di un flusso.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class Tr = char_traits<Elem>>
class basic_streambuf;
```

### <a name="parameters"></a>Parametri

*Elem*\
Un [char_type](#char_type).

*Tr*\
Il carattere [traits_type](#traits_type).

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive una classe base astratta per la derivazione di un buffer di flusso, che controlla la trasmissione di elementi da e verso una rappresentazione specifica di un flusso. Un oggetto `basic_streambuf` della classe consente di controllare un flusso con elementi di tipo *Tr*, noto anche come [char_type](#char_type), i cui tratti carattere sono determinati dalla classe [char_traits](../standard-library/char-traits-struct.md), nota anche come [traits_type](#traits_type).

Ogni buffer di flusso controlla concettualmente due flussi indipendenti: uno per le estrazioni (input) e uno per gli inserimenti (output). È tuttavia possibile che una rappresentazione specifica renda inaccessibili uno o entrambi i flussi. Viene in genere mantenuta una relazione tra i due flussi. Ciò che si inserisce nel `Tr` flusso di output di un [basic_stringbuf,](../standard-library/basic-stringbuf-class.md)< `Elem`> oggetto, ad esempio, è ciò che si estrae successivamente dal relativo flusso di input. Quando si posiziona un flusso `Tr` di un [basic_filebuf](../standard-library/basic-filebuf-class.md)< `Elem`,> oggetto, si posiziona l'altro flusso in tandem.

L'interfaccia pubblica `basic_streambuf` al modello di classe fornisce le operazioni comuni a tutti i buffer di flusso, tuttavia specializzati. L'interfaccia protetta fornisce le operazioni necessarie per il funzionamento corretto di una rappresentazione specifica di un flusso. Le funzioni membro virtuali permettono di personalizzare il comportamento di un buffer di flusso derivato per una rappresentazione specifica di un flusso. Ogni buffer di flusso derivato in questa libreria descrive il modo in cui rende specializzato il comportamento delle rispettive funzioni membro virtuali protette. Il comportamento predefinito per la classe base, che spesso non comporta l'esecuzione di alcuna operazione, viene illustrato in questo argomento.

Le funzioni membro virtuali rimanenti controllano la copia verso e da eventuali risorse di archiviazione fornite alle trasmissioni del buffer verso e dai flussi. Un buffer di input, ad esempio, è caratterizzato dagli elementi seguenti:

- [eback](#eback): puntatore all'inizio del buffer.

- [gptr](#gptr): puntatore all'elemento successivo da leggere.

- [egptr](#egptr): puntatore a una posizione immediatamente successiva alla fine del buffer.

Analogamente, un buffer di output è caratterizzato dagli elementi seguenti:

- [pbase](#pbase): puntatore all'inizio del buffer.

- [pptr](#pptr): puntatore all'elemento successivo da scrivere.

- [epptr](#epptr): puntatore a una posizione immediatamente successiva alla fine del buffer.

Il protocollo seguente viene usato per qualsiasi tipo di buffer:

- Se il puntatore di tipo next è Null, non esiste alcun buffer. In caso contrario, tutti e tre i puntatori puntano nella stessa sequenza. È possibile confrontarli in modo sicuro per determinarne l'ordine.

- Nel caso di un buffer di output, se il puntatore di tipo next ottiene dal confronto un risultato inferiore a quello del puntatore di tipo end, sarà possibile archiviare un elemento in corrispondenza della posizione di scrittura designata dal puntatore di tipo next.

- Nel caso di un buffer di intput, se il puntatore di tipo next ottiene dal confronto un risultato inferiore a quello del puntatore di tipo end, sarà possibile leggere un elemento in corrispondenza della posizione di lettura designata dal puntatore di tipo next.

- Nel caso di un buffer di intput, se il puntatore di tipo beginning ottiene dal confronto un risultato inferiore a quello del puntatore di tipo next, sarà possibile reinserire un elemento in corrispondenza della posizione di putback designata dal puntatore di tipo next decrementato.

Eventuali funzioni membro virtuale protetto scritte per una classe derivata da `basic_streambuf`< `Elem`, `Tr`> devono cooperare al mantenimento di questo protocollo.

Un oggetto della classe `basic_streambuf`< `Elem`, `Tr`> archivia i sei puntatori descritti in precedenza. Archivia anche un oggetto di impostazioni locali in un oggetto di tipo [locale](../standard-library/locale-class.md) per un uso potenziale da parte di un buffer di flusso derivato.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_streambuf](#basic_streambuf)|Costruisce un oggetto di tipo `basic_streambuf`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Associa un nome di tipo al parametro di modello `Elem`.|
|[int_type](#int_type)|Associa un nome di tipo entro l'ambito `basic_streambuf` al parametro di modello `Elem`.|
|[off_type](#off_type)|Associa un nome di tipo entro l'ambito `basic_streambuf` al parametro di modello `Elem`.|
|[pos_type](#pos_type)|Associa un nome di tipo entro l'ambito `basic_streambuf` al parametro di modello `Elem`.|
|[traits_type](#traits_type)|Associa un nome di tipo al parametro di modello `Tr`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[eback](#eback)|Funzione protetta che restituisce un puntatore all'inizio del buffer di input.|
|[egptr](#egptr)|Funzione protetta che restituisce un puntatore a una posizione immediatamente successiva alla fine del buffer di input.|
|[epptr](#epptr)|Funzione protetta che restituisce un puntatore a una posizione immediatamente successiva alla fine del buffer di output.|
|[gbump](#gbump)|Funzione protetta che aggiunge `count` al puntatore successivo per il buffer di input.|
|[getloc](#getloc)|Ottiene le impostazioni locali dell'oggetto `basic_streambuf`.|
|[gptr](#gptr)|Funzione protetta che restituisce un puntatore all'elemento successivo del buffer di input.|
|[imbue](#imbue)|Una funzione virtuale protetta chiamata da [pubimbue](#pubimbue).|
|[in_avail](#in_avail)|Restituisce il numero di elementi pronti per la lettura dal buffer.|
|[Overflow](#overflow)|Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.|
|[pbackfail](#pbackfail)|Funzione membro virtuale protetta che tenta di reinserire un elemento nel flusso di input e quindi di impostarlo come elemento corrente, a cui fa riferimento il puntatore di tipo next.|
|[pbase](#pbase)|Funzione protetta che restituisce un puntatore all'inizio del buffer di output.|
|[pbump](#pbump)|Funzione protetta che aggiunge `count` al puntatore successivo per il buffer di output.|
|[pptr](#pptr)|Funzione protetta che restituisce un puntatore all'elemento successivo del buffer di output.|
|[pubimbue](#pubimbue)|Configura le impostazioni locali dell'oggetto `basic_streambuf`.|
|[pubseekoff](#pubseekoff)|Chiama [seekoff](#seekoff), una funzione virtuale protetta di cui viene eseguito l'override in una classe derivata.|
|[pubseekpos](#pubseekpos)|Chiama [seekpos](#seekpos), una funzione virtuale protetta sottoposta a override in una classe derivata e che reimposta la posizione corrente del puntatore.|
|[pubsetbuf](#pubsetbuf)|Chiama [setbuf](#setbuf), una funzione virtuale protetta di cui viene eseguito l'override in una classe derivata.|
|[pubsync](#pubsync)|Chiama [sync](#sync), una funzione virtuale protetta che viene sottoposta a override in una classe derivata e aggiorna il flusso esterno associato a questo buffer.|
|[sbumpc](#sbumpc)|Legge e restituisce l'elemento corrente, spostando il puntatore di flusso.|
|[seekoff](#seekoff)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|
|[seekpos](#seekpos)|La funzione membro virtuale protetta prova a modificare le posizioni correnti per i flussi di controllati.|
|[setbuf](#setbuf)|La funzione membro virtuale protetta esegue una particolare operazione per ogni buffer del flusso derivato.|
|[setg](#setg)|Funzione protetta che archivia `_Gbeg` nel puntatore di tipo beginning, `_Gnext` nel puntatore di tipo next e `_Gend` nel puntatore di tipo end per il buffer di input.|
|[setp](#setp)|Funzione protetta che archivia `_Pbeg` nel puntatore di tipo beginning e `_Pend` nel puntatore di tipo end per il buffer di output.|
|[sgetc](#sgetc)|Restituisce l'elemento corrente senza modificare la posizione nel flusso.|
|[sgetn](#sgetn)|Restituisce il numero di elementi letti.|
|[showmanyc](#showmanyc)|Funzione membro virtuale protetta che restituisce un conteggio del numero di caratteri che possono essere estratti dal flusso di input e assicura che il programma non sarà sottoposto a un'attesa illimitata.|
|[snextc](#snextc)|Legge l'elemento corrente e restituisce l'elemento seguente.|
|[sputbackc](#sputbackc)|Inserisce un elemento `char_type` nel flusso.|
|[sputc](#sputc)|Inserisce un carattere nel flusso.|
|[sputn](#sputn)|Inserisce una stringa di caratteri nel flusso.|
|[stossc](#stossc)|Consente di spostarsi oltre l'elemento corrente nel flusso.|
|[sungetc](#sungetc)|Ottiene un carattere dal flusso.|
|[Swap](#swap)|Scambia i valori in questo oggetto con i valori disponibili nel parametro dell'oggetto `basic_streambuf` fornito.|
|[sync](#sync)|Funzione virtuale protetta che prova a sincronizzare i flussi controllati con eventuali flussi esterni associati.|
|[uflow](#uflow)|Funzione virtuale protetta che estrae l'elemento corrente dal flusso di input.|
|[underflow](#underflow)|Funzione virtuale protetta che estrae l'elemento corrente dal flusso di input.|
|[xsgetn](#xsgetn)|Funzione virtuale protetta che estrae elementi dal flusso di input.|
|[xsputn](#xsputn)|Funzione virtuale protetta che inserisce elementi nel flusso di output.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore di comando](#op_eq)|Assegna i valori di questo oggetto da un altro oggetto `basic_streambuf`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<streambuf>

**Spazio dei nomi:** std

## <a name="basic_streambufbasic_streambuf"></a><a name="basic_streambuf"></a>basic_streambuf::basic_streambuf

Costruisce un oggetto di tipo `basic_streambuf`.

```cpp
basic_streambuf();

basic_streambuf(const basic_streambuf& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Un riferimento lvalue all'oggetto `basic_streambuf` usato per impostare i valori per questo oggetto `basic_streambuf`.

### <a name="remarks"></a>Osservazioni

Il primo costruttore protetto archivia un puntatore null in tutti i puntatori che controllano il buffer di input e il buffer di output. Archivia anche `locale::classic` nell'oggetto delle impostazioni locali. Per altre informazioni, vedere [locale::classic](../standard-library/locale-class.md#classic).

Il secondo costruttore protetto copia i puntatori e le impostazioni locali da *right*.

## <a name="basic_streambufchar_type"></a><a name="char_type"></a>basic_streambuf::char_type

Associa un nome di tipo al parametro di modello **Elem**.

```cpp
typedef Elem char_type;
```

## <a name="basic_streambufeback"></a><a name="eback"></a>basic_streambuf::eback

Funzione protetta che restituisce un puntatore all'inizio del buffer di input.

```cpp
char_type *eback() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore all'inizio del buffer di input.

## <a name="basic_streambufegptr"></a><a name="egptr"></a>basic_streambuf::egptr

Funzione protetta che restituisce un puntatore a una posizione immediatamente successiva alla fine del buffer di input.

```cpp
char_type *egptr() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a una posizione immediatamente successiva alla fine del buffer di input.

## <a name="basic_streambufepptr"></a><a name="epptr"></a>basic_streambuf::epptr

Funzione protetta che restituisce un puntatore a una posizione immediatamente successiva alla fine del buffer di output.

```cpp
char_type *epptr() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore a una posizione immediatamente successiva alla fine del buffer di output.

## <a name="basic_streambufgbump"></a><a name="gbump"></a>basic_streambuf::gbump

Funzione protetta che aggiunge *count* al puntatore successivo per il buffer di input.

```cpp
void gbump(int count);
```

### <a name="parameters"></a>Parametri

*Conteggio*\
Quantità di avanzamento del puntatore.

## <a name="basic_streambufgetloc"></a><a name="getloc"></a>basic_streambuf::getloc

Ottiene le impostazioni locali dell'oggetto basic_streambuf.

```cpp
locale getloc() const;
```

### <a name="return-value"></a>Valore restituito

L'oggetto delle impostazioni locali archiviato.

### <a name="remarks"></a>Osservazioni

Per informazioni correlate, vedere [ios_base::getloc](../standard-library/ios-base-class.md#getloc).

### <a name="example"></a>Esempio

```cpp
// basic_streambuf_getloc.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   cout << cout.rdbuf( )->getloc( ).name( ).c_str( ) << endl;
}
```

```Output
C
```

## <a name="basic_streambufgptr"></a><a name="gptr"></a>basic_streambuf::gptr

Funzione protetta che restituisce un puntatore all'elemento successivo del buffer di input.

```cpp
char_type *gptr() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore all'elemento successivo del buffer di input.

## <a name="basic_streambufimbue"></a><a name="imbue"></a>basic_streambuf::imbu

Una funzione virtuale protetta chiamata da [pubimbue](#pubimbue).

```cpp
virtual void imbue(const locale& _Loc);
```

### <a name="parameters"></a>Parametri

*_Loc*\
Un riferimento a impostazioni locali.

### <a name="remarks"></a>Osservazioni

Il comportamento predefinito non prevede l'esecuzione di alcuna operazione.

## <a name="basic_streambufin_avail"></a><a name="in_avail"></a>basic_streambuf::in_avail

Restituisce il numero di elementi pronti per la lettura dal buffer.

```cpp
streamsize in_avail();
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi pronti per la lettura dal buffer.

### <a name="remarks"></a>Osservazioni

Se è disponibile una posizione di [lettura,](../standard-library/basic-streambuf-class.md) la funzione membro restituisce [egptr](#egptr) - [gptr](#gptr). In caso contrario, la funzione restituisce [showmanyc](#showmanyc).

### <a name="example"></a>Esempio

```cpp
// basic_streambuf_in_avail.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   char c;
   // cin's buffer is empty, in_avail will return 0
   cout << cin.rdbuf( )->in_avail( ) << endl;
   cin >> c;
   cout << cin.rdbuf( )->in_avail( ) << endl;
}
```

## <a name="basic_streambufint_type"></a><a name="int_type"></a>basic_streambuf::int_type

Associa un nome di tipo nell'ambito basic_streambuf a uno dei tipi in un parametro di modello.

```cpp
typedef typename traits_type::int_type int_type;
```

## <a name="basic_streambufoff_type"></a><a name="off_type"></a>basic_streambuf::off_type

Associa un nome di tipo nell'ambito basic_streambuf a uno dei tipi in un parametro di modello.

```cpp
typedef typename traits_type::off_type off_type;
```

## <a name="basic_streambufoperator"></a><a name="op_eq"></a>basic_streambuf::operatore

Assegna i valori di questo oggetto da un altro oggetto `basic_streambuf`.

```cpp
basic_streambuf& operator=(const basic_streambuf& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Un riferimento lvalue all'oggetto l`basic_streambuf` usato per assegnare valori a questo oggetto.

### <a name="remarks"></a>Osservazioni

L'operatore membro protetto copia da *destra* i puntatori che controllano il buffer di input e il buffer di output. Archivia anche `right.`[getloc()](#getloc) in `locale object`. Restituisce `*this`.

## <a name="basic_streambufoverflow"></a><a name="overflow"></a>basic_streambuf::overflow

Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.

```cpp
virtual int_type overflow(int_type _Meta = traits_type::eof());
```

### <a name="parameters"></a>Parametri

*_Meta*\
Carattere da inserire nel buffer o **traits_type::**[eof](../standard-library/char-traits-struct.md#eof).

### <a name="return-value"></a>Valore restituito

Se la funzione non può essere eseguita correttamente, restituisce **traits_type::eof** o genera un'eccezione. In caso contrario, restituisce **traits_type::**[not_eof](../standard-library/char-traits-struct.md#not_eof)(_ *Meta*). Il comportamento predefinito consiste nel restituire **traits_type::eof**.

### <a name="remarks"></a>Osservazioni

Se * \_Meta* non confronta uguale a **traits_type::eof**, la funzione membro virtuale protetta si sa che inserisce l'elemento **traits_type::**[to_char_type](../standard-library/char-traits-struct.md#to_char_type)(*\_Meta*) nel flusso di output. Questa operazione può essere eseguita in vari modi:

- Se è disponibile `write position`, la funzione può archiviare l'elemento nella posizione di scrittura e incrementare il puntatore successivo per il buffer di output.

- Può rendere disponibile una posizione di scrittura allocando spazio di archiviazione nuovo o aggiuntivo per il buffer di output.

- Può rendere disponibile una posizione di scrittura scrivendo, in una destinazione esterna, alcuni o tutti gli elementi tra l'inizio e i puntatori successivi per il buffer di output.

La funzione di overflow virtuale, insieme alle funzioni [sync](#sync) e [underflow](#underflow), definisce le caratteristiche della classe derivata da streambuf. Ogni classe derivata può implementare l'overflow in modo diverso, ma l'interfaccia con la classe del flusso di chiamata è la stessa.

La funzione `overflow` è in genere chiamata da funzioni `streambuf` pubbliche come `sputc` e `sputn` quando l'area put è completa, mentre le altre classi, incluse le classi di flusso, possono chiamare `overflow` in qualsiasi momento.

La funzione usa i caratteri nell'area put tra i puntatori `pbase` e `pptr` e quindi reinizializza l'area put. La funzione `overflow` deve anche utilizzare `nCh` (se `nCh` non è `EOF`) o può scegliere di inserire il carattere nella nuova area put in modo che venga utilizzato nella chiamata successiva.

La definizione di utilizzo è diversa nelle classi derivate. Ad esempio, la classe `filebuf` scrive i caratteri in un file, mentre la classe `strstreambuf` li mantiene nel buffer e, se il buffer è impostato come dinamico, espande il buffer in risposta a una chiamata all'overflow. Questa espansione viene ottenuta liberando il buffer precedente e sostituendolo con un nuovo buffer di dimensione maggiore. I puntatori vengono modificati in base alle esigenze.

## <a name="basic_streambufpbackfail"></a><a name="pbackfail"></a>basic_streambuf::pbackfail

Funzione membro virtuale protetta che tenta di reinserire un elemento nel flusso di input e quindi di impostarlo come elemento corrente, a cui fa riferimento il puntatore di tipo next.

```cpp
virtual int_type pbackfail(int_type _Meta = traits_type::eof());
```

### <a name="parameters"></a>Parametri

*_Meta*\
Carattere da inserire nel buffer o **traits_type::**[eof](../standard-library/char-traits-struct.md#eof).

### <a name="return-value"></a>Valore restituito

Se la funzione non può essere eseguita correttamente, restituisce **traits_type::eof** o genera un'eccezione. In caso contrario, restituisce un altro valore. Il comportamento predefinito consiste nel restituire **traits_type::eof**.

### <a name="remarks"></a>Osservazioni

Se * \_Meta* esegue il confronto uguale a **traits_type::eof**, l'elemento da reinserire è effettivamente quello già presente nel flusso prima dell'elemento corrente. In caso contrario, l'elemento viene sostituito da **traits_type::**[to_char_type](../standard-library/char-traits-struct.md#to_char_type)(*\_Meta*). La funzione può reinserire un elemento in vari modi:

- Se è disponibile una posizione di reinserimento, la funzione può archiviare l'elemento in tale posizione e decrementare il puntatore successivo per il buffer di input.

- Può rendere disponibile una posizione di reinserimento allocando spazio di archiviazione nuovo o aggiuntivo per il buffer di input.

- Per un buffer di flusso con flussi di input e output comuni, può rendere disponibile una posizione di reinserimento scrivendo, in una destinazione esterna, alcuni o tutti gli elementi tra l'inizio e i puntatori successivi per il buffer di output.

## <a name="basic_streambufpbase"></a><a name="pbase"></a>basic_streambuf:base:pbase

Funzione protetta che restituisce un puntatore all'inizio del buffer di output.

```cpp
char_type *pbase() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore all'inizio del buffer di output.

## <a name="basic_streambufpbump"></a><a name="pbump"></a>basic_streambuf::pbump

Funzione protetta che aggiunge *count* al puntatore successivo per il buffer di output.

```cpp
void pbump(int count);
```

### <a name="parameters"></a>Parametri

*Conteggio*\
Il numero di caratteri per i quali spostare in avanti la posizione di scrittura.

## <a name="basic_streambufpos_type"></a><a name="pos_type"></a>basic_streambuf::pos_type (tipo)

Associa un nome di tipo nell'ambito basic_streambuf a uno dei tipi in un parametro di modello.

```cpp
typedef typename traits_type::pos_type pos_type;
```

## <a name="basic_streambufpptr"></a><a name="pptr"></a>basic_streambuf::pptr

Funzione protetta che restituisce un puntatore all'elemento successivo del buffer di output.

```cpp
char_type *pptr() const;
```

### <a name="return-value"></a>Valore restituito

Un puntatore all'elemento successivo del buffer di output.

## <a name="basic_streambufpubimbue"></a><a name="pubimbue"></a>basic_streambuf::pubimbue

Specifica le impostazioni locali dell'oggetto basic_streambuf.

```cpp
locale pubimbue(const locale& _Loc);
```

### <a name="parameters"></a>Parametri

*_Loc*\
Un riferimento a impostazioni locali.

### <a name="return-value"></a>Valore restituito

Il valore precedente archiviato nell'oggetto delle impostazioni locali.

### <a name="remarks"></a>Osservazioni

La funzione membro archivia _ *Loc* nell'oggetto delle impostazioni locali e chiama [imbue](#imbue).

### <a name="example"></a>Esempio

Vedere [basic_ios::imbue](../standard-library/basic-ios-class.md#imbue) per un esempio di utilizzo di `pubimbue`.

## <a name="basic_streambufpubseekoff"></a><a name="pubseekoff"></a>basic_streambuf::pubseekoff

Chiama [seekoff](#seekoff), una funzione virtuale protetta di cui viene eseguito l'override in una classe derivata.

```cpp
pos_type pubseekoff(off_type _Off,
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

Restituisce la nuova posizione o una posizione di `_Way` `_Which`flusso non valida ( [seekoff](#seekoff)( *_ Off*, , , ) ).

### <a name="remarks"></a>Osservazioni

Sposta il puntatore rispetto a *_Way*.

## <a name="basic_streambufpubseekpos"></a><a name="pubseekpos"></a>basic_streambuf::pubseekpos

Chiama [seekpos](#seekpos), una funzione virtuale protetta di cui viene eseguito l'override in una classe derivata e reimposta la posizione corrente del puntatore.

```cpp
pos_type pubseekpos(pos_type _Sp, ios_base::openmode _Which = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

*_Sp*\
Posizione da cercare.

*_Which*\
Specifica la modalità per la posizione del puntatore. L'impostazione predefinita consente di modificare le posizioni di lettura e scrittura.

### <a name="return-value"></a>Valore restituito

La nuova posizione o una posizione di flusso non valida. Per stabilire se la posizione del flusso non è valida, confrontare il valore restituito con `pos_type(off_type(-1))`.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [seekpos](#seekpos)(_ *Sp*, `_Which`).

## <a name="basic_streambufpubsetbuf"></a><a name="pubsetbuf"></a>basic_streambuf::pubsetbuf

Chiama [setbuf](#setbuf), una funzione virtuale protetta di cui viene eseguito l'override in una classe derivata.

```cpp
basic_streambuf<Elem, Tr> *pubsetbuf(
    char_type* _Buffer,
    streamsize count);
```

### <a name="parameters"></a>Parametri

*_Buffer*\
Un puntatore a `char_type` per la creazione dell'istanza.

*Conteggio*\
Dimensione del buffer.

### <a name="return-value"></a>Valore restituito

Restituisce [setbuf](#setbuf)( `_Buffer`, `count`).

## <a name="basic_streambufpubsync"></a><a name="pubsync"></a>basic_streambuf::pubsync

Chiama [sync](#sync), una funzione virtuale protetta di cui viene eseguito l'override in una classe derivata e aggiorna il flusso esterno associato al buffer.

```cpp
int pubsync();
```

### <a name="return-value"></a>Valore restituito

Restituisce [sync](#sync) o -1 in caso di errore.

## <a name="basic_streambufsbumpc"></a><a name="sbumpc"></a>basic_streambuf::sbumpc

Legge e restituisce l'elemento corrente, spostando il puntatore di flusso.

```cpp
int_type sbumpc();
```

### <a name="return-value"></a>Valore restituito

L'elemento corrente.

### <a name="remarks"></a>Osservazioni

Se è disponibile una posizione di lettura, la funzione membro restituisce **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#to_int_type)( <strong>\*</strong>[gptr](#gptr)) e incrementa il puntatore successivo per il buffer di input. In caso contrario, la funzione restituisce [uflow](#uflow).

### <a name="example"></a>Esempio

```cpp
// basic_streambuf_sbumpc.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
   using namespace std;
   int i = 0;
   i = cin.rdbuf( )->sbumpc( );
   cout << i << endl;
}
```

```Input
3
```

```Output
33
51
```

## <a name="basic_streambufseekoff"></a><a name="seekoff"></a>basic_streambuf::seekoff

Funzione membro virtuale protetta che prova a modificare le posizioni correnti per i flussi controllati.

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

Restituisce la nuova posizione o `seekoff` una posizione `_Which`di flusso non valida ( _ *Off*, `_Way`, ) .

### <a name="remarks"></a>Osservazioni

La nuova posizione è determinata nel modo seguente:

- Se `_Way` == `ios_base::beg`, la nuova posizione corrisponde all'inizio del flusso più _ *Off*.

- Se `_Way` == `ios_base::cur`, la nuova posizione corrisponde alla posizione del flusso corrente più _ *Off*.

- Se `_Way` == `ios_base::end`, la nuova posizione corrisponde alla fine del flusso più _ *Off*.

In genere, se **which & ios_base::in** è diverso da zero ne è influenzato il flusso di input e se **which & ios_base::out** è diverso da zero ne è interessato il flusso di output. L'utilizzo effettivo di questo parametro, tuttavia, varia da un buffer di flusso derivato all'altro.

Se la funzione modifica la posizione o le posizioni del flusso, restituisce la posizione di flusso risultante o una delle posizioni di flusso risultanti. In caso contrario, restituisce una posizione di flusso non valida. Il comportamento predefinito consiste nel restituire una posizione di flusso non valida.

## <a name="basic_streambufseekpos"></a><a name="seekpos"></a>basic_streambuf::seekpos

Funzione membro virtuale protetta che prova a modificare le posizioni correnti per i flussi controllati.

```cpp
virtual pos_type seekpos(pos_type _Sp, ios_base::openmode _Which = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

*_Sp*\
Posizione da cercare.

*_Which*\
Specifica la modalità per la posizione del puntatore. L'impostazione predefinita consente di modificare le posizioni di lettura e scrittura.

### <a name="return-value"></a>Valore restituito

La nuova posizione o una posizione di flusso non valida. Per stabilire se la posizione del flusso non è valida, confrontare il valore restituito con `pos_type(off_type(-1))`.

### <a name="remarks"></a>Osservazioni

La nuova posizione è _ *Sp*.

In genere, se **which & ios_base::in** è diverso da zero ne è influenzato il flusso di input e se **which & ios_base::out** è diverso da zero ne è interessato il flusso di output. L'utilizzo effettivo di questo parametro, tuttavia, varia da un buffer di flusso derivato all'altro.

Se la funzione modifica la posizione o le posizioni del flusso, restituisce la posizione di flusso risultante o una delle posizioni di flusso risultanti. In caso contrario, restituisce una posizione di flusso non valida (-1). Il comportamento predefinito consiste nel restituire una posizione di flusso non valida.

## <a name="basic_streambufsetbuf"></a><a name="setbuf"></a>basic_streambuf::setbuf

Funzione membro virtuale protetta che esegue una particolare operazione in ogni buffer di flusso derivato.

```cpp
virtual basic_streambuf<Elem, Tr> *setbuf(
    char_type* _Buffer,
    streamsize count);
```

### <a name="parameters"></a>Parametri

*_Buffer*\
Puntatore a un buffer.

*Conteggio*\
Dimensioni del buffer.

### <a name="return-value"></a>Valore restituito

Il comportamento predefinito consiste nel restituire **this**.

### <a name="remarks"></a>Osservazioni

Vedere [basic_filebuf](../standard-library/basic-filebuf-class.md). `setbuf` fornisce un'area di memoria per l'oggetto `streambuf` da usare. La modalità di utilizzo del buffer è definita nelle classi derivate.

## <a name="basic_streambufsetg"></a><a name="setg"></a>basic_streambuf::setg

Funzione protetta che archivia _ *Gbeg* nel puntatore iniziale, `_Gnext` nel puntatore successivo e `_Gend` nel puntatore finale per il buffer di input.

```cpp
void setg(char_type* _Gbeg,
    char_type* _Gnext,
    char_type* _Gend);
```

### <a name="parameters"></a>Parametri

*_Gbeg*\
Puntatore all'inizio del buffer.

*_Gnext*\
Puntatore a una posizione centrale del buffer.

*_Gend*\
Puntatore alla fine del buffer.

## <a name="basic_streambufsetp"></a><a name="setp"></a>basic_streambuf::setp

Funzione protetta che archivia *_Pbeg* nel puntatore iniziale e *_Pend* nel puntatore finale per il buffer di output.

```cpp
void setp(char_type* _Pbeg, char_type* _Pend);
```

### <a name="parameters"></a>Parametri

*_Pbeg*\
Puntatore all'inizio del buffer.

*_Pend*\
Puntatore alla fine del buffer.

## <a name="basic_streambufsgetc"></a><a name="sgetc"></a>basic_streambuf::sgetc

Restituisce l'elemento corrente senza modificare la posizione nel flusso.

```cpp
int_type sgetc();
```

### <a name="return-value"></a>Valore restituito

L'elemento corrente.

### <a name="remarks"></a>Osservazioni

Se è disponibile una posizione di lettura, la funzione membro restituisce **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#to_int_type)( `*`[gptr](#gptr)). In caso contrario, la funzione restituisce [underflow](#underflow).

### <a name="example"></a>Esempio

```cpp
// basic_streambuf_sgetc.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
   using namespace std;
   ifstream myfile( "basic_streambuf_sgetc.txt", ios::in );

   char i = myfile.rdbuf( )->sgetc( );
   cout << i << endl;
   i = myfile.rdbuf( )->sgetc( );
   cout << i << endl;
}
```

## <a name="basic_streambufsgetn"></a><a name="sgetn"></a>basic_streambuf::sgetn

Estrae fino a *contare* i caratteri dal buffer di input e li archivia nel buffer fornito *ptr*.

Questo metodo è potenzialmente pericoloso poiché si basa sul controllo dei valori passati effettuato dal chiamante.

```cpp
streamsize sgetn(
    char_type* ptr,
    streamsize count);
```

### <a name="parameters"></a>Parametri

*Ptr*\
Buffer che deve contenere i caratteri estratti.

*Conteggio*\
Numero di elementi da leggere.

### <a name="return-value"></a>Valore restituito

Numero di elementi letti. Per altre informazioni, vedere [streamsize](../standard-library/ios-typedefs.md#streamsize).

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce `ptr` [xsgetn](#xsgetn)( , `count`).

### <a name="example"></a>Esempio

```cpp
// basic_streambuf_sgetn.cpp
// compile with: /EHsc /W3
#include <iostream>
#include <fstream>

int main()
{
    using namespace std;

    ifstream myfile("basic_streambuf_sgetn.txt", ios::in);
    char a[10];

    // Extract 3 characters from myfile and store them in a.
    streamsize i = myfile.rdbuf()->sgetn(&a[0], 3);  // C4996
    a[i] = myfile.widen('\0');

    // Display the size and contents of the buffer passed to sgetn.
    cout << i << " " << a << endl;

    // Display the contents of the original input buffer.
    cout << myfile.rdbuf() << endl;
}
```

## <a name="basic_streambufshowmanyc"></a><a name="showmanyc"></a>basic_streambuf::showmanyc

Funzione membro virtuale protetta che restituisce un conteggio del numero di caratteri che possono essere estratti dal flusso di input e assicura che il programma non sarà sottoposto a un'attesa illimitata.

```cpp
virtual streamsize showmanyc();
```

### <a name="return-value"></a>Valore restituito

Il comportamento predefinito consiste nel restituire zero.

## <a name="basic_streambufsnextc"></a><a name="snextc"></a>basic_streambuf::snextc

Legge l'elemento corrente e restituisce l'elemento seguente.

```cpp
int_type snextc();
```

### <a name="return-value"></a>Valore restituito

L'elemento successivo nel flusso.

### <a name="remarks"></a>Osservazioni

La funzione membro chiama [sbumpc](#sbumpc) e, se la funzione restituisce **traits_type::**[eof](../standard-library/char-traits-struct.md#eof), restituisce **traits_type::eof**. In caso contrario, la funzione restituisce [sgetc](#sgetc).

### <a name="example"></a>Esempio

```cpp
// basic_streambuf_snextc.cpp
// compile with: /EHsc
#include <iostream>
int main( )
{
   using namespace std;
   int i = 0;
   i = cin.rdbuf( )->snextc( );
   // cout << ( int )char_traits<char>::eof << endl;
   cout << i << endl;
}
```

```Input
aa
```

```Output
aa97
```

## <a name="basic_streambufsputbackc"></a><a name="sputbackc"></a>basic_streambuf::sputbackc

Inserisce un char_type nel flusso.

```cpp
int_type sputbackc(char_type _Ch);
```

### <a name="parameters"></a>Parametri

*_Ch*\
Il carattere.

### <a name="return-value"></a>Valore restituito

Restituisce il carattere o un errore.

### <a name="remarks"></a>Osservazioni

Se è disponibile una posizione putback e *_Ch* confronta uguale al carattere memorizzato in tale posizione, la funzione `_Ch`membro decrementa il puntatore successivo per il buffer di input e restituisce **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#to_int_type)). In caso contrario, `_Ch`restituisce [pbackfail](#pbackfail)( ).

### <a name="example"></a>Esempio

```cpp
// basic_streambuf_sputbackc.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
    using namespace std;

    ifstream myfile("basic_streambuf_sputbackc.txt",
        ios::in);

    int i = myfile.rdbuf()->sbumpc();
    cout << (char)i << endl;
    int j = myfile.rdbuf()->sputbackc('z');
    if (j == 'z')
    {
        cout << "it worked" << endl;
    }
    i = myfile.rdbuf()->sgetc();
    cout << (char)i << endl;
}
```

## <a name="basic_streambufsputc"></a><a name="sputc"></a>basic_streambuf::sputc

Inserisce un carattere nel flusso.

```cpp
int_type sputc(char_type _Ch);
```

### <a name="parameters"></a>Parametri

*_Ch*\
Il carattere.

### <a name="return-value"></a>Valore restituito

Restituisce il carattere, se ha esito positivo.

### <a name="remarks"></a>Osservazioni

Se `write position` è disponibile un oggetto , la funzione membro archivia *_Ch* nella posizione di scrittura, `_Ch`incrementa il puntatore successivo per il buffer di output e restituisce **traits_type:**[to_int_type](../standard-library/char-traits-struct.md#to_int_type)( ). In caso contrario, restituisce [overflow](#overflow)( `_Ch`).

### <a name="example"></a>Esempio

```cpp
// basic_streambuf_sputc.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
   using namespace std;

   int i = cout.rdbuf( )->sputc( 'a' );
   cout << endl << ( char )i << endl;
}
```

```Output
a
a
```

## <a name="basic_streambufsputn"></a><a name="sputn"></a>basic_streambuf::sputn

Inserisce una stringa di caratteri nel flusso.

```cpp
streamsize sputn(const char_type* ptr, streamsize count);
```

### <a name="parameters"></a>Parametri

*Ptr*\
La stringa di caratteri.

*Conteggio*\
Il numero di caratteri.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri effettivamente inserito nel flusso.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce `ptr` [xsputn](#xsputn)( , `count`). Per altre informazioni, vedere la sezione Note di questo membro.

### <a name="example"></a>Esempio

```cpp
// basic_streambuf_sputn.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main()
{
    using namespace std;

    streamsize i = cout.rdbuf()->sputn("test", 4);
    cout << endl << i << endl;
}
```

```Output
test
4
```

## <a name="basic_streambufstossc"></a><a name="stossc"></a>basic_streambuf::stossc

Consente di spostarsi oltre l'elemento corrente nel flusso.

```cpp
void stossc();
```

### <a name="remarks"></a>Osservazioni

La funzione membro chiama [sbumpc](#sbumpc). Si noti che non è necessaria un'implementazione per specificare questa funzione membro.

### <a name="example"></a>Esempio

```cpp
// basic_streambuf_stossc.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
   using namespace std;
   ifstream myfile( "basic_streambuf_stossc.txt", ios::in );

   myfile.rdbuf( )->stossc( );
   char i = myfile.rdbuf( )->sgetc( );
   cout << i << endl;
}
```

## <a name="basic_streambufsungetc"></a><a name="sungetc"></a>basic_streambuf::sungetc

Ottiene un carattere dal flusso.

```cpp
int_type sungetc();
```

### <a name="return-value"></a>Valore restituito

Restituisce il carattere o un errore.

### <a name="remarks"></a>Osservazioni

Se è disponibile una posizione putback, la funzione membro decrementa `traits_type::`il `*`puntatore successivo per il buffer di input e restituisce [to_int_type](../standard-library/char-traits-struct.md#to_int_type)( [gptr](#gptr)). Tuttavia, non è sempre possibile determinare l'ultimo carattere letto in modo che possa essere acquisito nello stato del buffer corrente. Se true, la funzione restituisce [pbackfail](#pbackfail). Per evitare questa situazione, tenere traccia del carattere da reinserire e chiamare `sputbackc(ch)` che non avrà esito negativo a condizione che non venga chiamato all'inizio del flusso e non si tenti di reinserire più di un carattere.

### <a name="example"></a>Esempio

```cpp
// basic_streambuf_sungetc.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
   using namespace std;

   ifstream myfile( "basic_streambuf_sungetc.txt", ios::in );

   // Read and increment
   int i = myfile.rdbuf( )->sbumpc( );
   cout << ( char )i << endl;

   // Read and increment
   i = myfile.rdbuf( )->sbumpc( );
   cout << ( char )i << endl;

   // Decrement, read, and do not increment
   i = myfile.rdbuf( )->sungetc( );
   cout << ( char )i << endl;

   i = myfile.rdbuf( )->sungetc( );
   cout << ( char )i << endl;

   i = myfile.rdbuf( )->sbumpc( );
   cout << ( char )i << endl;
}
```

## <a name="basic_streambufswap"></a><a name="swap"></a>basic_streambuf::swap

Scambia i valori in questo oggetto con i valori disponibili nell'oggetto `basic_streambuf` fornito.

```cpp
void swap(basic_streambuf& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*va bene*|Un riferimento lvalue all'oggetto `basic_streambuf` usato per scambiare valori.|

### <a name="remarks"></a>Osservazioni

La funzione membro protetta si scambia `input buffer` con `output buffer` *right* tutti i puntatori che controllano il e il . Scambia anche `right.`[getloc()](#getloc) con l'oggetto `locale`.

## <a name="basic_streambufsync"></a><a name="sync"></a>basic_streambuf::sync

Funzione virtuale protetta che prova a sincronizzare i flussi controllati con eventuali flussi esterni associati.

```cpp
virtual int sync();
```

### <a name="return-value"></a>Valore restituito

Se la funzione non può essere eseguita correttamente, restituisce -1. Il comportamento predefinito consiste nel restituire zero.

### <a name="remarks"></a>Osservazioni

`sync` comporta la scrittura degli elementi tra il puntatore iniziale e quello successivo per il buffer di output. Non comporta il reinserimento degli elementi tra il puntatore successivo e il puntatore finale per il buffer di input.

## <a name="basic_streambuftraits_type"></a><a name="traits_type"></a>basic_streambuf::traits_type

Associa un nome di tipo al parametro di modello **Tr**.

```cpp
typedef Tr traits_type;
```

## <a name="basic_streambufuflow"></a><a name="uflow"></a>basic_streambuf::uflow

Funzione virtuale protetta che estrae l'elemento corrente dal flusso di input.

```cpp
virtual int_type uflow();
```

### <a name="return-value"></a>Valore restituito

L'elemento corrente.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta tenta di estrarre l'elemento corrente **ch** dal flusso di input, quindi incrementa la posizione del flusso corrente e restituisce l'elemento come **traits_type::**[to_int_type](../standard-library/char-traits-struct.md#to_int_type)( **ch**). Questa operazione può essere eseguita in vari modi:

- Se è disponibile una posizione di lettura, accetta **ch** come elemento archiviato nella posizione di lettura e incrementa il puntatore successivo per il buffer di input.

- Può leggere un elemento direttamente da un'origine esterna e fornirlo come valore di **ch**.

- Per un buffer di flusso con flussi di input e output comuni, può rendere disponibile una posizione di lettura scrivendo, in una destinazione esterna, alcuni o tutti gli elementi tra l'inizio e i puntatori successivi per il buffer di output. Oppure può allocare uno spazio di archiviazione nuovo o aggiuntivo per il buffer di input. La funzione legge quindi uno o più elementi da un'origine esterna.

Se la funzione non riesce, restituisce **traits_type::**[eof](../standard-library/char-traits-struct.md#eof)o genera un'eccezione. In caso contrario, restituisce l'elemento corrente `ch` nel flusso di input, convertito come descritto in precedenza, e incrementa il puntatore successivo per il buffer di input. Il comportamento predefinito consiste nel chiamare [underflow](#underflow) e, se tale funzione restituisce **traits_type::eof**, restituire **traits_type::eof**. In caso contrario, la funzione restituisce l'elemento corrente **ch** nel flusso di input, convertito come descritto in precedenza, e incrementa il puntatore successivo per il buffer di input.

## <a name="basic_streambufunderflow"></a><a name="underflow"></a>basic_streambuf::Underflow

Funzione virtuale protetta per estrarre l'elemento corrente dal flusso di input.

```cpp
virtual int_type underflow();
```

### <a name="return-value"></a>Valore restituito

L'elemento corrente.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta estrae l'elemento corrente **ch** dal buffer di input senza incrementare la posizione del flusso corrente e restituisce l'elemento come `traits_type::`[to_int_type](../standard-library/char-traits-struct.md#to_int_type)( **ch**). Questa operazione può essere eseguita in vari modi:

- Se è disponibile una posizione di lettura, **ch** è l'elemento archiviato nella posizione di lettura. Per altre informazioni, vedere la sezione Note della [Classe basic_streambuf](../standard-library/basic-streambuf-class.md).

- Può rendere disponibile una posizione di lettura allocando spazio di archiviazione nuovo o aggiuntivo per il buffer di input, quindi leggendo, da un'origine esterna, uno o più elementi. Per altre informazioni, vedere la sezione Note della [Classe basic_streambuf](../standard-library/basic-streambuf-class.md).

Se la funzione non `traits_type::`riesce, restituisce [eof](../standard-library/char-traits-struct.md#eof) `()` o genera un'eccezione. In caso contrario, restituisce l'elemento corrente nel flusso di input, convertito come descritto in precedenza. Il comportamento predefinito consiste nel restituire `traits_type::eof()`.

La funzione `underflow` virtuale, con le funzioni [sync](#sync) e [overflow](#overflow), definisce le caratteristiche della classe derivata da `streambuf`. Ogni classe derivata può implementare `underflow` in modo diverso, ma l'interfaccia con la classe del flusso di chiamata è la stessa.

La funzione `underflow` è in genere chiamata da funzioni `streambuf` pubbliche come [sgetc](#sgetc) e [sgetn](#sgetn) quando l'area get è vuota, mentre le altre classi, incluse le classi di flusso, possono chiamare `underflow` in qualsiasi momento.

La funzione `underflow` fornisce l'area get con caratteri dell'origine di input. Se l'area get contiene caratteri, `underflow` restituisce il primo carattere. Se l'area get è vuota, riempie l'area get e restituisce il carattere successivo (che lascia nell'area get). Se non sono disponibili altri caratteri, `underflow` restituisce `EOF` e lascia vuota l'area get.

Nella classe `strstreambuf``underflow` modifica il puntatore [egptr](#egptr) per accedere allo spazio di archiviazione allocato dinamicamente da una chiamata a `overflow`.

## <a name="basic_streambufxsgetn"></a><a name="xsgetn"></a>basic_streambuf::xsgetn

Funzione virtuale protetta per l'estrazione di elementi dal flusso di input.

Questo metodo è potenzialmente pericoloso poiché si basa sul controllo dei valori passati effettuato dal chiamante.

```cpp
virtual streamsize xsgetn(
    char_type* ptr,
    streamsize count);
```

### <a name="parameters"></a>Parametri

*Ptr*\
Buffer che deve contenere i caratteri estratti.

*Conteggio*\
Numero di elementi da estrarre.

### <a name="return-value"></a>Valore restituito

Numero di elementi estratti.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta estrae gli elementi per *contare* dal flusso di input, come se si ripetessero chiamate a [sbumpc](#sbumpc), e li memorizza nella matrice a partire da *ptr*. Restituisce il numero di elementi effettivamente estratti.

## <a name="basic_streambufxsputn"></a><a name="xsputn"></a>basic_streambuf::xsputn

Funzione virtuale protetta per l'inserimento di elementi nel flusso di output.

```cpp
virtual streamsize xsputn(const char_type* ptr, streamsize count);
```

### <a name="parameters"></a>Parametri

*Ptr*\
Puntatore agli elementi da inserire.

*Conteggio*\
Numero di elementi da inserire.

### <a name="return-value"></a>Valore restituito

Il numero di elementi effettivamente inserito nel flusso.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta inserisce fino a *contare* gli elementi nel flusso di output, come se si ripetesseno chiamate a [sputc](#sputc), dalla matrice a partire da *ptr*. L'inserimento di caratteri nel flusso di output si interrompe `sputc( count)` una `traits::eof()`volta che tutti i caratteri *di conteggio* sono stati scritti o se la chiamata restituirà . Restituisce il numero di elementi effettivamente inseriti.

## <a name="see-also"></a>Vedere anche

[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
