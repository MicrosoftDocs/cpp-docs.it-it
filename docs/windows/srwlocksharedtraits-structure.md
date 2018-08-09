---
title: SRWLockSharedTraits (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockSharedTraits
dev_langs:
- C++
helpviewer_keywords:
- SRWLockSharedTraits structure
ms.assetid: 709cb51e-d70c-40b6-bdb4-d8eacf3af495
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c606a1a7d32a02442e767a31543a76a4dccf295e
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652474"
---
# <a name="srwlocksharedtraits-structure"></a>SRWLockSharedTraits (struttura)
Descrive le caratteristiche comuni del `SRWLock` classe in blocco in modalità condivisa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct SRWLockSharedTraits;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Type`|Sinonimo di un puntatore per il [SRWLOCK](../windows/srwlock-class.md) classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SRWLockSharedTraits::GetInvalidValue](../windows/srwlocksharedtraits-getinvalidvalue-method.md)|Recupera un' **SRWLockSharedTraits** oggetto che non è sempre valido.|  
|[Metodo SRWLockSharedTraits::Unlock](../windows/srwlocksharedtraits-unlock-method.md)|Rilascia il controllo esclusivo del specificato `SRWLock` oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `SRWLockSharedTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)