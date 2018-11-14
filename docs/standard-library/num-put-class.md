---
title: Classe num_put
ms.date: 11/04/2016
f1_keywords:
- xlocnum/std::num_put
- locale/std::num_put::char_type
- locale/std::num_put::iter_type
- locale/std::num_put::do_put
- locale/std::num_put::put
helpviewer_keywords:
- std::num_put [C++]
- std::num_put [C++], char_type
- std::num_put [C++], iter_type
- std::num_put [C++], do_put
- std::num_put [C++], put
ms.assetid: 36c5bffc-8283-4201-8ed4-78c4d81f8a17
ms.openlocfilehash: 2ede0ccd85f116f300939c819ae8209435da72b7
ms.sourcegitcommit: 1819bd2ff79fba7ec172504b9a34455c70c73f10
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/09/2018
ms.locfileid: "51327330"
---
# <a name="numput-class"></a>Classe num_put

Classe modello che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori numerici in sequenze di tipo `CharType`.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType,
    class OutputIterator = ostreambuf_iterator<CharType>>
class num_put : public locale::facet;
```

### <a name="parameters"></a>Parametri

*CharType*<br/>
Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.

*OutputIterator*<br/>
Tipo di iteratore in cui le funzioni Put numeriche scrivono il proprio output.

## <a name="remarks"></a>Note

Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id.**

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[num_put](#num_put)|Costruttore per oggetti di tipo `num_put`.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|
|[iter_type](#iter_type)|Tipo che descrive un iteratore di output.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[do_put](#do_put)|Funzione virtuale chiamata per convertire un numero in una sequenza di `CharType` che rappresenta il numero formattato per le impostazioni locali specificate.|
|[put](#put)|Converte un numero in una sequenza di `CharType` che rappresenta il numero formattato per le impostazioni locali specificate.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="char_type"></a>  num_put::char_type

Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello `CharType`.

## <a name="do_put"></a>  num_put::do_put

Funzione virtuale chiamata per convertire un numero in una sequenza di `CharType` che rappresenta il numero formattato per le impostazioni locali specificate.

```cpp
virtual iter_type do_put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    bool val) const;

virtual iter_type do_put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    long val) const;

virtual iter_type do_put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    unsigned long val) const;

virtual iter_type do_put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    double val) const;

virtual iter_type do_put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    long double val) const;

virtual iter_type do_put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    const void* val) const;

virtual iter_type do_put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    const long long val) const;

virtual iter_type do_put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    const unsigned long long val) const;
```

### <a name="parameters"></a>Parametri

*next*<br/>
Iteratore che punta al primo elemento della stringa inserita.

*In_losbase*<br/>
Specifica il flusso contenente le impostazioni locali con il facet numpunct usato per creare la punteggiatura dell'output e i flag per la formattazione dell'output.

*_Fill*<br/>
Carattere usato per la spaziatura.

*Val*<br/>
Numero o tipo booleano che deve essere incluso nell'output.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione successiva all'ultimo elemento prodotto.

### <a name="remarks"></a>Note

La prima funzione membro virtuale protetta genera elementi sequenziali a partire *successivo* per produrre un campo di output di tipo integer dal valore di *val*. La funzione restituisce un iteratore che designa la posizione in cui inserire un elemento immediatamente successiva al campo di output di tipo Integer generato.

Il campo di output di tipo integer viene generato dalle stesse regole usate dalle funzioni di stampa per la generazione di una serie di **char** elementi in un file. Si presuppone che ciascun elemento char eseguire il mapping a un elemento equivalente di tipo `CharType` tramite un semplice mapping uno a uno. In cui una funzione di stampa riempie un campo con spazi o con la cifra 0, tuttavia `do_put` Usa invece `fill`. La specifica di conversione di stampa equivalente viene determinata nel modo seguente:

- Se **iosbase**. [i flag](../standard-library/ios-base-class.md#flags) & `ios_base::basefield` == `ios_base::`[oct](../standard-library/ios-functions.md#oct), la specifica di conversione è `lo`.

- Se **iosbase. Flags** & **ios_base:: BaseField** == `ios_base::`[esadecimale](../standard-library/ios-functions.md#hex), la specifica di conversione è `lx`.

- In caso contrario, la specifica di conversione è `ld`.

Se **iosbase**. [width](../standard-library/ios-base-class.md#width) è diverso da zero, viene anteposta una larghezza di campo di questo valore. La funzione chiama quindi **iosbase**. **width**(0) per reimpostare la larghezza del campo a zero.

Il riempimento si verifica solo se il numero minimo di elementi *N* necessario per specificare il campo di output è minore di **iosbase**. [width](../standard-library/ios-base-class.md#width). Tale riempimento è costituito da una sequenza *N* - **larghezza** copie di **riempimento**. Il riempimento si verifica quindi nel modo seguente:

- Se **iosbase**. **i flag** & `ios_base::adjustfield` == `ios_base::`[a sinistra](../standard-library/ios-functions.md#left), il flag **-** viene anteposto. Il riempimento si verifica dopo il testo generato.

- Se **iosbase.flags** & **ios_base::adjustfield** == `ios_base::`[internal](../standard-library/ios-functions.md#internal), viene anteposto il flag **0**. Per un campo di output numerico, il riempimento si verifica quando le funzioni di stampa riempiono il campo con la cifra 0.

- In caso contrario, non viene anteposto alcun flag aggiuntivo. Il riempimento si verifica prima della sequenza generata.

Infine:

- Se **iosbase**. **flags** & `ios_base::`[showpos](../standard-library/ios-functions.md#showpos) è diverso da zero, il flag **+** viene anteposto alla specifica di conversione.

- Se **iosbase**. **flags** & **ios_base::**[showbase](../standard-library/ios-functions.md#showbase) è diverso da zero, il flag **#** viene anteposto alla specifica di conversione.

Il formato di un campo di output di tipo Integer è determinato inoltre dal valore [locale facet](../standard-library/locale-class.md#facet_class)**fac** restituito dalla chiamata [use_facet](../standard-library/locale-functions.md#use_facet) < [numpunct](../standard-library/numpunct-class.md)\< **Elem**>( **iosbase**. [getloc](../standard-library/ios-base-class.md#getloc)). In particolare:

- **fac**. [grouping](../standard-library/numpunct-class.md#grouping) determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale

- **fac**. [thousands_sep](../standard-library/numpunct-class.md#thousands_sep) determina la sequenza che separa gruppi di cifre a sinistra della virgola decimale

Se nessun vincolo di raggruppamento viene imposto da **fac**. **grouping** (il primo elemento ha il valore CHAR_MAX), non verranno generate istanze di **fac**. `thousands_sep` nel campo di output. In caso contrario, i separatori vengono inseriti dopo la conversione di stampa.

La seconda funzione membro virtuale protetta:

```cpp
virtual iter_type do_put(iter_type next,
    ios_base& _Iosbase,
    CharType _Fill,
    unsigned long val) const;
```

si comporta come la prima, ad eccezione del fatto che sostituisce una specifica di conversione di `ld` con `lu`.

La terza funzione membro virtuale protetta:

```cpp
virtual iter_type do_put(iter_type next,
    ios_base& _Iosbase,
    CharType _Fill,
    double val) const;
```

si comporta come la prima, ad eccezione del fatto che genera un campo di output a virgola mobile dal valore di **val**. **fac**. [decimal_point](../standard-library/numpunct-class.md#decimal_point) determina la sequenza che separa le cifre intere dalle cifre frazionarie. La specifica di conversione di stampa equivalente viene determinata nel modo seguente:

- Se **iosbase**. **i flag** & `ios_base::floatfield` == `ios_base::`[fissa](../standard-library/ios-functions.md#fixed), la specifica di conversione è `lf`.

- Se **iosbase**. **flags** & **ios_base::floatfield** == `ios_base::`[scientific](../standard-library/ios-functions.md#scientific), la specifica di conversione è `le`. Se **iosbase**. **i flag** & `ios_base::`[maiuscolo](../standard-library/ios-functions.md#uppercase) è diverso da zero, `e` viene sostituita con `E`.

- In caso contrario, la specifica di conversione è **lg**. Se **iosbase**. **i flag** & **ios_base:: UpperCase** è diverso da zero `g` viene sostituito con `G`.

Se **iosbase**. **flags** & **ios_base::fixed** è diverso da zero oppure se **iosbase**. [precision](../standard-library/ios-base-class.md#precision) è maggiore di zero, una precisione con il valore **iosbase**. **precision** viene anteposta alla specifica di conversione. Il comportamento del riempimento è uguale a quello per un campo di output di tipo Integer. Il carattere di riempimento è **fill**. Infine:

- Se **iosbase**. **flags** & `ios_base::`[showpos](../standard-library/ios-functions.md#showpos) è diverso da zero, il flag **+** viene anteposto alla specifica di conversione.

- Se **iosbase**. **flags** & `ios_base::`[showpoint](../standard-library/ios-functions.md#showpoint) è diverso da zero, il flag **#** viene anteposto alla specifica di conversione.

La quarta funzione membro virtuale protetta:

```cpp
virtual iter_type do_put(iter_type next,
    ios_base& _Iosbase,
    CharType _Fill,
    long double val) const;
```

si comporta il terzo, tranne il fatto che il qualificatore `l` durante la conversione specifica viene sostituita con `L`.

La quinta funzione membro virtuale protetta:

```cpp
virtual iter_type do_put(iter_type next,
    ios_base& _Iosbase,
    CharType _Fill,
    const void* val) const;
```

si comporta come la prima, ad eccezione del fatto che la specifica di conversione è `p`**,** più qualsiasi identificatore necessario per specificare il riempimento.

La sesta funzione membro virtuale protetta:

```cpp
virtual iter_type do_put(iter_type next,
    ios_base& _Iosbase,
    CharType _Fill,
    bool val) const;
```

si comporta come la prima, ad eccezione del fatto che genera un campo di output booleano da *val*.

Un campo di output booleano ha una delle due forme seguenti. Se `iosbase.flags & ios_base::` [boolalpha](../standard-library/ios-functions.md#boolalpha) viene **false**, la funzione membro restituisce `do_put(_Next, _Iosbase, _Fill, (long)val)`, che in genere produce una sequenza generata di 0 (per **false**) o 1 (per **true**). In caso contrario, la sequenza generata è *fac*.[ falsename](../standard-library/numpunct-class.md#falsename) (per **false**), o *fac*.[ truename](../standard-library/numpunct-class.md#truename) (per **true**).

La settima funzione membro virtuale protetta:

```cpp
virtual iter_type do_put(iter_type next,
    ios_base& iosbase,
    Elem fill,
    long long val) const;
```

si comporta come la prima, ad eccezione del fatto che sostituisce una specifica di conversione di `ld` con `lld`.

L'ottava funzione membro virtuale protetta:

```cpp
virtual iter_type do_put(iter_type next,
    ios_base& iosbase,
    Elem fill,
    unsigned long long val) const;
```

si comporta come la prima, ad eccezione del fatto che sostituisce una specifica di conversione di `ld` con `llu`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [put](#put), che chiama `do_put`.

## <a name="iter_type"></a>  num_put::iter_type

Tipo che descrive un iteratore di output.

```cpp
typedef OutputIterator iter_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello **OutputIterator.**

## <a name="num_put"></a>  num_put::num_put

Costruttore per oggetti di tipo `num_put`.

```cpp
explicit num_put(size_t _Refs = 0);
```

### <a name="parameters"></a>Parametri

*_Refs*<br/>
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

### <a name="remarks"></a>Note

I valori possibili per il *_Refs* parametro e i relativi significati sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.

- \> 1: questi valori non definiti.

Non è possibile fornire esempi diretti, poiché il distruttore è protetto.

Il costruttore inizializza l'oggetto di base con **locale::**[facet](../standard-library/locale-class.md#facet_class)(_ *Refs*).

## <a name="put"></a>  num_put::put

Converte un numero in una sequenza di `CharType`che rappresenta il numero formattato per impostazioni locali specificate.

```cpp
iter_type put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    bool val) const;

iter_type put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    long val) const;

iter_type put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    unsigned long val) const;

iter_type put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    Long long val) const;

iter_type put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    Unsigned long long val) const;

iter_type put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    double val) const;

iter_type put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    long double val) const;

iter_type put(
    iter_type dest,
    ios_base& _Iosbase,
    _Elem _Fill,
    const void* val) const;
```

### <a name="parameters"></a>Parametri

*dest*<br/>
Iteratore che punta al primo elemento della stringa inserita.

*In_losbase*<br/>
Specifica il flusso contenente le impostazioni locali con il facet numpunct usato per creare la punteggiatura dell'output e i flag per la formattazione dell'output.

*_Fill*<br/>
Carattere usato per la spaziatura.

*Val*<br/>
Numero o tipo booleano che deve essere incluso nell'output.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione successiva all'ultimo elemento prodotto.

### <a name="remarks"></a>Note

Tutte le funzioni membro restituiscono [do_put](#do_put)( `next`, `_Iosbase`, `_Fill`, `val`).

### <a name="example"></a>Esempio

```cpp
// num_put_put.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "german_germany" );
   basic_stringstream<char> psz2;
   ios_base::iostate st = 0;
   long double fVal;
   cout << "The thousands separator is: "
        << use_facet < numpunct <char> >(loc).thousands_sep( )
        << endl;

   psz2.imbue( loc );
   use_facet < num_put < char > >
      ( loc ).put(basic_ostream<char>::_Iter(psz2.rdbuf( ) ),
                    psz2, ' ', fVal=1000.67);

   if ( st & ios_base::failbit )
      cout << "num_put( ) FAILED" << endl;
   else
      cout << "num_put( ) = " << psz2.rdbuf( )->str( ) << endl;
}
```

```Output
The thousands separator is: .
num_put( ) = 1.000,67
```

## <a name="see-also"></a>Vedere anche

[\<locale>](../standard-library/locale.md)<br/>
[Classe facet](../standard-library/locale-class.md#facet_class)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
