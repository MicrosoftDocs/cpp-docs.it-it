---
title: 'Metodo SRWLOCK:: Lockexclusive | Microsoft Docs'
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
ms.openlocfilehash: 922220c9406f02568299dc60960b04a9820a7e95
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40010961"
---
# <a name="srwlocklockexclusive-method"></a>Metodo SRWLock::LockExclusive
Acquisisce un **SRWLock** oggetto in modalità esclusiva.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
SyncLockExclusive LockExclusive();  
  
static SyncLockExclusive LockExclusive(  
   _In_ SRWLOCK* lock  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *lock*  
 Puntatore a un **SRWLock** oggetto.  
  
## <a name="return-value"></a>Valore restituito  
 Un' **SRWLock** oggetto in modalità esclusiva.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Classe SRWLock](../windows/srwlock-class.md)