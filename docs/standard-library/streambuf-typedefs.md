---
title: Typedef &lt;streambuf&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::streambuf
- iosfwd/std::wstreambuf
ms.assetid: 2678e18f-f0f0-4995-bc53-f1bc7dfc4ec6
ms.openlocfilehash: 1c9850ad7d7ec9b9c3554e6806f4790ef3613b08
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72688933"
---
# <a name="ltstreambufgt-typedefs"></a>Typedef &lt;streambuf&gt;

|||
|-|-|
|[streambuf](#streambuf)|[wstreambuf](#wstreambuf)|

## <a name="streambuf"></a>  streambuf

Una specializzazione di `basic_streambuf` che utilizza **char** come parametri di modello.

```cpp
typedef basic_streambuf<char, char_traits<char>> streambuf;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del modello di classe [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzato per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="wstreambuf"></a>  wstreambuf

Una specializzazione di `basic_streambuf` che utilizza **wchar_t** come parametri del modello.

```cpp
typedef basic_streambuf<wchar_t, char_traits<wchar_t>> wstreambuf;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo del modello di classe [basic_streambuf](../standard-library/basic-streambuf-class.md), specializzato per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<streambuf>](../standard-library/streambuf.md)
