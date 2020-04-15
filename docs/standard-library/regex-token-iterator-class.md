---
title: Classe regex_token_iterator
ms.date: 09/10/2018
f1_keywords:
- regex/std::regex_token_iterator
- regex/std::regex_token_iterator::regex_type
- regex/std::regex_token_iterator::value_type
- regex/std::regex_token_iterator::iterator_category
- regex/std::regex_token_iterator::difference_type
- regex/std::regex_token_iterator::pointer
- regex/std::regex_token_iterator::reference
- regex/std::regex_token_iterator::operator==
- regex/std::regex_token_iterator::operator!=
- regex/std::regex_token_iterator::operator*
- regex/std::regex_token_iterator::operator->
- regex/std::regex_token_iterator::operator++
helpviewer_keywords:
- std::regex_token_iterator [C++]
- std::regex_token_iterator [C++], regex_type
- std::regex_token_iterator [C++], value_type
- std::regex_token_iterator [C++], iterator_category
- std::regex_token_iterator [C++], difference_type
- std::regex_token_iterator [C++], pointer
- std::regex_token_iterator [C++], reference
ms.assetid: a213ba48-8e4e-4b6b-871a-2637acf05f15
ms.openlocfilehash: 5ada2ad69cbcac15e09968045e54095dfb2623d1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366407"
---
# <a name="regex_token_iterator-class"></a>Classe regex_token_iterator

Classe iterator per le sottocorrispondenze.

## <a name="syntax"></a>Sintassi

```cpp
template<class BidIt,
   class Elem = typename std::iterator_traits<BidIt>::value_type,
   class RxTraits = regex_traits<Elem> >
class regex_token_iterator
```

## <a name="parameters"></a>Parametri

*BidIt*\
Tipo di iteratore per le sottocorrispondenze.

*Elem*\
Tipo di elementi di cui trovare una corrispondenza.

*RXtratti*\
Classe traits per gli elementi.

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive un oggetto iteratore in avanti costante. Concettualmente, contiene un oggetto `regex_iterator` usato per eseguire la ricerca di corrispondenze di espressione regolare in una sequenza di caratteri. Estrae gli oggetti di tipo `sub_match<BidIt>` che rappresentano le sottocorrispondenze identificate dai valori di indice nel vettore archiviato `subs` per ogni corrispondenza di espressione regolare.

Un valore di indice di -1 indica la sequenza di caratteri che comincia subito dopo la fine della precedente corrispondenza di espressione regolare o all'inizio della sequenza di caratteri se non esisteva alcuna corrispondenza di espressione regolare precedente e che si estende, senza includerlo, al primo carattere della corrispondenza di espressione regolare corrente o alla fine della sequenza di caratteri se non esiste alcuna corrispondenza corrente. Qualsiasi altro valore di indice `idx` definisce il contenuto del gruppo Capture contenuto in `it.match[idx]`.

### <a name="members"></a>Membri

|Membro|Default Value|
|-|-|
|`private regex_iterator<BidIt, Elem, RXtraits> it`||
|`private vector<int> subs`||
|`private int pos`||

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[regex_token_iterator](#regex_token_iterator)|Costruisce l'iteratore.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[difference_type](#difference_type)|Tipo di differenza iteratore.|
|[iterator_category](#iterator_category)|Tipo della categoria di iteratore.|
|[indicatore di misura](#pointer)|Tipo di un puntatore a una corrispondenza.|
|[Riferimento](#reference)|Tipo di un riferimento a una sottocorrispondenza.|
|[regex_type](#regex_type)|Tipo dell'espressione regolare per cui cercare una corrispondenza.|
|[Value_type](#value_type)|Tipo di una sottocorrispondenza.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore!](#op_neq)|Confronta gli iteratori per verificarne la disuguaglianza.|
|[operatore](#op_star)|Accede alla sottocorrispondenza designata.|
|[operatore .](#op_add_add)|Incrementa l'iteratore.|
|[operatore di comando](#op_eq_eq)|Confronta gli iteratori per verificarne l'uguaglianza.|
|[>'operatore](#op_arrow)|Accede alla sottocorrispondenza designata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<regex>

**Spazio dei nomi:** std

## <a name="example"></a>Esempio

```cpp
#include <regex>
#include <iostream>

typedef std::regex_token_iterator<const char *> Myiter;
int main()
    {
    const char *pat = "aaxaayaaz";
    Myiter::regex_type rx("(a)a");
    Myiter next(pat, pat + strlen(pat), rx);
    Myiter end;

// show whole match
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show prefix before match
    next = Myiter(pat, pat + strlen(pat), rx, -1);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show (a) submatch only
    next = Myiter(pat, pat + strlen(pat), rx, 1);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show prefixes and submatches
    std::vector<int> vec;
    vec.push_back(-1);
    vec.push_back(1);
    next = Myiter(pat, pat + strlen(pat), rx, vec);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// show prefixes and whole matches
    int arr[] = {-1, 0};
    next = Myiter(pat, pat + strlen(pat), rx, arr);
    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;
    std::cout << std::endl;

// other members
    Myiter it1(pat, pat + strlen(pat), rx);
    Myiter it2(it1);
    next = it1;

    Myiter::iterator_category cat = std::forward_iterator_tag();
    Myiter::difference_type dif = -3;
    Myiter::value_type mr = *it1;
    Myiter::reference ref = mr;
    Myiter::pointer ptr = &ref;

    dif = dif; // to quiet "unused" warnings
    ptr = ptr;

    return (0);
    }
```

```Output
match == aa
match == aa
match == aa

match ==
match == x
match == y
match == z

match == a
match == a
match == a

match ==
match == a
match == x
match == a
match == y
match == a
match == z

match ==
match == aa
match == x
match == aa
match == y
match == aa
match == z
```

## <a name="regex_token_iteratordifference_type"></a><a name="difference_type"></a>regex_token_iterator::difference_type

Tipo di differenza iteratore.

```cpp
typedef std::ptrdiff_t difference_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è sinonimo di `std::ptrdiff_t`.

## <a name="regex_token_iteratoriterator_category"></a><a name="iterator_category"></a>regex_token_iterator::iterator_category

Tipo della categoria di iteratore.

```cpp
typedef std::forward_iterator_tag iterator_category;
```

### <a name="remarks"></a>Osservazioni

Il tipo è sinonimo di `std::forward_iterator_tag`.

## <a name="regex_token_iteratoroperator"></a><a name="op_neq"></a>regex_token_iterator::operator!

Confronta gli iteratori per verificarne la disuguaglianza.

```cpp
bool operator!=(const regex_token_iterator& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Iteratore per il confronto.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce`!(*this == right)`.

## <a name="regex_token_iteratoroperator"></a><a name="op_star"></a>regex_token_iterator::operatore

Accede alla sottocorrispondenza designata.

```cpp
const sub_match<BidIt>& operator*();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un oggetto `sub_match<BidIt>` che rappresenta il gruppo Capture identificato dal valore di indice `subs[pos]`.

## <a name="regex_token_iteratoroperator"></a><a name="op_add_add"></a>regex_token_iterator::operatore

Incrementa l'iteratore.

```cpp
regex_token_iterator& operator++();

regex_token_iterator& operator++(int);
```

### <a name="remarks"></a>Osservazioni

Se l'iteratore archiviato `it` è un iteratore di fine di sequenza, il primo operatore imposta il valore archiviato `pos` al valore di `subs.size()` (creando in tal modo un iteratore di fine di sequenza). In caso contrario l'operatore incrementa il valore archiviato `pos`; se il risultato è uguale al valore `subs.size()`, imposta il valore archiviato `pos` su zero e incrementa l'iteratore archiviato `it`. Se nonostante l'incremento l'iteratore archiviato resta diverso da un iteratore di fine di sequenza, l'operatore non esegue altre operazioni. In caso contrario, se la fine della corrispondenza precedente fosse alla fine della sequenza di caratteri l'operatore, imposta il valore archiviato di `pos` su `subs.size()`. Diversamente, l'operatore incrementa ripetutamente il valore archiviato `pos` fino a `pos == subs.size()` o `subs[pos] == -1`; in tal modo la successiva dereferenziazione dell'iteratore restituirà la parte finale della sequenza di caratteri se uno dei valori di indice è -1. In tutti i casi l'operatore restituisce l'oggetto.

Il secondo operatore esegue una copia dell'oggetto, incrementa l'oggetto, quindi restituisce la copia.

## <a name="regex_token_iteratoroperator"></a><a name="op_eq_eq"></a>regex_token_iterator::operator

Confronta gli iteratori per verificarne l'uguaglianza.

```cpp
bool operator==(const regex_token_iterator& right);
```

### <a name="parameters"></a>Parametri

*va bene*\
Iteratore per il confronto.

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce`it == right.it && subs == right.subs && pos == right.pos`.

## <a name="regex_token_iteratoroperator-gt"></a><a name="op_arrow"></a>regex_token_iterator::operatore-&gt;

Accede alla sottocorrispondenza designata.

```cpp
const sub_match<BidIt> * operator->();
```

### <a name="remarks"></a>Osservazioni

La funzione membro restituisce un puntatore a un oggetto `sub_match<BidIt>` che rappresenta il gruppo Capture identificato dal valore di indice `subs[pos]`.

## <a name="regex_token_iteratorpointer"></a><a name="pointer"></a>regex_token_iterator::p o'interina

Tipo di un puntatore a una corrispondenza.

```cpp
typedef sub_match<BidIt> *pointer;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di `sub_match<BidIt>*`, dove `BidIt` è il parametro di modello.

## <a name="regex_token_iteratorreference"></a><a name="reference"></a>regex_token_iterator::riferimento

Tipo di un riferimento a una sottocorrispondenza.

```cpp
typedef sub_match<BidIt>& reference;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di `sub_match<BidIt>&`, dove `BidIt` è il parametro di modello.

## <a name="regex_token_iteratorregex_token_iterator"></a><a name="regex_token_iterator"></a>regex_token_iterator::regex_token_iterator

Costruisce l'iteratore.

```cpp
regex_token_iterator();

regex_token_iterator(BidIt first, BidIt last,
    const regex_type& re, int submatch = 0,
    regex_constants::match_flag_type f = regex_constants::match_default);

regex_token_iterator(BidIt first, BidIt last,
    const regex_type& re, const vector<int> submatches,
    regex_constants::match_flag_type f = regex_constants::match_default);

template <std::size_t N>
regex_token_iterator(BidIt first, BidIt last,
    const regex_type& re, const int (&submatches)[N],
    regex_constants::match_flag_type f = regex_constants::match_default);
```

### <a name="parameters"></a>Parametri

*Prima*\
Inizio della sequenza per cui cercare una corrispondenza.

*Ultima*\
Fine della sequenza per cui cercare una corrispondenza.

*re re*\
Espressione regolare per le corrispondenze.

*F*\
Flag per le corrispondenze.

### <a name="remarks"></a>Osservazioni

Il primo costruttore crea un iteratore di fine sequenza.

Il secondo costruttore crea un oggetto il cui iteratore archiviato `it` viene inizializzato in `regex_iterator<BidIt, Elem, RXtraits>(first, last, re, f)`, il cui vettore archiviato `subs` contiene esattamente un Integer, con valore `submatch`e il cui valore archiviato `pos` è zero. Nota: l'oggetto risultante estrae la sottocorrispondenza identificata dal valore di indice `submatch` per ogni corrispondenza dell'espressione regolare con esito positivo.

Il terzo costruttore crea un oggetto il cui iteratore archiviato `it` viene inizializzato in `regex_iterator<BidIt, Elem, RXtraits>(first, last, re, f)`, il cui vettore archiviato `subs` contiene una copia dell'argomento del costruttore `submatches`e il cui valore archiviato `pos` è zero.

Il quarto costruttore crea un oggetto il cui iteratore archiviato `it` viene inizializzato in `regex_iterator<BidIt, Elem, RXtraits>(first, last, re, f)`, il cui vettore archiviato `subs` contiene i valori `N` a cui fa riferimento l'argomento del costruttore `submatches`e il cui valore archiviato `pos` è zero.

## <a name="regex_token_iteratorregex_type"></a><a name="regex_type"></a>regex_token_iterator::regex_type

Tipo dell'espressione regolare per cui cercare una corrispondenza.

```cpp
typedef basic_regex<Elem, RXtraits> regex_type;
```

### <a name="remarks"></a>Osservazioni

typedef è sinonimo di `basic_regex<Elem, RXtraits>`.

## <a name="regex_token_iteratorvalue_type"></a><a name="value_type"></a>regex_token_iterator::value_type

Tipo di una sottocorrispondenza.

```cpp
typedef sub_match<BidIt> value_type;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di `sub_match<BidIt>`, dove `BidIt` è il parametro di modello.

## <a name="see-also"></a>Vedere anche

[\<>regex](../standard-library/regex.md)\
[Classe regex_constants](../standard-library/regex-constants-class.md)\
[Classe regex_error](../standard-library/regex-error-class.md)\
[\<funzioni di> regex](../standard-library/regex-functions.md)\
[Classe regex_iterator](../standard-library/regex-iterator-class.md)\
[\<operatori di> regex](../standard-library/regex-operators.md)\
[Classe regex_traits](../standard-library/regex-traits-class.md)\
[\<regex> typedef](../standard-library/regex-typedefs.md)
