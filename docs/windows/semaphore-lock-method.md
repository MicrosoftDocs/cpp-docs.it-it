---
title: 'Metodo Semaphore:: lock | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Semaphore::Lock
dev_langs:
- C++
helpviewer_keywords:
- Lock method
ms.assetid: 0eef6ede-dc7d-4f09-a6c8-2f7d39d65bfa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 80b4db212236da6c9fb320ff5a5e04f4e9f4a4c6
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33892475"
---
# <a name="semaphorelock-method"></a>Metodo Semaphore::Lock
Attende l'oggetto corrente o l'oggetto semaforo associato all'handle specificato, non è in stato segnalato o è trascorso l'intervallo di timeout specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
SyncLock Lock(  
   DWORD milliseconds = INFINITE  
);  
  
static SyncLock Lock(  
   HANDLE h,  
   DWORD milliseconds = INFINITE  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `milliseconds`  
 L'intervallo di timeout, espresso in millisecondi. Il valore predefinito è INFINITE, attende indefinitamente.  
  
 `h`  
 Un handle a un oggetto semaforo.  
  
## <a name="return-value"></a>Valore restituito  
 Un Details:: synclockwithstatust\<handletraits:: Semaphoretraits >  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
[Classe Semaphore](../windows/semaphore-class.md)
 