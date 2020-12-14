---
description: 'Altre informazioni su: funzione back_inserter'
title: back_inserter (funzione)
ms.date: 12/30/2016
f1_keywords:
- collection/Windows::Foundation::Collections::back_inserter
helpviewer_keywords:
- back_inserter Function
ms.assetid: 91476338-5548-44b7-bc7e-2150f4fbe31a
ms.openlocfilehash: d2483c9947fbf3a7bc04024221ec6e582e416f84
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223581"
---
# <a name="back_inserter-function"></a>back_inserter (funzione)

Restituisce un iteratore che viene utilizzato per inserire elementi alla fine della raccolta specificata.

## <a name="syntax"></a>Sintassi

```

template <typename T>
Platform::BackInsertIterator<T>
    back_inserter(IVector<T>^ v);

template<typename T>
Platform::BackInsertIterator<T>
   back_inserter(IObservableVector<T>^ v);
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Parametro del tipo di modello.

*v*<br/>
Puntatore a un'interfaccia che fornisce l'accesso alla raccolta sottostante.

### <a name="return-value"></a>Valore restituito

Iteratore.

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Windows::Foundation::Collections

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Windows:: Foundation:: Collections](../cppcx/windows-foundation-collections-namespace-c-cx.md)
