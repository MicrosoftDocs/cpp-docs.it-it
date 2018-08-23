---
title: 'Metodo modulebase:: Decrementobjectcount | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ModuleBase::DecrementObjectCount
dev_langs:
- C++
helpviewer_keywords:
- DecrementObjectCount method
ms.assetid: a016fb07-a36e-40cd-bc7b-8f6e85e256e7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f45f52f2e979b76128be02dc7c3e931bd3b9d2c5
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42594588"
---
# <a name="modulebasedecrementobjectcount-method"></a>Metodo ModuleBase::DecrementObjectCount

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
virtual long DecrementObjectCount() = 0;
```

## <a name="return-value"></a>Valore restituito

Il conteggio prima dell'operazione di decremento.

## <a name="remarks"></a>Note

Quando viene implementato, decrementa il numero di oggetti registrati dal modulo.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe ModuleBase](../windows/modulebase-class.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)