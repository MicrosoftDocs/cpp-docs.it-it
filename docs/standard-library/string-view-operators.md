---
title: '&lt;string_view&gt; operatori'
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
ms.openlocfilehash: 1fbb7faf7d6fc92a053c0f4d47575c5c53c7968e
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64346919"
---
# <a name="ltstringviewgt-operators"></a>&lt;string_view&gt; operatori

Questi operatori consentono di confrontare due oggetti string_view, o un string_view e un altro oggetto stringa (ad esempio [std:: String](basic-string-class.md), o **char\*** ) per cui viene fornita una conversione implicita. 

||||
|-|-|-|
|[operator!=](#op_neq)|[operator&gt;](#op_gt)|[operator&gt;=](#op_gt_eq)|
|[operator&lt;](#op_lt)|[operator&lt;&lt;](#op_lt_lt)|[operator&lt;=](#op_lt_eq)|
|[operator==](#op_eq_eq)|[operator""sv](#op_sv)|

## <a name="op_neq"></a> operator!=

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

*left*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

*right*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto sul lato sinistro dell'operatore non è a livello lessicografico uguale all'oggetto sul lato destro; in caso contrario **false**.

### <a name="remarks"></a>Note

Deve esistere una conversione implicita da *convertible_string_type* a di string_view su altro lato. 

Il confronto si basa su un pairwise il confronto lessicografico delle sequenze di caratteri. Se hanno lo stesso numero di elementi e gli elementi sono tutti uguali, i due oggetti sono uguali. In caso contrario, non sono uguali.

## <a name="op_eq_eq"></a> operator==

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

*left*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

*right*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto sul lato sinistro dell'operatore è uguale all'oggetto sul lato destro a livello lessicografico; in caso contrario **false**.

### <a name="remarks"></a>Note

Deve esistere una conversione implicita da *convertible_string_type* a di string_view su altro lato. 

Il confronto si basa su un pairwise il confronto lessicografico delle sequenze di caratteri. Se hanno lo stesso numero di elementi e gli elementi sono tutti uguali, i due oggetti sono uguali.


## <a name="op_lt"> Operatore</a>&lt;

Verifica se l'oggetto sul lato sinistro dell'operatore è minore dell'oggetto nel sidestring_view a destra
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

*left*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

*right*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto sul lato sinistro dell'operatore è minore a livello lessicografico l'oggetto sul lato destro; in caso contrario **false**.

### <a name="remarks"></a>Note

Deve esistere una conversione implicita da *convertible_string_type* a di string_view su altro lato. 

Il confronto si basa su un pairwise il confronto lessicografico delle sequenze di caratteri. Quando viene rilevata la prima coppia non equivalente rilevata di caratteri, viene restituito il risultato di tale confronto. Se non vengono trovati caratteri uguali, ma un'unica sequenza è più breve, la sequenza più breve è minore di quella più lunga. In altre parole, "cat" è minore di "cani".

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

## <a name="op_lt_eq"></a> operator&lt;=

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

*left*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

*right*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto sul lato sinistro dell'operatore è a livello lessicografico minore o uguale all'oggetto sul lato destro; in caso contrario **false**.

### <a name="remarks"></a>Note

Visualizzare [operator&lt;](#op_lt).

## <a name="op_lt_lt"></a> operator&lt;&lt;

Scrive un string_view in un flusso di output.

```cpp
template <class CharType, class Traits>
inline basic_ostream<CharType, Traits>& operator<<(
    basic_ostream<CharType, Traits>& Ostr, const basic_string_view<CharType, Traits> Str);
```

### <a name="parameters"></a>Parametri

*Ostr*<br/>
un flusso di output su cui scritto.

*Str*<br/>
String_view da immettere nel flusso di output.

### <a name="return-value"></a>Valore restituito

un flusso di output su cui scritto.

### <a name="remarks"></a>Note

Utilizzare questo operatore per inserire il contenuto di un string_view in un flusso di output, ad esempio usando [std:: cout](iostream.md#cout).

## <a name="op_gt"> Operatore</a>&gt;

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

*left*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

*right*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto sul lato sinistro dell'operatore è maggiore dell'oggetto string_view sul lato destro a livello lessicografico; in caso contrario **false**.

### <a name="remarks"></a>Note

Visualizzare [operator&lt;](#op_lt).

## <a name="op_gt_eq"></a> operator&gt;=

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

*left*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

*right*<br/>
Qualsiasi tipo stringa convertibili in o un oggetto di tipo `basic_string_view` da confrontare.

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto sul lato sinistro dell'operatore è maggiore o uguale all'oggetto sul lato destro; in caso contrario, a livello lessicografico **false**.

### <a name="remarks"></a>Note

Visualizzare [operator&lt;](#op_lt).

## <a name="op_sv"></a> operatore"" sv (string_view letterale)

Costruisce un string_view da valore letterale stringa. Richiede spazio dei nomi `std::literals::string_view_literals`. 

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

[\<string_view>](../standard-library/string-view.md)<br/>
