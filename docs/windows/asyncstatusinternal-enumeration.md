---
title: Enumerazione AsyncStatusInternal | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: async/Microsoft::WRL::Details::AsyncStatusInternal
dev_langs: C++
helpviewer_keywords: AsyncStatusInternal enumeration
ms.assetid: b783923f-3f1c-4487-9384-be572cbc62d7
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bd277fecb0bc63d5ee823af98df8aa298b285964
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="asyncstatusinternal-enumeration"></a>AsyncStatusInternal (enumerazione)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
enum AsyncStatusInternal;  
```  
  
## <a name="remarks"></a>Note  
 Specifica un mapping tra enumerazioni interne per lo stato di operazioni asincrone e **Windows::Foundation::AsyncStatus** enumerazione.  
  
## <a name="members"></a>Membri  
 `_Created`  
 Equivale a:: Windows::Foundation::AsyncStatus:: Create  
  
 `_Started`  
 Equivale a:: Windows::Foundation::AsyncStatus:: avviato  
  
 `_Completed`  
 Equivale a:: Windows::Foundation::AsyncStatus:: completata  
  
 `_Cancelled`  
 Equivale a:: Windows::Foundation::AsyncStatus:: annullata  
  
 `_Error`  
 Equivale a:: Windows::Foundation::AsyncStatus::Error  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)