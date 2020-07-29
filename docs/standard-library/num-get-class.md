---
title: Classe num_get
ms.date: 11/04/2016
f1_keywords:
- xlocnum/std::num_get
- locale/std::num_get::char_type
- locale/std::num_get::iter_type
- locale/std::num_get::do_get
- locale/std::num_get::get
helpviewer_keywords:
- std::num_get [C++]
- std::num_get [C++], char_type
- std::num_get [C++], iter_type
- std::num_get [C++], do_get
- std::num_get [C++], get
ms.assetid: 9933735d-3918-4b17-abad-5fca2adc62d7
ms.openlocfilehash: d5a88e904c437e79eabfa854a196aa48dbad955e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228167"
---
# <a name="num_get-class"></a>Classe num_get

Modello di classe che descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo `CharType` in valori numerici.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType, class InputIterator = istreambuf_iterator<CharType>>
class num_get : public locale::facet;
```

### <a name="parameters"></a>Parametri

*CharType*\
Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.

*InputIterator*\
Tipo di iteratore da cui le funzioni get numeric leggono il relativo input.

## <a name="remarks"></a>Osservazioni

Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id**.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[num_get](#num_get)|Costruttore per oggetti di tipo `num_get` utilizzati per estrarre i valori numerici dalle sequenze.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|
|[iter_type](#iter_type)|Tipo che descrive un iteratore di input.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[do_get](#do_get)|Funzione virtuale chiamata per estrarre un valore numerico o booleano da una sequenza di caratteri.|
|[get](#get)|Estrae un tipo numerico o booleano da una sequenza di caratteri.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="num_getchar_type"></a><a name="char_type"></a>num_get:: char_type

Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello **CharType**.

## <a name="num_getdo_get"></a><a name="do_get"></a>num_get::d o_get

Funzione virtuale chiamata per estrarre un valore numerico o booleano da una sequenza di caratteri.

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned short& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned int& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long long& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    float& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    double& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long double& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    void *& val) const;

virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    bool& val) const;
```

### <a name="parameters"></a>Parametri

*prima*\
Inizio dell'intervallo di caratteri da cui leggere il numero.

*Ultima*\
Fine dell'intervallo di caratteri da cui leggere il numero.

*iosbase*\
[ios_base](../standard-library/ios-base-class.md) i cui flag vengono usati per la conversione.

*stato*\
Lo stato a cui viene aggiunto failbit (vedere [ios_base:: iostate](../standard-library/ios-base-class.md#iostate)) in caso di errore.

*Val*\
Valore letto.

### <a name="return-value"></a>Valore restituito

Iteratore dopo la lettura del valore.

### <a name="remarks"></a>Osservazioni

La prima funzione membro virtuale protetta

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long& val) const;
```

trova la corrispondenza di elementi sequenziali a partire da *First* nella sequenza `[first, last)` fino a quando non viene riconosciuto un campo di input di tipo Integer completo e non vuoto. Se ha esito positivo, converte questo campo nel valore equivalente come tipo **`long`** e archivia il risultato in *Val*. Restituisce un iteratore che designa il primo elemento successivo al campo di input numerico. In caso contrario, la funzione non archivia alcun elemento in *Val* e imposta `ios_base::failbit` in `state` . Restituisce un iteratore che designa il primo elemento successivo a qualsiasi prefisso di un campo di input di tipo Integer valido. In entrambi i casi, se il valore restituito è uguale a `last`, la funzione imposta `ios_base::eofbit` in `state`.

Il campo di input Integer viene convertito dalle stesse regole usate dalle funzioni di analisi per la corrispondenza e la conversione di una serie di **`char`** elementi da un file. **`char`** Si presuppone che ogni elemento venga mappato a un elemento equivalente di tipo `Elem` mediante un semplice mapping uno-a-uno. La specifica di conversione di analisi equivalente è determinata nel modo seguente:

Se `iosbase.` [ios_base:: Flags](../standard-library/ios-base-class.md#flags) `() & ios_base::basefield == ios_base::` [Oct](../standard-library/ios-functions.md#oct), la specifica di conversione è `lo` .

Se `iosbase.flags() & ios_base::basefield == ios_base::`[hex](../standard-library/ios-functions.md#hex), la specifica di conversione è `lx`.

Se `iosbase.flags() & ios_base::basefield == 0`, la specifica di conversione è `li`.

In caso contrario, la specifica di conversione è `ld`.

Il formato di un campo di input di tipo Integer è determinato ulteriormente dal [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class) `fac` restituito dalla chiamata [use_facet](../standard-library/locale-functions.md#use_facet) `<` [numpunct](../standard-library/numpunct-class.md) `<Elem>(iosbase.` [ios_base:: getloc](../standard-library/ios-base-class.md#getloc) `())` . In particolare:

`fac.`[numpunct:: Grouping](../standard-library/numpunct-class.md#grouping) `()` determina la modalità di raggruppamento delle cifre a sinistra di un separatore decimale

`fac.`[numpunct:: thousands_sep](../standard-library/numpunct-class.md#thousands_sep) `()` determina la sequenza che separa i gruppi di cifre a sinistra della virgola decimale.

Se non esistono istanze di `fac.thousands_sep()` nel campo di input numerico, non viene imposto alcun vincolo di raggruppamento. In caso contrario, vengono applicati i vincoli di raggruppamento imposti da `fac.grouping()` e i separatori vengono rimossi prima che venga eseguita la conversione dell'analisi.

La quarta funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long& val) const;
```

si comporta come la prima, ad eccezione del fatto che sostituisce una specifica di conversione di `ld` con `lu`. Se ha esito positivo, converte il campo di input numerico in un valore di tipo **`unsigned long`** e archivia tale valore in *Val*.

La quinta funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long long& val) const;
```

si comporta come la prima, ad eccezione del fatto che sostituisce una specifica di conversione di `ld` con `lld`. Se ha esito positivo, converte il campo di input numerico in un valore di tipo **`long long`** e archivia tale valore in *Val*.

La sesta funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long long& val) const;
```

si comporta come la prima, ad eccezione del fatto che sostituisce una specifica di conversione di `ld` con `llu`. Se ha esito positivo, converte il campo di input numerico in un valore di tipo **`unsigned long long`** e archivia tale valore in *Val*.

La settima funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    float& val) const;
```

si comporta come la prima, ad eccezione del fatto che tenta di creare una corrispondenza con un campo di input a virgola mobile non vuoto. `fac.`[numpunct: ecimal_point:d](../standard-library/numpunct-class.md#decimal_point) `()` determina la sequenza che separa le cifre intere dalle cifre frazionarie. L'identificatore della conversione di analisi equivalente è `lf`.

L'ottava funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    double& val) const;
```

si comporta come la prima, ad eccezione del fatto che tenta di creare una corrispondenza con un campo di input a virgola mobile non vuoto. `fac.`[numpunct: ecimal_point:d](../standard-library/numpunct-class.md#decimal_point) `()` determina la sequenza che separa le cifre intere dalle cifre frazionarie. L'identificatore della conversione di analisi equivalente è `lf`.

La nona funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long double& val) const;
```

si comporta come l'ottava, ad eccezione del fatto che l'identificatore della conversione di analisi equivalente è `Lf`.

Decima funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    void *& val) const;
```

si comporta come la prima, ad eccezione del fatto che l'identificatore della conversione di analisi equivalente è `p`.

L'undicesima e ultima funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    bool& val) const;
```

si comporta come la prima, ad eccezione del fatto che tenta di creare una corrispondenza con un campo di input booleano, completo e non vuoto. Se ha esito positivo, converte il campo di input booleano in un valore di tipo **`bool`** e archivia tale valore in *Val*.

Un campo di input booleano ha una delle due forme seguenti. Se `iosbase.flags() & ios_base::`[boolalpha](../standard-library/ios-functions.md#boolalpha) è false, è uguale al campo di input di tipo Integer, ad eccezione del fatto che il valore convertito deve essere 0 (per false) o 1 (per true). In caso contrario, la sequenza deve corrispondere a `fac.` [numpunct:: falsename](../standard-library/numpunct-class.md#falsename) `()` (per false) o `fac.` [numpunct:: truename](../standard-library/numpunct-class.md#truename) `()` (per true).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get](#get), in cui la funzione membro virtuale viene chiamata da `do_get`.

## <a name="num_getget"></a><a name="get"></a>num_get:: Get

Estrae un tipo numerico o booleano da una sequenza di caratteri.

```cpp
iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    bool& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned short& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned int& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long long& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    float& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    double& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long double& val) const;

iter_type get(
    iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    void *& val) const;
```

### <a name="parameters"></a>Parametri

*prima*\
Inizio dell'intervallo di caratteri da cui leggere il numero.

*Ultima*\
Fine dell'intervallo di caratteri da cui leggere il numero.

*iosbase*\
[ios_base](../standard-library/ios-base-class.md) i cui flag vengono usati per la conversione.

*stato*\
Lo stato a cui viene aggiunto failbit (vedere [ios_base:: iostate](../standard-library/ios-base-class.md#iostate)) in caso di errore.

*Val*\
Valore letto.

### <a name="return-value"></a>Valore restituito

Iteratore dopo la lettura del valore.

### <a name="remarks"></a>Osservazioni

Tutte le funzioni membro restituiscono [do_get](#do_get) `( first, last, iosbase, state, val)` .

La prima funzione membro virtuale protetta cerca la corrispondenza con elementi sequenziali a partire dall'inizio nella sequenza [ `first`, `last`) fino a quando non viene riconosciuto un campo di input di tipo Integer completo e non vuoto. Se ha esito positivo, converte questo campo nel valore equivalente come tipo **`long`** e archivia il risultato in *Val*. Restituisce un iteratore che designa il primo elemento successivo al campo di input numerico. In caso contrario, la funzione non archivia alcun elemento in *Val* e imposta `ios_base::failbit` *lo stato*. Restituisce un iteratore che designa il primo elemento successivo a qualsiasi prefisso di un campo di input di tipo Integer valido. In entrambi i casi, se il valore restituito è uguale a *Last*, la funzione imposta `ios_base::eofbit` in *state*.

Il campo di input Integer viene convertito dalle stesse regole usate dalle funzioni di analisi per la corrispondenza e la conversione di una serie di **`char`** elementi da un file. **`char`** Si presuppone che ogni elemento venga mappato a un elemento equivalente di tipo `CharType` mediante un semplice mapping uno-a-uno. La specifica di conversione di analisi equivalente viene determinata nel modo seguente:

- Se `iosbase.` [Flags](../standard-library/ios-base-class.md#flags) `& ios_base::basefield == ios_base::` [Oct](../standard-library/ios-functions.md#oct), la specifica di conversione è `lo` .

- Se `iosbase.flags & ios_base::basefield == ios_base::`[hex](../standard-library/ios-functions.md#hex), la specifica di conversione è `lx`.

- Se `iosbase.flags & ios_base::basefield == 0`, la specifica di conversione è `li`.

- In caso contrario, la specifica di conversione è `ld`.

Il formato di un campo di input di tipo Integer è determinato ulteriormente dal [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class) `fac` restituito dalla chiamata [use_facet](../standard-library/locale-functions.md#use_facet) `<` [`numpunct`](../standard-library/numpunct-class.md) `<Elem>(iosbase.` [getloc](../standard-library/ios-base-class.md#getloc) `())` . In particolare:

- `fac.`il [raggruppamento](../standard-library/numpunct-class.md#grouping) determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale.

- `fac.`[thousands_sep](../standard-library/numpunct-class.md#thousands_sep) determina la sequenza che separa i gruppi di cifre a sinistra della virgola decimale.

Se non esistono istanze di `fac.thousands_sep` nel campo di input numerico, non viene imposto alcun vincolo di raggruppamento. In caso contrario, vengono applicati tutti i vincoli di raggruppamento imposti da `fac.grouping` e i separatori vengono rimossi prima che venga eseguita la conversione dell'analisi.

La seconda funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    unsigned long& val) const;
```

si comporta come la prima, ad eccezione del fatto che sostituisce una specifica di conversione di `ld` con `lu`. Se ha esito positivo, converte il campo di input numerico in un valore di tipo **`unsigned long`** e archivia tale valore in *Val*.

La terza funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    double& val) const;
```

si comporta come la prima, ad eccezione del fatto che tenta di creare una corrispondenza con un campo di input a virgola mobile non vuoto. `fac.`[decimal_point](../standard-library/numpunct-class.md#decimal_point) determina la sequenza che separa le cifre intere dalle cifre frazionarie. L'identificatore della conversione di analisi equivalente è `lf`.

La quarta funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    long double& val) const;
```

si comporta allo stesso modo della terza, ad eccezione del fatto che l'identificatore della conversione di analisi equivalente è `Lf` .

La quinta funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    void *& val) const;
```

si comporta come la prima, ad eccezione del fatto che l'identificatore della conversione di analisi equivalente è `p`.

La sesta funzione membro virtuale protetta:

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    ios_base& iosbase,
    ios_base::iostate& state,
    bool& val) const;
```

si comporta come la prima, ad eccezione del fatto che tenta di creare una corrispondenza con un campo di input booleano, completo e non vuoto. Se ha esito positivo, converte il campo di input booleano in un valore di tipo **`bool`** e archivia tale valore in *Val*.

Un campo di input booleano ha una delle due forme seguenti. Se `iosbase.flags & ios_base::` [boolalpha](../standard-library/ios-functions.md#boolalpha) è **`false`** , corrisponde a un campo di input di tipo Integer, ad eccezione del fatto che il valore convertito deve essere 0 (per **`false`** ) o 1 (per **`true`** ). In caso contrario, la sequenza deve corrispondere a `fac.` [falsename](../standard-library/numpunct-class.md#falsename) (per **`false`** ) o `fac.` [truename](../standard-library/numpunct-class.md#truename) (per **`true`** ).

### <a name="example"></a>Esempio

```cpp
// num_get_get.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;
int main( )
{
   locale loc( "german_germany" );

   basic_stringstream<char> psz, psz2;
   psz << "-1000,56";

   ios_base::iostate st = 0;
   long double fVal;
   cout << use_facet <numpunct <char> >(loc).thousands_sep( ) << endl;

   psz.imbue( loc );
   use_facet <num_get <char> >
   (loc).get( basic_istream<char>::_Iter( psz.rdbuf( ) ),
           basic_istream<char>::_Iter(0), psz, st, fVal );

   if ( st & ios_base::failbit )
      cout << "money_get( ) FAILED" << endl;
   else
      cout << "money_get( ) = " << fVal << endl;
}
```

## <a name="num_getiter_type"></a><a name="iter_type"></a>num_get:: iter_type

Tipo che descrive un iteratore di input.

```cpp
typedef InputIterator iter_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del parametro di modello `InputIterator`.

## <a name="num_getnum_get"></a><a name="num_get"></a>num_get:: num_get

Costruttore per oggetti di tipo `num_get` utilizzati per estrarre i valori numerici dalle sequenze.

```cpp
explicit num_get(size_t refs = 0);
```

### <a name="parameters"></a>Parametri

*refs*\
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

### <a name="remarks"></a>Osservazioni

I valori possibili per il parametro *refs* e il relativo significato sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.

- \>1: questi valori non sono definiti.

Non è possibile fornire esempi diretti, poiché il distruttore è protetto.

Il costruttore inizializza l'oggetto di base con `locale::` [facet](../standard-library/locale-class.md#facet_class) `(refs)` .

## <a name="see-also"></a>Vedere anche

[\<locale>](../standard-library/locale.md)\
[Classe facet](../standard-library/locale-class.md#facet_class)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
