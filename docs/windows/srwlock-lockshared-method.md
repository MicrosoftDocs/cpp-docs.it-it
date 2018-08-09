---
title: 'Metodo SRWLOCK:: Lockshared | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockShared
dev_langs:
- C++
helpviewer_keywords:
- LockShared method
ms.assetid: 9d826a5c-b6a2-4430-ac85-d5753cbca889
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8dfc50ae0732471f8cb91b2c380d4c4772350f47
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652126"
---
# <a name="srwlocklockshared-method"></a>Metodo SRWLock::LockShared
Acquisisce un **SRWLock** oggetto in modalità condivisa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
SyncLockShared LockShared();  
  
static SyncLockShared LockShared(  
   _In_ SRWLOCK* lock  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *lock*  
 Puntatore a un **SRWLock** oggetto.  
  
## <a name="return-value"></a>Valore restituito  
 Un' **SRWLock** oggetto in modalità condivisa.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SRWLock](../windows/srwlock-class.md)