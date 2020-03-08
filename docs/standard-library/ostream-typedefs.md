---
title: Typedef &lt;ostream&gt;
ms.date: 11/04/2016
f1_keywords:
- iosfwd/std::ostream
- iosfwd/std::wostream
ms.assetid: 2ec4dc52-a01f-4654-bd65-dd5288777c48
ms.openlocfilehash: d0ceae12069712c7a124990d0f81968c21bc683a
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78856609"
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

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_ostream](../standard-library/basic-ostream-class.md), specializzato per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="wostream"></a>  wostream

Crea un tipo da basic_ostream specializzato in **wchar_t** e `char_traits` specializzato in **wchar_t**.

```cpp
typedef basic_ostream<wchar_t, char_traits<wchar_t>> wostream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_ostream](../standard-library/basic-ostream-class.md), specializzato per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<ostream>](../standard-library/ostream.md)
