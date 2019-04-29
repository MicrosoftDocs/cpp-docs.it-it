---
title: Classe regex_iterator
ms.date: 09/10/2018
f1_keywords:
- regex/std::regex_iterator
- regex/std::regex_iterator::operator==
- regex/std::regex_iterator::operator!=
- regex/std::regex_iterator::operator*
- regex/std::regex_iterator::operator->
- regex/std::regex_iterator::operator++
helpviewer_keywords:
- std::regex_iterator
- std::regex_iterator::operator==
- std::regex_iterator::operator!=
- std::regex_iterator::operator*
- std::regex_iterator::operator->
- std::regex_iterator::operator++
ms.assetid: 0cfd8fd0-5a95-4f3c-bf8e-6ef028c423d3
ms.openlocfilehash: 937c217cdef6895aaa3adb1499f1fde8f67fd513
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62369492"
---
# <a name="regexiterator-class"></a>Classe regex_iterator

Classe iterator per le corrispondenze.

## <a name="syntax"></a>Sintassi

```cpp
template<class BidIt,
   class Elem = typename std::iterator_traits<BidIt>::value_type,
   class RxTraits = regex_traits<Elem> >
class regex_iterator
```

## <a name="parameters"></a>Parametri

*BidIt*<br/>
Tipo di iteratore per le sottocorrispondenze.

*Elem*<br/>
Tipo di elementi di cui trovare una corrispondenza.

*RXtraits*<br/>
Classe traits per gli elementi.

## <a name="remarks"></a>Note

La classe modello descrive un oggetto iteratore costante in avanti. Estrae gli oggetti di tipo `match_results<BidIt>` applicando ripetutamente il relativo oggetto di espressione regolare `*pregex` alla sequenza di caratteri definita dall'intervallo dell'iteratore `[begin, end)`.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[regex_iterator](#regex_iterator)|Costruisce l'iteratore.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[difference_type](#difference_type)|Tipo di differenza iteratore.|
|[iterator_category](#iterator_category)|Tipo della categoria di iteratore.|
|[pointer](#pointer)|Tipo di un puntatore a una corrispondenza.|
|[reference](#reference)|Tipo di un riferimento a una corrispondenza.|
|[regex_type](#regex_type)|Tipo dell'espressione regolare per cui cercare una corrispondenza.|
|[value_type](#value_type)|Tipo di una corrispondenza.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator!=](#op_neq)|Confronta gli iteratori per verificarne la disuguaglianza.|
|[operator*](#op_star)|Accede alla corrispondenza designata.|
|[operator++](#op_add_add)|Incrementa l'iteratore.|
|[operator=](#op_eq)|Confronta gli iteratori per verificarne l'uguaglianza.|
|[operator->](#op_arrow)|Accede alla corrispondenza designata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<regex>

**Spazio dei nomi:** std

## <a name="examples"></a>Esempi

Per esempi di espressioni regolari, vedere gli argomenti seguenti:

- [regex_match](../standard-library/regex-functions.md#regex_match)

- [regex_replace](../standard-library/regex-functions.md#regex_replace)

- [regex_search](../standard-library/regex-functions.md#regex_search)

- [swap](../standard-library/regex-functions.md#swap)

```cpp
// std__regex__regex_iterator.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

typedef std::regex_iterator<const char *> Myiter;
int main()
    {
    const char *pat = "axayaz";
    Myiter::regex_type rx("a");
    Myiter next(pat, pat + strlen(pat), rx);
    Myiter end;

    for (; next != end; ++next)
        std::cout << "match == " << next->str() << std::endl;

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
match == a
match == a
match == a
```

## <a name="difference_type"></a>  regex_iterator::difference_type

Tipo di differenza iteratore.

```cpp
typedef std::ptrdiff_t difference_type;
```

### <a name="remarks"></a>Note

Il tipo è sinonimo di `std::ptrdiff_t`.

## <a name="iterator_category"></a>  regex_iterator::iterator_category

Tipo della categoria di iteratore.

```cpp
typedef std::forward_iterator_tag iterator_category;
```

### <a name="remarks"></a>Note

Il tipo è sinonimo di `std::forward_iterator_tag`.

## <a name="op_neq"></a>  regex_iterator::operator!=

Confronta gli iteratori per verificarne la disuguaglianza.

```cpp
bool operator!=(const regex_iterator& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Iteratore per il confronto.

### <a name="remarks"></a>Note

La funzione membro restituisce `!(*this == right)`.

## <a name="op_star"></a>  regex_iterator::operator*

Accede alla corrispondenza designata.

```cpp
const match_results<BidIt>& operator*();
```

### <a name="remarks"></a>Note

La funzione membro restituisce il valore `match`archiviato.

## <a name="op_add_add"></a>  regex_iterator::operator++

Incrementa l'iteratore.

```cpp
regex_iterator& operator++();
regex_iterator& operator++(int);
```

### <a name="remarks"></a>Note

Se la corrispondenza corrente non contiene caratteri, il primo operatore chiama `regex_search(begin, end, match, *pregex, flags | regex_constants::match_prev_avail | regex_constants::match_not_null)`; in caso contrario, sposta il valore archiviato `begin` in modo che punti al primo carattere dopo la corrispondenza corrente e quindi chiama `regex_search(begin, end, match, *pregex, flags | regex_constants::match_prev_avail)`. Se la ricerca ha esito negativo, l'operatore imposta l'oggetto su un iteratore di fine sequenza. L'operatore restituisce l'oggetto.

Il secondo operatore esegue una copia dell'oggetto, incrementa l'oggetto, quindi restituisce la copia.

## <a name="op_eq"></a>  regex_iterator::operator=

Confronta gli iteratori per verificarne l'uguaglianza.

```cpp
bool operator==(const regex_iterator& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Iteratore per il confronto.

### <a name="remarks"></a>Note

La funzione membro restituisce true se `*this` e *a destra* sono entrambi gli iteratori di fine sequenza oppure se non è un iteratore di fine sequenza e `begin == right.begin`, `end == right.end`, `pregex == right.pregex`, e `flags == right.flags`. In caso contrario, la funzione restituisce false.

## <a name="op_arrow"></a>  regex_iterator::operator-&gt;

Accede alla corrispondenza designata.

```cpp
const match_results<BidIt> * operator->();
```

### <a name="remarks"></a>Note

La funzione membro restituisce l'indirizzo del valore archiviato `match`.

## <a name="pointer"></a>  regex_iterator::pointer

Tipo di un puntatore a una corrispondenza.

```cpp
typedef match_results<BidIt> *pointer;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo di `match_results<BidIt>*`, dove `BidIt` è il parametro di modello.

## <a name="reference"></a>  regex_iterator::reference

Tipo di un riferimento a una corrispondenza.

```cpp
typedef match_results<BidIt>& reference;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo di `match_results<BidIt>&`, dove `BidIt` è il parametro di modello.

## <a name="regex_iterator"></a>  regex_iterator::regex_iterator

Costruisce l'iteratore.

```cpp
regex_iterator();

regex_iterator(BidIt first,
    BidIt last,
    const regex_type& re,
    regex_constants::match_flag_type f = regex_constants::match_default);
```

### <a name="parameters"></a>Parametri

*first*<br/>
Inizio della sequenza per cui cercare una corrispondenza.

*last*<br/>
Fine della sequenza per cui cercare una corrispondenza.

*re*<br/>
Espressione regolare per le corrispondenze.

*f*<br/>
Flag per le corrispondenze.

### <a name="remarks"></a>Note

Il primo costruttore crea un iteratore di fine sequenza. Il secondo costruttore inizializza il valore archiviato `begin` con *primo*, il valore archiviato `end` con *ultimo*, il valore archiviato `pregex` con `&re`e il valore archiviato `flags` con *f*. Quindi chiama `regex_search(begin, end, match, *pregex, flags)`. Se la ricerca ha esito negativo, il costruttore imposta l'oggetto su un iteratore di fine sequenza.

## <a name="regex_type"></a>  regex_iterator::regex_type

Tipo dell'espressione regolare per cui cercare una corrispondenza.

```cpp
typedef basic_regex<Elem, RXtraits> regex_type;
```

### <a name="remarks"></a>Note

typedef è sinonimo di `basic_regex<Elem, RXtraits>`.

## <a name="value_type"></a>  regex_iterator::value_type

Tipo di una corrispondenza.

```cpp
typedef match_results<BidIt> value_type;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo di `match_results<BidIt>`, dove `BidIt` è il parametro di modello.

## <a name="see-also"></a>Vedere anche

[\<regex>](../standard-library/regex.md)<br/>
[Classe regex_constants](../standard-library/regex-constants-class.md)<br/>
[Classe regex_error](../standard-library/regex-error-class.md)<br/>
[Funzioni \<regex>](../standard-library/regex-functions.md)<br/>
[Classe regex_iterator](../standard-library/regex-iterator-class.md)<br/>
[Operatori \<regex>](../standard-library/regex-operators.md)<br/>
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)<br/>
[Classe regex_traits](../standard-library/regex-traits-class.md)<br/>
[Typedef \<regex>](../standard-library/regex-typedefs.md)<br/>
