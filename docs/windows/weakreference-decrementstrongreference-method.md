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
ms.openlocfilehash: 5c7e2161c5451fe82e12918f00e8cb2cde37d336
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642315"
---
# <a name="weakreferencedecrementstrongreference-method"></a>Metodo WeakReference::DecrementStrongReference
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
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