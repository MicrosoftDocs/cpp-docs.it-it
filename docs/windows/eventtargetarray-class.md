---
title: EventTargetArray (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::EventTargetArray
dev_langs:
- C++
helpviewer_keywords:
- EventTargetArray class
ms.assetid: e3cadb7c-2160-4cbb-a2f8-c28733d1e96d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ac591a1d27792d3b825336ed46e38fa5d002fa73
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="eventtargetarray-class"></a>Classe EventTargetArray
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class EventTargetArray : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<ClassicCom>, IUnknown>;  
```  
  
## <a name="remarks"></a>Note  
 Rappresenta una matrice di gestori eventi.  
  
 I gestori di eventi che sono associati un [EventSource](../windows/eventsource-class.md) vengono memorizzate in un membro dati EventTargetArray protetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore EventTargetArray::EventTargetArray](../windows/eventtargetarray-eventtargetarray-constructor.md)|Inizializza una nuova istanza della classe EventTargetArray.|  
|[Distruttore EventTargetArray::~EventTargetArray](../windows/eventtargetarray-tilde-eventtargetarray-destructor.md)|Deinizializza classe EventTargetArray corrente.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo EventTargetArray::AddTail](../windows/eventtargetarray-addtail-method.md)|Aggiunge il gestore dell'evento specificato alla fine della matrice interna di gestori eventi.|  
|[Metodo EventTargetArray::Begin](../windows/eventtargetarray-begin-method.md)|Ottiene l'indirizzo del primo elemento della matrice interna di gestori eventi.|  
|[Metodo EventTargetArray::End](../windows/eventtargetarray-end-method.md)|Ottiene l'indirizzo dell'ultimo elemento della matrice interna di gestori eventi.|  
|[Metodo EventTargetArray::Length](../windows/eventtargetarray-length-method.md)|Ottiene il numero corrente di elementi nella matrice interna di gestori eventi.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `EventTargetArray`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)