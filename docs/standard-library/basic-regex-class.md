---
description: 'Altre informazioni su: basic_regex Class'
title: Classe basic_regex
ms.date: 03/27/2019
f1_keywords:
- regex/std::basic_regex
helpviewer_keywords:
- basic_regex class
ms.assetid: 8a18c6b4-f22a-4cfd-bc16-b4267867ebc3
ms.openlocfilehash: 450f3945faeb088c975bb1657d69496bcf078ccd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325626"
---
# <a name="basic_regex-class"></a>Classe basic_regex

Esegue il wrapping di un'espressione regolare.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class RXtraits>
class basic_regex
```

## <a name="parameters"></a>Parametri

*Elem*\
Tipo di elementi di cui trovare una corrispondenza.

*RXtraits*\
Classe traits per gli elementi.

## <a name="remarks"></a>Commenti

Il modello di classe descrive un oggetto che contiene un'espressione regolare. Gli oggetti di questo modello di classe possono essere passati alle funzioni modello [regex_match](../standard-library/regex-functions.md#regex_match), [regex_search](../standard-library/regex-functions.md#regex_search)e [regex_replace](../standard-library/regex-functions.md#regex_replace), insieme agli argomenti stringa di testo appropriati, per cercare il testo che corrisponde all'espressione regolare. Esistono due specializzazioni di questo modello di classe, con le definizioni di tipo [Regex](../standard-library/regex-typedefs.md#regex) per gli elementi di tipo **`char`** e [wregex](../standard-library/regex-typedefs.md#wregex) per gli elementi di tipo **`wchar_t`** .

L'argomento di modello *RXtraits* descrive le varie proprietà importanti della sintassi delle espressioni regolari supportate dal modello di classe. Una classe che specifica questi tratti dell'espressione regolare deve avere la stessa interfaccia esterna di un oggetto di tipo [Regex_traits classe](../standard-library/regex-traits-class.md).

Alcune funzioni accettano una sequenza di operandi che definisce un'espressione regolare. È possibile specificare tale sequenza di operandi in diversi modi:

`ptr` -una sequenza con terminazione null, ad esempio una stringa C, per *elem* di tipo **`char`** `ptr` , che inizia con (che non deve essere un puntatore null), in cui l'elemento di terminazione è il valore `value_type()` e non fa parte della sequenza dell'operando

`ptr`, `count`: una sequenza di elementi `count` che inizia con `ptr` (che non deve essere un puntatore Null)

`str`: la sequenza specificata dall'oggetto `basic_string``str`

`first`, `last`: una sequenza di elementi delimitata dagli iteratori `first` e `last` nell'intervallo `[first, last)`

`right`: l'oggetto `basic_regex``right`

Queste funzioni membro accettano anche un argomento `flags` che specifica diverse opzioni per l'interpretazione dell'espressione regolare oltre a quelle descritte dal tipo *RXtraits* .

### <a name="members"></a>Membri

|Membro|Valore predefinito|
|-|-|
|public const statico flag_type icase|regex_constants:: icase|
|public static const flag_type NoSubs|regex_constants:: NoSubs|
|statico Public Const flag_type Optimize|regex_constants:: Optimize|
|public const statico flag_type COLLATE|regex_constants:: COLLATE|
|public static const flag_type ECMAScript|regex_constants:: ECMAScript|
|public static const flag_type Basic|regex_constants:: Basic|
|public const statico flag_type esteso|regex_constants:: Extended|
|public const statico flag_type awk|regex_constants:: awk|
|public const statico flag_type grep|regex_constants:: grep|
|public const statico flag_type egrep|regex_constants:: egrep|
|tratti RXtraits privati||

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_regex](#basic_regex)|Costruisce l'oggetto dell'espressione regolare.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[flag_type](#flag_type)|Tipo di flag delle opzioni della sintassi.|
|[locale_type](#locale_type)|Tipo dell'oggetto impostazioni locali archiviato.|
|[value_type](#value_type)|Tipo dell'elemento.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[assign](#assign)|Assegna un valore all'oggetto di espressione regolare.|
|[flags](#flags)|Restituisce i flag delle opzioni della sintassi.|
|[getloc](#getloc)|Restituisce l'oggetto delle impostazioni locali archiviate.|
|[imbue](#imbue)|Modifica l'oggetto delle impostazioni locali archiviate.|
|[mark_count](#mark_count)|Restituisce il numero di sottoespressioni corrispondenti.|
|[scambio](#swap)|Scambia due oggetti di espressione regolare.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore =](#op_eq)|Assegna un valore all'oggetto di espressione regolare.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<regex>

**Spazio dei nomi:** std

## <a name="example"></a>Esempio

```cpp
// std__regex__basic_regex.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

using namespace std;

int main()
{
    regex::value_type elem = 'x';
    regex::flag_type flag = regex::grep;

    elem = elem;  // to quiet "unused" warnings
    flag = flag;

    // constructors
    regex rx0;
    cout << "match(\"abc\", \"\") == " << boolalpha
        << regex_match("abc", rx0) << endl;

    regex rx1("abcd", regex::ECMAScript);
    cout << "match(\"abc\", \"abcd\") == " << boolalpha
        << regex_match("abc", rx1) << endl;

    regex rx2("abcd", 3);
    cout << "match(\"abc\", \"abc\") == " << boolalpha
        << regex_match("abc", rx2) << endl;

    regex rx3(rx2);
    cout << "match(\"abc\", \"abc\") == " << boolalpha
        << regex_match("abc", rx3) << endl;

    string str("abcd");
    regex rx4(str);
    cout << "match(string(\"abcd\"), \"abc\") == " << boolalpha
        << regex_match("abc", rx4) << endl;

    regex rx5(str.begin(), str.end() - 1);
    cout << "match(string(\"abc\"), \"abc\") == " << boolalpha
        << regex_match("abc", rx5) << endl;
    cout << endl;

    // assignments
    rx0 = "abc";
    rx0 = rx1;
    rx0 = str;

    rx0.assign("abcd", regex::ECMAScript);
    rx0.assign("abcd", 3);
    rx0.assign(rx1);
    rx0.assign(str);
    rx0.assign(str.begin(), str.end() - 1);

    rx0.swap(rx1);

    // mark_count
    cout << "\"abc\" mark_count == "
        << regex("abc").mark_count() << endl;
    cout << "\"(abc)\" mark_count == "
        << regex("(abc)").mark_count() << endl;

    // locales
    regex::locale_type loc = rx0.imbue(locale());
    cout << "getloc == imbued == " << boolalpha
        << (loc == rx0.getloc()) << endl;

    // initializer_list
    regex rx6({ 'a', 'b', 'c' }, regex::ECMAScript);
    cout << "match(\"abc\") == " << boolalpha
        << regex_match("abc", rx6);
    cout << endl;
}
```

```Output
match("abc", "") == false
match("abc", "abcd") == false
match("abc", "abc") == true
match("abc", "abc") == true
match(string("abcd"), "abc") == false
match(string("abc"), "abc") == true

"abc" mark_count == 0
"(abc)" mark_count == 1
getloc == imbued == true
match("abc") == true
```

## <a name="basic_regexassign"></a><a name="assign"></a> basic_regex:: Assign

Assegna un valore all'oggetto di espressione regolare.

```cpp
basic_regex& assign(
    const basic_regex& right);

basic_regex& assign(
    const Elem* ptr,
    flag_type flags = ECMAScript);

basic_regex& assign(
    const Elem* ptr,
    size_type len,
    flag_type flags = ECMAScript);

basic_regex& assign(
    initializer_list<_Elem> IList,
    flag_type flags = regex_constants::ECMAScript);

template <class STtraits, class STalloc>
basic_regex& assign(
    const basic_string<Elem, STtraits, STalloc>& str,
    flag_type flags = ECMAScript);

template <class InIt>
basic_regex& assign(
    InIt first, InIt last,
    flag_type flags = ECMAScript);
```

### <a name="parameters"></a>Parametri

*STtraits*\
Classe traits per un'origine di stringa.

*STalloc*\
Classe allocator per un'origine di stringa.

*InIt*\
Tipo di iteratore di input per un'origine di intervallo.

*Ok*\
Origine regex da copiare.

*PTR*\
Puntatore all'inizio della sequenza da copiare.

*Bandiere*\
Flag di opzione sintassi da aggiungere durante la copia.

*>Len/TD*\
Lunghezza della sequenza da copiare.

*Str*\
Stringa da copiare.

*prima*\
Inizio della sequenza da copiare.

*Ultima*\
Fine della sequenza da copiare.

*IList*\
Initializer_list da copiare.

### <a name="remarks"></a>Commenti

Ogni funzione membro sostituisce l'espressione regolare contenuta in **`*this`** con l'espressione regolare descritta dalla sequenza di operandi, quindi restituisce **`*this`** .

## <a name="basic_regexbasic_regex"></a><a name="basic_regex"></a> basic_regex:: basic_regex

Costruisce l'oggetto dell'espressione regolare.

```cpp
basic_regex();

explicit basic_regex(
    const Elem* ptr,
    flag_type flags);

explicit basic_regex(
    const Elem* ptr,
    size_type len,
    flag_type flags);

basic_regex(
    const basic_regex& right);

basic_regex(
    initializer_list<Type> IList,
    flag_type flags);

template <class STtraits, class STalloc>
explicit basic_regex(
    const basic_string<Elem, STtraits, STalloc>& str,
    flag_type flags);

template <class InIt>
explicit basic_regex(
    InIt first,
    InIt last,
    flag_type flags);
```

### <a name="parameters"></a>Parametri

*STtraits*\
Classe traits per un'origine di stringa.

*STalloc*\
Classe allocator per un'origine di stringa.

*InIt*\
Tipo di iteratore di input per un'origine di intervallo.

*Ok*\
Origine regex da copiare.

*PTR*\
Puntatore all'inizio della sequenza da copiare.

*Bandiere*\
Flag di opzione sintassi da aggiungere durante la copia.

*>Len/TD*\
Lunghezza della sequenza da copiare.

*Str*\
Stringa da copiare.

*prima*\
Inizio della sequenza da copiare.

*Ultima*\
Fine della sequenza da copiare.

*IList*\
Initializer_list da copiare.

### <a name="remarks"></a>Commenti

Tutti i costruttori archiviano un oggetto costruito predefinito di tipo `RXtraits`.

Il primo costruttore crea un oggetto `basic_regex` vuoto. Gli altri costruttori creano un oggetto `basic_regex` che contiene l'espressione regolare descritta dalla sequenza di operandi.

Un oggetto vuoto non `basic_regex` corrisponde ad alcuna sequenza di caratteri quando viene passato a [regex_match](../standard-library/regex-functions.md#regex_match), [regex_search](../standard-library/regex-functions.md#regex_search)o [regex_replace](../standard-library/regex-functions.md#regex_replace).

## <a name="basic_regexflag_type"></a><a name="flag_type"></a> basic_regex:: flag_type

Tipo di flag delle opzioni della sintassi.

```cpp
typedef regex_constants::syntax_option_type flag_type;
```

### <a name="remarks"></a>Commenti

Il tipo è sinonimo di [regex_constants::syntax_option_type](../standard-library/regex-constants-class.md#syntax_option_type).

## <a name="basic_regexflags"></a><a name="flags"></a> basic_regex:: Flags

Restituisce i flag delle opzioni della sintassi.

```cpp
flag_type flags() const;
```

### <a name="remarks"></a>Commenti

La funzione membro restituisce il valore dell'argomento `flag_type` passato all'ultima chiamata a una delle funzioni membro [basic_regex::assign](#assign) oppure, se non è stata effettuata alcuna chiamata, il valore passato al costruttore.

## <a name="basic_regexgetloc"></a><a name="getloc"></a> basic_regex:: getloc

Restituisce l'oggetto delle impostazioni locali archiviate.

```cpp
locale_type getloc() const;
```

### <a name="remarks"></a>Commenti

La funzione membro restituisce `traits.` [regex_traits:: getloc](../standard-library/regex-traits-class.md#getloc) `()` .

## <a name="basic_regeximbue"></a><a name="imbue"></a> basic_regex:: imbuto

Modifica l'oggetto delle impostazioni locali archiviate.

```cpp
locale_type imbue(locale_type loc);
```

### <a name="parameters"></a>Parametri

*loc*\
Oggetto impostazioni locali da archiviare.

### <a name="remarks"></a>Commenti

La funzione membro svuota **`*this`** e restituisce `traits.` [regex_traits:: imbue](../standard-library/regex-traits-class.md#imbue) `(loc)` .

## <a name="basic_regexlocale_type"></a><a name="locale_type"></a> basic_regex:: locale_type

Tipo dell'oggetto impostazioni locali archiviato.

```cpp
typedef typename RXtraits::locale_type locale_type;
```

### <a name="remarks"></a>Commenti

Il tipo è sinonimo di [regex_traits::locale_type](../standard-library/regex-traits-class.md#locale_type).

## <a name="basic_regexmark_count"></a><a name="mark_count"></a> basic_regex:: mark_count

Restituisce il numero di sottoespressioni corrispondenti.

```cpp
unsigned mark_count() const;
```

### <a name="remarks"></a>Commenti

La funzione membro restituisce il numero di gruppi Capture nell'espressione regolare.

## <a name="basic_regexoperator"></a><a name="op_eq"></a> basic_regex:: operator =

Assegna un valore all'oggetto di espressione regolare.

```cpp
basic_regex& operator=(const basic_regex& right);

basic_regex& operator=(const Elem *str);

template <class STtraits, class STalloc>
basic_regex& operator=(const basic_string<Elem, STtraits, STalloc>& str);
```

### <a name="parameters"></a>Parametri

*STtraits*\
Classe traits per un'origine di stringa.

*STalloc*\
Classe allocator per un'origine di stringa.

*Ok*\
Origine regex da copiare.

*Str*\
Stringa da copiare.

### <a name="remarks"></a>Commenti

Ogni operatore sostituisce l'espressione regolare contenuta in **`*this`** con l'espressione regolare descritta dalla sequenza di operandi, quindi restituisce **`*this`** .

## <a name="basic_regexswap"></a><a name="swap"></a> basic_regex:: swap

Scambia due oggetti di espressione regolare.

```cpp
void swap(basic_regex& right) throw();
```

### <a name="parameters"></a>Parametri

*Ok*\
L'oggetto di espressione regolare con cui eseguire lo scambio.

### <a name="remarks"></a>Commenti

La funzione membro scambia le espressioni regolari tra **`*this`** e *right*. Esegue tale operazione in un tempo costante e non genera eccezioni.

## <a name="basic_regexvalue_type"></a><a name="value_type"></a> basic_regex:: value_type

Tipo dell'elemento.

```cpp
typedef Elem value_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del parametro di modello *elem*.

## <a name="see-also"></a>Vedi anche

[\<regex>](../standard-library/regex.md)\
[regex_match](../standard-library/regex-functions.md#regex_match)\
[regex_search](../standard-library/regex-functions.md#regex_search)\
[regex_replace](../standard-library/regex-functions.md#regex_replace)\
[Regex](../standard-library/regex-typedefs.md#regex)\
[wregex](../standard-library/regex-typedefs.md#wregex)\
[Classe regex_traits](../standard-library/regex-traits-class.md)
