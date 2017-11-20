---
title: 'Metodo SRWLOCK:: Trylockshared | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockShared
dev_langs: C++
helpviewer_keywords: TryLockShared method
ms.assetid: 10cc198d-39a0-4d18-aa78-706744948668
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 375e4f583531ad1e4eb16b29307445f04d982aea
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="srwlocktrylockshared-method"></a>Metodo SRWLock::TryLockShared
Tenta di acquisire un oggetto SRWLock in modalità condivisa per l'oggetto SRWLock corrente o specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
WRL_NOTHROW SyncLockShared TryLockShared();  
WRL_NOTHROW static SyncLockShared TryLockShared(  
   _In_ SRWLOCK* lock  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `lock`  
 Puntatore a un oggetto SRWLock.  
  
## <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un oggetto SRWLock in modalità condivisa e il thread chiamante diventa proprietario del blocco. In caso contrario, un SRWLock oggetto il cui stato non è valido.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SRWLock](../windows/srwlock-class.md)