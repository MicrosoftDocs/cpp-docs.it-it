---
title: Typedef &lt;regex&gt;
ms.date: 11/04/2016
f1_keywords:
- regex/std::cmatch
- regex/std::cregex_iterator
- regex/std::cregex_token_iterator
- regex/std::csub_match
- regex/std::regex
- regex/std::smatch
- regex/std::sregex_iterator
- regex/std::sregex_token_iterator
- regex/std::ssub_match
- regex/std::wcmatch
- regex/std::wcregex_iterator
- regex/std::wcregex_token_iterator
- regex/std::wcsub_match
- regex/std::wregex
- regex/std::wsmatch
- regex/std::wsregex_iterator
- regex/std::wsregex_token_iterator
- regex/std::wssub_match
ms.assetid: e6a69067-106c-4a24-9e08-7c867a3a2260
ms.openlocfilehash: 49c2bb3f09b352413fd9f471a5ff887caa7e0238
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88839751"
---
# <a name="ltregexgt-typedefs"></a>Typedef &lt;regex&gt;

[cmatch](#cmatch)\
[cregex_iterator](#cregex_iterator)\
[cregex_token_iterator](#cregex_token_iterator)\
[csub_match](#csub_match)\
[Regex](#regex)\
[smatch](#smatch)\
[sregex_iterator](#sregex_iterator)\
[sregex_token_iterator](#sregex_token_iterator)\
[ssub_match](#ssub_match)\
[wcmatch](#wcmatch)\
[wcregex_iterator](#wcregex_iterator)\
[wcregex_token_iterator](#wcregex_token_iterator)\
[wcsub_match](#wcsub_match)\
[wregex](#wregex)\
[wsmatch](#wsmatch)\
[wsregex_iterator](#wsregex_iterator)\
[wsregex_token_iterator](#wsregex_token_iterator)\
[wssub_match](#wssub_match)

## <a name="cmatch-typedef"></a><a name="cmatch"></a> cmatch (typedef)

Definizione dei tipi per sub_match char.

```cpp
typedef match_results<const char*> cmatch;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Match_results classe](../standard-library/match-results-class.md) per gli iteratori di tipo `const char*` .

## <a name="cregex_iterator-typedef"></a><a name="cregex_iterator"></a> Typedef cregex_iterator

Definizione dei tipi per regex_iterator char.

```cpp
typedef regex_iterator<const char*> cregex_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Regex_iterator classe](../standard-library/regex-iterator-class.md) per gli iteratori di tipo `const char*` .

## <a name="cregex_token_iterator-typedef"></a><a name="cregex_token_iterator"></a> Typedef cregex_token_iterator

Definizione dei tipi per char regex_token_iterator.

```cpp
typedef regex_token_iterator<const char*> cregex_token_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Regex_token_iterator classe](../standard-library/regex-token-iterator-class.md) per gli iteratori di tipo `const char*` .

## <a name="csub_match-typedef"></a><a name="csub_match"></a> Typedef csub_match

Definizione dei tipi per sub_match char.

```cpp
typedef sub_match<const char*> csub_match;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Sub_match classe](../standard-library/sub-match-class.md) per gli iteratori di tipo `const char*` .

## <a name="regex-typedef"></a><a name="regex"></a> Typedef Regex

Definizione dei tipi per basic_regex char.

```cpp
typedef basic_regex<char> regex;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Basic_regex classe](../standard-library/basic-regex-class.md) per gli elementi di tipo **`char`** .

> [!NOTE]
> I caratteri a bit significativo avranno risultati imprevisti con `regex`. I valori non compresi nell'intervallo da 0 a 127 possono causare un comportamento non definito.

## <a name="smatch-typedef"></a><a name="smatch"></a> smatch (typedef)

Definizione dei tipi per match_results string.

```cpp
typedef match_results<string::const_iterator> smatch;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Match_results classe](../standard-library/match-results-class.md) per gli iteratori di tipo `string::const_iterator` .

## <a name="sregex_iterator-typedef"></a><a name="sregex_iterator"></a> Typedef sregex_iterator

Definizione dei tipi per regex_iterator string.

```cpp
typedef regex_iterator<string::const_iterator> sregex_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Regex_iterator classe](../standard-library/regex-iterator-class.md) per gli iteratori di tipo `string::const_iterator` .

## <a name="sregex_token_iterator-typedef"></a><a name="sregex_token_iterator"></a> Typedef sregex_token_iterator

Definizione dei tipi per regex_token_iterator string.

```cpp
typedef regex_token_iterator<string::const_iterator> sregex_token_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Regex_token_iterator classe](../standard-library/regex-token-iterator-class.md) per gli iteratori di tipo `string::const_iterator` .

## <a name="ssub_match-typedef"></a><a name="ssub_match"></a> Typedef ssub_match

Definizione dei tipi per sub_match string.

```cpp
typedef sub_match<string::const_iterator> ssub_match;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Sub_match classe](../standard-library/sub-match-class.md) per gli iteratori di tipo `string::const_iterator` .

## <a name="wcmatch-typedef"></a><a name="wcmatch"></a> wcmatch (typedef)

Definizione dei tipi per match_results wchar_t.

```cpp
typedef match_results<const wchar_t *> wcmatch;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Match_results classe](../standard-library/match-results-class.md) per gli iteratori di tipo `const wchar_t*` .

## <a name="wcregex_iterator-typedef"></a><a name="wcregex_iterator"></a> Typedef wcregex_iterator

Definizione dei tipi per wchar_t regex_iterator.

```cpp
typedef regex_iterator<const wchar_t*> wcregex_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Regex_iterator classe](../standard-library/regex-iterator-class.md) per gli iteratori di tipo `const wchar_t*` .

## <a name="wcregex_token_iterator-typedef"></a><a name="wcregex_token_iterator"></a> Typedef wcregex_token_iterator

Definizione dei tipi per regex_token_iterator wchar_t.

```cpp
typedef regex_token_iterator<const wchar_t*> wcregex_token_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Regex_token_iterator classe](../standard-library/regex-token-iterator-class.md) per gli iteratori di tipo `const wchar_t*` .

## <a name="wcsub_match-typedef"></a><a name="wcsub_match"></a> Typedef wcsub_match

Definizione dei tipi per sub_match wchar_t.

```cpp
typedef sub_match<const wchar_t*> wcsub_match;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Sub_match classe](../standard-library/sub-match-class.md) per gli iteratori di tipo `const wchar_t*` .

## <a name="wregex-typedef"></a><a name="wregex"></a> wregex (typedef)

Definizione dei tipi per basic_regex wchar_t.

```cpp
typedef basic_regex<wchar_t> wregex;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Basic_regex classe](../standard-library/basic-regex-class.md) per gli elementi di tipo **`wchar_t`** .

## <a name="wsmatch-typedef"></a><a name="wsmatch"></a> wsmatch (typedef)

Definizione dei tipi per match_results wstring.

```cpp
typedef match_results<wstring::const_iterator> wsmatch;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Match_results classe](../standard-library/match-results-class.md) per gli iteratori di tipo `wstring::const_iterator` .

## <a name="wsregex_iterator-typedef"></a><a name="wsregex_iterator"></a> Typedef wsregex_iterator

Definizione dei tipi per regex_iterator wstring.

```cpp
typedef regex_iterator<wstring::const_iterator> wsregex_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Regex_iterator classe](../standard-library/regex-iterator-class.md) per gli iteratori di tipo `wstring::const_iterator` .

## <a name="wsregex_token_iterator-typedef"></a><a name="wsregex_token_iterator"></a> Typedef wsregex_token_iterator

Definizione dei tipi per regex_token_iterator wstring.

```cpp
typedef regex_token_iterator<wstring::const_iterator> wsregex_token_iterator;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Regex_token_iterator classe](../standard-library/regex-token-iterator-class.md) per gli iteratori di tipo `wstring::const_iterator` .

## <a name="wssub_match-typedef"></a><a name="wssub_match"></a> Typedef wssub_match

Definizione dei tipi per sub_match wstring.

```cpp
typedef sub_match<wstring::const_iterator> wssub_match;
```

### <a name="remarks"></a>Osservazioni

Il tipo descrive una specializzazione del modello di classe [Sub_match classe](../standard-library/sub-match-class.md) per gli iteratori di tipo `wstring::const_iterator` .

## <a name="see-also"></a>Vedere anche

[\<regex>](../standard-library/regex.md)\
[Classe regex_constants](../standard-library/regex-constants-class.md)\
[Classe regex_error](../standard-library/regex-error-class.md)\
[\<regex> funzioni](../standard-library/regex-functions.md)\
[Classe regex_iterator](../standard-library/regex-iterator-class.md)\
[\<regex> operatori](../standard-library/regex-operators.md)\
[Classe regex_token_iterator](../standard-library/regex-token-iterator-class.md)\
[Classe regex_traits](../standard-library/regex-traits-class.md)
