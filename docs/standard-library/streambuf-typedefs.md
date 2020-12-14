---
description: 'Altre informazioni su: &lt; streambuf &gt; Typedefs'
title: Typedef &lt;streambuf&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::streambuf
- iosfwd/std::wstreambuf
ms.assetid: 2678e18f-f0f0-4995-bc53-f1bc7dfc4ec6
ms.openlocfilehash: ae5394213143b05704d452e38eaae0b3581849cd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97221969"
---
# <a name="ltstreambufgt-typedefs"></a>Typedef &lt;streambuf&gt;

[streambuf](#streambuf)\
[wstreambuf](#wstreambuf)

## <a name="streambuf"></a><a name="streambuf"></a> streambuf

Una specializzazione di `basic_streambuf` che usa **`char`** come parametri di modello.

```cpp
typedef basic_streambuf<char, char_traits<char>> streambuf;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del modello di classe [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzato per gli elementi di tipo **`char`** con tratti di carattere predefiniti.

## <a name="wstreambuf"></a><a name="wstreambuf"></a> wstreambuf

Una specializzazione di `basic_streambuf` che usa **`wchar_t`** come parametri di modello.

```cpp
typedef basic_streambuf<wchar_t, char_traits<wchar_t>> wstreambuf;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del modello di classe [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzato per gli elementi di tipo **`wchar_t`** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<streambuf>](../standard-library/streambuf.md)
