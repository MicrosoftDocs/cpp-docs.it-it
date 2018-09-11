---
title: Classe basic_regex | Microsoft Docs
ms.custom: ''
ms.date: 09/10/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- regex/std::basic_regex
dev_langs:
- C++
helpviewer_keywords:
- basic_regex class
ms.assetid: 8a18c6b4-f22a-4cfd-bc16-b4267867ebc3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 531ecc65a23e0eecd3480c397c081061cffaf9d8
ms.sourcegitcommit: 27b5712badd09a09c499d887e2e4cf2208a28603
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2018
ms.locfileid: "44384943"
---
# <a name="basicregex-class"></a>Classe basic_regex

Esegue il wrapping di un'espressione regolare.

## <a name="syntax"></a>Sintassi

```cpp
template <class Elem, class RXtraits>
class basic_regex
```

## <a name="parameters"></a>Parametri

*Elem*<br/>
Tipo di elementi di cui trovare una corrispondenza.

*RXtraits*<br/>
Classe traits per gli elementi.

## <a name="remarks"></a>Note

La classe modello descrive un oggetto contenente un'espressione regolare. Gli oggetti di questa classe modello possono essere passati alle funzioni di modello [regex_match](../standard-library/regex-functions.md#regex_match), [regex_search](../standard-library/regex-functions.md#regex_search), e [regex_replace](../standard-library/regex-functions.md#regex_replace), insieme agli argomenti stringa di testo appropriati, Per cercare il testo che corrisponde all'espressione regolare. Esistono due specializzazioni di questa classe modello, con le definizioni dei tipi [regex](../standard-library/regex-typedefs.md#regex) per gli elementi di tipo **char**, e [wregex](../standard-library/regex-typedefs.md#wregex) per gli elementi di tipo  **wchar_t**.

L'argomento di modello *RXtraits* descrive diverse proprietà importanti della sintassi delle espressioni regolari che supporta la classe modello. Una classe che specifica questi tratti dell'espressione regolare deve avere la stessa interfaccia esterna di un oggetto della classe di modello [regex_traits](../standard-library/regex-traits-class.md).

Alcune funzioni accettano una sequenza di operandi che definisce un'espressione regolare. È possibile specificare tale sequenza di operandi in diversi modi:

`ptr` : una sequenza con terminazione null (ad esempio una stringa C, per *Elem* typu **char**) iniziando `ptr` (che non deve essere un puntatore null), dove l'elemento di terminazione è il valore `value_type()` e non fa parte della sequenza di operandi

`ptr`, `count`: una sequenza di elementi `count` che inizia con `ptr` (che non deve essere un puntatore Null)

`str`: la sequenza specificata dall'oggetto `basic_string` `str`

`first`, `last`: una sequenza di elementi delimitata dagli iteratori `first` e `last` nell'intervallo `[first, last)`

`right`: l'oggetto `basic_regex` `right`

Queste funzioni membro accettano anche un argomento `flags` che specifica diverse opzioni per l'interpretazione dell'espressione regolare oltre a quelli descritti per il *RXtraits* tipo.

### <a name="members"></a>Membri

|Member|Valore predefinito|
|-|-|
|pubblica icase flag_type const statico|regex_constants::icase|
|pubblica nosubs flag_type const statico|regex_constants::nosubs|
|ottimizzare flag_type const statico pubblico|regex_constants::optimize|
|collate flag_type const statico pubblico|regex_constants::COLLATE|
|flag_type const statico pubblico ECMAScript|regex_constants::ECMAScript|
|public static const flag_type base|regex_constants::Basic|
|pubblica flag_type const statici estesi|regex_constants::Extended|
|pubblica awk flag_type const statico|regex_constants::awk|
|pubblica grep flag_type const statico|regex_constants::GREP|
|pubblica egrep flag_type const statico|regex_constants::egrep|
|tratti RXtraits privati||

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[basic_regex](#basic_regex)|Costruisce l'oggetto dell'espressione regolare.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[flag_type](#flag_type)|Tipo di flag delle opzioni della sintassi.|
|[locale_type](#locale_type)|Tipo dell'oggetto impostazioni locali archiviato.|
|[value_type](#value_type)|Tipo dell'elemento.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[assign](#assign)|Assegna un valore all'oggetto di espressione regolare.|
|[flags](#flags)|Restituisce i flag delle opzioni della sintassi.|
|[get_loc](#get_loc)|Restituisce l'oggetto delle impostazioni locali archiviate.|
|[imbue](#imbue)|Modifica l'oggetto delle impostazioni locali archiviate.|
|[mark_count](#mark_count)|Restituisce il numero di sottoespressioni corrispondenti.|
|[swap](#swap)|Scambia due oggetti di espressione regolare.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator=](#op_eq)|Assegna un valore all'oggetto di espressione regolare.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<regex>

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

## <a name="assign"></a>  basic_regex::assign

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

*STtraits*<br/>
Classe traits per un'origine di stringa.

*STalloc*<br/>
Classe allocator per un'origine di stringa.

*InIt*<br/>
Tipo di iteratore di input per un'origine di intervallo.

*right*<br/>
Origine regex da copiare.

*ptr*<br/>
Puntatore all'inizio della sequenza da copiare.

*flags*<br/>
Flag di opzione sintassi da aggiungere durante la copia.

*Len/TD >*<br/>
Lunghezza della sequenza da copiare.

*str*<br/>
Stringa da copiare.

*first*<br/>
Inizio della sequenza da copiare.

*last*<br/>
Fine della sequenza da copiare.

*IList*<br/>
Initializer_list da copiare.

### <a name="remarks"></a>Note

Ciascuna funzione membro sostituisce l'espressione regolare contenuta in `*this` con l'espressione regolare descritta dalla sequenza di operandi, quindi restituisce `*this`.

## <a name="basic_regex"></a>  basic_regex::basic_regex

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

*STtraits*<br/>
Classe traits per un'origine di stringa.

*STalloc*<br/>
Classe allocator per un'origine di stringa.

*InIt*<br/>
Tipo di iteratore di input per un'origine di intervallo.

*right*<br/>
Origine regex da copiare.

*ptr*<br/>
Puntatore all'inizio della sequenza da copiare.

*flags*<br/>
Flag di opzione sintassi da aggiungere durante la copia.

*Len/TD >*<br/>
Lunghezza della sequenza da copiare.

*str*<br/>
Stringa da copiare.

*first*<br/>
Inizio della sequenza da copiare.

*last*<br/>
Fine della sequenza da copiare.

*IList*<br/>
Initializer_list da copiare.

### <a name="remarks"></a>Note

Tutti i costruttori archiviano un oggetto costruito predefinito di tipo `RXtraits`.

Il primo costruttore crea un oggetto `basic_regex` vuoto. Gli altri costruttori creano un oggetto `basic_regex` che contiene l'espressione regolare descritta dalla sequenza di operandi.

Un oggetto vuoto `basic_regex` oggetto corrisponde a qualsiasi sequenza di caratteri quando viene passato a [regex_match](../standard-library/regex-functions.md#regex_match), [regex_search](../standard-library/regex-functions.md#regex_search), oppure [regex_replace](../standard-library/regex-functions.md#regex_replace).

## <a name="flag_type"></a>  basic_regex::flag_type

Tipo di flag delle opzioni della sintassi.

```cpp
typedef regex_constants::syntax_option_type flag_type;
```

### <a name="remarks"></a>Note

Il tipo è sinonimo di [regex_constants::syntax_option_type](../standard-library/regex-constants-class.md#syntax_option_type).

## <a name="flags"></a>  basic_regex::flags

Restituisce i flag delle opzioni della sintassi.

```cpp
flag_type flags() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce il valore dell'argomento `flag_type` passato all'ultima chiamata a una delle funzioni membro [basic_regex::assign](#assign) oppure, se non è stata effettuata alcuna chiamata, il valore passato al costruttore.

## <a name="getloc"></a>  basic_regex::getloc

Restituisce l'oggetto delle impostazioni locali archiviate.

```cpp
locale_type getloc() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce `traits.`[regex_traits::getloc](../standard-library/regex-traits-class.md#getloc)`()`.

## <a name="imbue"></a>  basic_regex::imbue

Modifica l'oggetto delle impostazioni locali archiviate.

```cpp
locale_type imbue(locale_type loc);
```

### <a name="parameters"></a>Parametri

*Loc*<br/>
Oggetto impostazioni locali da archiviare.

### <a name="remarks"></a>Note

La funzione membro svuota `*this` e restituisce `traits.`[regex_traits::imbue](../standard-library/regex-traits-class.md#imbue)`(loc)`.

## <a name="locale_type"></a>  basic_regex::locale_type

Tipo dell'oggetto impostazioni locali archiviato.

```cpp
typedef typename RXtraits::locale_type locale_type;
```

### <a name="remarks"></a>Note

Il tipo è sinonimo di [regex_traits::locale_type](../standard-library/regex-traits-class.md#locale_type).

## <a name="mark_count"></a>  basic_regex::mark_count

Restituisce il numero di sottoespressioni corrispondenti.

```cpp
unsigned mark_count() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce il numero di gruppi Capture nell'espressione regolare.

## <a name="op_eq"></a>  basic_regex::operator=

Assegna un valore all'oggetto di espressione regolare.

```cpp
basic_regex& operator=(const basic_regex& right);

basic_regex& operator=(const Elem *str);

template <class STtraits, class STalloc>
basic_regex& operator=(const basic_string<Elem, STtraits, STalloc>& str);
```

### <a name="parameters"></a>Parametri

*STtraits*<br/>
Classe traits per un'origine di stringa.

*STalloc*<br/>
Classe allocator per un'origine di stringa.

*right*<br/>
Origine regex da copiare.

*str*<br/>
Stringa da copiare.

### <a name="remarks"></a>Note

Ciascun operatore sostituisce l'espressione regolare contenuta in `*this` con l'espressione regolare descritta dalla sequenza di operandi, quindi restituisce `*this`.

## <a name="swap"></a>  basic_regex::swap

Scambia due oggetti di espressione regolare.

```cpp
void swap(basic_regex& right) throw();
```

### <a name="parameters"></a>Parametri

*right*<br/>
L'oggetto di espressione regolare con cui eseguire lo scambio.

### <a name="remarks"></a>Note

La funzione membro Scambia le espressioni regolari tra `*this` e *destro*. Esegue tale operazione in un tempo costante e non genera eccezioni.

## <a name="value_type"></a>  basic_regex::value_type

Tipo dell'elemento.

```cpp
typedef Elem value_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del parametro di modello *Elem*.

## <a name="see-also"></a>Vedere anche

[\<regex>](../standard-library/regex.md)<br/>
[regex_match](../standard-library/regex-functions.md#regex_match)<br/>
[regex_search](../standard-library/regex-functions.md#regex_search)<br/>
[regex_replace](../standard-library/regex-functions.md#regex_replace)<br/>
[regex](../standard-library/regex-typedefs.md#regex)<br/>
[wregex](../standard-library/regex-typedefs.md#wregex)<br/>
[Classe regex_traits](../standard-library/regex-traits-class.md)<br/>
