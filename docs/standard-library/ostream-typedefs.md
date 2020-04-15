---
title: Typedef &lt;ostream&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::ostream
- iosfwd/std::wostream
ms.assetid: 2ec4dc52-a01f-4654-bd65-dd5288777c48
ms.openlocfilehash: 82539a3fdadf10d340ca957756e235e8ae00b267
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373575"
---
# <a name="ltostreamgt-typedefs"></a>Typedef &lt;ostream&gt;

|||
|-|-|
|[ostream](#ostream)|[wostream](#wostream)|

## <a name="ostream"></a><a name="ostream"></a>ostream

Crea un tipo da basic_ostream specializzato in **char** e `char_traits` specializzato in **char**.

```cpp
typedef basic_ostream<char, char_traits<char>> ostream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di modello di classe [basic_ostream](../standard-library/basic-ostream-class.md), specializzato per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="wostream"></a><a name="wostream"></a>wostream

Crea un tipo da basic_ostream specializzato in **wchar_t** e `char_traits` specializzato in **wchar_t**.

```cpp
typedef basic_ostream<wchar_t, char_traits<wchar_t>> wostream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo di modello di classe [basic_ostream](../standard-library/basic-ostream-class.md), specializzato per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)
