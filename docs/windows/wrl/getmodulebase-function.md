---
title: Funzione GetModuleBase
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::GetModuleBase
ms.assetid: 123d3b14-2eaf-4e02-8dcd-b6567917c6a6
ms.openlocfilehash: 4d8c8467b7aeb9c21bf5f4ee19c60e6e60880688
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336739"
---
# <a name="getmodulebase-function"></a>Funzione GetModuleBase

Recupera una [ModuleBase](modulebase-class.md) puntatore che consente di incrementare e decrementare il conteggio dei riferimenti di un [RuntimeClass](runtimeclass-class.md) oggetto.

## <a name="syntax"></a>Sintassi

```cpp
inline Details::ModuleBase* GetModuleBase() throw()
```

## <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `ModuleBase` .

## <a name="remarks"></a>Note

Questa funzione viene utilizzata internamente per incrementare e decrementare il numero di riferimento all'oggetto.

È possibile utilizzare questa funzione per controllare i conteggi dei riferimenti chiamando [modulebase:: Incrementobjectcount](modulebase-class.md#incrementobjectcount) e [modulebase:: Decrementobjectcount](modulebase-class.md#decrementobjectcount).

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)