---
title: 'Metodo makeallocator:: allocate | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::MakeAllocator::Allocate
dev_langs: C++
helpviewer_keywords: Allocate method
ms.assetid: a01997bc-4ff1-4ed0-9def-e4aaa15b0598
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e93cd6b5b8b3489fc18e8b083c0fc59589ebd1d8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="makeallocatorallocate-method"></a>Metodo MakeAllocator::Allocate
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__forceinline void* Allocate();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un puntatore alla memoria allocata; in caso contrario, `nullptr`.  
  
## <a name="remarks"></a>Note  
 Alloca memoria e lo associa all'oggetto MakeAllocator corrente.  
  
 Le dimensioni della memoria allocata sono la dimensione del tipo specificato dal parametro di modello MakeAllocator corrente.  
  
 Lo sviluppatore dovrà eseguire l'override solo il metodo Allocate() per implementare un modello di allocazione di memoria diverse.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [MakeAllocator (classe)](../windows/makeallocator-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)