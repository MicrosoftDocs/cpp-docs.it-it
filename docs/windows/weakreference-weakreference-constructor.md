---
title: 'Costruttore WeakReference:: WeakReference | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::WeakReference::WeakReference
dev_langs:
- C++
helpviewer_keywords:
- WeakReference, constructor
ms.assetid: 4959a9d7-78ea-423d-a46b-50d010d29fff
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8e60b23a0c63ce1415765dd1f94863540849f975
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33891061"
---
# <a name="weakreferenceweakreference-constructor"></a>Costruttore WeakReference::WeakReference
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WeakReference();  
```  
  
## <a name="remarks"></a>Note  
 Inizializza una nuova istanza di [classe WeakReference](../windows/weakreference-class1.md).  
  
 Il puntatore di riferimento sicuro per l'oggetto WeakReference viene inizializzato su `nullptr`, il conteggio dei riferimenti forti viene inizializzato su 1.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
    
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)