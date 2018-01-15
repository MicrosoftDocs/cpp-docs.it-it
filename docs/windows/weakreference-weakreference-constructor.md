---
title: 'Costruttore WeakReference:: WeakReference | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::WeakReference::WeakReference
dev_langs: C++
helpviewer_keywords: WeakReference, constructor
ms.assetid: 4959a9d7-78ea-423d-a46b-50d010d29fff
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8608c787b0b5b07c4e619443e751d21d14b0a811
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
    
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)