---
title: Funzioni &lt;regex&gt; | Microsoft Docs
ms.custom: ''
ms.date: 09/10/2018
ms.topic: reference
f1_keywords:
- regex/std::regex_match
- regex/std::regex_replace
- regex/std::regex_search
- regex/std::swap
dev_langs:
- C++
ms.assetid: 91a8314b-6f7c-4e33-b7d6-d8583dd75585
helpviewer_keywords:
- std::regex_match [C++]
- std::regex_replace [C++]
- std::regex_search [C++]
- std::swap [C++]
- std::swap [C++]
ms.openlocfilehash: 3b78ce35b20c3049c168ab23c512ae7ae23b9886
ms.sourcegitcommit: fb9448eb96c6351a77df04af16ec5c0fb9457d9e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2018
ms.locfileid: "44691550"
---
# <a name="ltregexgt-functions"></a>Funzioni &lt;regex&gt;

|||
|-|-|
|[regex_match](#regex_match)|Verifica se un'espressione regolare corrisponde all'intera stringa di destinazione.|
|[regex_replace](#regex_replace)|Sostituisce espressioni regolari corrispondenti.|
|[regex_search](#regex_search)|Cerca una corrispondenza dell'espressione regolare.|
|[swap](#swap)|Scambia due `basic_regex` o `match_results` oggetti.|

## <a name="regex_match"></a>  regex_match

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

*BidIt*<br/> Tipo di iteratore per le sottocorrispondenze. Per i casi comuni questa è una delle `string::const_iterator`, `wstring::const_iterator`, `const char*` o `const wchar_t*`.

*Alloc*<br/>
Classe allocator dei risultati di corrispondenza.

*Elem*<br/>
Tipo di elementi di cui trovare una corrispondenza. Per i casi comuni si `string`, `wstring`, `char*` o `wchar_t*`.

*RXtraits*<br/>
Classe traits per gli elementi.

*Alloc2*<br/>
Classe allocator dell'espressione regolare.

*IOtraits*<br/>
Classe traits della stringa.

*IOalloc*<br/>
Classe allocator della stringa.

*flags*<br/>
Flag per le corrispondenze.

*first*<br/>
Inizio della sequenza per cui cercare una corrispondenza.

*last*<br/>
Fine della sequenza per cui cercare una corrispondenza.

*match*<br/>
Risultati della corrispondenza. Corrisponde al tipo Elem: [smatch](../standard-library/regex-typedefs.md#smatch) per `string`, [wsmatch](../standard-library/regex-typedefs.md#wsmatch) per `wstring`, [cmatch](../standard-library/regex-typedefs.md#cmatch) per `char*` o [wcmatch](../standard-library/regex-typedefs.md#wcmatch) per `wchar_t*`.

*ptr*<br/>
Puntatore all'inizio della sequenza per cui cercare una corrispondenza. Se *ptr* viene `char*`, quindi utilizzare `cmatch` e `regex`. Se *ptr* viene `wchar_t*` utilizzarla `wcmatch` e `wregex`.

*Re*<br/>
L'espressione regolare per cui cercare una corrispondenza. Tipo di `regex` per `string` e `char*`, o `wregex` per `wstring` e `wchar_t*`.

*str*<br/>
Stringa per cui cercare una corrispondenza. Corrisponde al tipo della *Elem*.

### <a name="remarks"></a>Note

Ogni funzione modello restituisce true solo se l'intera sequenza di operandi *str* corrisponde esattamente all'argomento di espressione regolare *Ri*. Uso [regex_search](../standard-library/regex-functions.md#regex_search) corrispondere una sottostringa all'interno di una sequenza di destinazione e `regex_iterator` per trovare più corrispondenze. Le funzioni che accettano un oggetto `match_results` impostano i propri membri in modo da indicare se la corrispondenza ha avuto esito positivo e, in caso affermativo, cosa hanno acquisito i vari gruppi di acquisizione nell'espressione regolare.

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

## <a name="regex_replace"></a>  regex_replace

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

*OutIt*<br/>
Tipo di iteratore per le sostituzioni.

*BidIt*<br/>
Tipo di iteratore per le sottocorrispondenze.

*RXtraits*<br/>
Classe traits per gli elementi.

*Alloc*<br/>
Classe allocator dell'espressione regolare.

*Elem*<br/>
Tipo di elementi di cui trovare una corrispondenza.

*flags*<br/>
Flag per le corrispondenze.

*first*<br/>
Inizio della sequenza per cui cercare una corrispondenza.

*FMT*<br/>
Formato delle sostituzioni.

*last*<br/>
Fine della sequenza per cui cercare una corrispondenza.

*out*<br/>
Iteratore di output.

*Re*<br/>
L'espressione regolare per cui cercare una corrispondenza.

*str*<br/>
Stringa per cui cercare una corrispondenza.

### <a name="remarks"></a>Note

La prima funzione costruisce una [classe regex_iterator](../standard-library/regex-iterator-class.md) oggetto `iter(first, last, re, flags)` e lo usa per suddividere l'intervallo di input `[first, last)` in una serie di sottosequenze `T0 M0 T1 M1...TN-1 MN-1 TN`, dove `Mn` è stata rilevata la corrispondenza ennesima dal iteratore. Se non viene trovata alcuna corrispondenza, `T0` è l'intero intervallo di input e `N` è zero. Se `(flags & format_first_only) != 0` viene usata solo la prima corrispondenza, `T1` è il testo di input che segue la corrispondenza e `N` è 1. Per ognuno `i` nell'intervallo `[0, N)`, se `(flags & format_no_copy) == 0` il testo verrà copiato nell'intervallo `Ti` all'iteratore *out*. Viene quindi chiamato `m.format(out, fmt, flags)`, dove `m` è l'oggetto `match_results` restituito dall'oggetto iteratore `iter` per la sottosequenza `Mi`. Infine, se `(flags & format_no_copy) == 0` il testo verrà copiato nell'intervallo `TN` all'iteratore *out*. La funzione restituisce *out*.

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

## <a name="regex_search"></a>  regex_search

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

*BidIt*<br/>
Tipo di iteratore per le sottocorrispondenze.

*Alloc*<br/>
Classe allocator dei risultati di corrispondenza.

*Elem*<br/>
Tipo di elementi di cui trovare una corrispondenza.

*RXtraits*<br/>
Classe traits per gli elementi.

*Alloc2*<br/>
Classe allocator dell'espressione regolare.

*IOtraits*<br/>
Classe traits della stringa.

*IOalloc*<br/>
Classe allocator della stringa.

*flags*<br/>
Flag per le corrispondenze.

*first*<br/>
Inizio della sequenza per cui cercare una corrispondenza.

*last*<br/>
Fine della sequenza per cui cercare una corrispondenza.

*match*<br/>
Risultati della corrispondenza.

*ptr*<br/>
Puntatore all'inizio della sequenza per cui cercare una corrispondenza.

*Re*<br/>
L'espressione regolare per cui cercare una corrispondenza.

*str*<br/>
Stringa per cui cercare una corrispondenza.

### <a name="remarks"></a>Note

Ogni funzione modello restituisce true solo se la ricerca per il relativo argomento di espressione regolare *re* relativo operando sequenza ha esito positivo. Le funzioni che accettano un oggetto `match_results` impostano i propri membri in modo da indicare se la ricerca ha avuto esito positivo e, in caso affermativo, cosa hanno acquisito i vari gruppi di acquisizione nell'espressione regolare.

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

## <a name="swap"></a>  swap

Scambia due `basic_regex` o `match_results` oggetti.

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

*Elem*<br/>
Tipo di elementi di cui trovare una corrispondenza.

*RXtraits*<br/>
Classe traits per gli elementi.

### <a name="remarks"></a>Note

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

[\<regex>](../standard-library/regex.md)<br/>
[Classe regex_constants](../standard-library/regex-constants-class.md)<br/>
[Classe regex_error](../standard-library/regex-error-class.md)<br/>
[Classe regex_iterator](../standard-library/regex-iterator-class.md)<br/>
[Operatori \<regex>](../standard-library/regex-operators.md)<br/>
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)<br/>
[Classe regex_traits](../standard-library/regex-traits-class.md)<br/>
[Typedef \<regex>](../standard-library/regex-typedefs.md)<br/>
