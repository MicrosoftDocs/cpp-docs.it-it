---
title: Funzione to_vector | Microsoft Docs
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: language-reference
f1_keywords:
- collection/Windows::Foundation::Collections::to_vector
dev_langs:
- C++
helpviewer_keywords:
- to_vector Function
ms.assetid: 9cdd5123-7243-4def-a1d3-162e0bf6219e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a3dcccc332a5d768a614414838003e1400f3c6a6
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44107627"
---
# <a name="tovector-function"></a>to_vector (funzione)

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

## <a name="see-also"></a>Vedere anche

[Collections Namespace](../cppcx/windows-foundation-collections-namespace-c-cx.md)