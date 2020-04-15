---
title: Typedef &lt;streambuf&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::streambuf
- iosfwd/std::wstreambuf
ms.assetid: 2678e18f-f0f0-4995-bc53-f1bc7dfc4ec6
ms.openlocfilehash: 8eb058f161a9f30ccf5e9d49307b50c215f79c22
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376686"
---
# <a name="ltstreambufgt-typedefs"></a>Typedef &lt;streambuf&gt;

|||
|-|-|
|[streambuf](#streambuf)|[wstreambuf](#wstreambuf)|

## <a name="streambuf"></a><a name="streambuf"></a>streambuf

Una specializzazione `basic_streambuf` di che utilizza **char** come parametri di modello.

```cpp
typedef basic_streambuf<char, char_traits<char>> streambuf;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzato per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="wstreambuf"></a><a name="wstreambuf"></a>wstreambuf

Una specializzazione `basic_streambuf` di che utilizza **wchar_t** come parametri di modello.

```cpp
typedef basic_streambuf<wchar_t, char_traits<wchar_t>> wstreambuf;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzato per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<>streambuf](../standard-library/streambuf.md)
