---
title: AsyncStatusInternal (enumerazione) | Microsoft Docs
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
ms.openlocfilehash: eeaef23178829163725b78685b3460913f53f2c2
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652799"
---
# <a name="asyncstatusinternal-enumeration"></a>AsyncStatusInternal (enumerazione)
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
enum AsyncStatusInternal;  
```  
  
## <a name="remarks"></a>Note  
 Specifica un mapping tra enumerazioni interne per lo stato delle operazioni asincrone e `Windows::Foundation::AsyncStatus` enumerazione.  
  
## <a name="members"></a>Membri  
 `_Created`  
 Equivalente a `::Windows::Foundation::AsyncStatus::Created`  
  
 `_Started`  
 Equivalente a `::Windows::Foundation::AsyncStatus::Started`  
  
 `_Completed`  
 Equivalente a `::Windows::Foundation::AsyncStatus::Completed`  
  
 `_Cancelled`  
 Equivalente a `::Windows::Foundation::AsyncStatus::Cancelled`  
  
 `_Error`  
 Equivalente a `::Windows::Foundation::AsyncStatus::Error`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)