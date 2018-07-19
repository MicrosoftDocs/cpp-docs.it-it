---
title: Typedef &lt;streambuf&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- iosfwd/std::streambuf
- iosfwd/std::wstreambuf
ms.assetid: 2678e18f-f0f0-4995-bc53-f1bc7dfc4ec6
ms.openlocfilehash: 81c7cd875c6083ee77701116f6b1179760373ec0
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38953992"
---
# <a name="ltstreambufgt-typedefs"></a>Typedef &lt;streambuf&gt;

|||
|-|-|
|[streambuf](#streambuf)|[wstreambuf](#wstreambuf)|

## <a name="streambuf"></a>  streambuf

Una specializzazione dello `basic_streambuf` che usa **char** come parametri del modello.

```cpp
typedef basic_streambuf<char, char_traits<char>> streambuf;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_streambuf](../standard-library/basic-streambuf-class.md)specializzata per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="wstreambuf"></a>  wstreambuf

Una specializzazione dello `basic_streambuf` che usa **wchar_t** come parametri del modello.

```cpp
typedef basic_streambuf<wchar_t, char_traits<wchar_t>> wstreambuf;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_streambuf](../standard-library/basic-streambuf-class.md)specializzata per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<streambuf>](../standard-library/streambuf.md)<br/>
