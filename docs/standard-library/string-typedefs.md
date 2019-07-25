---
title: Typedefs &lt;string&gt;
ms.date: 11/04/2016
f1_keywords:
- string/std::string
- string/std::u16string
- string/std::u32string
- string/std::wstring
ms.assetid: fdca01e9-f2f1-4b59-abda-0093d760b3cc
ms.openlocfilehash: a1ade5547b98e4376a00f33d45d695a328b772d3
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68459229"
---
# <a name="ltstringgt-typedefs"></a>Typedefs &lt;string&gt;

||||
|-|-|-|
|[string](#string)|[u16string](#u16string)|[u32string](#u32string)|
|[wstring](#wstring)|

## <a name="string"></a>  string

Tipo che descrive una specializzazione della classe modello [basic_string](../standard-library/basic-string-class.md) con elementi di tipo **char**.

Altri typedef che specializzano `basic_string` sono [wstring](../standard-library/string-typedefs.md#wstring), [u16string](../standard-library/string-typedefs.md#u16string) e [u32string](../standard-library/string-typedefs.md#u32string).

```cpp
typedef basic_string<char, char_traits<char>, allocator<char>> string;
```

### <a name="remarks"></a>Note

Le dichiarazioni seguenti sono equivalenti:

```cpp
string str("");

basic_string<char> str("");
```

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u16string"></a>  u16string

Tipo che descrive una specializzazione della classe modello [basic_string](../standard-library/basic-string-class.md) con elementi di tipo `char16_t`.

Altri typedef che specializzano `basic_string` sono [wstring](../standard-library/string-typedefs.md#wstring), [string](../standard-library/string-typedefs.md#string) e [u32string](../standard-library/string-typedefs.md#u32string).

```cpp
typedef basic_string<char16_t, char_traits<char16_t>, allocator<char16_t>> u16string;
```

### <a name="remarks"></a>Note

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u32string"></a>  u32string

Tipo che descrive una specializzazione della classe modello [basic_string](../standard-library/basic-string-class.md) con elementi di tipo `char32_t`.

Altri typedef che specializzano `basic_string` sono [string](../standard-library/string-typedefs.md#string), [u16string](../standard-library/string-typedefs.md#u16string) e [wstring](../standard-library/string-typedefs.md#wstring).

```cpp
typedef basic_string<char32_t, char_traits<char32_t>, allocator<char32_t>> u32string;
```

### <a name="remarks"></a>Note

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="wstring"></a>  wstring

Tipo che descrive una specializzazione della classe modello [basic_string](../standard-library/basic-string-class.md) con elementi di tipo **wchar_t**.

Altri typedef che specializzano `basic_string` sono [string](../standard-library/string-typedefs.md#string), [u16string](../standard-library/string-typedefs.md#u16string) e [u32string](../standard-library/string-typedefs.md#u32string).

```cpp
typedef basic_string<wchar_t, char_traits<wchar_t>, allocator<wchar_t>> wstring;
```

### <a name="remarks"></a>Note

Le dichiarazioni seguenti sono equivalenti:

```cpp
wstring wstr(L"");

basic_string<wchar_t> wstr(L"");
```

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

> [!NOTE]
> Le dimensioni di **wchar_t** sono definite dall'implementazione. Se il codice dipende da **wchar_t** per una determinata dimensione, verificare l'implementazione della piattaforma, ad esempio con `sizeof(wchar_t)`. Se è necessario un tipo di carattere stringa con una larghezza che deve rimanere uguale in tutte le piattaforme, usare [string](../standard-library/string-typedefs.md#string), [u16string](../standard-library/string-typedefs.md#u16string) o [u32string](../standard-library/string-typedefs.md#u32string).

## <a name="see-also"></a>Vedere anche

[\<string>](../standard-library/string.md)
