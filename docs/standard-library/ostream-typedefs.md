---
title: Typedef &lt;ostream&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::ostream
- iosfwd/std::wostream
ms.assetid: 2ec4dc52-a01f-4654-bd65-dd5288777c48
ms.openlocfilehash: ff9f19f56c8d8fdb9e469e6361a5419468fe7e67
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88846407"
---
# <a name="ltostreamgt-typedefs"></a>Typedef &lt;ostream&gt;

[ostream](#ostream)\
[wostream](#wostream)

## <a name="ostream"></a><a name="ostream"></a> ostream

Crea un tipo da basic_ostream specializzato su **`char`** e `char_traits` specializzato su **`char`** .

```cpp
typedef basic_ostream<char, char_traits<char>> ostream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_ostream](../standard-library/basic-ostream-class.md), specializzato per gli elementi di tipo **`char`** con tratti di carattere predefiniti.

## <a name="wostream"></a><a name="wostream"></a> wostream

Crea un tipo da basic_ostream specializzato su **`wchar_t`** e `char_traits` specializzato su **`wchar_t`** .

```cpp
typedef basic_ostream<wchar_t, char_traits<wchar_t>> wostream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_ostream](../standard-library/basic-ostream-class.md), specializzato per gli elementi di tipo **`wchar_t`** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)
