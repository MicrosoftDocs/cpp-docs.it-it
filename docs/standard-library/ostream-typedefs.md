---
title: Typedef &lt;ostream&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::ostream
- iosfwd/std::wostream
ms.assetid: 2ec4dc52-a01f-4654-bd65-dd5288777c48
ms.openlocfilehash: 02936fdfc990ea65a99b2875cf7f482eb2ce4ebe
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50429744"
---
# <a name="ltostreamgt-typedefs"></a>Typedef &lt;ostream&gt;

|||
|-|-|
|[ostream](#ostream)|[wostream](#wostream)|

## <a name="ostream"></a>  ostream

Crea un tipo da basic_ostream specializzato su **char** e `char_traits` specializzato in **char**.

```cpp
typedef basic_ostream<char, char_traits<char>> ostream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_ostream](../standard-library/basic-ostream-class.md)specializzata per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="wostream"></a>  wostream

Crea un tipo da basic_ostream specializzato su **wchar_t** e `char_traits` specializzato in **wchar_t**.

```cpp
typedef basic_ostream<wchar_t, char_traits<wchar_t>> wostream;
```

### <a name="remarks"></a>Note

Il tipo è un sinonimo della classe modello [basic_ostream](../standard-library/basic-ostream-class.md)specializzata per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)<br/>
