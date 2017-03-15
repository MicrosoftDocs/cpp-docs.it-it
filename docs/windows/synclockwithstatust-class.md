---
title: "Classe SyncLockWithStatusT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SyncLockWithStatusT (classe)"
ms.assetid: 4832fd93-0ac8-4168-9404-b43fefea7476
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Classe SyncLockWithStatusT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename SyncTraits  
>  
class SyncLockWithStatusT : public SyncLockT<SyncTraits>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `SyncTraits`  
 Un tipo che può richiedere esclusivo o proprietà di una risorsa condivisa.  
  
## <a name="remarks"></a>Note  
 Rappresenta un tipo che può richiedere esclusivo o proprietà di una risorsa condivisa.  
  
 La classe SyncLockWithStatusT viene utilizzata per implementare il [Mutex](../windows/mutex-class1.md) e [semaforo](../windows/semaphore-class.md) classi.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore synclockwithstatust:: Synclockwithstatust](../windows/synclockwithstatust-synclockwithstatust-constructor.md)|Inizializza una nuova istanza della classe SyncLockWithStatusT.|  
  
### <a name="protected-constructors"></a>Costruttori protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore synclockwithstatust:: Synclockwithstatust](../windows/synclockwithstatust-synclockwithstatust-constructor.md)|Inizializza una nuova istanza della classe SyncLockWithStatusT.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo synclockwithstatust:: GetStatus](../windows/synclockwithstatust-getstatus-method.md)|Recupera lo stato di attesa dell'oggetto SyncLockWithStatusT corrente.|  
|[Metodo synclockwithstatust:: IsLocked](../windows/synclockwithstatust-islocked-method.md)|Indica se l'oggetto corrente SyncLockWithStatusT proprietaria di una risorsa. Ciò significa che è l'oggetto SyncLockWithStatusT *bloccato*.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati SyncLockWithStatusT::status_](../windows/synclockwithstatust-status-data-member.md)|Contiene il risultato dell'oggetto sottostante attendere l'operazione dopo un'operazione di blocco su un oggetto basato sull'oggetto SyncLockWithStatusT corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `SyncLockT`  
  
 `SyncLockWithStatusT`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Spazio dei nomi:** Microsoft::WRL::Wrappers::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)