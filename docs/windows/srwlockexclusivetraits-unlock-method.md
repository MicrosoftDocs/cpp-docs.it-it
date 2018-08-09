---
title: 'Metodo srwlockexclusivetraits:: Unlock | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits::Unlock
dev_langs:
- C++
helpviewer_keywords:
- Unlock method
ms.assetid: 7fd6b0fb-8b88-4a43-aa74-0d7fe47a0da6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c1863acc925bf66aa10435f2dadd9d9d73a43300
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39648022"
---
# <a name="srwlockexclusivetraitsunlock-method"></a>Metodo SRWLockExclusiveTraits::Unlock
Rilascia il controllo esclusivo del specificato `SRWLock` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline static void Unlock(  
   _In_ Type srwlock  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *SRWLOCK*  
 Handle per un `SRWLock` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura SRWLockExclusiveTraits](../windows/srwlockexclusivetraits-structure.md)