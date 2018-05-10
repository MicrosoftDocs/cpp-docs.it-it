---
title: SyncLockT (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT
dev_langs:
- C++
helpviewer_keywords:
- SyncLockT class
ms.assetid: a967f6f7-3555-43d1-b210-2bb65d63d15e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e05a1be5d84db52573d3c3235936ecf82dde5894
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="synclockt-class"></a>SyncLockT (classe)
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename SyncTraits  
>  
class SyncLockT;  
```  
  
#### <a name="parameters"></a>Parametri  
 `SyncTraits`  
 Tipo che può diventare proprietari di una risorsa.  
  
## <a name="remarks"></a>Note  
 Rappresenta un tipo che può richiedere esclusivo o proprietà di una risorsa condivisa.  
  
 SyncLockT (classe) viene utilizzata, ad esempio, per facilitare l'implementazione di [SRWLock](../windows/srwlock-class.md) classe.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore SyncLockT::SyncLockT](../windows/synclockt-synclockt-constructor.md)|Inizializza una nuova istanza della classe SyncLockT.|  
|[Distruttore SyncLockT::~SyncLockT](../windows/synclockt-tilde-synclockt-destructor.md)|Deinizializza un'istanza della classe SyncLockT.|  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore SyncLockT::SyncLockT](../windows/synclockt-synclockt-constructor.md)|Inizializza una nuova istanza della classe SyncLockT.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SyncLockT::IsLocked](../windows/synclockt-islocked-method.md)|Indica se l'oggetto SyncLockT corrente appartiene a una risorsa. l'oggetto SyncLockT è *bloccato*.|  
|[Metodo SyncLockT::Unlock](../windows/synclockt-unlock-method.md)|Restituisce il controllo della risorsa contenuta nell'oggetto SyncLockT corrente, se presente.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati SyncLockT::sync_](../windows/synclockt-sync-data-member.md)|Contiene la risorsa sottostante rappresentata dalla classe SyncLockT.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `SyncLockT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)   
 [Classe SRWLock](../windows/srwlock-class.md)