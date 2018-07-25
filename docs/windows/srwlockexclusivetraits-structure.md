---
title: SRWLockExclusiveTraits (struttura) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::HandleTraits::SRWLockExclusiveTraits
dev_langs:
- C++
helpviewer_keywords:
- SRWLockExclusiveTraits structure
ms.assetid: 38a996ef-c2d7-4886-b413-a426ecee8f05
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6b5d56c4e0c31b56e5bdc92a9d209b58cd15ffb1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33889277"
---
# <a name="srwlockexclusivetraits-structure"></a>SRWLockExclusiveTraits (Struttura)
Descrive le caratteristiche comuni della classe SRWLock in modalità di blocco esclusivo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct SRWLockExclusiveTraits;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`Type`|Sinonimo di un puntatore al [SRWLOCK](../windows/srwlock-class.md) classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SRWLockExclusiveTraits::GetInvalidValue](../windows/srwlockexclusivetraits-getinvalidvalue-method.md)|Recupera un oggetto SRWLockExclusiveTraits che non è sempre valido.|  
|[Metodo SRWLockExclusiveTraits::Unlock](../windows/srwlockexclusivetraits-unlock-method.md)|Restituisce il controllo esclusivo dell'oggetto SRWLock specificato.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `SRWLockExclusiveTraits`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::HandleTraits](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)