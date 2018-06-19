---
title: 'Metodo SRWLOCK:: Lockexclusive | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::SRWLock::LockExclusive
dev_langs:
- C++
helpviewer_keywords:
- LockExclusive method
ms.assetid: f361b672-fca6-45cc-a9b4-310cc0d23fdc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 36ae694365b58cb10666e5d8af67269b2c4f125c
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33889371"
---
# <a name="srwlocklockexclusive-method"></a>Metodo SRWLock::LockExclusive
Acquisisce un oggetto SRWLock in modalità esclusiva.  
  
## <a name="syntax"></a>Sintassi  
  
```  
SyncLockExclusive LockExclusive();  
  
static SyncLockExclusive LockExclusive(  
   _In_ SRWLOCK* lock  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `lock`  
 Puntatore a un oggetto SRWLock.  
  
## <a name="return-value"></a>Valore restituito  
 Oggetto SRWLock in modalità esclusiva.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SRWLock](../windows/srwlock-class.md)