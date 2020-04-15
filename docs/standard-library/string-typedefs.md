---
title: Typedefs &lt;string&gt;
ms.date: 11/04/2016
f1_keywords:
- string/std::string
- string/std::u16string
- string/std::u32string
- string/std::wstring
ms.assetid: fdca01e9-f2f1-4b59-abda-0093d760b3cc
ms.openlocfilehash: 1ee36d67d137c74e17fff845f9d412b2673f311e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376633"
---
# <a name="ltstringgt-typedefs"></a>Typedefs &lt;string&gt;

||||
|-|-|-|
|[string](#string)|[u16stringa](#u16string)|[u32string (stringa u32)](#u32string)|
|[wstring](#wstring)|

## <a name="string"></a>Stringa <a name="string"></a>

Tipo che descrive una specializzazione del modello di classe [basic_string](../standard-library/basic-string-class.md) con elementi di tipo **char**.

Altri typedef che specializzano `basic_string` sono [wstring](../standard-library/string-typedefs.md#wstring), [u16string](../standard-library/string-typedefs.md#u16string) e [u32string](../standard-library/string-typedefs.md#u32string).

```cpp
typedef basic_string<char, char_traits<char>, allocator<char>> string;
```

### <a name="remarks"></a>Osservazioni

Le dichiarazioni seguenti sono equivalenti:

```cpp
string str("");

basic_string<char> str("");
```

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u16string"></a><a name="u16string"></a>u16stringa

Tipo che descrive una specializzazione del [modello](../standard-library/basic-string-class.md) di `char16_t`classe basic_string con elementi di tipo .

Altri typedef che specializzano `basic_string` sono [wstring](../standard-library/string-typedefs.md#wstring), [string](../standard-library/string-typedefs.md#string) e [u32string](../standard-library/string-typedefs.md#u32string).

```cpp
typedef basic_string<char16_t, char_traits<char16_t>, allocator<char16_t>> u16string;
```

### <a name="remarks"></a>Osservazioni

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="u32string"></a><a name="u32string"></a>u32string (stringa u32)

Tipo che descrive una specializzazione del [modello](../standard-library/basic-string-class.md) di `char32_t`classe basic_string con elementi di tipo .

Altri typedef che specializzano `basic_string` sono [string](../standard-library/string-typedefs.md#string), [u16string](../standard-library/string-typedefs.md#u16string) e [wstring](../standard-library/string-typedefs.md#wstring).

```cpp
typedef basic_string<char32_t, char_traits<char32_t>, allocator<char32_t>> u32string;
```

### <a name="remarks"></a>Osservazioni

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

## <a name="wstring"></a><a name="wstring"></a>wstring

Tipo che descrive una specializzazione del modello di classe [basic_string](../standard-library/basic-string-class.md) con elementi di tipo **wchar_t**.

Altri typedef che specializzano `basic_string` sono [string](../standard-library/string-typedefs.md#string), [u16string](../standard-library/string-typedefs.md#u16string) e [u32string](../standard-library/string-typedefs.md#u32string).

```cpp
typedef basic_string<wchar_t, char_traits<wchar_t>, allocator<wchar_t>> wstring;
```

### <a name="remarks"></a>Osservazioni

Le dichiarazioni seguenti sono equivalenti:

```cpp
wstring wstr(L"");

basic_string<wchar_t> wstr(L"");
```

Per un elenco di costruttori di stringhe, vedere [basic_string::basic_string](../standard-library/basic-string-class.md#basic_string).

> [!NOTE]
> La dimensione di **wchar_t** è definita dall'implementazione. Se il codice dipende da **wchar_t** una determinata dimensione, controllare l'implementazione della piattaforma (ad esempio, con `sizeof(wchar_t)`). Se è necessario un tipo di carattere stringa con una larghezza che deve rimanere uguale in tutte le piattaforme, usare [string](../standard-library/string-typedefs.md#string), [u16string](../standard-library/string-typedefs.md#u16string) o [u32string](../standard-library/string-typedefs.md#u32string).

## <a name="see-also"></a>Vedere anche

[\<>di stringhe](../standard-library/string.md)
