---
title: 'Metodo SRWLOCK:: Trylockexclusive | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::TryLockExclusive
dev_langs:
- C++
helpviewer_keywords:
- TryLockExclusive method
ms.assetid: 661e8b19-3058-4511-8742-c9fbb90412c7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ebeaae465bd387d3939f9588be3c4a8e5eaf507b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="srwlocktrylockexclusive-method"></a>Metodo SRWLock::TryLockExclusive
Tenta di acquisire un oggetto SRWLock in modalità esclusiva per l'oggetto SRWLock corrente o specificata. Se la chiamata ha esito positivo, il thread chiamante ha la proprietà del blocco.  
  
## <a name="syntax"></a>Sintassi  
  
```  
SyncLockExclusive TryLockExclusive();  
  
static SyncLockExclusive TryLockExclusive(  
   _In_ SRWLOCK* lock  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `lock`  
 Puntatore a un oggetto SRWLock.  
  
## <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un oggetto SRWLock in modalità esclusiva e il thread chiamante diventa proprietario del blocco. In caso contrario, un SRWLock oggetto il cui stato non è valido.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SRWLock](../windows/srwlock-class.md)