---
title: 'Metodo modulebase:: Incrementobjectcount | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ModuleBase::IncrementObjectCount
dev_langs:
- C++
helpviewer_keywords:
- IncrementObjectCount method
ms.assetid: 2d70b472-684c-4bb7-8bab-09505cfcaf28
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f226018d1c3cae6dd3dbab34537d7ada50140a92
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42610292"
---
# <a name="modulebaseincrementobjectcount-method"></a>Metodo ModuleBase::IncrementObjectCount

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
virtual long IncrementObjectCount() = 0;
```

## <a name="return-value"></a>Valore restituito

Il conteggio prima dell'operazione di incremento.

## <a name="remarks"></a>Note

Quando implementato, incrementa il numero di oggetti registrati dal modulo.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe ModuleBase](../windows/modulebase-class.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)