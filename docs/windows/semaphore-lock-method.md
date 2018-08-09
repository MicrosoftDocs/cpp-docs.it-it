---
title: 'Metodo Semaphore:: lock | Microsoft Docs'
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
ms.openlocfilehash: 39f2fe48b1e7a1a7c6b875b988d861d5fb48698a
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642146"
---
# <a name="semaphorelock-method"></a>Metodo Semaphore::Lock
Attende fino a quando l'oggetto corrente, o la **semaforo** oggetto associato all'handle specificato, si trova nello stato segnalato oppure è trascorso l'intervallo di timeout specificato.  
  
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
  
### <a name="parameters"></a>Parametri  
 *millisecondi*  
 L'intervallo di timeout, espresso in millisecondi. Il valore predefinito è INFINITE, che è in attesa per un periodo illimitato.  
  
 *h*  
 Un handle a un **semaforo** oggetto.  
  
## <a name="return-value"></a>Valore restituito  
 Elemento `Details::SyncLockWithStatusT<HandleTraits::SemaphoreTraits>`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe Semaphore](../windows/semaphore-class.md)