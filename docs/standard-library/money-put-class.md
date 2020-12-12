---
description: 'Altre informazioni su: money_put Class'
title: Classe money_put
ms.date: 11/01/2018
f1_keywords:
- xlocmon/std::money_put
- xlocmon/std::money_put::char_type
- xlocmon/std::money_put::iter_type
- xlocmon/std::money_put::string_type
- xlocmon/std::money_put::do_put
- xlocmon/std::money_put::put
helpviewer_keywords:
- std::money_put [C++]
- std::money_put [C++], char_type
- std::money_put [C++], iter_type
- std::money_put [C++], string_type
- std::money_put [C++], do_put
- std::money_put [C++], put
ms.assetid: f439fd56-c9b1-414c-95e1-66c918c6eee6
ms.openlocfilehash: d7e35e870d4a065948123e9d21339095d36c4579
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97277479"
---
# <a name="money_put-class"></a>Classe money_put

Il modello di classe descrive un oggetto che può essere utilizzato come facet delle impostazioni locali per controllare le conversioni dei valori monetari in sequenze di tipo `CharType` .

## <a name="syntax"></a>Sintassi

```cpp
template <class CharType,
    class OutputIterator = ostreambuf_iterator<CharType>>
class money_put : public locale::facet;
```

### <a name="parameters"></a>Parametri

*CharType*\
Tipo utilizzato all'interno di un programma per codificare i caratteri delle impostazioni locali.

*OutputIterator*\
Tipo di iteratore in cui le funzioni Put monetarie scrivono il proprio output.

## <a name="remarks"></a>Commenti

Come in qualsiasi facet delle impostazioni locali, l'ID dell'oggetto statico ha un valore archiviato iniziale uguale a zero. Il primo tentativo di accedere a tale valore archiviato consente di archiviare un valore positivo univoco in **id**.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[money_put](#money_put)|Costruttore per oggetti di tipo `money_put`.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[char_type](#char_type)|Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.|
|[iter_type](#iter_type)|Tipo che descrive un iteratore di output.|
|[string_type](#string_type)|Tipo che descrive una stringa contenente caratteri di tipo `CharType`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[do_put](#do_put)|Funzione virtuale chiamata per convertire un numero o una stringa in una sequenza di caratteri che rappresenta un valore monetario.|
|[mettere](#put)|Converte un numero o una stringa in una sequenza di caratteri che rappresenta un valore monetario.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<locale>

**Spazio dei nomi:** std

## <a name="money_putchar_type"></a><a name="char_type"></a> money_put:: char_type

Tipo utilizzato per descrivere un carattere utilizzato dalle impostazioni locali.

```cpp
typedef CharType char_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello **CharType**.

## <a name="money_putdo_put"></a><a name="do_put"></a> money_put::d o_put

Funzione virtuale chiamata per convertire un numero o una stringa in una sequenza di caratteri che rappresenta un valore monetario.

```cpp
virtual iter_type do_put(
    iter_type next,
    bool _Intl,
    ios_base& _Iosbase,
    CharType _Fill,
    const string_type& val) const;

virtual iter_type do_put(
    iter_type next,
    bool _Intl,
    ios_base& _Iosbase,
    CharType _Fill,
    long double val) const;
```

### <a name="parameters"></a>Parametri

*prossimo*\
Iteratore che punta al primo elemento della stringa inserita.

*_Intl*\
Valore booleano che indica il tipo di simbolo di valuta previsto nella sequenza: **`true`** se internazionale, **`false`** se nazionale.

*_Iosbase*\
Flag di formato che, quando impostato, indica che il simbolo di valuta è facoltativo; in caso contrario, indica che è necessario

*_Fill*\
Carattere usato per la spaziatura.

*Val*\
Oggetto stringa da convertire.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione successiva all'ultimo elemento prodotto.

### <a name="remarks"></a>Commenti

La prima funzione membro virtuale protetta genera elementi sequenziali a partire da *Next* per produrre un campo di output di tipo valuta dall'oggetto [string_type](#string_type) *Val*. La sequenza controllata da *Val* deve iniziare con una o più cifre decimali, facoltativamente preceduta da un segno meno (-), che rappresenta la quantità. La funzione restituisce un iteratore che designa il primo elemento dopo il campo di output di tipo valuta generato.

La seconda funzione membro virtuale protetta si comporta come la prima, ad eccezione del fatto che prima converte la *Val* in una sequenza di cifre decimali, facoltativamente preceduta da un segno meno, quindi converte tale sequenza come sopra.

Il formato di un campo di output di tipo valuta è determinato dal fac del [facet delle impostazioni locali](../standard-library/locale-class.md#facet_class) restituito dalla chiamata (effettiva) [use_facet](../standard-library/locale-functions.md#use_facet)  <  [moneypunct](../standard-library/moneypunct-class.md) \< **CharType**, **intl**> > ( **iosbase**. [getloc](../standard-library/ios-base-class.md#getloc)).

In particolare:

- **fac**. [pos_format](../standard-library/moneypunct-class.md#pos_format) determina l'ordine in cui i componenti del campo vengono generati per un valore non negativo.

- **fac**. [neg_format](../standard-library/moneypunct-class.md#neg_format) determina l'ordine in cui i componenti del campo vengono generati per un valore negativo.

- **fac**. [curr_symbol](../standard-library/moneypunct-class.md#curr_symbol) determina la sequenza di elementi da generare per un simbolo di valuta.

- **fac**. [positive_sign](../standard-library/moneypunct-class.md#positive_sign) determina la sequenza di elementi da generare per un segno positivo.

- **fac**. [negative_sign](../standard-library/moneypunct-class.md#negative_sign) determina la sequenza di elementi da generare per un segno negativo.

- **fac**. [grouping](../standard-library/moneypunct-class.md#grouping) determina la modalità di raggruppamento delle cifre a sinistra della virgola decimale.

- **fac**. [thousands_sep](../standard-library/moneypunct-class.md#thousands_sep) determina l'elemento che separa gruppi di cifre a sinistra della virgola decimale.

- **fac**. [decimal_point](../standard-library/moneypunct-class.md#decimal_point) determina l'elemento che separa le cifre intere dalle cifre frazionarie.

- **fac**. [frac_digits](../standard-library/moneypunct-class.md#frac_digits) determina il numero di cifre frazionarie significative a destra della virgola decimale.

Se la stringa segno ( **fac**. `negative_sign` o **fac**. `positive_sign`) contiene più di un elemento, viene generato solo il primo elemento, nel punto in cui l'elemento uguale a **money_base::sign** compare nel modello di formato ( **fac**. `neg_format` o **fac**. `pos_format`). Gli eventuali elementi restanti vengono generati alla fine del campo di output di tipo valuta.

Se **iosbase**. [flag](../standard-library/ios-base-class.md#flags)  &  [showbase](../standard-library/ios-functions.md#showbase) è diverso da zero, la stringa **fac**. `curr_symbol` viene generata nel punto in cui l'elemento uguale a **money_base::symbol** compare nel modello di formato. In caso contrario, non viene generato alcun simbolo di valuta.

Se **fac**. **grouping** (il primo elemento ha il valore CHAR_MAX), non verranno generate istanze di **fac**. `thousands_sep` nella parte valore del campo di output di tipo valuta, dove l'elemento uguale a **money_base::value** compare nel modello di formato. Se **fac**. `frac_digits` è zero, dopo le cifre decimali non viene generata alcuna istanza di **fac**. `decimal_point`. In caso contrario, il risultante campo di output di tipo valuta inserisce le cifre decimali **fac**. `frac_digits` di ordine inferiore a destra della virgola decimale.

Viene inserita la spaziatura interna per i campi di output numerici, tranne nel caso in cui **iosbase**. **flag**  &  **iosbase**. [internal](../standard-library/ios-functions.md#internal) è diverso da zero. In questo caso, l'eventuale spaziatura interna viene inserita nel punto in cui l'elemento uguale a **money_base::space** compare, se compare, nel modello di formato. In caso contrario, la spaziatura interna viene inserita prima della sequenza generata. Il carattere di riempimento è **fill**.

La funzione chiama **iosbase**. **width**(0) per reimpostare la larghezza del campo su zero.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [put](#put), in cui la funzione membro virtuale viene chiamata da **put**.

## <a name="money_putiter_type"></a><a name="iter_type"></a> money_put:: iter_type

Tipo che descrive un iteratore di output.

```cpp
typedef OutputIterator iter_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello **OutputIterator.**

## <a name="money_putmoney_put"></a><a name="money_put"></a> money_put:: money_put

Costruttore per oggetti di tipo `money_put`.

```cpp
explicit money_put(size_t _Refs = 0);
```

### <a name="parameters"></a>Parametri

*_Refs*\
Valore Integer che consente di specificare il tipo di gestione della memoria per l'oggetto.

### <a name="remarks"></a>Commenti

I valori possibili per il parametro *_Refs* e i relativi significati sono:

- 0: la durata dell'oggetto è gestita dalle impostazioni locali che lo contengono.

- 1: la durata dell'oggetto deve essere gestita manualmente.

- \> 1: questi valori non sono definiti.

Non è possibile fornire esempi diretti, poiché il distruttore è protetto.

Il costruttore inizializza l'oggetto di base con **locale::**[facet](../standard-library/locale-class.md#facet_class)( `_Refs`).

## <a name="money_putput"></a><a name="put"></a> money_put::p UT

Converte un numero o una stringa in una sequenza di caratteri che rappresenta un valore monetario.

```cpp
iter_type put(
    iter_type next,
    bool _Intl,
    ios_base& _Iosbase,
    CharType _Fill,
    const string_type& val) const;

iter_type put(
    iter_type next,
    bool _Intl,
    ios_base& _Iosbase,
    CharType _Fill,
    long double val) const;
```

### <a name="parameters"></a>Parametri

*prossimo*\
Iteratore che punta al primo elemento della stringa inserita.

*_Intl*\
Valore booleano che indica il tipo di simbolo di valuta previsto nella sequenza: **`true`** se internazionale, **`false`** se nazionale.

*_Iosbase*\
Flag di formato che, quando impostato, indica che il simbolo di valuta è facoltativo; in caso contrario, indica che è necessario

*_Fill*\
Carattere usato per la spaziatura.

*Val*\
Oggetto stringa da convertire.

### <a name="return-value"></a>Valore restituito

Iteratore di output che punta alla posizione successiva all'ultimo elemento prodotto.

### <a name="remarks"></a>Commenti

Entrambe le funzioni membro restituiscono [do_put](#do_put)( `next` ,, `_Intl` `_Iosbase` , `_Fill` , `val` ).

### <a name="example"></a>Esempio

```cpp
// money_put_put.cpp
// compile with: /EHsc
#include <locale>
#include <iostream>
#include <sstream>

int main()
{
    std::locale loc( "german_germany" );
    std::basic_stringstream<char> psz;

    psz.imbue(loc);
    psz.flags(psz.flags() | std::ios_base::showbase); // force the printing of the currency symbol
    std::use_facet<std::money_put<char> >(loc).put(std::basic_ostream<char>::_Iter(psz.rdbuf()), true, psz, ' ', 100012);
    if (psz.fail())
        std::cout << "money_put() FAILED" << std::endl;
    else
        std::cout << "money_put() = \"" << psz.rdbuf()->str() << "\"" << std::endl;
}
```

```Output
money_put() = "EUR1.000,12"
```

## <a name="money_putstring_type"></a><a name="string_type"></a> money_put:: string_type

Tipo che descrive una stringa contenente caratteri di tipo `CharType`.

```cpp
typedef basic_string<CharType, Traits, Allocator> string_type;
```

### <a name="remarks"></a>Commenti

Il tipo descrive una specializzazione del modello di classe [basic_string](../standard-library/basic-string-class.md) i cui oggetti possono archiviare sequenze di elementi dalla sequenza di origine.

## <a name="see-also"></a>Vedi anche

[\<locale>](../standard-library/locale.md)\
[Classe facet](../standard-library/locale-class.md#facet_class)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
