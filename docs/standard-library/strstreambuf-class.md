---
title: Classe strstreambuf
ms.date: 11/04/2016
f1_keywords:
- strstream/std::strstreambuf::freeze
- strstream/std::strstreambuf::overflow
- strstream/std::strstreambuf::pbackfail
- strstream/std::strstreambuf::pcount
- strstream/std::strstreambuf::seekoff
- strstream/std::strstreambuf::seekpos
- strstream/std::strstreambuf::str
- strstream/std::strstreambuf::underflow
helpviewer_keywords:
- std::strstreambuf [C++], freeze
- std::strstreambuf [C++], overflow
- std::strstreambuf [C++], pbackfail
- std::strstreambuf [C++], pcount
- std::strstreambuf [C++], seekoff
- std::strstreambuf [C++], seekpos
- std::strstreambuf [C++], str
- std::strstreambuf [C++], underflow
ms.assetid: b040b8ea-0669-4eba-8908-6a9cc159c54b
ms.openlocfilehash: 28399a1cd55407aadbc5d59e1e835892218ad0c8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376603"
---
# <a name="strstreambuf-class"></a>Classe strstreambuf

Descrive un buffer di flusso che controlla la trasmissione di elementi da e verso una sequenza di elementi archiviati in un oggetto matrice **char.**

## <a name="syntax"></a>Sintassi

```cpp
class strstreambuf : public streambuf
```

## <a name="remarks"></a>Osservazioni

A seconda del modo in cui è costruito, l'oggetto può essere allocato, esteso e liberato in base alle modifiche necessarie nella sequenza.

Un oggetto della classe `strstreambuf` archivia diversi bit di informazioni sulla modalità come modalità `strstreambuf`. Questi bit indicano se la sequenza controllata:

- È stata allocata e deve essere liberata alla fine.

- È modificabile.

- È estendibile attraverso la riallocazione dell'archiviazione.

- È stata bloccata e di conseguenza deve essere sbloccata prima dell'eliminazione dell'oggetto oppure deve essere liberata (se allocata) da un'agenzia diversa dall'oggetto.

Una sequenza controllata bloccata non può essere modificata o estesa, indipendentemente dallo stato di questi bit di modalità separati.

L'oggetto archivia anche puntatori a due funzioni che controllano l'allocazione di `strstreambuf`. Se si tratta di puntatori Null, l'oggetto individua il proprio metodo per allocare e liberare archiviazione per la sequenza controllata.

> [!NOTE]
> Questa classe è deprecata. Provare a usare [stringbuf](../standard-library/sstream-typedefs.md#stringbuf) o [wstringbuf](../standard-library/sstream-typedefs.md#wstringbuf).

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[strstreambuf](#strstreambuf)|Costruisce un oggetto di tipo `strstreambuf`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[Congelare](#freeze)|Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.|
|[Overflow](#overflow)|Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.|
|[pbackfail](#pbackfail)|Funzione membro virtuale protetta che tenta di reinserire un elemento nel flusso di input e quindi di impostarlo come elemento corrente, a cui punta il puntatore successivo.|
|[pcount](#pcount)|Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.|
|[seekoff](#seekoff)|Funzione membro virtuale protetta che prova a modificare le posizioni correnti per i flussi controllati.|
|[seekpos](#seekpos)|Funzione membro virtuale protetta che prova a modificare le posizioni correnti per i flussi controllati.|
|[Str](#str)|Chiama [freeze](#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.|
|[underflow](#underflow)|Funzione virtuale protetta per estrarre l'elemento corrente dal flusso di input.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<strstream>

**Spazio dei nomi:** std

## <a name="strstreambuffreeze"></a><a name="freeze"></a>strstreambuf::freeze

Fa sì che un buffer del flusso non sia disponibile tramite le operazioni di buffer del flusso.

```cpp
void freeze(bool _Freezeit = true);
```

### <a name="parameters"></a>Parametri

*_Freezeit*\
Oggetto **bool** che indica se si desidera che il flusso venga bloccato.

### <a name="remarks"></a>Osservazioni

Se *_Freezeit* è true, la `strstreambuf` funzione modifica la modalità memorizzata per rendere congelata la sequenza controllata. In caso contrario, la sequenza controllata non viene bloccata.

[str](#str) implica `freeze`.

> [!NOTE]
> Un buffer bloccato non verrà liberato durante l'eliminazione di `strstreambuf`. È necessario sbloccare il buffer prima di liberarlo per evitare una perdita di memoria.

### <a name="example"></a>Esempio

```cpp
// strstreambuf_freeze.cpp
// compile with: /EHsc

#include <iostream>
#include <strstream>

using namespace std;

void report(strstream &x)
{
    if (!x.good())
        cout << "stream bad" << endl;
    else
        cout << "stream good" << endl;
}

int main()
{
    strstream x;

    x << "test1";
    cout << "before freeze: ";
    report(x);

    // Calling str freezes stream.
    cout.write(x.rdbuf()->str(), 5) << endl;
    cout << "after freeze: ";
    report(x);

    // Stream is bad now, wrote on frozen stream
    x << "test1.5";
    cout << "after write to frozen stream: ";
    report(x);

    // Unfreeze stream, but it is still bad
    x.rdbuf()->freeze(false);
    cout << "after unfreezing stream: ";
    report(x);

    // Clear stream
    x.clear();
    cout << "after clearing stream: ";
    report(x);

    x << "test3";
    cout.write(x.rdbuf()->str(), 10) << endl;

    // Clean up.  Failure to unfreeze stream will cause a
    // memory leak.
    x.rdbuf()->freeze(false);
}
```

```Output
before freeze: stream good
test1
after freeze: stream good
after write to frozen stream: stream bad
after unfreezing stream: stream bad
after clearing stream: stream good
test1test3
```

## <a name="strstreambufoverflow"></a><a name="overflow"></a>strstreambuf::overflow

Una funzione virtuale protetta che può essere chiamata quando viene inserito un nuovo carattere in un buffer pieno.

```cpp
virtual int overflow(int _Meta = EOF);
```

### <a name="parameters"></a>Parametri

*_Meta*\
Carattere da inserire nel buffer o `EOF`.

### <a name="return-value"></a>Valore restituito

Se la funzione non può essere eseguita correttamente, restituisce `EOF`. In caso * \_* contrario, se == `EOF`Meta `EOF`, restituisce un valore diverso da . In caso * \_* contrario, restituisce Meta .

### <a name="remarks"></a>Osservazioni

Se * \_Meta* `EOF`! , la funzione membro virtuale `(char)_Meta` protetta tenta di inserire l'elemento nel buffer di output. Questa operazione può essere eseguita in vari modi:

- Se è disponibile una posizione di scrittura, può archiviare l'elemento in tale posizione e incrementare il puntatore successivo per il buffer di output.

- Se in base alla modalità strstreambuf archiviata la sequenza controllata è modificabile, estendibile e non bloccata, la funzione può rendere disponibile una posizione di scrittura allocando nuova memoria per il buffer di output. Questa estensione del buffer di output estende anche eventuali buffer di input associati.

## <a name="strstreambufpbackfail"></a><a name="pbackfail"></a>strstreambuf::pbackfail

Funzione membro virtuale protetta che tenta di reinserire un elemento nel flusso di input e quindi di impostarlo come elemento corrente a cui punta il puntatore successivo.

```cpp
virtual int pbackfail(int _Meta = EOF);
```

### <a name="parameters"></a>Parametri

*_Meta*\
Carattere da inserire nel buffer o `EOF`.

### <a name="return-value"></a>Valore restituito

Se la funzione non può essere eseguita correttamente, restituisce `EOF`. In caso * \_* contrario, se == `EOF`Meta `EOF`, restituisce un valore diverso da . In caso * \_* contrario, restituisce Meta .

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta prova a reinserire un elemento nel buffer di input e quindi di renderlo l'elemento corrente a cui punta il puntatore successivo.

Se * \_Meta* == `EOF`, l'elemento da respingere è effettivamente quello già presente nel flusso prima dell'elemento corrente. In caso contrario, `ch = (char)_Meta`tale elemento viene sostituito da . La funzione può reinserire un elemento in vari modi:

- Se è disponibile una posizione putback e l'elemento archiviato in tale posizione è uguale a `ch`, può decrementare il puntatore successivo per il buffer di input.

- Se è disponibile una posizione putback e se la modalità strstreambuf indica `ch` che la sequenza controllata è modificabile, la funzione può archiviare nella posizione di putback e diminuire il puntatore successivo per il buffer di input.

## <a name="strstreambufpcount"></a><a name="pcount"></a>strstreambuf::pcount

Restituisce un conteggio del numero di elementi scritti nella sequenza controllata.

```cpp
streamsize pcount() const;
```

### <a name="return-value"></a>Valore restituito

Conteggio del numero di elementi scritti nella sequenza controllata.

### <a name="remarks"></a>Osservazioni

In particolare, se [pptr](../standard-library/basic-streambuf-class.md#pptr) è un puntatore null, la funzione restituisce zero. In caso `pptr`  - contrario, restituisce [pbase](../standard-library/basic-streambuf-class.md#pbase).

### <a name="example"></a>Esempio

```cpp
// strstreambuf_pcount.cpp
// compile with: /EHsc
#include <iostream>
#include <strstream>
using namespace std;

int main( )
{
   strstream x;
   x << "test1";
   cout << x.rdbuf( )->pcount( ) << endl;
   x << "test2";
   cout << x.rdbuf( )->pcount( ) << endl;
}
```

## <a name="strstreambufseekoff"></a><a name="seekoff"></a>strstreambuf::seekoff

Funzione membro virtuale protetta che prova a modificare le posizioni correnti per i flussi controllati.

```cpp
virtual streampos seekoff(streamoff _Off,
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

Se la funzione modifica correttamente una o entrambe le posizioni del flusso, restituisce la risultante posizione del flusso. In caso contrario, ha esito negativo e restituisce una posizione del flusso non valida.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta tenta di modificare le posizioni correnti per i flussi controllati. Per un oggetto della classe strstreambuf, una posizione del flusso è costituita essenzialmente da un offset del flusso. L'offset zero designa il primo elemento della sequenza controllata.

La nuova posizione è determinata nel modo seguente:

- Se `_Way == ios_base::beg`, la nuova posizione è l'inizio del flusso più *_Off*.

- Se `_Way == ios_base::cur`, la nuova posizione è la posizione corrente del flusso più *_Off*.

- Se `_Way == ios_base::end`, la nuova posizione è la fine del flusso più *_Off*.

Se `_Which & ios_base::in` è diverso da zero e il buffer di input esiste, la funzione modifica la posizione successiva da leggere nel buffer di input. Se `_Which & ios_base::out` è presente `_Way != ios_base::cur`anche un valore diverso da zero, , e il buffer di output esiste, la funzione imposta anche la posizione successiva da scrivere in modo che corrisponda alla posizione successiva da leggere.

In caso contrario, se `_Which & ios_base::out` è diverso da zero ed è presente il buffer di output, la funzione modifica la posizione successiva per la scrittura nel buffer di output. In caso contrario, l'operazione di posizionamento avrà esito negativo. Affinché un'operazione di posizionamento abbia esito positivo, è necessario che la posizione del flusso risultante si trovi all'interno della sequenza controllata.

## <a name="strstreambufseekpos"></a><a name="seekpos"></a>strstreambuf::seekpos

Funzione membro virtuale protetta che prova a modificare le posizioni correnti per i flussi controllati.

```cpp
virtual streampos seekpos(streampos _Sp, ios_base::openmode _Which = ios_base::in | ios_base::out);
```

### <a name="parameters"></a>Parametri

*_Sp*\
Posizione da cercare.

*_Which*\
Specifica la modalità per la posizione del puntatore. L'impostazione predefinita consente di modificare le posizioni di lettura e scrittura.

### <a name="return-value"></a>Valore restituito

Se la funzione modifica correttamente una o entrambe le posizioni del flusso, restituisce la risultante posizione del flusso. In caso contrario, ha esito negativo e restituisce una posizione del flusso non valida. Per stabilire se la posizione del flusso non è valida, confrontare il valore restituito con `pos_type(off_type(-1))`.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta tenta di modificare le posizioni correnti per i flussi controllati. Per un oggetto della classe strstreambuf, una posizione del flusso è costituita essenzialmente da un offset del flusso. L'offset zero designa il primo elemento della sequenza controllata. La nuova posizione è determinata da *_Sp*.

Se `_Which` & **ios_base::in** è diverso da zero ed è presente il buffer di input, la funzione modifica la posizione di lettura successiva nel buffer di input. Se `_Which` & `ios_base::out` è diverso da zero ed è presente il buffer di output, la funzione imposta anche la posizione di scrittura successiva in modo che corrisponda alla posizione di lettura successiva. In caso contrario, se `_Which` & `ios_base::out` è diverso da zero ed è presente il buffer di output, la funzione modifica la posizione successiva per la scrittura nel buffer di output. In caso contrario, l'operazione di posizionamento avrà esito negativo. Affinché un'operazione di posizionamento abbia esito positivo, è necessario che la posizione del flusso risultante si trovi all'interno della sequenza controllata.

## <a name="strstreambufstr"></a><a name="str"></a>strstreambuf::str

Chiama [freeze](#freeze) e quindi restituisce un puntatore all'inizio della sequenza controllata.

```cpp
char *str();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'inizio della sequenza controllata.

### <a name="remarks"></a>Osservazioni

Non è presente alcun elemento di terminazione null, a meno che non ne venga esplicitamente inserito uno.

### <a name="example"></a>Esempio

Vedere [strstreambuf::freeze](#freeze) per un esempio d'uso di **str**.

## <a name="strstreambufstrstreambuf"></a><a name="strstreambuf"></a>strstreambuf::strstreambuf

Costruisce un oggetto di tipo `strstreambuf`.

```cpp
explicit strstreambuf(streamsize count = 0);

strstreambuf(void (* _Allocfunc)(size_t),
    void (* _Freefunc)(void*));

strstreambuf(char* _Getptr,
    streamsize count,
    char* _Putptr = 0);

strstreambuf(signed char* _Getptr,
    streamsize count,
    signed char* _Putptr = 0);

strstreambuf(unsigned char* _Getptr,
    streamsize count,
    unsigned char* _Putptr = 0);

strstreambuf(const char* _Getptr,
    streamsize count);

strstreambuf(const signed char* _Getptr,
    streamsize count);

strstreambuf(const unsigned char* _Getptr,
    streamsize count);
```

### <a name="parameters"></a>Parametri

*_Allocfunc*\
Funzione usata per allocare memoria del buffer.

*Conteggio*\
Determina la lunghezza del buffer a cui *punta _Getptr.* Se *_Getptr* non è un argomento (primo costruttore), una dimensione di allocazione suggerita per i buffer.

*_Freefunc*\
Funzione usata per liberare memoria del buffer.

*_Getptr*\
Buffer usato per l'input.

*_Putptr*\
Buffer usato per l'output.

### <a name="remarks"></a>Osservazioni

Il primo costruttore archivia un puntatore null in tutti i puntatori che controllano il buffer di input, il buffer di output e l'allocazione strstreambuf. Imposta la modalità strstreambuf archiviata in modo da rendere la sequenza controllata modificabile ed estendibile. Accetta inoltre *il conteggio* come dimensione di allocazione iniziale suggerita.

Il secondo costruttore si comporta come il primo, ad eccezione del fatto che archivia * \_Allocfunc* come puntatore alla funzione da chiamare per allocare spazio di archiviazione e * \_Freefunc* come puntatore alla funzione da chiamare per liberare tale spazio di archiviazione.

I tre costruttori seguenti:

```cpp
strstreambuf(char *_Getptr,
    streamsize count,
    char *putptr = 0);

strstreambuf(signed char *_Getptr,
    streamsize count,
    signed char *putptr = 0);

strstreambuf(unsigned char *_Getptr,
    streamsize count,
    unsigned char *putptr = 0);
```

si comportano come il primo, ad eccezione del fatto che `_Getptr` designa l'oggetto matrice usato per contenere la sequenza controllata. (Quindi, non deve essere un puntatore null.) Il numero di elementi *N* nella matrice viene determinato come segue:

- Se`count` ( > 0), `count` *N* è .

- Se`count` ( ) , *N* è `strlen`( ( `_Getptr` **const** `char` ) ).

- Se`count` ( < 0), *N* viene **INT_MAX**.

Se `_Putptr` è un puntatore null, la funzione stabilisce soltanto un buffer di input mediante il codice seguente:

```cpp
setg(_Getptr,
    _Getptr,
    _Getptr + N);
```

In caso contrario, stabilisce sia il buffer di input che quello di output mediante il codice seguente:

```cpp
setg(_Getptr,
    _Getptr,
    _Putptr);

setp(_Putptr,
    _Getptr + N);
```

In questo caso, `_Putptr` deve essere compreso nell'intervallo [ `_Getptr`, `_Getptr` + *N*].

Infine, i tre costruttori seguenti:

```cpp
strstreambuf(const char *_Getptr,
    streamsize count);

strstreambuf(const signed char *_Getptr,
    streamsize count);

strstreambuf(const unsigned char *_Getptr,
    streamsize count);
```

si comportano tutti allo stesso modo di:

```cpp
streambuf((char *)_Getptr, count);
```

tranne per il fatto che la modalità archiviata non rende la sequenza controllata né modificabile né estendibile.

## <a name="strstreambufunderflow"></a><a name="underflow"></a>strstreambuf::underflow

Funzione virtuale protetta per estrarre l'elemento corrente dal flusso di input.

```cpp
virtual int underflow();
```

### <a name="return-value"></a>Valore restituito

Se la funzione non può essere eseguita correttamente, restituisce `EOF`. In caso contrario, restituisce l'elemento corrente nel flusso di input, convertito come descritto in precedenza.

### <a name="remarks"></a>Osservazioni

La funzione membro virtuale protetta cerca di `ch` estrarre l'elemento corrente dal buffer di input, quindi`int`spostare la posizione del flusso corrente e restituire l'elemento come ( ) )`unsigned char` **ch**. Può farlo in un solo modo: se è disponibile `ch` una posizione di lettura, prende come elemento memorizzato nella posizione di lettura e fa avanzare il puntatore successivo per il buffer di input.

## <a name="see-also"></a>Vedere anche

[streambuf](../standard-library/streambuf-typedefs.md#streambuf)\
[Sicurezza dei filettatura nella libreria standard di C](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
