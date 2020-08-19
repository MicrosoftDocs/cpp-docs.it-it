---
title: Funzioni &lt;sstream&gt;
ms.date: 11/04/2016
f1_keywords:
- sstream/std::swap
ms.assetid: bc9607e8-7c6b-44ef-949b-19e917b450ad
ms.openlocfilehash: 722cba257b12bb753aaa61ac2f430df76c2ceb93
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88560374"
---
# <a name="ltsstreamgt-functions"></a>Funzioni &lt;sstream&gt;

||
|-|
|[scambio](#sstream_swap)|

## <a name="swap"></a><a name="sstream_swap"></a> scambio

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

*sinistra*\
Riferimento a un oggetto `sstream`.

*Ok*\
Riferimento a un oggetto `sstream`.

### <a name="remarks"></a>Osservazioni

La funzione modello esegue `left.swap(right)`.

## <a name="see-also"></a>Vedere anche

[\<sstream>](../standard-library/sstream.md)
