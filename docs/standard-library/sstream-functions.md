---
title: Funzioni &lt;sstream&gt;
ms.date: 11/04/2016
f1_keywords:
- sstream/std::swap
ms.assetid: bc9607e8-7c6b-44ef-949b-19e917b450ad
ms.openlocfilehash: 707d35123797b84b2b7cef1d1cfd9005e4becb1c
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68447534"
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

[\<sstream>](../standard-library/sstream.md)
