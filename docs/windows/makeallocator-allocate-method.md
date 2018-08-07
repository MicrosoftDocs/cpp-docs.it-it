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
ms.openlocfilehash: 06f8db4c713feb69e0037d10879383411ea07007
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39606263"
---
# <a name="makeallocatorallocate-method"></a>Metodo MakeAllocator::Allocate
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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
 [MakeAllocator (classe)](../windows/makeallocator-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)