---
title: '&lt;string_view&gt; typedef'
ms.date: 04/19/2019
f1_keywords:
- xstring/std::string_view
- xstring/std::u16string_view
- xstring/std::u32string_view
- xstring/std::wstring_view
ms.openlocfilehash: 16d7ba49facf24dcffb7df444e445d83d92255e0
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64346969"
---
# <a name="ltstringviewgt-typedefs"></a>&lt;string_view&gt; typedef

||||
|-|-|-|
|[string_view](#string_view)|[u16string_view](#u16string_view)|[u32string_view](#u32string_view)|
|[wstring_view](#wstring_view)|

## <a name="string_view"></a> string_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con gli elementi di tipo **char**.

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

## <a name="u16string_view"></a> u16string_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con gli elementi di tipo `char16_t`.

```cpp
typedef basic_string_view<char16_t, char_traits<char16_t>> u16string_view;
```

### <a name="remarks"></a>Note

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u32string_view"></a> u32string_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con gli elementi di tipo `char32_t`.

```cpp
typedef basic_string_view<char32_t, char_traits<char32_t>> u32string_view;
```

### <a name="remarks"></a>Note

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="wstring_view"></a>  wstring_view

Tipo che descrive una specializzazione del modello di classe [basic_string_view](../standard-library/basic-string-view-class.md) con gli elementi di tipo **wchar_t**.

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
> Il valore pari **wchar_t** è due byte in Windows, ma questo non è necessariamente il case per tutte le piattaforme. Se è necessario un tipo di carattere wide string_view con una larghezza che deve rimanere uguale in tutte le piattaforme, usare [u16string_view](../standard-library/string-view-typedefs.md#u16string_view) oppure [u32string_view](../standard-library/string-view-typedefs.md#u32string_view).

## <a name="see-also"></a>Vedere anche

[\<string_view>](../standard-library/string-view.md)<br/>
