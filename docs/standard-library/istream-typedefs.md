---
title: Typedef &lt;istream&gt;
ms.date: 11/04/2016
f1_keywords:
- istream/std::iostream
- istream/std::istream
- istream/std::wiostream
- istream/std::wistream
ms.assetid: 55bc1f84-53a7-46ca-a36f-ac6ef75d0374
ms.openlocfilehash: c66a4349a016eb8428a8aa8eb260a78b4bac9efb
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88846472"
---
# <a name="ltistreamgt-typedefs"></a>Typedef &lt;istream&gt;

[iostream](#iostream)\
[IStream](#istream)\
[wiostream](#wiostream)\
[wistream](#wistream)

## <a name="iostream"></a><a name="iostream"></a> iostream

Tipo `basic_iostream` specializzato in **`char`** .

```cpp
typedef basic_iostream<char, char_traits<char>> iostream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_iostream](../standard-library/basic-iostream-class.md), specializzato per gli elementi di tipo **`char`** con tratti di carattere predefiniti.

## <a name="istream"></a><a name="istream"></a> IStream

Tipo `basic_istream` specializzato in **`char`** .

```cpp
typedef basic_istream<char, char_traits<char>> istream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_istream](../standard-library/basic-istream-class.md), specializzato per gli elementi di tipo **`char`** con tratti di carattere predefiniti.

## <a name="wiostream"></a><a name="wiostream"></a> wiostream

Tipo `basic_iostream` specializzato in **`wchar_t`** .

```cpp
typedef basic_iostream<wchar_t, char_traits<wchar_t>> wiostream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_iostream](../standard-library/basic-iostream-class.md), specializzato per gli elementi di tipo **`wchar_t`** con tratti di carattere predefiniti.

## <a name="wistream"></a><a name="wistream"></a> wistream

Tipo `basic_istream` specializzato in **`wchar_t`** .

```cpp
typedef basic_istream<wchar_t, char_traits<wchar_t>> wistream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_istream](../standard-library/basic-istream-class.md), specializzato per gli elementi di tipo **`wchar_t`** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<istream>](../standard-library/istream.md)
