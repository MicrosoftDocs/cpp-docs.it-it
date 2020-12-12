---
description: 'Altre informazioni su: &lt; string_view &gt; typedef'
title: '&lt;&gt;typedef string_view'
ms.date: 04/19/2019
f1_keywords:
- xstring/std::string_view
- xstring/std::u16string_view
- xstring/std::u32string_view
- xstring/std::wstring_view
ms.openlocfilehash: 8bef37a85469dbc076c3488b1c70b394e5c63915
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97183646"
---
# <a name="ltstring_viewgt-typedefs"></a>&lt;&gt;typedef string_view

[string_view](#string_view)\
[u16string_view](#u16string_view)\
[u32string_view](#u32string_view)\
[wstring_view](#wstring_view)

## <a name="string_view"></a><a name="string_view"></a> string_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con elementi di tipo **`char`** .

```cpp
typedef basic_string_view<char, char_traits<char>> string_view;
```

### <a name="remarks"></a>Commenti

Le dichiarazioni seguenti sono equivalenti:

```cpp
string_view str("Hello");

basic_string_view<char> str("Hello");
```

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u16string_view"></a><a name="u16string_view"></a> u16string_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con elementi di tipo **`char16_t`** .

```cpp
typedef basic_string_view<char16_t, char_traits<char16_t>> u16string_view;
```

### <a name="remarks"></a>Commenti

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u32string_view"></a><a name="u32string_view"></a> u32string_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con elementi di tipo **`char32_t`** .

```cpp
typedef basic_string_view<char32_t, char_traits<char32_t>> u32string_view;
```

### <a name="remarks"></a>Commenti

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="wstring_view"></a><a name="wstring_view"></a> wstring_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con elementi di tipo **`wchar_t`** .

```cpp
typedef basic_string_view<wchar_t, char_traits<wchar_t>> wstring_view;
```

### <a name="remarks"></a>Commenti

Le dichiarazioni seguenti sono equivalenti:

```cpp
wstring_view wstr(L"Hello");

basic_string_view<wchar_t> wstr(L"Hello");
```

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

> [!NOTE]
> Le dimensioni di **`wchar_t`** sono due byte in Windows, ma questo non è necessariamente il caso per tutte le piattaforme. Se è necessario un tipo di carattere wide string_view con una larghezza garantita che rimanga lo stesso in tutte le piattaforme, usare [u16string_view](../standard-library/string-view-typedefs.md#u16string_view) o [u32string_view](../standard-library/string-view-typedefs.md#u32string_view).

## <a name="see-also"></a>Vedere anche

[\<string_view>](../standard-library/string-view.md)
