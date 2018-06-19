---
title: Enumerazione AsyncStatusInternal | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::Details::AsyncStatusInternal
dev_langs:
- C++
helpviewer_keywords:
- AsyncStatusInternal enumeration
ms.assetid: b783923f-3f1c-4487-9384-be572cbc62d7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 150169442aa68395b4dc8a4f4c74951e877f18f5
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33863725"
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
 **Intestazione:** Async. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)