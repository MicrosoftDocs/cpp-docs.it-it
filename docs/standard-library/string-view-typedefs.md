---
title: '&lt;string_view&gt; (typedef)'
ms.date: 04/19/2019
f1_keywords:
- xstring/std::string_view
- xstring/std::u16string_view
- xstring/std::u32string_view
- xstring/std::wstring_view
ms.openlocfilehash: c3367afe1353ac70abb74a59658a255614ac8470
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68459174"
---
# <a name="ltstringviewgt-typedefs"></a>&lt;string_view&gt; (typedef)

||||
|-|-|-|
|[string_view](#string_view)|[u16string_view](#u16string_view)|[u32string_view](#u32string_view)|
|[wstring_view](#wstring_view)|

## <a name="string_view"></a>string_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con elementi di tipo **char**.

```cpp
typedef basic_string_view<char, char_traits<char>> string_view;
```

### <a name="remarks"></a>Note

Le dichiarazioni seguenti sono equivalenti:

```cpp
string_view str("Hello");

basic_string_view<char> str("Hello");
```

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u16string_view"></a>u16string_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con elementi di tipo `char16_t`.

```cpp
typedef basic_string_view<char16_t, char_traits<char16_t>> u16string_view;
```

### <a name="remarks"></a>Note

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u32string_view"></a>u32string_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con elementi di tipo `char32_t`.

```cpp
typedef basic_string_view<char32_t, char_traits<char32_t>> u32string_view;
```

### <a name="remarks"></a>Note

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="wstring_view"></a>  wstring_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con elementi di tipo **wchar_t**.

```cpp
typedef basic_string_view<wchar_t, char_traits<wchar_t>> wstring_view;
```

### <a name="remarks"></a>Note

Le dichiarazioni seguenti sono equivalenti:

```cpp
wstring_view wstr(L"Hello");

basic_string_view<wchar_t> wstr(L"Hello");
```

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

> [!NOTE]
> Le dimensioni di **wchar_t** sono due byte in Windows, ma questo non è necessariamente il caso per tutte le piattaforme. Se è necessario un tipo di carattere wide string_view con una larghezza che deve rimanere invariata in tutte le piattaforme, usare [u16string_view](../standard-library/string-view-typedefs.md#u16string_view) o [u32string_view](../standard-library/string-view-typedefs.md#u32string_view).

## <a name="see-also"></a>Vedere anche

[\<> string_view](../standard-library/string-view.md)
