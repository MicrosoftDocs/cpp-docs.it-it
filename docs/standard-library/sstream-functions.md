---
title: Funzioni &lt;sstream&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- sstream/std::swap
ms.assetid: bc9607e8-7c6b-44ef-949b-19e917b450ad
ms.openlocfilehash: 354632a3c001f2352821d9a1d0b493291c21a337
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38953937"
---
# <a name="ltsstreamgt-functions"></a>Funzioni &lt;sstream&gt;

||
|-|
|[swap](#sstream_swap)|

## <a name="sstream_swap"></a>  swap

Scambia i valori tra due oggetti `sstream`.

```cpp
template <class Elem, class Tr, class Alloc>
void swap(
    basic_stringbuf<Elem, Tr, Alloc>& left,
    basic_stringbuf<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>
void swap(
    basic_istringstream<Elem, Tr, Alloc>& left,
    basic_istringstream<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>
void swap(
    basic_ostringstream<Elem, Tr, Alloc>& left,
    basic_ostringstream<Elem, Tr, Alloc>& right);

template <class Elem, class Tr, class Alloc>
void swap(
    basic_stringstream<Elem, Tr, Alloc>& left,
    basic_stringstream<Elem, Tr, Alloc>& right);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*left*|Riferimento a un oggetto `sstream`.|
|*right*|Riferimento a un oggetto `sstream`.|

### <a name="remarks"></a>Note

La funzione modello esegue `left.swap(right)`.

## <a name="see-also"></a>Vedere anche

[\<sstream>](../standard-library/sstream.md)<br/>
