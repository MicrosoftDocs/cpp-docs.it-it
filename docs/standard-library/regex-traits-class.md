---
description: 'Altre informazioni su: regex_traits Class'
title: Classe regex_traits
ms.date: 09/10/2018
f1_keywords:
- regex/std::regex_traits
- regex/std::regex_traits::char_type
- regex/std::regex_traits::size_type
- regex/std::regex_traits::string_type
- regex/std::regex_traits::locale_type
- regex/std::regex_traits::char_class_type
- regex/std::regex_traits::length
- regex/std::regex_traits::translate
- regex/std::regex_traits::translate_nocase
- regex/std::regex_traits::transform
- regex/std::regex_traits::transform_primary
- regex/std::regex_traits::lookup_classname
- regex/std::regex_traits::lookup_collatename
- regex/std::regex_traits::isctype
- regex/std::regex_traits::value
- regex/std::regex_traits::imbue
- regex/std::regex_traits::getloc
helpviewer_keywords:
- std::regex_traits [C++]
- std::regex_traits [C++], char_type
- std::regex_traits [C++], size_type
- std::regex_traits [C++], string_type
- std::regex_traits [C++], locale_type
- std::regex_traits [C++], char_class_type
- std::regex_traits [C++], length
- std::regex_traits [C++], translate
- std::regex_traits [C++], translate_nocase
- std::regex_traits [C++], transform
- std::regex_traits [C++], transform_primary
- std::regex_traits [C++], lookup_classname
- std::regex_traits [C++], lookup_collatename
- std::regex_traits [C++], isctype
- std::regex_traits [C++], value
- std::regex_traits [C++], imbue
- std::regex_traits [C++], getloc
ms.assetid: bc5a5eed-32fc-4eb7-913d-71c42e729e81
ms.openlocfilehash: 419e0d242c43c644b6c67c48b0c28b09e96e59b0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97243809"
---
# <a name="regex_traits-class"></a>Classe regex_traits

Descrive le caratteristiche degli elementi per la corrispondenza.

## <a name="syntax"></a>Sintassi

```cpp
template<class Elem>
class regex_traits
```

## <a name="parameters"></a>Parametri

*Elem*\
Il tipo di elemento di carattere da descrivere.

## <a name="remarks"></a>Commenti

Il modello di classe descrive vari tratti dell'espressione regolare per il tipo *elem*. Il modello di classe [Basic_regex classe](../standard-library/basic-regex-class.md) utilizza queste informazioni per modificare gli elementi di tipo *elem*.

Ogni oggetto `regex_traits` contiene un oggetto di tipo `regex_traits::locale` usto da alcune delle sue funzioni membro. Le impostazioni locali predefinite sono una copia di `regex_traits::locale()`. La funzione membro `imbue` sostituisce l'oggetto delle impostazioni locali e la funzione membro `getloc` restituisce una copia dell'oggetto delle impostazioni locali.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[regex_traits](#regex_traits)|Costruisce l'oggetto.|

### <a name="typedefs"></a>Typedef

|Nome tipo|Description|
|-|-|
|[char_class_type](#char_class_type)|Tipo di identificatori delle classi di caratteri.|
|[char_type](#char_type)|Tipo di un elemento.|
|[locale_type](#locale_type)|Tipo dell'oggetto impostazioni locali archiviato.|
|[size_type](#size_type)|Tipo di una lunghezza della sequenza.|
|[string_type](#string_type)|Il tipo di una stringa di elementi.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[getloc](#getloc)|Restituisce l'oggetto delle impostazioni locali archiviate.|
|[imbue](#imbue)|Modifica l'oggetto delle impostazioni locali archiviate.|
|[isctype (](#isctype)|Verifica l'appartenenza alla classe.|
|[length](#length)|Restituisce la lunghezza di una sequenza con terminazione null.|
|[lookup_classname](#lookup_classname)|Mappa una sequenza a una classe di caratteri.|
|[lookup_collatename](#lookup_collatename)|Esegue il mapping di una sequenza a un elemento di ordinamento.|
|[trasformazione](#transform)|Converte in una sequenza ordinata di elementi equivalenti.|
|[transform_primary](#transform_primary)|Esegue la conversione nella sequenza ordinata equivalente senza distinzione tra maiuscole e minuscole.|
|[Traduci](#translate)|Esegue la conversione nell'elemento corrispondente.|
|[translate_nocase](#translate_nocase)|Esegue la conversione nell'elemento corrispondente senza distinzione tra maiuscole e minuscole.|
|[value](#value)|Converte un elemento in un valore in cifre.|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<regex>

**Spazio dei nomi:** std

## <a name="example"></a>Esempio

```cpp
// std__regex__regex_traits.cpp
// compile with: /EHsc
#include <regex>
#include <iostream>

typedef std::regex_traits<char> Mytr;
int main()
    {
    Mytr tr;

    Mytr::char_type ch = tr.translate('a');
    std::cout << "translate('a') == 'a' == " << std::boolalpha
        << (ch == 'a') << std::endl;

    std::cout << "nocase 'a' == 'A' == " << std::boolalpha
        << (tr.translate_nocase('a') == tr.translate_nocase('A'))
        << std::endl;

    const char *lbegin = "abc";
    const char *lend = lbegin + strlen(lbegin);
    Mytr::size_type size = tr.length(lbegin);
    std::cout << "length(\"abc\") == " << size <<std::endl;

    Mytr::string_type str = tr.transform(lbegin, lend);
    std::cout << "transform(\"abc\") < \"abc\" == " << std::boolalpha
        << (str < "abc") << std::endl;

    const char *ubegin = "ABC";
    const char *uend = ubegin + strlen(ubegin);
    std::cout << "primary \"ABC\" < \"abc\" == " << std::boolalpha
        << (tr.transform_primary(ubegin, uend) <
            tr.transform_primary(lbegin, lend))
        << std::endl;

    const char *dig = "digit";
    Mytr::char_class_type cl = tr.lookup_classname(dig, dig + 5);
    std::cout << "class digit == d == " << std::boolalpha
        << (cl == tr.lookup_classname(dig, dig + 1))
        << std::endl;

    std::cout << "'3' is digit == " <<std::boolalpha
        << tr.isctype('3', tr.lookup_classname(dig, dig + 5))
        << std::endl;

    std::cout << "hex C == " << tr.value('C', 16) << std::endl;

// other members
    str = tr.lookup_collatename(dig, dig + 5);

    Mytr::locale_type loc = tr.getloc();
    tr.imbue(loc);

    return (0);
    }
```

```Output
translate('a') == 'a' == true
nocase 'a' == 'A' == true
length("abc") == 3
transform("abc") < "abc" == false
primary "ABC" < "abc" == false
class digit == d == true
'3' is digit == true
hex C == 12
```

## <a name="regex_traitschar_class_type"></a><a name="char_class_type"></a> regex_traits:: char_class_type

Tipo di identificatori delle classi di caratteri.

```cpp
typedef T8 char_class_type;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo di un tipo non specificato che designa le classi di caratteri. È possibile combinare i valori di questo tipo usando l'operatore `|` per designare le classi di caratteri che costituiscono l'unione delle classi designate dagli operandi.

## <a name="regex_traitschar_type"></a><a name="char_type"></a> regex_traits:: char_type

Tipo di un elemento.

```cpp
typedef Elem char_type;
```

### <a name="remarks"></a>Commenti

Typedef è un sinonimo dell'argomento di modello `Elem`.

## <a name="regex_traitsgetloc"></a><a name="getloc"></a> regex_traits:: getloc

Restituisce l'oggetto delle impostazioni locali archiviate.

```cpp
locale_type getloc() const;
```

### <a name="remarks"></a>Commenti

La funzione membro restituisce l'oggetto `locale` archiviato.

## <a name="regex_traitsimbue"></a><a name="imbue"></a> regex_traits:: imbuto

Modifica l'oggetto delle impostazioni locali archiviate.

```cpp
locale_type imbue(locale_type loc);
```

### <a name="parameters"></a>Parametri

*loc*\
Oggetto impostazioni locali da archiviare.

### <a name="remarks"></a>Commenti

La funzione membro copia *loc* nell'oggetto archiviato `locale` e restituisce una copia del valore precedente dell' `locale` oggetto archiviato.

## <a name="regex_traitsisctype"></a><a name="isctype"></a> regex_traits:: CType

Verifica l'appartenenza alla classe.

```cpp
bool isctype(char_type ch, char_class_type cls) const;
```

### <a name="parameters"></a>Parametri

*ch*\
Elemento su cui eseguire il test.

*a CLS*\
Classi da testare.

### <a name="remarks"></a>Commenti

La funzione membro restituisce true solo se il carattere *ch* si trova nella classe di caratteri designata da *CLS*.

## <a name="regex_traitslength"></a><a name="length"></a> regex_traits:: length

Restituisce la lunghezza di una sequenza con terminazione null.

```cpp
static size_type length(const char_type *str);
```

### <a name="parameters"></a>Parametri

*Str*\
Sequenza con terminazione null.

### <a name="remarks"></a>Commenti

La funzione membro statica restituisce `std::char_traits<char_type>::length(str)`.

## <a name="regex_traitslocale_type"></a><a name="locale_type"></a> regex_traits:: locale_type

Tipo dell'oggetto impostazioni locali archiviato.

```cpp
typedef T7 locale_type;
```

### <a name="remarks"></a>Commenti

typedef è un sinonimo di un tipo che incapsula impostazioni locali. Nella specializzazioni `regex_traits<char>` e `regex_traits<wchar_t>` , è sinonimo di `std::locale`.

## <a name="regex_traitslookup_classname"></a><a name="lookup_classname"></a> regex_traits:: lookup_classname

Mappa una sequenza a una classe di caratteri.

```cpp
template <class FwdIt>
char_class_type lookup_classname(FwdIt first, FwdIt last) const;
```

### <a name="parameters"></a>Parametri

*prima*\
Inizio della sequenza da cercare.

*Ultima*\
Fine della sequenza da cercare.

### <a name="remarks"></a>Commenti

La funzione membro restituisce un valore che definisce la classe di caratteri specificata dalla sequenza di caratteri a cui puntano i relativi argomenti. Il valore non dipende dalle maiuscole/minuscole dei caratteri nella sequenza.

La specializzazione `regex_traits<char>` riconosce i nomi `"d"`, `"s"`, `"w"`, `"alnum"`, `"alpha"`, `"blank"`, `"cntrl"`, `"digit"`, `"graph"`, `"lower"`, `"print"`, `"punct"`, `"space"`, `"upper"` e `"xdigit"`, senza fare distinzione tra maiuscole e minuscole.

La specializzazione `regex_traits<wchar_t>` riconosce i nomi `L"d"`, `L"s"`, `L"w"`, `L"alnum"`, `L"alpha"`, `L"blank"`, `L"cntrl"`, `L"digit"`, `L"graph"`, `L"lower"`, `L"print"`, `L"punct"`, `L"space"`, `L"upper"` e `L"xdigit"`, senza fare distinzione tra maiuscole e minuscole.

## <a name="regex_traitslookup_collatename"></a><a name="lookup_collatename"></a> regex_traits:: lookup_collatename

Esegue il mapping di una sequenza a un elemento di ordinamento.

```cpp
template <class FwdIt>
string_type lookup_collatename(FwdIt first, FwdIt last) const;
```

### <a name="parameters"></a>Parametri

*prima*\
Inizio della sequenza da cercare.

*Ultima*\
Fine della sequenza da cercare.

### <a name="remarks"></a>Commenti

La funzione membro restituisce un oggetto stringa che contiene l'elemento di ordinamento corrispondente alla sequenza `[first, last)`oppure una stringa vuota se la sequenza non è un elemento di ordinamento valido.

## <a name="regex_traitsregex_traits"></a><a name="regex_traits"></a> regex_traits:: regex_traits

Costruisce l'oggetto.

```cpp
regex_traits();
```

### <a name="remarks"></a>Commenti

Il costruttore crea un oggetto il cui valore archiviato `locale` viene inizializzato in base alle impostazioni locali predefinite.

## <a name="regex_traitssize_type"></a><a name="size_type"></a> regex_traits:: size_type

Tipo di una lunghezza della sequenza.

```cpp
typedef T6 size_type;
```

### <a name="remarks"></a>Commenti

typedef è sinonimo di un tipo integrale non firmato. Nella specializzazioni `regex_traits<char>` e `regex_traits<wchar_t>` , è sinonimo di `std::size_t`.

typedef è sinonimo di `std::size_t`.

## <a name="regex_traitsstring_type"></a><a name="string_type"></a> regex_traits:: string_type

Il tipo di una stringa di elementi.

```cpp
typedef basic_string<Elem> string_type;
```

### <a name="remarks"></a>Commenti

typedef è sinonimo di `basic_string<Elem>`.

## <a name="regex_traitstransform"></a><a name="transform"></a> regex_traits:: Transform

Converte in una sequenza ordinata di elementi equivalenti.

```cpp
template <class FwdIt>
string_type transform(FwdIt first, FwdIt last) const;
```

### <a name="parameters"></a>Parametri

*prima*\
Inizio della sequenza da trasformare.

*Ultima*\
Fine della sequenza da trasformare.

### <a name="remarks"></a>Commenti

La funzione membro restituisce una stringa generata con una regola di trasformazione che dipende dall'oggetto `locale` archiviato. Per le sequenze di due caratteri definite dagli intervalli dell'iteratore `[first1, last1)` e `[first2, last2)`, `transform(first1, last1) < transform(first2, last2)` se la sequenza di caratteri definita dall'intervallo dell'iteratore `[first1, last1)` viene ordinata prima della sequenza di caratteri definita dall'intervallo dell'iteratore `[first2, last2)`.

## <a name="regex_traitstransform_primary"></a><a name="transform_primary"></a> regex_traits:: transform_primary

Esegue la conversione nella sequenza ordinata equivalente senza distinzione tra maiuscole e minuscole.

```cpp
template <class FwdIt>
string_type transform_primary(FwdIt first, FwdIt last) const;
```

### <a name="parameters"></a>Parametri

*prima*\
Inizio della sequenza da trasformare.

*Ultima*\
Fine della sequenza da trasformare.

### <a name="remarks"></a>Commenti

La funzione membro restituisce una stringa generata con una regola di trasformazione che dipende dall'oggetto `locale` archiviato. Per le sequenze di due caratteri designate dagli intervalli dell'iteratore `[first1, last1)` e `[first2, last2)`, `transform_primary(first1, last1) < transform_primary(first2, last2)` se la sequenza di caratteri designata dall'intervallo dell'iteratore `[first1, last1)` viene ordinata prima della sequenza di caratteri designata dall'intervallo dell'iteratore `[first2, last2)` senza tenere conto della distinzione tra maiuscole e minuscole o degli accenti.

## <a name="regex_traitstranslate"></a><a name="translate"></a> regex_traits:: translate

Esegue la conversione nell'elemento corrispondente.

```cpp
char_type translate(char_type ch) const;
```

### <a name="parameters"></a>Parametri

*ch*\
Elemento da convertire.

### <a name="remarks"></a>Commenti

La funzione membro restituisce un carattere generato con una regola di trasformazione che dipende dall'oggetto `locale` archiviato. Per due oggetti `char_type``ch1` e `ch2`, `translate(ch1) == translate(ch2)` solo se `ch1` e `ch2` devono corrispondere quando uno è presente nella definizione di espressione regolare e l'altro in una posizione corrispondente della sequenza di destinazione per una corrispondenza che non tiene conto delle impostazioni locali.

## <a name="regex_traitstranslate_nocase"></a><a name="translate_nocase"></a> regex_traits:: translate_nocase

Esegue la conversione nell'elemento corrispondente senza distinzione tra maiuscole e minuscole.

```cpp
char_type translate_nocase(char_type ch) const;
```

### <a name="parameters"></a>Parametri

*ch*\
Elemento da convertire.

### <a name="remarks"></a>Commenti

La funzione membro restituisce un carattere generato con una regola di trasformazione che dipende dall'oggetto `locale` archiviato. Per due oggetti `char_type``ch1` e `ch2`, `translate_nocase(ch1) == translate_nocase(ch2)` solo se `ch1` e `ch2` devono corrispondere quando uno è presente nella definizione di espressione regolare e l'altro in una posizione corrispondente della sequenza di destinazione per una corrispondenza senza distinzione tra maiuscole e minuscole.

## <a name="regex_traitsvalue"></a><a name="value"></a> regex_traits:: value

Converte un elemento in un valore in cifre.

```cpp
int value(Elem ch, int radix) const;
```

### <a name="parameters"></a>Parametri

*ch*\
Elemento da convertire.

*radice*\
Base aritmetica da usare.

### <a name="remarks"></a>Commenti

La funzione membro restituisce il valore rappresentato dal carattere *ch* nella *radice* di base, oppure-1 se *ch* non è una cifra valida nella *radice* di base. La funzione verrà chiamata solo con un argomento *radice* di 8, 10 o 16.

## <a name="see-also"></a>Vedi anche

[\<regex>](../standard-library/regex.md)\
[Classe regex_constants](../standard-library/regex-constants-class.md)\
[Classe regex_error](../standard-library/regex-error-class.md)\
[\<regex> funzioni](../standard-library/regex-functions.md)\
[Classe regex_iterator](../standard-library/regex-iterator-class.md)\
[\<regex> operatori](../standard-library/regex-operators.md)\
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)\
[\<regex> typedef](../standard-library/regex-typedefs.md)\
[\<char>classe regex_traits](../standard-library/regex-traits-char-class.md)\
[\<wchar_t>classe regex_traits](../standard-library/regex-traits-wchar-t-class.md)
