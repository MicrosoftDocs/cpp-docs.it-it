---
description: 'Altre informazioni su: &lt; ostream &gt; Typedefs'
title: Typedef &lt;ostream&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::ostream
- iosfwd/std::wostream
ms.assetid: 2ec4dc52-a01f-4654-bd65-dd5288777c48
ms.openlocfilehash: 886fb729f389fac161e4d154e00898b530d1d9f7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193019"
---
# <a name="ltostreamgt-typedefs"></a>Typedef &lt;ostream&gt;

[ostream](#ostream)\
[wostream](#wostream)

## <a name="ostream"></a><a name="ostream"></a> ostream

Crea un tipo da basic_ostream specializzato su **`char`** e `char_traits` specializzato su **`char`** .

```cpp
typedef basic_ostream<char, char_traits<char>> ostream;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del modello di classe [basic_ostream](../standard-library/basic-ostream-class.md), specializzato per gli elementi di tipo **`char`** con tratti di carattere predefiniti.

## <a name="wostream"></a><a name="wostream"></a> wostream

Crea un tipo da basic_ostream specializzato su **`wchar_t`** e `char_traits` specializzato su **`wchar_t`** .

```cpp
typedef basic_ostream<wchar_t, char_traits<wchar_t>> wostream;
```

### <a name="remarks"></a>Commenti

Il tipo è un sinonimo del modello di classe [basic_ostream](../standard-library/basic-ostream-class.md), specializzato per gli elementi di tipo **`wchar_t`** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)
