---
title: 'Metodo synclockwithstatust:: IsLocked | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::IsLocked
dev_langs:
- C++
helpviewer_keywords:
- IsLocked method
ms.assetid: e1b75b7b-c145-471a-aa5d-71abf31f5990
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a564c4223b09d9295ff0ac3159e165944c4d885d
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="synclockwithstatustislocked-method"></a>Metodo SyncLockWithStatusT::IsLocked
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
bool IsLocked() const;  
```  
  
## <a name="remarks"></a>Note  
 Indica se l'oggetto SyncLockWithStatusT corrente appartiene a una risorsa. l'oggetto SyncLockWithStatusT è *bloccato*.  
  
## <a name="return-value"></a>Valore restituito  
 **true** se l'oggetto SyncLockWithStatusT è bloccata; in caso contrario, **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SyncLockWithStatusT](../windows/synclockwithstatust-class.md)