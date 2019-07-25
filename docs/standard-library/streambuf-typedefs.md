---
title: Typedef &lt;streambuf&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::streambuf
- iosfwd/std::wstreambuf
ms.assetid: 2678e18f-f0f0-4995-bc53-f1bc7dfc4ec6
ms.openlocfilehash: 178b489d92a4ed7340084490329fdf8fa16c2aa7
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68449581"
---
# <a name="ltstreambufgt-typedefs"></a>Typedef &lt;streambuf&gt;

|||
|-|-|
|[streambuf](#streambuf)|[wstreambuf](#wstreambuf)|

## <a name="streambuf"></a>  streambuf

Una specializzazione `basic_streambuf` di che utilizza **char** come parametri di modello.

```cpp
typedef basic_streambuf<char, char_traits<char>> streambuf;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzata per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="wstreambuf"></a>  wstreambuf

Una specializzazione `basic_streambuf` di che usa **wchar_t** come parametri di modello.

```cpp
typedef basic_streambuf<wchar_t, char_traits<wchar_t>> wstreambuf;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzata per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<streambuf>](../standard-library/streambuf.md)
