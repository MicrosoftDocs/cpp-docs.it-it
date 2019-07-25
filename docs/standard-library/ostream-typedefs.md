---
title: Typedef &lt;ostream&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::ostream
- iosfwd/std::wostream
ms.assetid: 2ec4dc52-a01f-4654-bd65-dd5288777c48
ms.openlocfilehash: 18f30a12a6f4d2b97cb5dca3ace98e6241d856a7
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68447170"
---
# <a name="ltostreamgt-typedefs"></a>Typedef &lt;ostream&gt;

|||
|-|-|
|[ostream](#ostream)|[wostream](#wostream)|

## <a name="ostream"></a>  ostream

Crea un tipo da basic_ostream specializzato su **char** e `char_traits` specializzato su **char**.

```cpp
typedef basic_ostream<char, char_traits<char>> ostream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_ostream](../standard-library/basic-ostream-class.md), specializzata per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="wostream"></a>  wostream

Crea un tipo da basic_ostream specializzato in **wchar_t** e `char_traits` specializzato in **wchar_t**.

```cpp
typedef basic_ostream<wchar_t, char_traits<wchar_t>> wostream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_ostream](../standard-library/basic-ostream-class.md), specializzata per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)
