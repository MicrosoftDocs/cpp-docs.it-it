---
title: 'Metodo srwlocksharedtraits:: Unlock | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits::Unlock
dev_langs:
- C++
helpviewer_keywords:
- Unlock method
ms.assetid: 33cdead9-1900-4094-b18e-38fcf1a0bd28
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c0a42d1e1010f63436951beeadbd833e2a9d445d
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39650524"
---
# <a name="srwlocksharedtraitsunlock-method"></a>Metodo SRWLockSharedTraits::Unlock
Rilascia il controllo esclusivo del specificato `SRWLock` oggetto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline static void Unlock(  
   _In_ Type srwlock  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *SRWLOCK*  
 Un handle per un `SRWLock` oggetto.  
  
## <a name="return-value"></a>Valore restituito  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Struttura SRWLockSharedTraits](../windows/srwlocksharedtraits-structure.md)