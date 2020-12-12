---
description: 'Altre informazioni su: funzione GetModuleBase'
title: Funzione GetModuleBase
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::GetModuleBase
ms.assetid: 123d3b14-2eaf-4e02-8dcd-b6567917c6a6
ms.openlocfilehash: cdedaf905da194400209840b6bd84fa8e626eb0a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295198"
---
# <a name="getmodulebase-function"></a>Funzione GetModuleBase

Recupera un puntatore [ModuleBase](modulebase-class.md) che consente di incrementare e decrementare il conteggio dei riferimenti di un oggetto [RuntimeClass](runtimeclass-class.md) .

## <a name="syntax"></a>Sintassi

```cpp
inline Details::ModuleBase* GetModuleBase() throw()
```

## <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `ModuleBase`.

## <a name="remarks"></a>Commenti

Questa funzione viene utilizzata internamente per incrementare e decrementare i conteggi dei riferimenti agli oggetti.

È possibile utilizzare questa funzione per controllare i conteggi dei riferimenti chiamando [ModuleBase:: IncrementObjectCount](modulebase-class.md#incrementobjectcount) e [ModuleBase::D ecrementobjectcount](modulebase-class.md#decrementobjectcount).

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)
