---
title: Classe match_results
ms.date: 09/10/2018
f1_keywords:
- regex/std::match_results
helpviewer_keywords:
- match_results class
ms.assetid: b504fdca-e5dd-429d-9960-6e27c9167fa6
ms.openlocfilehash: 8ce9ed987baf63f2cc9f095e2955a8165e977193
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87212215"
---
# <a name="match_results-class"></a>Classe match_results

Contiene una sequenza delle sottocorrispondenze.

## <a name="syntax"></a>Sintassi

```cpp
template <class BidIt, class Alloc>
class match_results
```

## <a name="parameters"></a>Parametri

*BidIt*\
Tipo di iteratore per le sottocorrispondenze.

*Alloc*\
Tipo di un allocatore per gestire l'archiviazione.

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive un oggetto che controlla una sequenza non modificabile di elementi di tipo `sub_match<BidIt>` generata da una ricerca di espressione regolare. Ogni elemento punta alla sottosequenza corrispondente al gruppo Capture corrispondente a tale elemento.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[match_results](#match_results)|Costruisce l'oggetto.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[allocator_type](#allocator_type)|Tipo di un allocatore per gestire l'archiviazione.|
|[char_type](#char_type)|Tipo di un elemento.|
|[const_iterator](#const_iterator)|Tipo di iteratore const per le sottocorrispondenze.|
|[const_reference](#const_reference)|Il tipo di un riferimento const dell'elemento.|
|[difference_type](#difference_type)|Tipo di differenza iteratore.|
|[iteratore](#iterator)|Tipo di iteratore per le sottocorrispondenze.|
|[reference](#reference)|Tipo di un riferimento dell'elemento.|
|[size_type](#size_type)|Tipo di un conteggio delle sottocorrispondenze.|
|[string_type](#string_type)|Tipo di una stringa.|
|[value_type](#value_type)|Tipo di una sottocorrispondenza.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[iniziare](#begin)|Definisce l'inizio di una sequenza di sottocorrispondenze.|
|[empty](#empty)|Verifica che non siano presenti sottocorrispondenze.|
|[fine](#end)|Definisce la fine di una sequenza di sottocorrispondenze.|
|[format](#format)|Formatta le sottocorrispondenze.|
|[get_allocator](#get_allocator)|Restituisce l'allocatore archiviato.|
|[length](#length)|Restituisce la lunghezza di una sottocorrispondenza.|
|[max_size](#max_size)|Ottiene il numero massimo delle sottocorrispondenze.|
|[posizione](#position)|Ottiene l'offset iniziale di un sottogruppo.|
|[prefix](#prefix)|Ottiene la sequenza prima della prima sottocorrispondenza.|
|[size](#size)|Conteggia il numero di sottocorrispondenze.|
|[str](#str)|Restituisce una sottocorrispondenza.|
|[suffisso](#suffix)|Ottiene la sequenza dopo l'ultima sottocorrispondenza.|
|[scambio](#swap)|Scambia due oggetti match_results.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore =](#op_eq)|Copia un oggetto match_results.|
|[operatore\[\]](#op_at)|Accede a un oggetto secondario.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<regex>

**Spazio dei nomi:** std

## <a name="example"></a>Esempio

```cpp
// std__regex__match_results.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

int main()
{
    std::regex rx("c(a*)|(b)");
    std::cmatch mr;

    std::regex_search("xcaaay", mr, rx);

    std::cout << "prefix: matched == " << std::boolalpha
        << mr.prefix().matched
        << ", value == " << mr.prefix() << std::endl;
    std::cout << "whole match: " << mr.length() << " chars, value == "
        << mr.str() << std::endl;
    std::cout << "suffix: matched == " << std::boolalpha
        << mr.suffix().matched
        << ", value == " << mr.suffix() << std::endl;
    std::cout << std::endl;

    std::string fmt("\"c(a*)|(b)\" matched \"$&\"\n"
        "\"(a*)\" matched \"$1\"\n"
        "\"(b)\" matched \"$2\"\n");
    std::cout << mr.format(fmt) << std::endl;
    std::cout << std::endl;

    // index through submatches
    for (size_t n = 0; n < mr.size(); ++n)
    {
        std::cout << "submatch[" << n << "]: matched == " << std::boolalpha
            << mr[n].matched <<
            " at position " << mr.position(n) << std::endl;
        std::cout << "  " << mr.length(n)
            << " chars, value == " << mr[n] << std::endl;
    }
    std::cout << std::endl;

    // iterate through submatches
    for (std::cmatch::iterator it = mr.begin(); it != mr.end(); ++it)
    {
        std::cout << "next submatch: matched == " << std::boolalpha
            << it->matched << std::endl;
        std::cout << "  " << it->length()
            << " chars, value == " << *it << std::endl;
    }
    std::cout << std::endl;

    // other members
    std::cout << "empty == " << std::boolalpha << mr.empty() << std::endl;

    std::cmatch::allocator_type al = mr.get_allocator();
    std::cmatch::string_type str = std::string("x");
    std::cmatch::size_type maxsiz = mr.max_size();
    std::cmatch::char_type ch = 'x';
    std::cmatch::difference_type dif = mr.begin() - mr.end();
    std::cmatch::const_iterator cit = mr.begin();
    std::cmatch::value_type val = *cit;
    std::cmatch::const_reference cref = val;
    std::cmatch::reference ref = val;

    maxsiz = maxsiz;  // to quiet "unused" warnings
    if (ref == cref)
        ch = ch;
    dif = dif;

    return (0);
}
```

```Output
prefix: matched == true, value == x
whole match: 4 chars, value == caaa
suffix: matched == true, value == y

"c(a*)|(b)" matched "caaa"
"(a*)" matched "aaa"
"(b)" matched ""

submatch[0]: matched == true at position 1
  4 chars, value == caaa
submatch[1]: matched == true at position 2
  3 chars, value == aaa
submatch[2]: matched == false at position 6
  0 chars, value ==

next submatch: matched == true
  4 chars, value == caaa
next submatch: matched == true
  3 chars, value == aaa
next submatch: matched == false
  0 chars, value ==

empty == false
```

## <a name="match_resultsallocator_type"></a><a name="allocator_type"></a>match_results:: allocator_type

Tipo di un allocatore per gestire l'archiviazione.

```cpp
typedef Alloc allocator_type;
```

### <a name="remarks"></a>Osservazioni

Typedef è un sinonimo dell'argomento di modello *Alloc*.

## <a name="match_resultsbegin"></a><a name="begin"></a>match_results:: Begin

Definisce l'inizio di una sequenza di sottocorrispondenze.

```cpp
const_iterator begin() const;
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore di accesso casuale che punta al primo elemento della sequenza (o appena oltre la fine di una sequenza vuota).

## <a name="match_resultschar_type"></a><a name="char_type"></a>match_results:: char_type

Tipo di un elemento.

```cpp
typedef typename iterator_traits<BidIt>::value_type char_type;
```

### <a name="remarks"></a>Osservazioni

typedef è un sinonimo del tipo `iterator_traits<BidIt>::value_type`, che corrisponde al tipo di elemento della sequenza di caratteri cercata.

## <a name="match_resultsconst_iterator"></a><a name="const_iterator"></a>match_results:: const_iterator

Tipo di iteratore const per le sottocorrispondenze.

```cpp
typedef T0 const_iterator;
```

### <a name="remarks"></a>Osservazioni

typedef descrive un oggetto che può essere usato come iteratore ad accesso casuale costante per la sequenza controllata.

## <a name="match_resultsconst_reference"></a><a name="const_reference"></a>match_results:: const_reference

Il tipo di un riferimento const dell'elemento.

```cpp
typedef const typename Alloc::const_reference const_reference;
```

### <a name="remarks"></a>Osservazioni

Typedef descrive un oggetto che può essere usato come riferimento costante a un elemento della sequenza controllata.

## <a name="match_resultsdifference_type"></a><a name="difference_type"></a>match_results::d ifference_type

Tipo di differenza iteratore.

```cpp
typedef typename iterator_traits<BidIt>::difference_type difference_type;
```

### <a name="remarks"></a>Osservazioni

typedef è un sinonimo del tipo `iterator_traits<BidIt>::difference_type`; descrive un oggetto che può rappresentare la differenza tra due iteratori che puntano a elementi della sequenza controllata.

## <a name="match_resultsempty"></a><a name="empty"></a>match_results:: Empty

Verifica che non siano presenti sottocorrispondenze.

```cpp
bool empty() const;
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce true solo se la ricerca di espressioni regolari non riesce.

## <a name="match_resultsend"></a><a name="end"></a>match_results:: end

Definisce la fine di una sequenza di sottocorrispondenze.

```cpp
const_iterator end() const;
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un iteratore che punta poco oltre la fine della sequenza.

## <a name="match_resultsformat"></a><a name="format"></a>match_results:: Format

Formatta le sottocorrispondenze.

```cpp
template <class OutIt>
OutIt format(OutIt out,
    const string_type& fmt, match_flag_type flags = format_default) const;

string_type format(const string_type& fmt, match_flag_type flags = format_default) const;
```

### <a name="parameters"></a>Parametri

*OutIt*\
Tipo di iteratore di output.

*out*\
Flusso di output in cui scrivere.

*FMT*\
Stringa di formato.

*Bandiere*\
Flag di formato.

### <a name="remarks"></a>Osservazioni

Ogni funzione membro genera il testo formattato sotto il controllo del formato *FMT*. La prima funzione membro scrive il testo formattato nella sequenza *definita dal relativo argomento e* *restituisce un*risultato. La seconda funzione membro restituisce un oggetto stringa contenente una copia del testo formattato.

Per generare testo formattato, il testo letterale della stringa di formato viene in genere copiato nella sequenza di destinazione. Ogni sequenza di escape della stringa di formato viene sostituita con il testo da essa rappresentato. I dettagli delle operazioni di copia e sostituzione vengono controllati dai flag di formato passati alla funzione.

## <a name="match_resultsget_allocator"></a><a name="get_allocator"></a>match_results:: get_allocator

Restituisce l'allocatore archiviato.

```cpp
allocator_type get_allocator() const;
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una copia dell'oggetto allocatore usato da **`*this`** per allocare i relativi `sub_match` oggetti.

## <a name="match_resultsiterator"></a><a name="iterator"></a>match_results:: iterator

Tipo di iteratore per le sottocorrispondenze.

```cpp
typedef const_iterator iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive un oggetto che può essere usato come iteratore ad accesso casuale per la sequenza controllata.

## <a name="match_resultslength"></a><a name="length"></a>match_results:: length

Restituisce la lunghezza di una sottocorrispondenza.

```cpp
difference_type length(size_type sub = 0) const;
```

### <a name="parameters"></a>Parametri

*Sub*\
Indice della sottocorrispondenza.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce`(*this)[sub].length()`.

## <a name="match_resultsmatch_results"></a><a name="match_results"></a>match_results:: match_results

Costruisce l'oggetto.

```cpp
explicit match_results(const Alloc& alloc = Alloc());

match_results(const match_results& right);
```

### <a name="parameters"></a>Parametri

*Alloc*\
Oggetto allocatore da archiviare.

*Ok*\
Oggetto match_results da copiare.

### <a name="remarks"></a>Osservazioni

Il primo costruttore crea un oggetto `match_results` che non contiene sottocorrispondenze. Il secondo costruttore crea un `match_results` oggetto che è una copia di *right*.

## <a name="match_resultsmax_size"></a><a name="max_size"></a>match_results:: max_size

Ottiene il numero massimo delle sottocorrispondenze.

```cpp
size_type max_size() const;
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce la lunghezza della sequenza più lunga che l'oggetto può controllare.

## <a name="match_resultsoperator"></a><a name="op_eq"></a>match_results:: operator =

Copia un oggetto match_results.

```cpp
match_results& operator=(const match_results& right);
```

### <a name="parameters"></a>Parametri

*Ok*\
Oggetto match_results da copiare.

### <a name="remarks"></a>Osservazioni

L'operatore membro sostituisce la sequenza controllata da **`*this`** con una copia della sequenza controllata da *right*.

## <a name="match_resultsoperator"></a><a name="op_at"></a>match_results:: operator []

Accede a un oggetto secondario.

```cpp
const_reference operator[](size_type n) const;
```

### <a name="parameters"></a>Parametri

*n*\
Indice della sottocorrispondenza.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento all'elemento *n* della sequenza controllata oppure un riferimento a un `sub_match` oggetto vuoto se `size() <= n` o se il gruppo Capture *n* non fa parte della corrispondenza.

## <a name="match_resultsposition"></a><a name="position"></a>match_results::p osiziona

Ottiene l'offset iniziale di un sottogruppo.

```cpp
difference_type position(size_type sub = 0) const;
```

### <a name="parameters"></a>Parametri

*Sub*\
Indice della sottocorrispondenza.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce `std::distance(prefix().first, (*this)[sub].first)`, ovvero la distanza tra il primo carattere della sequenza di destinazione e il primo carattere nella sottocorrispondenza a cui punta l'elemento `n` della sequenza controllata.

## <a name="match_resultsprefix"></a><a name="prefix"></a>match_results::p refisso

Ottiene la sequenza prima della prima sottocorrispondenza.

```cpp
const_reference prefix() const;
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento a un oggetto di tipo `sub_match<BidIt>` che punta alla sequenza di caratteri che inizia a partire dalla sequenza di destinazione e termina in corrispondenza di `(*this)[0].first`, ovvero punta al testo che precede la sottosequenza corrispondente.

## <a name="match_resultsreference"></a><a name="reference"></a>match_results:: Reference

Tipo di un riferimento dell'elemento.

```cpp
typedef const_reference reference;
```

### <a name="remarks"></a>Osservazioni

type è un sinonimo del tipo `const_reference`.

## <a name="match_resultssize"></a><a name="size"></a>match_results:: size

Conteggia il numero di sottocorrispondenze.

```cpp
size_type size() const;
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce una corrispondenza più rispetto al numero di gruppi Capture nell'espressione regolare usata per la ricerca oppure zero se non è stata eseguita alcuna ricerca.

## <a name="match_resultssize_type"></a><a name="size_type"></a>match_results:: size_type

Tipo di un conteggio delle sottocorrispondenze.

```cpp
typedef typename Alloc::size_type size_type;
```

### <a name="remarks"></a>Osservazioni

type è un sinonimo del tipo `Alloc::size_type`.

## <a name="match_resultsstr"></a><a name="str"></a>match_results:: Str

Restituisce una sottocorrispondenza.

```cpp
string_type str(size_type sub = 0) const;
```

### <a name="parameters"></a>Parametri

*Sub*\
Indice della sottocorrispondenza.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce`string_type((*this)[sub])`.

## <a name="match_resultsstring_type"></a><a name="string_type"></a>match_results:: string_type

Tipo di una stringa.

```cpp
typedef basic_string<char_type> string_type;
```

### <a name="remarks"></a>Osservazioni

type è un sinonimo del tipo `basic_string<char_type>`.

## <a name="match_resultssuffix"></a><a name="suffix"></a>match_results:: suffisso

Ottiene la sequenza dopo l'ultima sottocorrispondenza.

```cpp
const_reference suffix() const;
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un riferimento a un oggetto di tipo `sub_match<BidIt>` che punta alla sequenza di caratteri che inizia a partire da `(*this)[size() - 1].second` e termina alla fine della sequenza di destinazione, ovvero punta al testo che segue la sottosequenza corrispondente.

## <a name="match_resultsswap"></a><a name="swap"></a>match_results:: swap

Scambia due oggetti match_results.

```cpp
void swap(const match_results& right) throw();
```

### <a name="parameters"></a>Parametri

*Ok*\
Oggetto match_results con cui effettuare lo scambio.

### <a name="remarks"></a>Osservazioni

La funzione membro scambia il contenuto di **`*this`** e a *destra* in un tempo costante e non genera eccezioni.

## <a name="match_resultsvalue_type"></a><a name="value_type"></a>match_results:: value_type

Tipo di una sottocorrispondenza.

```cpp
typedef sub_match<BidIt> value_type;
```

### <a name="remarks"></a>Osservazioni

typedef è un sinonimo del tipo `sub_match<BidIt>`.

## <a name="see-also"></a>Vedere anche

[\<regex>](../standard-library/regex.md)
