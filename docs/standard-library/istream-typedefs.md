---
title: Typedef &lt;istream&gt;
ms.date: 11/04/2016
f1_keywords:
- istream/std::iostream
- istream/std::istream
- istream/std::wiostream
- istream/std::wistream
ms.assetid: 55bc1f84-53a7-46ca-a36f-ac6ef75d0374
ms.openlocfilehash: 9a25e4aa9ee42ea36d1bb8d6b196b36ff5c97758
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78856595"
---
# <a name="ltistreamgt-typedefs"></a>Typedef &lt;istream&gt;

||||
|-|-|-|
|[iostream](#iostream)|[istream](#istream)|[wiostream](#wiostream)|
|[wistream](#wistream)|

## <a name="iostream"></a>  iostream

Tipo `basic_iostream` specializzato in **char**.

```cpp
typedef basic_iostream<char, char_traits<char>> iostream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_iostream](../standard-library/basic-iostream-class.md), specializzato per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="istream"></a>  istream

Tipo `basic_istream` specializzato in **char**.

```cpp
typedef basic_istream<char, char_traits<char>> istream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_istream](../standard-library/basic-istream-class.md), specializzato per gli elementi di tipo **char** con tratti di carattere predefiniti.

## <a name="wiostream"></a>  wiostream

Tipo `basic_iostream` specializzato su **wchar_t**.

```cpp
typedef basic_iostream<wchar_t, char_traits<wchar_t>> wiostream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_iostream](../standard-library/basic-iostream-class.md), specializzato per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="wistream"></a>  wistream

Tipo `basic_istream` specializzato su **wchar_t**.

```cpp
typedef basic_istream<wchar_t, char_traits<wchar_t>> wistream;
```

### <a name="remarks"></a>Osservazioni

Il tipo è un sinonimo del modello di classe [basic_istream](../standard-library/basic-istream-class.md), specializzato per gli elementi di tipo **wchar_t** con tratti di carattere predefiniti.

## <a name="see-also"></a>Vedere anche

[\<istream>](../standard-library/istream.md)
