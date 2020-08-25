---
title: '&lt;operatori di string_view &gt;'
ms.date: 04/19/2019
f1_keywords:
- xstring/basic_string_view::operator!=
- xstring/basic_string_view::operator&gt;
- xstring/basic_string_view::operator&gt;=
- xstring/basic_string_view::operator&lt;
- xstring/basic_string_view::operator&lt;&lt;
- xstring/basic_string_view::operator&lt;=
- xstring/basic_string_view::operator+
- xstring/basic_string_view::operator==
helpviewer_keywords:
- std::basic_string_view::operator!=
- std::basic_string_view::operator&gt;
- std::basic_string_view::operator&gt;=
- std::basic_string_view::operator&lt;
- std::basic_string_view::operator&lt;&lt;
- std::basic_string_view::operator&lt;=, std::basic_string_view::operator==
ms.openlocfilehash: b0761c1af7b2ed9f34917d2e4165561b357f0a30
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88833218"
---
# <a name="ltstring_viewgt-operators"></a>&lt;operatori di string_view &gt;

Usare questi operatori per confrontare due oggetti string_view o un string_view e un altro oggetto stringa, ad esempio [std:: String](basic-string-class.md)o **char \* **, per il quale viene fornita una conversione implicita.

[operatore! =](#op_neq)\
[operatore&gt;](#op_gt)\
[operatore&gt;=](#op_gt_eq)\
[operatore&lt;](#op_lt)\
[operatore&lt;&lt;](#op_lt_lt)\
[operatore&lt;=](#op_lt_eq)\
[operatore = =](#op_eq_eq)\
[operatore "" SV](#op_sv)

## <a name="operator"></a><a name="op_neq"></a> operatore! =

Verifica se l'oggetto a sinistra dell'operatore non è uguale all'oggetto a destra.

```cpp
template <class CharType, class Traits>
bool operator!=(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator!=(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator!=(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

*Ok*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto sul lato sinistro dell'operatore non è lessicografico uguale all'oggetto a destra; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

Deve esistere una conversione implicita da *convertible_string_type* al string_view sull'altro lato.

Il confronto si basa su un confronto pairwise lessicografico tra le sequenze di caratteri. Se hanno lo stesso numero di elementi e gli elementi sono tutti uguali, i due oggetti sono uguali. In caso contrario, non sono uguali.

## <a name="operator"></a><a name="op_eq_eq"></a> operatore = =

Verifica se l'oggetto a sinistra dell'operatore è uguale all'oggetto a destra.

```cpp
template <class CharType, class Traits>
bool operator==(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator==(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator==(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

*Ok*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto sul lato sinistro dell'operatore è lessicografico uguale all'oggetto a destra; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

Deve esistere una conversione implicita da *convertible_string_type* al string_view sull'altro lato.

Il confronto si basa su un confronto pairwise lessicografico tra le sequenze di caratteri. Se hanno lo stesso numero di elementi e gli elementi sono tutti uguali, i due oggetti sono uguali.

## <a name="operatorlt"></a><a name="op_lt"></a> operatore&lt;

Verifica se l'oggetto sul lato sinistro dell'operatore è minore dell'oggetto a destra sidestring_view

```cpp
template <class CharType, class Traits>
bool operator<(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator<(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator<(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

*Ok*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto sul lato sinistro dell'operatore è lessicografico minore dell'oggetto a destra; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

Deve esistere una conversione implicita da *convertible_string_type* al string_view sull'altro lato.

Il confronto si basa su un confronto pairwise lessicografico tra le sequenze di caratteri. Quando viene rilevata la prima coppia di caratteri non uguale, viene restituito il risultato di tale confronto. Se non vengono trovati caratteri non uguali, ma una sequenza è più breve, la sequenza più breve è minore di quella più lunga. In altre parole, "Cat" è minore di "Cats".

### <a name="example"></a>Esempio

```cpp
#include <string>
#include <string_view>

using namespace std;

int main()
{
    string_view sv1 { "ABA" };
    string_view sv2{ "ABAC" };
    string_view sv3{ "ABAD" };
    string_view sv4{ "ABACE" };

    bool result = sv2 > sv1; // true
    result = sv3 > sv2; // true
    result = sv3 != sv1; // true
    result = sv4 < sv3; // true because `C` < `D`
}
```

## <a name="operatorlt"></a><a name="op_lt_eq"></a> operatore&lt;=

Verifica se l'oggetto a sinistra dell'operatore è minore o uguale all'oggetto a destra.

```cpp
template <class CharType, class Traits>
bool operator<=(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator<=(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator<=(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

*Ok*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto a sinistra dell'operatore è lessicografico minore o uguale all'oggetto a destra; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

Vedere [Operator &lt; ](#op_lt).

## <a name="operatorltlt"></a><a name="op_lt_lt"></a> operatore&lt;&lt;

Scrive un string_view in un flusso di output.

```cpp
template <class CharType, class Traits>
inline basic_ostream<CharType, Traits>& operator<<(
    basic_ostream<CharType, Traits>& Ostr, const basic_string_view<CharType, Traits> Str);
```

### <a name="parameters"></a>Parametri

*OSTR*\
flusso di output in cui viene eseguita la scrittura.

*Str*\
String_view da immettere in un flusso di output.

### <a name="return-value"></a>Valore restituito

flusso di output in cui viene eseguita la scrittura.

### <a name="remarks"></a>Osservazioni

Utilizzare questo operatore per inserire il contenuto di un string_view in un flusso di output, ad esempio utilizzando [std:: cout](iostream.md#cout).

## <a name="operatorgt"></a><a name="op_gt"></a> operatore&gt;

Verifica se l'oggetto a sinistra dell'operatore è maggiore dell'oggetto a destra.

```cpp
template <class CharType, class Traits>
bool operator>(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator>(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator>(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

*Ok*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto sul lato sinistro dell'operatore è lessicografico maggiore dell'oggetto string_view a destra; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

Vedere [Operator &lt; ](#op_lt).

## <a name="operatorgt"></a><a name="op_gt_eq"></a> operatore&gt;=

Verifica se l'oggetto a sinistra dell'operatore è maggiore o uguale all'oggetto a destra.

```cpp
template <class CharType, class Traits>
bool operator>=(
    const basic_string_view<CharType, Traits>& left,
    const basic_string_view<CharType, Traits>& right);

template <class CharType, class Traits>
bool operator>=(
    const basic_string_view<CharType, Traits>& left,
    convertible_string_type right);

template <class CharType, class Traits>
bool operator>=(
    convertible_string_type left,
    const basic_string_view<CharType, Traits>& right);
```

### <a name="parameters"></a>Parametri

*sinistra*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

*Ok*\
Qualsiasi tipo di stringa convertibile o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**`true`** Se l'oggetto sul lato sinistro dell'operatore è lessicografico maggiore o uguale all'oggetto a destra; in caso contrario **`false`** ,.

### <a name="remarks"></a>Osservazioni

Vedere [Operator &lt; ](#op_lt).

## <a name="operator-sv-string_view-literal"></a><a name="op_sv"></a> operatore "" SV (string_view valore letterale)

Costruisce un string_view da un valore letterale stringa. Richiede lo spazio dei nomi `std::literals::string_view_literals` .

### <a name="example"></a>Esempio

```cpp

using namespace std;
using namespace literals::string_view_literals;

    string_view sv{ "Hello"sv };
    wstring_view wsv{ L"Hello"sv };
    u16string_view sv16{ u"Hello"sv };
    u32string_view sv32{ U"Hello"sv };
```

## <a name="see-also"></a>Vedere anche

[\<string_view>](../standard-library/string-view.md)
