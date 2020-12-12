---
description: 'Altre informazioni su: funzione to_vector'
title: to_vector (funzione)
ms.date: 12/30/2016
f1_keywords:
- collection/Windows::Foundation::Collections::to_vector
helpviewer_keywords:
- to_vector Function
ms.assetid: 9cdd5123-7243-4def-a1d3-162e0bf6219e
ms.openlocfilehash: 77d6bee58a793946f91bc03ba4afed35aa7252cd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97307587"
---
# <a name="to_vector-function"></a>to_vector (funzione)

Restituisce `std::vector` il cui valore è lo stesso della raccolta sottostante il parametro IVectorView o IVector.

## <a name="syntax"></a>Sintassi

```
template <typename T>
inline ::std::vector<T> to_vector(IVector<T>^ v);

template <typename T>
inline ::std::vector<T> to_vector(IVectorView<T>^ v);
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Parametro del tipo di modello.

*v*<br/>
Interfaccia IVectorView o IVector che fornisce accesso a un oggetto Vector o VectorView sottostante.

### <a name="return-value"></a>Valore restituito

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Windows::Foundation::Collections

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Windows:: Foundation:: Collections](../cppcx/windows-foundation-collections-namespace-c-cx.md)
