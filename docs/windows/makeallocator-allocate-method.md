---
title: 'Metodo makeallocator:: allocate | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::MakeAllocator::Allocate
dev_langs:
- C++
helpviewer_keywords:
- Allocate method
ms.assetid: a01997bc-4ff1-4ed0-9def-e4aaa15b0598
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c4dd68a3c678b7877db63167fd2c0d48a1daa7ad
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46411833"
---
# <a name="makeallocatorallocate-method"></a>Metodo MakeAllocator::Allocate

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
__forceinline void* Allocate();
```

## <a name="return-value"></a>Valore restituito

Se ha esito positivo, un puntatore alla memoria allocata; in caso contrario, **nullptr**.

## <a name="remarks"></a>Note

Alloca la memoria e lo associa all'oggetto corrente **MakeAllocator** oggetto.

Le dimensioni della memoria allocata sono la dimensione del tipo specificato dall'oggetto corrente **MakeAllocator** parametro di modello.

Uno sviluppatore deve eseguire l'override solo il **Allocate()** metodo per implementare un modello di allocazione di memoria diverse.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Classe MakeAllocator](../windows/makeallocator-class.md)<br/>
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)