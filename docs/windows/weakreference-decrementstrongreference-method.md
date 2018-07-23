---
title: 'Metodo WeakReference:: Decrementstrongreference | Documenti Microsoft'
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
ms.openlocfilehash: 7d5605670e05f91f9f1293c8bff0f4d74e458d25
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890336"
---
# <a name="weakreferencedecrementstrongreference-method"></a>Metodo WeakReference::DecrementStrongReference
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
ULONG DecrementStrongReference();  
```  
  
## <a name="remarks"></a>Note  
 Decrementa il riferimento sicuro conteggio dell'oggetto WeakReference corrente.  
  
 Quando il conteggio dei riferimenti forti diventa zero, il riferimento sicuro è impostato su `nullptr`.  
  
## <a name="return-value"></a>Valore restituito  
 Il conteggio dei riferimenti forti decrementato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
[WeakReference (classe)](../windows/weakreference-class1.md)  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)