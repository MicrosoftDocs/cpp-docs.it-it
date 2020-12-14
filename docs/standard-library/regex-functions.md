---
description: 'Altre informazioni su: &lt; &gt; funzioni Regex'
title: Funzioni &lt;regex&gt;
ms.date: 09/10/2018
f1_keywords:
- regex/std::regex_match
- regex/std::regex_replace
- regex/std::regex_search
- regex/std::swap
ms.assetid: 91a8314b-6f7c-4e33-b7d6-d8583dd75585
helpviewer_keywords:
- std::regex_match [C++]
- std::regex_replace [C++]
- std::regex_search [C++]
- std::swap [C++]
- std::swap [C++]
ms.openlocfilehash: aa2186d7b394d1b603d5600d1977efa8d268a32f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97253338"
---
# <a name="ltregexgt-functions"></a>Funzioni &lt;regex&gt;

|Nome|Description|
|-|-|
|[regex_match](#regex_match)|Verifica se un'espressione regolare corrisponde all'intera stringa di destinazione.|
|[regex_replace](#regex_replace)|Sostituisce espressioni regolari corrispondenti.|
|[regex_search](#regex_search)|Cerca una corrispondenza dell'espressione regolare.|
|[scambio](#swap)|Scambia due `basic_regex` oggetti o `match_results` .|

## <a name="regex_match"></a><a name="regex_match"></a> regex_match

Verifica se un'espressione regolare corrisponde all'intera stringa di destinazione.

```cpp
// (1)
template <class BidIt, class Alloc, class Elem, class RXtraits, class Alloc2>
bool regex_match(
    BidIt first,
    Bidit last,
    match_results<BidIt, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

// (2)
template <class BidIt, class Elem, class RXtraits, class Alloc2>
bool regex_match(
    BidIt first,
    Bidit last,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

// (3)
template <class Elem, class Alloc, class RXtraits, class Alloc2>
bool regex_match(
    const Elem *ptr,
    match_results<const Elem*, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

// (4)
template <class Elem, class RXtraits, class Alloc2>
bool regex_match(
    const Elem *ptr,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

// (5)
template <class IOtraits, class IOalloc, class Alloc, class Elem, class RXtraits, class Alloc2>
bool regex_match(
    const basic_string<Elem, IOtraits, IOalloc>& str,
    match_results<typename basic_string<Elem, IOtraits, IOalloc>::const_iterator, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

// (6)
template <class IOtraits, class IOalloc, class Elem, class RXtraits, class Alloc2>
bool regex_match(
    const basic_string<Elem, IOtraits, IOalloc>& str,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);
```

### <a name="parameters"></a>Parametri

*BidIt*\
Tipo di iteratore per le sottocorrispondenze. Per i casi comuni si tratta `string::const_iterator` di `wstring::const_iterator` , `const char*` o `const wchar_t*` .

*Alloc*\
Classe allocator dei risultati di corrispondenza.

*Elem*\
Tipo di elementi di cui trovare una corrispondenza. Per i casi comuni si tratta di `string` , `wstring` `char*` o `wchar_t*` .

*RXtraits*\
Classe traits per gli elementi.

*Alloc2*\
Classe allocator dell'espressione regolare.

*IOtraits*\
Classe traits della stringa.

*IOalloc*\
Classe allocator della stringa.

*Bandiere*\
Flag per le corrispondenze.

*prima*\
Inizio della sequenza per cui cercare una corrispondenza.

*Ultima*\
Fine della sequenza per cui cercare una corrispondenza.

*corrispondenza*\
Risultati della corrispondenza. Corrisponde al tipo Elem: [smatch](../standard-library/regex-typedefs.md#smatch) per `string` , [wsmatch](../standard-library/regex-typedefs.md#wsmatch) per `wstring` , [cmatch](../standard-library/regex-typedefs.md#cmatch) per `char*` o [wcmatch](../standard-library/regex-typedefs.md#wcmatch) per `wchar_t*` .

*PTR*\
Puntatore all'inizio della sequenza per cui cercare una corrispondenza. Se *ptr* è `char*` , utilizzare `cmatch` e `regex` . Se *ptr* `wchar_t*` utilizza `wcmatch` e `wregex` .

*Re*\
Espressione regolare in base a cui trovare una corrispondenza. Digitare `regex` per `string` e `char*` o `wregex` per `wstring` e `wchar_t*` .

*Str*\
Stringa per cui cercare una corrispondenza. Corrisponde al tipo di *elem*.

### <a name="remarks"></a>Commenti

Ogni funzione modello restituisce true solo se l'intera sequenza di operandi *Str* corrisponde esattamente all'argomento di espressione regolare *re*. Usare [regex_search](../standard-library/regex-functions.md#regex_search) per trovare la corrispondenza con una sottostringa all'interno di una sequenza di destinazione e `regex_iterator` per trovare più corrispondenze. Le funzioni che accettano un oggetto `match_results` impostano i propri membri in modo da indicare se la corrispondenza ha avuto esito positivo e, in caso affermativo, cosa hanno acquisito i vari gruppi di acquisizione nell'espressione regolare.

Le funzioni che accettano un oggetto `match_results` impostano i propri membri in modo da indicare se la corrispondenza ha avuto esito positivo e, in caso affermativo, cosa hanno acquisito i vari gruppi di acquisizione nell'espressione regolare.

### <a name="example"></a>Esempio

```cpp
// std__regex__regex_match.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

using namespace std;

int main()
{
    // (1) with char*
    // Note how const char* requires cmatch and regex
    const char *first = "abc";
    const char *last = first + strlen(first);
    cmatch narrowMatch;
    regex rx("a(b)c");

    bool found = regex_match(first, last, narrowMatch, rx);
    if (found)
        wcout << L"Regex found in abc" << endl;

    // (2) with std::wstring
    // Note how wstring requires wsmatch and wregex.
    // Note use of const iterators cbegin() and cend().
    wstring target(L"Hello");
    wsmatch wideMatch;
    wregex wrx(L"He(l+)o");

    if (regex_match(target.cbegin(), target.cend(), wideMatch, wrx))
        wcout << L"The matching text is:" << wideMatch.str() << endl;

    // (3) with std::string
    string target2("Drizzle");
    regex rx2(R"(D\w+e)"); // no double backslashes with raw string literal

    found = regex_match(target2.cbegin(), target2.cend(), rx2);
    if (found)
        wcout << L"Regex found in Drizzle" << endl;

    // (4) with wchar_t*
    const wchar_t* target3 = L"2014-04-02";
    wcmatch wideMatch2;

    // LR"(...)" is a  raw wide-string literal. Open and close parens
    // are delimiters, not string elements.
    wregex wrx2(LR"(\d{4}(-|/)\d{2}(-|/)\d{2})");
    if (regex_match(target3, wideMatch2, wrx2))
    {
        wcout << L"Matching text: " << wideMatch2.str() << endl;
    }

     return 0;
}
```

```Output
Regex found in abc
The matching text is: Hello
Regex found in Drizzle
The matching text is: 2014-04-02
```

## <a name="regex_replace"></a><a name="regex_replace"></a> regex_replace

Sostituisce espressioni regolari corrispondenti.

```cpp
template <class OutIt, class BidIt, class RXtraits, class Alloc, class Elem>
OutIt regex_replace(
    OutIt out,
    BidIt first,
    BidIt last,
    const basic_regex<Elem, RXtraits, Alloc>& re,
    const basic_string<Elem>& fmt,
    match_flag_type flags = match_default);

template <class RXtraits, class Alloc, class Elem>
basic_string<Elem> regex_replace(
    const basic_string<Elem>& str,
    const basic_regex<Elem, RXtraits, Alloc>& re,
    const basic_string<Elem>& fmt,
    match_flag_type flags = match_default);
```

### <a name="parameters"></a>Parametri

*OutIt*\
Tipo di iteratore per le sostituzioni.

*BidIt*\
Tipo di iteratore per le sottocorrispondenze.

*RXtraits*\
Classe traits per gli elementi.

*Alloc*\
Classe allocator dell'espressione regolare.

*Elem*\
Tipo di elementi di cui trovare una corrispondenza.

*Bandiere*\
Flag per le corrispondenze.

*prima*\
Inizio della sequenza per cui cercare una corrispondenza.

*FMT*\
Formato delle sostituzioni.

*Ultima*\
Fine della sequenza per cui cercare una corrispondenza.

*out*\
Iteratore di output.

*Re*\
Espressione regolare in base a cui trovare una corrispondenza.

*Str*\
Stringa per cui cercare una corrispondenza.

### <a name="remarks"></a>Commenti

La prima funzione costruisce un oggetto [Regex_iterator classe](../standard-library/regex-iterator-class.md) `iter(first, last, re, flags)` e lo usa per suddividere l'intervallo `[first, last)` di input in una serie di sottosequenze `T0 M0 T1 M1...TN-1 MN-1 TN` , dove `Mn` è l'ennesima corrispondenza rilevata dall'iteratore. Se non viene trovata alcuna corrispondenza, `T0` è l'intero intervallo di input e `N` è zero. Se `(flags & format_first_only) != 0` viene usata solo la prima corrispondenza, `T1` è il testo di input che segue la corrispondenza e `N` è 1. Per ogni `i` nell'intervallo `[0, N)` , se `(flags & format_no_copy) == 0` copia il testo nell'intervallo nell' `Ti` iteratore in *uscita*. Viene quindi chiamato `m.format(out, fmt, flags)` , dove `m` è l' `match_results` oggetto restituito dall'oggetto iteratore `iter` per la sottosequenza `Mi` . Infine, se `(flags & format_no_copy) == 0` copia il testo nell'intervallo nell' `TN` iteratore in *uscita*. La funzione restituisce *out*.

La seconda funzione costruisce una variabile locale `result` di tipo `basic_string<charT>` e chiama `regex_replace(back_inserter(result), str.begin(), str.end(), re, fmt, flags)`. Restituisce `result`.

### <a name="example"></a>Esempio

```cpp
// std__regex__regex_replace.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

int main()
{
    char buf[20];
    const char *first = "axayaz";
    const char *last = first + strlen(first);
    std::regex rx("a");
    std::string fmt("A");
    std::regex_constants::match_flag_type fonly =
        std::regex_constants::format_first_only;

    *std::regex_replace(&buf[0], first, last, rx, fmt) = '\0';
    std::cout << "replacement == " << &buf[0] << std::endl;

    *std::regex_replace(&buf[0], first, last, rx, fmt, fonly) = '\0';
    std::cout << "replacement == " << &buf[0] << std::endl;

    std::string str("adaeaf");
    std::cout << "replacement == "
        << std::regex_replace(str, rx, fmt) << std::endl;

    std::cout << "replacement == "
        << std::regex_replace(str, rx, fmt, fonly) << std::endl;

    return (0);
}
```

```Output
replacement == AxAyAz
replacement == Axayaz
replacement == AdAeAf
replacement == Adaeaf
```

## <a name="regex_search"></a><a name="regex_search"></a> regex_search

Cerca una corrispondenza dell'espressione regolare.

```cpp
template <class BidIt, class Alloc, class Elem, class RXtraits, class Alloc2>
bool regex_search(
    BidIt first,
    Bidit last,
    match_results<BidIt, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

template <class BidIt, class Elem, class RXtraits, class Alloc2>
bool regex_search(
    BidIt first,
    Bidit last,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

template <class Elem, class Alloc, class RXtraits, class Alloc2>
bool regex_search(
    const Elem* ptr,
    match_results<const Elem*, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

template <class Elem, class RXtraits, class Alloc2>
bool regex_search(
    const Elem* ptr,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

template <class IOtraits, class IOalloc, class Alloc, class Elem, class RXtraits, class Alloc2>
bool regex_search(
    const basic_string<Elem, IOtraits, IOalloc>& str,
    match_results<typename basic_string<Elem, IOtraits, IOalloc>::const_iterator, Alloc>& match,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);

template <class IOtraits, class IOalloc, class Elem, class RXtraits, class Alloc2>
bool regex_search(
    const basic_string<Elem, IOtraits, IOalloc>& str,
    const basic_regex<Elem, RXtraits, Alloc2>& re,
    match_flag_type flags = match_default);
```

### <a name="parameters"></a>Parametri

*BidIt*\
Tipo di iteratore per le sottocorrispondenze.

*Alloc*\
Classe allocator dei risultati di corrispondenza.

*Elem*\
Tipo di elementi di cui trovare una corrispondenza.

*RXtraits*\
Classe traits per gli elementi.

*Alloc2*\
Classe allocator dell'espressione regolare.

*IOtraits*\
Classe traits della stringa.

*IOalloc*\
Classe allocator della stringa.

*Bandiere*\
Flag per le corrispondenze.

*prima*\
Inizio della sequenza per cui cercare una corrispondenza.

*Ultima*\
Fine della sequenza per cui cercare una corrispondenza.

*corrispondenza*\
Risultati della corrispondenza.

*PTR*\
Puntatore all'inizio della sequenza per cui cercare una corrispondenza.

*Re*\
Espressione regolare in base a cui trovare una corrispondenza.

*Str*\
Stringa per cui cercare una corrispondenza.

### <a name="remarks"></a>Commenti

Ogni funzione modello restituisce true solo se la ricerca dell'argomento di espressione regolare *re* nella sequenza di operandi ha esito positivo. Le funzioni che accettano un oggetto `match_results` impostano i propri membri in modo da indicare se la ricerca ha avuto esito positivo e, in caso affermativo, cosa hanno acquisito i vari gruppi di acquisizione nell'espressione regolare.

### <a name="example"></a>Esempio

```cpp
// std__regex__regex_search.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

int main()
{
    const char *first = "abcd";
    const char *last = first + strlen(first);
    std::cmatch mr;
    std::regex rx("abc");
    std::regex_constants::match_flag_type fl =
        std::regex_constants::match_default;

    std::cout << "search(f, f+1, \"abc\") == " << std::boolalpha
        << regex_search(first, first + 1, rx, fl) << std::endl;

    std::cout << "search(f, l, \"abc\") == " << std::boolalpha
        << regex_search(first, last, mr, rx) << std::endl;
    std::cout << "  matched: \"" << mr.str() << "\"" << std::endl;

    std::cout << "search(\"a\", \"abc\") == " << std::boolalpha
        << regex_search("a", rx) << std::endl;

    std::cout << "search(\"xabcd\", \"abc\") == " << std::boolalpha
        << regex_search("xabcd", mr, rx) << std::endl;
    std::cout << "  matched: \"" << mr.str() << "\"" << std::endl;

    std::cout << "search(string, \"abc\") == " << std::boolalpha
        << regex_search(std::string("a"), rx) << std::endl;

    std::string str("abcabc");
    std::match_results<std::string::const_iterator> mr2;
    std::cout << "search(string, \"abc\") == " << std::boolalpha
        << regex_search(str, mr2, rx) << std::endl;
    std::cout << "  matched: \"" << mr2.str() << "\"" << std::endl;

    return (0);
}
```

```Output
search(f, f+1, "abc") == false
search(f, l, "abc") == true
  matched: "abc"
search("a", "abc") == false
search("xabcd", "abc") == true
  matched: "abc"
search(string, "abc") == false
search(string, "abc") == true
  matched: "abc"
```

## <a name="swap"></a><a name="swap"></a> scambio

Scambia due `basic_regex` oggetti o `match_results` .

```cpp
template <class Elem, class RXtraits>
void swap(
    basic_regex<Elem, RXtraits, Alloc>& left,
    basic_regex<Elem, RXtraits>& right) noexcept;

template <class Elem, class IOtraits, class BidIt, class Alloc>
void swap(
    match_results<BidIt, Alloc>& left,
    match_results<BidIt, Alloc>& right) noexcept;
```

### <a name="parameters"></a>Parametri

*Elem*\
Tipo di elementi di cui trovare una corrispondenza.

*RXtraits*\
Classe traits per gli elementi.

### <a name="remarks"></a>Commenti

Le funzioni modello scambiano il contenuto dei rispettivi argomenti in un tempo costante e non generano eccezioni.

### <a name="example"></a>Esempio

```cpp
// std__regex__swap.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

int main()
{
    std::regex rx0("c(a*)|(b)");
    std::regex rx1;
    std::cmatch mr0;
    std::cmatch mr1;

    swap(rx0, rx1);
    std::regex_search("xcaaay", mr1, rx1);
    swap(mr0, mr1);

    std::csub_match sub = mr0[1];
    std::cout << "matched == " << std::boolalpha
        << sub.matched << std::endl;
    std::cout << "length == " << sub.length() << std::endl;
    std::cout << "string == " << sub << std::endl;

    return (0);
}
```

```Output
matched == true
length == 3
string == aaa
```

## <a name="see-also"></a>Vedere anche

[\<regex>](../standard-library/regex.md)\
[Classe regex_constants](../standard-library/regex-constants-class.md)\
[Classe regex_error](../standard-library/regex-error-class.md)\
[Classe regex_iterator](../standard-library/regex-iterator-class.md)\
[\<regex> operatori](../standard-library/regex-operators.md)\
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)\
[Classe regex_traits](../standard-library/regex-traits-class.md)\
[\<regex> typedef](../standard-library/regex-typedefs.md)
