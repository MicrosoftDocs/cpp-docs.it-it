---
title: Typedef &lt;ostream&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- iosfwd/std::ostream
- iosfwd/std::wostream
ms.assetid: 2ec4dc52-a01f-4654-bd65-dd5288777c48
ms.openlocfilehash: 3f5511cfbf73ddf74fa12954e1a108d8accf875e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="ltostreamgt-typedefs"></a>Typedef &lt;ostream&gt;

|||
|-|-|
|[ostream](#ostream)|[wostream](#wostream)|

## <a name="ostream"></a>  ostream

Crea un tipo da basic_ostream specializzato su `char` e `char_traits` specializzato su `char`.

```cpp
typedef basic_ostream<char, char_traits<char>> ostream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_ostream](../standard-library/basic-ostream-class.md), specializzata per gli elementi di tipo `char` con tratti di carattere predefiniti.

## <a name="wostream"></a>  wostream

Crea un tipo da basic_ostream specializzato su `wchar_t` e `char_traits` specializzato su `wchar_t`.

```cpp
typedef basic_ostream<wchar_t, char_traits<wchar_t>> wostream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_ostream](../standard-library/basic-ostream-class.md), specializzata per gli elementi di tipo `wchar_t` con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)<br/>
