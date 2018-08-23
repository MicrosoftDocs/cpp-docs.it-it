---
title: 'Metodo WeakReference:: Decrementstrongreference | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::WeakReference::DecrementStrongReference
dev_langs:
- C++
helpviewer_keywords:
- DecrementStrongReference method
ms.assetid: 97d70d9f-41b8-4f8d-a6fa-4137cc4f9029
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b3620a4b82aabb0058773f68938f545119f90791
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42605598"
---
# <a name="weakreferencedecrementstrongreference-method"></a>Metodo WeakReference::DecrementStrongReference

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
ULONG DecrementStrongReference();
```

## <a name="remarks"></a>Note

Decrementa il riferimento sicuro conteggio dell'oggetto corrente **WeakReference** oggetto.

Quando il conteggio dei riferimenti forti diventa zero, il riferimento sicuro è impostato su **nullptr**.

## <a name="return-value"></a>Valore restituito

Il conteggio dei riferimenti forti decrementato.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe WeakReference](../windows/weakreference-class1.md)  
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)