---
title: Classe money_get | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- xlocmon/std::money_get
- xlocmon/std::money_get::char_type
- xlocmon/std::money_get::iter_type
- xlocmon/std::money_get::string_type
- xlocmon/std::money_get::do_get
- xlocmon/std::money_get::get
dev_langs:
- C++
helpviewer_keywords:
- std::money_get [C++]
- std::money_get [C++], char_type
- std::money_get [C++], iter_type
- std::money_get [C++], string_type
- std::money_get [C++], do_get
- std::money_get [C++], get
ms.assetid: 692d3374-3fe7-4b46-8aeb-f8d91ed66b2e
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cf15eb9f6c03b54d31f72326179d676883575048
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="moneyget-class"></a>Classe money_get

La classe modello descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni delle sequenze di tipo `CharType` in valori monetari.

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType, class InputIterator = istreambuf_iterator<CharType>>
class money_get : public locale::facet;
```

### <a name="parameters"></a>Parametri

`CharType` Il tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.

`InputIterator` Il tipo di iteratore da cui le funzioni get leggono il relativo input.

## <a name="remarks"></a>Note

Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id.**

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[money_get](#money_get)|Costruttore per oggetti di tipo `money_get` utilizzati per estrarre i valori numerici dalle sequenze che rappresentano valori monetari.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|
|[iter_type](#iter_type)|Tipo che descrive un iteratore di input.|
|[string_type](#string_type)|Tipo che descrive una stringa contenente caratteri di tipo `CharType`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[do_get](#do_get)|Funzione virtuale chiamata per estrarre un valore numerico da una sequenza di caratteri che rappresenta un valore monetario.|
|[get](#get)|Estrae un valore numerico da una sequenza di caratteri che rappresenta un valore monetario.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<locale>

**Spazio dei nomi:** std

## <a name="char_type"></a>  money_get::char_type

Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello **CharType**.

## <a name="do_get"></a>  money_get::do_get

Funzione virtuale chiamata per estrarre un valore numerico da una sequenza di caratteri che rappresenta un valore monetario.

```cpp
virtual iter_type do_get(iter_type first,
    iter_type last,
    bool Intl,
    ios_base& Iosbase,
    ios_base::iostate& State,
    long double& val) const virtual iter_type do_get(iter_type first,
    iter_type last,
    bool Intl,
    ios_base& Iosbase,
    ios_base::iostate& State,
    string_type& val) const
```

### <a name="parameters"></a>Parametri

`first` Iteratore di input che punta l'inizio della sequenza da convertire.

`last` Iteratore di input che punta alla fine della sequenza da convertire.

`Intl` Valore booleano che indica il tipo di simbolo di valuta previsto nella sequenza: **true** se internazionale, **false** se interne.

`Iosbase` Un formato di flag che quando set indica che il simbolo di valuta è facoltativo. in caso contrario, è necessario.

`State` Imposta gli elementi della maschera di bit appropriati per lo stato di flusso in base al fatto di operazioni ha avuto esito positivo o non.

`val` L'archiviazione la sequenza convertita una stringa.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input di tipo valuta.

### <a name="remarks"></a>Note

La prima funzione membro virtuale protetta cerca la corrispondenza con elementi sequenziali a partire dall'inizio nella sequenza [ `first`, `last`) fino a quando non viene riconosciuto un campo di input di tipo valuta completo e non vuoto. Se ha esito positivo, la funzione converte questo campo in una sequenza di una o più cifre decimali, preceduta in modo facoltativo da un segno meno ( `-`), per rappresentare l'importo e archivia il risultato nell'oggetto [string_type](#string_type) `val`. Restituisce un iteratore che designa il primo elemento successivo al campo di input di tipo valuta. In caso contrario, la funzione archivia una sequenza vuota in `val` e imposta `ios_base::failbit` in `State`. Restituisce un iteratore che designa il primo elemento successivo a qualsiasi prefisso di un campo di input di tipo valuta valido. In entrambi i casi, se il valore restituito è uguale a `last`, la funzione imposta `ios_base::eofbit` in `State`.

La seconda funzione membro virtuale protetta si comporta come la prima, ad eccezione del fatto che, se ha esito positivo, converte la sequenza di cifre con segno facoltativo in un valore di tipo `long double` e archivia tale valore in `val`.

Il formato di un campo di input di tipo valuta è determinato dal valore [fac](../standard-library/locale-class.md#facet_class)**locale facet** restituito dalla chiamata effettiva [use_facet](../standard-library/locale-functions.md#use_facet) < [moneypunct](../standard-library/moneypunct-class.md)\< **CharType**, **intl**>>( **iosbase**. [getloc](../standard-library/ios-base-class.md#getloc)).

In particolare:

- **fac**. [neg_format](../standard-library/moneypunct-class.md#neg_format) determina l'ordine in cui vengono visualizzati i componenti del campo.

- **fac**. [curr_symbol](../standard-library/moneypunct-class.md#curr_symbol) determina la sequenza di elementi che costituisce il simbolo di valuta.

- **fac**. [positive_sign](../standard-library/moneypunct-class.md#positive_sign) determina la sequenza di elementi che costituisce un segno positivo.

- **fac**. [negative_sign](../standard-library/moneypunct-class.md#negative_sign) determina la sequenza di elementi che costituisce un segno negativo.

- **fac**. [grouping](../standard-library/moneypunct-class.md#grouping) determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale.

- **fac**. [thousands_sep](../standard-library/moneypunct-class.md#thousands_sep) determina l'elemento che separa gruppi di cifre a sinistra della virgola decimale.

- **fac**. [decimal_point](../standard-library/moneypunct-class.md#decimal_point) determina l'elemento che separa le cifre intere dalle cifre frazionarie.

- **fac**. [frac_digits](../standard-library/moneypunct-class.md#frac_digits) determina il numero di cifre frazionarie significative a destra della virgola decimale. Durante l'analisi di un importo monetario con più cifre frazionarie chiamate da `frac_digits`, `do_get` interrompe l'analisi dopo aver utilizzato al massimo `frac_digits` caratteri.

Se la stringa segno ( **fac**. `negative_sign` o **fac**. `positive_sign`) contiene più di un elemento, viene messo in corrispondenza solo il primo elemento, nel punto in cui l'elemento uguale a **money_base::sign** compare nel modello di formato ( **fac**. `neg_format`). Gli eventuali elementi restanti vengono messi in corrispondenza alla fine del campo di input di tipo valuta. Se nessuna delle due stringhe contiene un elemento corrispondente al successivo elemento del campo di input di tipo valuta, la stringa segno viene accettata come vuota e il segno è positivo.

Se **iosbase**. [flags](../standard-library/ios-base-class.md#flags) & [showbase](../standard-library/ios-functions.md#showbase) è diverso da zero, la stringa **fac**. `curr_symbol` deve corrispondere nel punto in cui l'elemento uguale a **money_base::symbol** compare nel modello di formato. In caso contrario, se **money_base::symbol** viene visualizzato alla fine del modello di formato, e non rimangono elementi della stringa segno da associare, il simbolo di valuta non corrisponde. In caso contrario, il simbolo di valuta vene messo in corrispondenza in modo facoltativo.

Se non vengono visualizzate istanze di **fac**. `thousands_sep` nella parte valore del campo di input di tipo valuta, dove l'elemento uguale a **money_base::value** compare nel modello di formato, non viene applicato alcun vincolo di raggruppamento. In caso contrario, viene applicato qualsiasi vincolo di raggruppamento imposto da **fac**. **grouping**. Si noti che la sequenza di cifre risultante rappresenta un intero le cui cifre decimali **fac**. `frac_digits` di ordine inferiore vengono prese in considerazione alla destra della virgola decimale.

Lo spazio vuoto arbitrario viene messo in corrispondenza nel punto in cui l'elemento uguale a **money_base::space** compare nel modello di formato, se viene visualizzato in una posizione diversa dalla fine del modello di formato. In caso contrario, non viene messo in corrispondenza alcuno spazio vuoto interno. Un elemento *ch* è considerato uno spazio vuoto se [use_facet](../standard-library/locale-functions.md#use_facet) < [ctype](../standard-library/ctype-class.md)\< **CharType**> >( **iosbase**. [getloc](../standard-library/ios-base-class.md#getloc)). [is](../standard-library/ctype-class.md#is)( **ctype_base::space**, *ch*) è **true**.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [get](#get), che chiama `do_get`.

## <a name="get"></a>  money_get::get

Estrae un valore numerico da una sequenza di caratteri che rappresenta un valore monetario.

```cpp
iter_type get(iter_type first,
    iter_type last,
    bool Intl,
    ios_base& Iosbase,
    ios_base::iostate& State,
    long double& val) const;

iter_type get(iter_type first,
    iter_type last,
    bool Intl,
    ios_base& Iosbase,
    ios_base::iostate& State,
    string_type& val) const;
```

### <a name="parameters"></a>Parametri

`first` Iteratore di input che punta l'inizio della sequenza da convertire.

`last` Iteratore di input che punta alla fine della sequenza da convertire.

`Intl` Valore booleano che indica il tipo di simbolo di valuta previsto nella sequenza: **true** se internazionale, **false** se interne.

`Iosbase` Un formato di flag che quando set indica che il simbolo di valuta è facoltativo. in caso contrario, è necessario

`State` Imposta gli elementi della maschera di bit appropriati per lo stato di flusso in base al fatto di operazioni ha avuto esito positivo.

`val` L'archiviazione la sequenza convertita una stringa.

### <a name="return-value"></a>Valore restituito

Iteratore di input che punta al primo elemento oltre il campo di input di tipo valuta.

### <a name="remarks"></a>Note

Entrambe le funzioni membro restituiscono [do_get](#do_get)`(first, last, Intl, Iosbase, State, val)`.

### <a name="example"></a>Esempio

```cpp
// money_get_get.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>
using namespace std;

int main( )
{
   locale loc( "german_germany" );

   basic_stringstream< char > psz;
   psz << use_facet<moneypunct<char, 1> >(loc).curr_symbol() << "-1.000,56";
   basic_stringstream< char > psz2;
   psz2 << "-100056" << use_facet<moneypunct<char, 1> >(loc).curr_symbol();

   ios_base::iostate st = 0;
   long double fVal;

   psz.flags( psz.flags( )|ios_base::showbase );
   // Which forced the READING the currency symbol
   psz.imbue(loc);
   use_facet < money_get < char > >( loc ).
      get( basic_istream<char>::_Iter( psz.rdbuf( ) ),
           basic_istream<char>::_Iter( 0 ), true, psz, st, fVal );

   if ( st & ios_base::failbit )
      cout << "money_get(" << psz.str( ) << ", intl = 1) FAILED"
           << endl;
   else
      cout << "money_get(" << psz.str( ) << ", intl = 1) = "
           << fVal/100.0 << endl;

   use_facet < money_get < char > >( loc ).
      get(basic_istream<char>::_Iter(psz2.rdbuf( )),
          basic_istream<char>::_Iter(0), false, psz2, st, fVal);

   if ( st & ios_base::failbit )
      cout << "money_get(" << psz2.str( ) << ", intl = 0) FAILED"
           << endl;
   else
      cout << "money_get(" << psz2.str( ) << ", intl = 0) = "
           << fVal/100.0 << endl;
};
```

## <a name="iter_type"></a>  money_get::iter_type

Tipo che descrive un iteratore di input.

```cpp
typedef InputIterator iter_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello **InputIterator**.

## <a name="money_get"></a>  money_get::money_get

Costruttore per oggetti di tipo `money_get` utilizzati per estrarre i valori numerici dalle sequenze che rappresentano valori monetari.

```cpp
explicit money_get(size_t _Refs = 0);
```

### <a name="parameters"></a>Parametri

`_Refs` Valore integer utilizzato per specificare il tipo di gestione della memoria per l'oggetto.

### <a name="remarks"></a>Note

I valori possibili per il parametro `_Refs` e i relativi significati sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.

- \> 1: questi valori non definiti.

Non è possibile fornire esempi diretti, poiché il distruttore è protetto.

Il costruttore inizializza il relativo oggetto di base con **internazionali::**[facet](../standard-library/locale-class.md#facet_class)(**_ * * * Refs*).

## <a name="string_type"></a>  money_get::string_type

Tipo che descrive una stringa contenente caratteri di tipo **CharType**.

```cpp
typedef basic_string<CharType, Traits, Allocator> string_type;
```

### <a name="remarks"></a>Note

Il tipo descrive una specializzazione della classe modello [basic_string](../standard-library/basic-string-class.md).

## <a name="see-also"></a>Vedere anche

[\<locale>](../standard-library/locale.md)<br/>
[Classe facet](../standard-library/locale-class.md#facet_class)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
