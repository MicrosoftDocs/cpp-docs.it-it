---
title: back_inserter (funzione)
ms.date: 12/30/2016
f1_keywords:
- collection/Windows::Foundation::Collections::back_inserter
helpviewer_keywords:
- back_inserter Function
ms.assetid: 91476338-5548-44b7-bc7e-2150f4fbe31a
ms.openlocfilehash: 82df6b06389fa9f1c3ab83fa7b1da3bab092c68d
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57750741"
---
# <a name="backinserter-function"></a>back_inserter (funzione)

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

## <a name="see-also"></a>Vedere anche

[Collections Namespace](../cppcx/windows-foundation-collections-namespace-c-cx.md)
