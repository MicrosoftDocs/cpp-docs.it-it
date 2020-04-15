---
title: '&lt;string_view&gt; typedef'
ms.date: 04/19/2019
f1_keywords:
- xstring/std::string_view
- xstring/std::u16string_view
- xstring/std::u32string_view
- xstring/std::wstring_view
ms.openlocfilehash: 0ec278484b7c1c9887771f6cbe7e5d0b05205dd7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376667"
---
# <a name="ltstring_viewgt-typedefs"></a>&lt;string_view&gt; typedef

||||
|-|-|-|
|[string_view](#string_view)|[u16string_view](#u16string_view)|[u32string_view](#u32string_view)|
|[wstring_view](#wstring_view)|

## <a name="string_view"></a><a name="string_view"></a>string_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con elementi di tipo **char**.

```cpp
typedef basic_string_view<char, char_traits<char>> string_view;
```

### <a name="remarks"></a>Osservazioni

Le dichiarazioni seguenti sono equivalenti:

```cpp
string_view str("Hello");

basic_string_view<char> str("Hello");
```

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u16string_view"></a><a name="u16string_view"></a>u16string_view

Tipo che descrive una specializzazione del [basic_string_view](../standard-library/basic-string-view-class.md) modello di `char16_t`classe basic_string_view con elementi di tipo .

```cpp
typedef basic_string_view<char16_t, char_traits<char16_t>> u16string_view;
```

### <a name="remarks"></a>Osservazioni

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u32string_view"></a><a name="u32string_view"></a>u32string_view

Tipo che descrive una specializzazione del [basic_string_view](../standard-library/basic-string-view-class.md) modello di `char32_t`classe basic_string_view con elementi di tipo .

```cpp
typedef basic_string_view<char32_t, char_traits<char32_t>> u32string_view;
```

### <a name="remarks"></a>Osservazioni

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="wstring_view"></a><a name="wstring_view"></a>wstring_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con elementi di tipo **wchar_t**.

```cpp
typedef basic_string_view<wchar_t, char_traits<wchar_t>> wstring_view;
```

### <a name="remarks"></a>Osservazioni

Le dichiarazioni seguenti sono equivalenti:

```cpp
wstring_view wstr(L"Hello");

basic_string_view<wchar_t> wstr(L"Hello");
```

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

> [!NOTE]
> La dimensione di **wchar_t** è di due byte su Windows, ma questo non è necessariamente il caso per tutte le piattaforme. Se è necessario un tipo di carattere string_view wide con una larghezza che è garantito per rimanere lo stesso su tutte le piattaforme, utilizzare [u16string_view](../standard-library/string-view-typedefs.md#u16string_view) o [u32string_view](../standard-library/string-view-typedefs.md#u32string_view).

## <a name="see-also"></a>Vedere anche

[\<>string_view](../standard-library/string-view.md)
