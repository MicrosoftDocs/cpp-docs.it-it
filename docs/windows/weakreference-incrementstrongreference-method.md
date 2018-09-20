---
title: 'Metodo WeakReference:: Incrementstrongreference | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::WeakReference::IncrementStrongReference
dev_langs:
- C++
helpviewer_keywords:
- IncrementStrongReference method
ms.assetid: d0232426-a8cb-48b4-99d4-165de2d66cb9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 345caec13a1e22bc3350f124a8b340282e3a8a42
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46438808"
---
# <a name="weakreferenceincrementstrongreference-method"></a>Metodo WeakReference::IncrementStrongReference

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
ULONG IncrementStrongReference();
```

## <a name="return-value"></a>Valore restituito

Il conteggio dei riferimenti forti incrementato.

## <a name="remarks"></a>Note

Incrementa il conteggio dei riferimenti forti dell'oggetto corrente **WeakReference** oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe WeakReference](../windows/weakreference-class1.md)<br/>
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)