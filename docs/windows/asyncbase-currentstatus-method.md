---
title: 'Metodo asyncbase:: currentStatus | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::CurrentStatus
dev_langs:
- C++
helpviewer_keywords:
- CurrentStatus method
ms.assetid: 26ee4c4a-6525-4a5f-b49c-3ca40c365eb6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 316dfea16aa129dcaff42424bef46305d2dd56b4
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39461429"
---
# <a name="asyncbasecurrentstatus-method"></a>Metodo AsyncBase::CurrentStatus
Recupera lo stato dell'operazione asincrona corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline void CurrentStatus(  
   Details::AsyncStatusInternal *status  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *status*  
 Il percorso in cui questa operazione archivia lo stato corrente.  
  
## <a name="remarks"></a>Note  
 Questa operazione è thread-safe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [AsyncBase (classe)](../windows/asyncbase-class.md)   
 [Enumerazione AsyncStatusInternal](../windows/asyncstatusinternal-enumeration.md)