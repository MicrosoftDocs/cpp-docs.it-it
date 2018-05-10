---
title: SyncLockWithStatusT (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT
dev_langs:
- C++
helpviewer_keywords:
- SyncLockWithStatusT class
ms.assetid: 4832fd93-0ac8-4168-9404-b43fefea7476
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 51e5a66358890fc20731fb5cb657616484e19db4
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="synclockwithstatust-class"></a>Classe SyncLockWithStatusT
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename SyncTraits  
>  
class SyncLockWithStatusT : public SyncLockT<SyncTraits>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `SyncTraits`  
 Un tipo che può accettare esclusivo o proprietà di una risorsa condivisa.  
  
## <a name="remarks"></a>Note  
 Rappresenta un tipo che può richiedere esclusivo o proprietà di una risorsa condivisa.  
  
 SyncLockWithStatusT (classe) viene utilizzata per implementare il [Mutex](../windows/mutex-class1.md) e [semaforo](../windows/semaphore-class.md) classi.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore SyncLockWithStatusT::SyncLockWithStatusT](../windows/synclockwithstatust-synclockwithstatust-constructor.md)|Inizializza una nuova istanza della classe SyncLockWithStatusT.|  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore SyncLockWithStatusT::SyncLockWithStatusT](../windows/synclockwithstatust-synclockwithstatust-constructor.md)|Inizializza una nuova istanza della classe SyncLockWithStatusT.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SyncLockWithStatusT::GetStatus](../windows/synclockwithstatust-getstatus-method.md)|Recupera lo stato di attesa dell'oggetto SyncLockWithStatusT corrente.|  
|[Metodo SyncLockWithStatusT::IsLocked](../windows/synclockwithstatust-islocked-method.md)|Indica se l'oggetto SyncLockWithStatusT corrente appartiene a una risorsa. l'oggetto SyncLockWithStatusT è *bloccato*.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati SyncLockWithStatusT::status_](../windows/synclockwithstatust-status-data-member.md)|Contiene il risultato dell'oggetto sottostante attendere l'operazione dopo un'operazione di blocco su un oggetto basato sull'oggetto SyncLockWithStatusT corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `SyncLockT`  
  
 `SyncLockWithStatusT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)