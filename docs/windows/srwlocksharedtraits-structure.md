---
title: SRWLockSharedTraits (struttura) | Documenti Microsoft
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
ms.openlocfilehash: 6a18edef3fa658608459244143a5e48738f0c3a9
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33889646"
---
# <a name="srwlocksharedtraits-structure"></a>SRWLockSharedTraits (struttura)
Descrive le caratteristiche comuni della classe SRWLock nel blocco in modalità condivisa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct SRWLockSharedTraits;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Type`|Sinonimo di un puntatore al [SRWLOCK](../windows/srwlock-class.md) classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SRWLockSharedTraits::GetInvalidValue](../windows/srwlocksharedtraits-getinvalidvalue-method.md)|Recupera un oggetto SRWLockSharedTraits che non è sempre valido.|  
|[Metodo SRWLockSharedTraits::Unlock](../windows/srwlocksharedtraits-unlock-method.md)|Restituisce il controllo esclusivo dell'oggetto SRWLock specificato.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `SRWLockSharedTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)