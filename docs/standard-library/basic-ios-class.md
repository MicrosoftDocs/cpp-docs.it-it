---
title: Classe basic_ios
ms.date: 11/04/2016
f1_keywords:
- ios/std::basic_ios
- ios/std::basic_ios::char_type
- ios/std::basic_ios::int_type
- ios/std::basic_ios::off_type
- ios/std::basic_ios::pos_type
- ios/std::basic_ios::traits_type
- ios/std::basic_ios::bad
- ios/std::basic_ios::clear
- ios/std::basic_ios::copyfmt
- ios/std::basic_ios::eof
- ios/std::basic_ios::exceptions
- ios/std::basic_ios::fail
- ios/std::basic_ios::fill
- ios/std::basic_ios::good
- ios/std::basic_ios::imbue
- ios/std::basic_ios::init
- ios/std::basic_ios::move
- ios/std::basic_ios::narrow
- ios/std::basic_ios::rdbuf
- ios/std::basic_ios::rdstate
- ios/std::basic_ios::set_rdbuf
- ios/std::basic_ios::setstate
- ios/std::basic_ios::swap
- ios/std::basic_ios::tie
- ios/std::basic_ios::widen
- ios/std::basic_ios::explicit operator bool
helpviewer_keywords:
- std::basic_ios [C++]
- std::basic_ios [C++], char_type
- std::basic_ios [C++], int_type
- std::basic_ios [C++], off_type
- std::basic_ios [C++], pos_type
- std::basic_ios [C++], traits_type
- std::basic_ios [C++], bad
- std::basic_ios [C++], clear
- std::basic_ios [C++], copyfmt
- std::basic_ios [C++], eof
- std::basic_ios [C++], exceptions
- std::basic_ios [C++], fail
- std::basic_ios [C++], fill
- std::basic_ios [C++], good
- std::basic_ios [C++], imbue
- std::basic_ios [C++], init
- std::basic_ios [C++], move
- std::basic_ios [C++], narrow
- std::basic_ios [C++], rdbuf
- std::basic_ios [C++], rdstate
- std::basic_ios [C++], set_rdbuf
- std::basic_ios [C++], setstate
- std::basic_ios [C++], swap
- std::basic_ios [C++], tie
- std::basic_ios [C++], widen
ms.assetid: 4fdcd8e1-62d2-4611-8a70-1e4f58434007
ms.openlocfilehash: b730933879df04d2455b5eae6fc5abf16bbf4484
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219274"
---
# <a name="basic_ios-class"></a>Classe basic_ios

Il modello di classe descrive le funzioni membro e di archiviazione comuni ai flussi di input (della classe modello [basic_istream](../standard-library/basic-istream-class.md)) e ai flussi di output (del modello di classe [basic_ostream](../standard-library/basic-ostream-class.md)) che dipendono dai parametri del modello. La classe [ios_base](../standard-library/ios-base-class.md) descrive gli elementi comuni e non dipendenti dai parametri di modello. Un oggetto della classe **basic_ios \<class Elem, class Traits> ** consente di controllare un flusso con elementi di tipo `Elem` , i cui tratti di carattere sono determinati dalla classe `Traits` .

## <a name="syntax"></a>Sintassi

```cpp

template <class Elem, class Traits>
class basic_ios : public ios_base
```

### <a name="parameters"></a>Parametri

*Elem*\
Tipo.

*Tratti*\
Variabile di tipo `char_traits`.

## <a name="remarks"></a>Osservazioni

Oggetto della classe **basic_ios \<class Elem, class Traits> ** archivia:

- Puntatore Tie a un oggetto di tipo [basic_istream](../standard-library/basic-istream-class.md) **\<Elem, Traits>** .

- Puntatore del buffer del flusso a un oggetto di tipo [basic_streambuf](../standard-library/basic-streambuf-class.md) **\<Elem, Traits >** .

- [Informazioni sulla formattazione](../standard-library/ios-base-class.md).

- [Informazioni sullo stato del flusso](../standard-library/ios-base-class.md) in un oggetto base di tipo [ios_base](../standard-library/ios-base-class.md).

- Un carattere di riempimento in un oggetto di tipo `char_type`.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_ios](#basic_ios)|Costruisce la classe `basic_ios`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Sinonimo del parametro di modello `Elem`.|
|[int_type](#int_type)|Sinonimo di `Traits::int_type`.|
|[off_type](#off_type)|Sinonimo di `Traits::off_type`.|
|[pos_type](#pos_type)|Sinonimo di `Traits::pos_type`.|
|[traits_type](#traits_type)|Sinonimo del parametro di modello `Traits`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[non valido](#bad)|Indica una perdita di integrità del buffer del flusso.|
|[deselezionare](#clear)|Cancella tutti i flag di errore.|
|[copyfmt](#copyfmt)|Copia i flag da un flusso a un altro.|
|[EOF](#eof)|Indica se è stata raggiunta la fine del flusso.|
|[exceptions](#exceptions)|Indica quali eccezioni verranno generate dal flusso.|
|[esito negativo](#fail)|Indica un errore per estrarre un campo valido da un flusso.|
|[riempimento](#fill)|Specifica o restituisce il carattere che verrà usato quando il testo non è largo quanto il flusso.|
|[buona](#good)|Indica che le condizioni del flusso sono buone.|
|[imbue](#imbue)|Modifica le impostazioni locali.|
|[init](#init)|Chiamato dai costruttori `basic_ios`.|
|[move](#move)|Sposta tutti i valori, ad eccezione del puntatore al buffer del flusso, dal parametro all'oggetto corrente.|
|[narrow](#narrow)|Individua il carattere equivalente per un `char_type` specifico.|
|[rdbuf](#rdbuf)|Indirizza un flusso al buffer specificato.|
|[rdstate](#rdstate)|Legge lo stato dei bit per i flag.|
|[set_rdbuf](#set_rdbuf)|Assegna un buffer del flusso in modo che sia il buffer di lettura per questo oggetto flusso.|
|[setstate](#setstate)|Imposta flag aggiuntivi.|
|[scambio](#swap)|Scambia i valori in questo oggetto `basic_ios` con quelli di un altro oggetto `basic_ios`. I puntatori ai buffer del flusso non vengono scambiati.|
|[tie](#tie)|Assicura che un flusso venga elaborato prima di un altro flusso.|
|[widen](#widen)|Individua il tipo `char_type` equivalente per un carattere specifico.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[explicit operator bool](#op_bool)|Consente l'uso di un `basic_ios` oggetto come **`bool`** . La conversione automatica de tipo è disabilitata per impedire effetti collaterali imprevisti comuni.|
|[operator void *](#op_void_star)|Indica se il flusso è ancora valido.|
|[operatore!](#op_not)|Indica se il flusso è corretto.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<ios>

**Spazio dei nomi:** std

## <a name="basic_iosbad"></a><a name="bad"></a>basic_ios:: non valido

Indica una perdita di integrità del buffer del flusso

```cpp
bool bad() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se `rdstate & badbit` è diverso da zero; in caso contrario, **`false`** .

Per altre informazioni su `badbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

### <a name="example"></a>Esempio

```cpp
// basic_ios_bad.cpp
// compile with: /EHsc
#include <iostream>

int main( void )
{
    using namespace std;
    bool b = cout.bad( );
    cout << boolalpha;
    cout << b << endl;

    b = cout.good( );
    cout << b << endl;
}
```

## <a name="basic_iosbasic_ios"></a><a name="basic_ios"></a>basic_ios:: basic_ios

Costruisce la classe basic_ios.

```cpp
explicit basic_ios(basic_streambuf<Elem,  Traits>* sb);
basic_ios();
```

### <a name="parameters"></a>Parametri

*SB*\
Buffer standard in cui archiviare gli elementi di input o output.

### <a name="remarks"></a>Osservazioni

Il primo costruttore inizializza i relativi oggetti membro chiamando [init](#init)(_ *Sb*). Il secondo costruttore (protetto) lascia i relativi oggetti membro non inizializzati. Una chiamata successiva a `init` deve inizializzare l'oggetto prima che possa essere eliminato definitivamente.

## <a name="basic_ioschar_type"></a><a name="char_type"></a>basic_ios:: char_type

Sinonimo del parametro di modello `Elem`.

```cpp
typedef Elem char_type;
```

## <a name="basic_iosclear"></a><a name="clear"></a>basic_ios:: Clear

Cancella tutti i flag di errore.

```cpp
void clear(iostate state = goodbit, bool reraise = false);
void clear(io_state state);
```

### <a name="parameters"></a>Parametri

*stato*\
Opzionale Flag che si desidera impostare dopo la cancellazione di tutti i flag. Il valore predefinito è `goodbit`.

*reraise*\
Opzionale Specifica se l'eccezione deve essere generata nuovamente. Il valore predefinito è **`false`** (l'eccezione non viene generata di nuovo).

### <a name="remarks"></a>Osservazioni

I flag sono `goodbit` , `failbit` , `eofbit` e `badbit` . Testare questi flag con [good](#good), [bad](#bad), [eof](#eof) e [fail](#fail).

La funzione membro sostituisce le informazioni archiviate sullo stato del flusso con:

`state` &#124; `(`[rdbuf](#rdbuf) != 0 **goodbit** : **badbit**)

Se `state` **&** [Exceptions](#exceptions) è diverso da zero, viene generato un oggetto di classe [Failure](../standard-library/ios-base-class.md#failure).

### <a name="example"></a>Esempio

Per esempi relativi all'uso di, vedere [rdstate](#rdstate) e [getline](../standard-library/string-functions.md#getline) `clear` .

## <a name="basic_ioscopyfmt"></a><a name="copyfmt"></a>basic_ios:: copyfmt

Copia i flag da un flusso a un altro.

```cpp
basic_ios<Elem, Traits>& copyfmt(
const basic_ios<Elem, Traits>& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Flusso di cui si vuole copiare i flag.

### <a name="return-value"></a>Valore restituito

**`this`** Oggetto per il flusso in cui vengono copiati i flag.

### <a name="remarks"></a>Osservazioni

La funzione membro segnala l'evento di **cancellazione \_ **evento di callback. Viene quindi copiato da *destra* a ** \* questo** carattere di riempimento, il puntatore a cravatta e le informazioni di formattazione. Prima di modificare la maschera di eccezione, segnala l'evento di callback `copyfmt_event` . Se al termine della copia **state &**[exceptions](#exceptions) è diverso da zero, la funzione chiama [clear](#clear) con l'argomento [rdstate](#rdstate). Restituisce ** \* this**.

### <a name="example"></a>Esempio

```cpp
// basic_ios_copyfmt.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

int main( )
{
    using namespace std;
    ofstream x( "test.txt" );
    int i = 10;

    x << showpos;
    cout << i << endl;
    cout.copyfmt( x );
    cout << i << endl;
}
```

## <a name="basic_ioseof"></a><a name="eof"></a>basic_ios:: EOF

Indica se è stata raggiunta la fine del flusso.

```cpp
bool eof() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se è stata raggiunta la fine del flusso; **`false`** in caso contrario,.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce **`true`** se [rdstate](#rdstate) `& eofbit` è diverso da zero. Per altre informazioni su `eofbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

### <a name="example"></a>Esempio

```cpp
// basic_ios_eof.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>

using namespace std;

int main( int argc, char* argv[] )
{
    fstream   fs;
    int n = 1;
    fs.open( "basic_ios_eof.txt" );   // an empty file
    cout << boolalpha
    cout << fs.eof() << endl;
    fs >> n;   // Read the char in the file
    cout << fs.eof() << endl;
}
```

## <a name="basic_iosexceptions"></a><a name="exceptions"></a>basic_ios:: Exceptions

Indica quali eccezioni verranno generate dal flusso.

```cpp
iostate exceptions() const;
void exceptions(iostate Newexcept);
void exceptions(io_state Newexcept);
```

### <a name="parameters"></a>Parametri

*Newexcept*\
Flag che si vuole generino un'eccezione.

### <a name="return-value"></a>Valore restituito

I flag attualmente specificati per generare un'eccezione per il flusso.

### <a name="remarks"></a>Osservazioni

La prima funzione membro restituisce la maschera delle eccezioni archiviata. La seconda funzione membro archivia *_Except* nella maschera delle eccezioni e restituisce il relativo valore archiviato precedente. Si noti che l'archiviazione di una nuova maschera delle eccezioni può generare un'eccezione analogamente alla chiamata di [clear](#clear)( [rdstate](#rdstate) ).

### <a name="example"></a>Esempio

```cpp
// basic_ios_exceptions.cpp
// compile with: /EHsc /GR
#include <iostream>

int main( )
{
    using namespace std;

    cout << cout.exceptions( ) << endl;
    cout.exceptions( ios::eofbit );
    cout << cout.exceptions( ) << endl;
    try
    {
        cout.clear( ios::eofbit );   // Force eofbit on
    }
    catch ( exception &e )
    {
        cout.clear( );
        cout << "Caught the exception." << endl;
        cout << "Exception class: " << typeid(e).name()  << endl;
        cout << "Exception description: " << e.what() << endl;
    }
}
```

```Output
0
1
Caught the exception.
Exception class: class std::ios_base::failure
Exception description: ios_base::eofbit set
```

## <a name="basic_iosfail"></a><a name="fail"></a>basic_ios:: Fail

Indica un errore per estrarre un campo valido da un flusso.

```cpp
bool fail() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se [rdstate](#rdstate) `& (badbit|failbit)` è diverso da zero, in caso contrario **`false`** .

Per altre informazioni su `failbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

### <a name="example"></a>Esempio

```cpp
// basic_ios_fail.cpp
// compile with: /EHsc
#include <iostream>

int main( void )
{
    using namespace std;
    bool b = cout.fail( );
    cout << boolalpha;
    cout << b << endl;
}
```

## <a name="basic_iosfill"></a><a name="fill"></a>basic_ios:: Fill

Specifica o restituisce il carattere che verrà usato quando il testo non è largo quanto il flusso.

```cpp
char_type fill() const;
char_type fill(char_type Char);
```

### <a name="parameters"></a>Parametri

*Char*\
Il carattere che si vuole usare come carattere di riempimento.

### <a name="return-value"></a>Valore restituito

Il carattere di riempimento corrente.

### <a name="remarks"></a>Osservazioni

La prima funzione membro restituisce il carattere di riempimento archiviato. La seconda funzione membro Archivia *char* nel carattere di riempimento e restituisce il relativo valore archiviato precedente.

### <a name="example"></a>Esempio

```cpp
// basic_ios_fill.cpp
// compile with: /EHsc
#include <iostream>
#include <iomanip>

int main( )
{
    using namespace std;

    cout << setw( 5 ) << 'a' << endl;
    cout.fill( 'x' );
    cout << setw( 5 ) << 'a' << endl;
    cout << cout.fill( ) << endl;
}
```

```Output
a
xxxxa
x
```

## <a name="basic_iosgood"></a><a name="good"></a>basic_ios:: valido

Indica che le condizioni del flusso sono buone.

```cpp
bool good() const;
```

### <a name="return-value"></a>Valore restituito

**`true`** Se [rdstate](#rdstate) `== goodbit` (nessun flag di stato impostato); in caso contrario, **`false`** .

Per altre informazioni su `goodbit`, vedere [ios_base::iostate](../standard-library/ios-base-class.md#iostate).

### <a name="example"></a>Esempio

Vedere [basic_ios::bad](#bad) per un esempio di utilizzo di `good`.

## <a name="basic_iosimbue"></a><a name="imbue"></a>basic_ios:: imbuto

Modifica le impostazioni locali.

```cpp
locale imbue(const locale& Loc);
```

### <a name="parameters"></a>Parametri

*Loc*\
Stringa delle impostazioni locali.

### <a name="return-value"></a>Valore restituito

Impostazioni locali precedenti.

### <a name="remarks"></a>Osservazioni

Se [rdbuf](#rdbuf) non è un puntatore null, la funzione membro chiama

`rdbuf`-> [pubimbue](../standard-library/basic-streambuf-class.md#pubimbue)(_ *Loc*)

In ogni caso, restituisce [ios_base::imbue](../standard-library/ios-base-class.md#imbue)(_ *Loc*).

### <a name="example"></a>Esempio

```cpp
// basic_ios_imbue.cpp
// compile with: /EHsc
#include <iostream>
#include <locale>

int main( )
{
    using namespace std;

    cout.imbue( locale( "french_france" ) );
    double x = 1234567.123456;
    cout << x << endl;
}
```

## <a name="basic_iosinit"></a><a name="init"></a>basic_ios:: init

Chiamata da costruttori basic_ios.

```cpp
void init(basic_streambuf<Elem,Traits>* _Sb, bool _Isstd = false);
```

### <a name="parameters"></a>Parametri

*_Sb*\
Buffer standard in cui archiviare gli elementi di input o output.

*_Isstd*\
Specifica se si tratta di un flusso standard.

### <a name="remarks"></a>Osservazioni

La funzione membro archivia i valori in tutti gli oggetti membro in modo che si verifichi quanto segue:

- [rdbuf](#rdbuf) restituisce *_Sb.*

- [tie](#tie) restituisce un puntatore null.

- [rdstate](#rdstate) restituisce [goodbit](../standard-library/ios-base-class.md#iostate) se *_Sb* è diverso da zero; in caso contrario, restituisce [badbit](../standard-library/ios-base-class.md#iostate).

- [eccezioni](#exceptions) restituisce `goodbit` .

- [flags](../standard-library/ios-base-class.md#flags) restituisce [skipws](../standard-library/ios-base-class.md#fmtflags) &#124; [dec](../standard-library/ios-base-class.md#fmtflags).

- [width](../standard-library/ios-base-class.md#width) restituisce 0.

- [precision](../standard-library/ios-base-class.md#precision) restituisce 6.

- [fill](#fill) restituisce il carattere di spaziatura.

- [getloc](../standard-library/ios-base-class.md#getloc) restituisce `locale::classic`.

- [iword](../standard-library/ios-base-class.md#iword) restituisce zero e [pword](../standard-library/ios-base-class.md#pword) restituisce un puntatore null per i valori di tutti gli argomenti.

## <a name="basic_iosint_type"></a><a name="int_type"></a>basic_ios:: int_type

Sinonimo di `traits_type::int_type`.

```cpp
typedef typename traits_type::int_type int_type;
```

## <a name="basic_iosmove"></a><a name="move"></a>basic_ios:: Move

Sposta tutti i valori, ad eccezione del puntatore al buffer del flusso, dal parametro all'oggetto corrente.

```cpp
void move(basic_ios&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
L'oggetto `ios_base` da cui spostare i valori.

### <a name="remarks"></a>Osservazioni

La funzione membro protected sposta tutti i valori archiviati in *right* ad **`*this`** eccezione di archiviato `stream buffer pointer` , che è invariato a *destra* e impostato su un puntatore null in **`*this`** . L'oggetto archiviato `tie pointer` è impostato su un puntatore null a *destra*.

## <a name="basic_iosnarrow"></a><a name="narrow"></a>basic_ios:: Narrow

Individua il carattere equivalente per un `char_type` specifico.

```cpp
char narrow(char_type Char, char Default = '\0') const;
```

### <a name="parameters"></a>Parametri

*Char*\
Oggetto **`char`** da convertire.

*Predefinita*\
Oggetto **`char`** che si desidera venga restituito se non viene trovato alcun equivalente.

### <a name="return-value"></a>Valore restituito

Equivalente **`char`** a un oggetto specificato `char_type` .

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [use_facet](../standard-library/basic-filebuf-class.md#open) \<ctype\<E> > ( [getloc](../standard-library/ios-base-class.md#getloc)()). `narrow` ( `Char`, `Default`).

### <a name="example"></a>Esempio

```cpp
// basic_ios_narrow.cpp
// compile with: /EHsc
#include <ios>
#include <iostream>
#include <wchar.h>

int main( )
{
    using namespace std;
    wchar_t *x = L"test";
    char y[10];
    cout << x[0] << endl;
    wcout << x << endl;
    y[0] = wcout.narrow( x[0] );
    cout << y[0] << endl;
}
```

## <a name="basic_iosoff_type"></a><a name="off_type"></a>basic_ios:: off_type

Sinonimo di `traits_type::off_type`.

```cpp
typedef typename traits_type::off_type off_type;
```

## <a name="basic_iosoperator-void-"></a><a name="op_void_star"></a>basic_ios:: operator void *

Indica se il flusso è ancora valido.

```cpp
operator void *() const;
```

### <a name="return-value"></a>Valore restituito

L'operatore restituisce un puntatore null solo se [fail](#fail).

### <a name="example"></a>Esempio

```cpp
// basic_ios_opgood.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
    using namespace std;
    cout << (bool)(&cout != 0) << endl;   // Stream is still good
}
```

```Output
1
```

## <a name="basic_iosoperator"></a><a name="op_not"></a>basic_ios:: operator!

Indica se il flusso è corretto.

```cpp
bool operator!() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce [fail](#fail).

### <a name="example"></a>Esempio

```cpp
// basic_ios_opbad.cpp
// compile with: /EHsc
#include <iostream>

int main( )
{
    using namespace std;
    cout << !cout << endl;   // Stream is not bad
}
```

```Output
0
```

## <a name="basic_iosoperator-bool"></a><a name="op_bool"></a>basic_ios:: operator bool

Consente l'uso di un `basic_ios` oggetto come **`bool`** . La conversione automatica de tipo è disabilitata per impedire effetti collaterali imprevisti comuni.

```cpp
explicit operator bool() const;
```

### <a name="remarks"></a>Osservazioni

L'operatore restituisce un valore convertibile in **`false`** solo se `fail()` . Il tipo restituito è convertibile solo in **`bool`** , non in `void *` o altri tipi scalari noti.

## <a name="basic_iospos_type"></a><a name="pos_type"></a>basic_ios::p os_type

Sinonimo di `traits_type::pos_type`.

```cpp
typedef typename traits_type::pos_type pos_type;
```

## <a name="basic_iosrdbuf"></a><a name="rdbuf"></a>basic_ios:: rdbuf

Indirizza un flusso al buffer specificato.

```cpp
basic_streambuf<Elem, Traits> *rdbuf() const;
basic_streambuf<Elem, Traits> *rdbuf(
basic_streambuf<Elem, Traits>* _Sb);
```

### <a name="parameters"></a>Parametri

*_Sb*\
Flusso.

### <a name="remarks"></a>Osservazioni

La prima funzione membro restituisce il puntatore del buffer di flusso archiviato.

La seconda funzione membro Archivia *_Sb* nel puntatore del buffer del flusso archiviato e restituisce il valore archiviato in precedenza.

### <a name="example"></a>Esempio

```cpp
// basic_ios_rdbuf.cpp
// compile with: /EHsc
#include <ios>
#include <iostream>
#include <fstream>

int main( )
{
    using namespace std;
    ofstream file( "rdbuf.txt" );
    streambuf *x = cout.rdbuf( file.rdbuf( ) );
    cout << "test" << endl;   // Goes to file
    cout.rdbuf(x);
    cout << "test2" << endl;
}
```

```Output
test2
```

## <a name="basic_iosrdstate"></a><a name="rdstate"></a>basic_ios:: rdstate

Legge lo stato dei bit per i flag.

```cpp
iostate rdstate() const;
```

### <a name="return-value"></a>Valore restituito

Le informazioni sullo stato del flusso archiviato.

### <a name="example"></a>Esempio

```cpp
// basic_ios_rdstate.cpp
// compile with: /EHsc
#include <iostream>
#include <fstream>
using namespace std;

void TestFlags( ios& x )
{
    cout << ( x.rdstate( ) & ios::badbit ) << endl;
    cout << ( x.rdstate( ) & ios::failbit ) << endl;
    cout << ( x.rdstate( ) & ios::eofbit ) << endl;
    cout << endl;
}

int main( )
{
    fstream x( "c:\test.txt", ios::out );
    x.clear( );
    TestFlags( x );
    x.clear( ios::badbit | ios::failbit | ios::eofbit );
    TestFlags( x );
}
```

```Output
0
0
0

4
2
1
```

## <a name="basic_iossetstate"></a><a name="setstate"></a>basic_ios:: sestate

Imposta flag aggiuntivi.

```cpp
void setstate(iostate _State);
```

### <a name="parameters"></a>Parametri

*_State*\
Flag aggiuntivi da impostare.

### <a name="remarks"></a>Osservazioni

La funzione membro chiama [clear](#clear)(_ *State* &#124; [rdstate](#rdstate)).

### <a name="example"></a>Esempio

```cpp
// basic_ios_setstate.cpp
// compile with: /EHsc
#include <ios>
#include <iostream>
using namespace std;

int main( )
{
    bool b = cout.bad( );
    cout << b << endl;   // Good
    cout.clear( ios::badbit );
    b = cout.bad( );
    // cout.clear( );
    cout << b << endl;   // Is bad, good
    b = cout.fail( );
    cout << b << endl;   // Not failed
    cout.setstate( ios::failbit );
    b = cout.fail( );
    cout.clear( );
    cout << b << endl;   // Is failed, good
    return 0;
}
```

```Output
0
1
```

## <a name="basic_iosset_rdbuf"></a><a name="set_rdbuf"></a>basic_ios:: set_rdbuf

Assegna un buffer del flusso in modo che sia il buffer di lettura per questo oggetto flusso.

```cpp
void set_rdbuf(
basic_streambuf<Elem, Tr>* strbuf)
```

### <a name="parameters"></a>Parametri

*Strbuf*\
Buffer del flusso che deve diventare il buffer di lettura.

### <a name="remarks"></a>Osservazioni

La funzione membro protetto Archivia *Strbuf* in `stream buffer pointer` . Non chiama `clear` .

## <a name="basic_iostie"></a><a name="tie"></a>basic_ios:: Tie

Assicura che un flusso venga elaborato prima di un altro flusso.

```cpp
basic_ostream<Elem, Traits> *tie() const;
basic_ostream<Elem, Traits> *tie(
basic_ostream<Elem, Traits>* str);
```

### <a name="parameters"></a>Parametri

*Str*\
Flusso.

### <a name="return-value"></a>Valore restituito

La prima funzione membro restituisce il puntatore tie archiviato. La seconda funzione membro Archivia *Str* nel puntatore Tie e restituisce il relativo valore archiviato precedente.

### <a name="remarks"></a>Osservazioni

`tie` causa la sincronizzazione di due flussi in modo che le operazioni in un flusso vengano eseguite dopo il completamento delle operazioni nell'altro flusso.

### <a name="example"></a>Esempio

In questo esempio il collegamento di cin e cout garantisce che la stringa "Enter a number:" passi alla console prima che il numero venga estratto da cin. In questo modo viene eliminata la possibilità che la stringa "Enter a number:" rimanga nel buffer quando viene letto il numero e viene garantita la visualizzazione all'utente di una richiesta a cui rispondere. Per impostazione predefinita, cin e cout sono collegati.

```cpp
#include <ios>
#include <iostream>

int main( )
{
    using namespace std;
    int i;
    cin.tie( &cout );
    cout << "Enter a number:";
    cin >> i;
}
```

## <a name="basic_iostraits_type"></a><a name="traits_type"></a>basic_ios:: traits_type

Sinonimo del parametro di modello `Traits`.

```cpp
typedef Traits traits_type;
```

## <a name="basic_ioswiden"></a><a name="widen"></a>basic_ios:: Widen

Trova l'equivalente `char_type` a un oggetto specificato **`char`** .

```cpp
char_type widen(char Char) const;
```

### <a name="parameters"></a>Parametri

*Char*\
Carattere da convertire.

### <a name="return-value"></a>Valore restituito

Trova l'equivalente `char_type` a un oggetto specificato **`char`** .

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce [use_facet](../standard-library/basic-filebuf-class.md#open) <  **CType** \< **E**> > ( [getloc](../standard-library/ios-base-class.md#getloc)). `widen`( `Char`).

### <a name="example"></a>Esempio

```cpp
// basic_ios_widen.cpp
// compile with: /EHsc
#include <ios>
#include <iostream>
#include <wchar.h>

int main( )
{
    using namespace std;
    char *z = "Hello";
    wchar_t y[2] = {0,0};
    cout << z[0] << endl;
    y[0] = wcout.widen( z[0] );
    wcout << &y[0] << endl;
}
```

## <a name="basic_iosswap"></a><a name="swap"></a>basic_ios:: swap

Scambia i valori in questo oggetto `basic_ios` con quelli di un altro oggetto `basic_ios`. Tuttavia, i puntatori ai buffer di flusso non vengono scambiati.

```cpp
void swap(basic_ios&& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Oggetto `basic_ios` usato per lo scambio dei valori.

### <a name="remarks"></a>Osservazioni

La funzione membro protetto scambia tutti i valori archiviati a *destra* con **`*this`** ad eccezione di quello `stream buffer pointer` archiviato.

## <a name="see-also"></a>Vedere anche

[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[convenzioni di iostreams](../standard-library/iostreams-conventions.md)
