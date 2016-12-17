---
title: "Classe EventTargetArray | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::Details::EventTargetArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EventTargetArray (classe)"
ms.assetid: e3cadb7c-2160-4cbb-a2f8-c28733d1e96d
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe EventTargetArray
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class EventTargetArray : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<ClassicCom>, IUnknown>;  
```  
  
## <a name="remarks"></a>Note  
 Rappresenta una matrice dei gestori di eventi.  
  
 I gestori di eventi sono associati un [EventSource](../windows/eventsource-class.md) vengono memorizzate in un membro dati EventTargetArray protetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore eventtargetarray:: Eventtargetarray](../windows/eventtargetarray-eventtargetarray-constructor.md)|Inizializza una nuova istanza della classe EventTargetArray.|  
|[EventTargetArray:: ~ EventTargetArray distruttore](../windows/eventtargetarray-tilde-eventtargetarray-destructor.md)|Deinitializes la classe EventTargetArray corrente.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo eventtargetarray:: AddTail](../windows/eventtargetarray-addtail-method.md)|Aggiunge il gestore dell'evento specificato alla fine della matrice interna di gestori eventi.|  
|[Metodo eventtargetarray:: begin](../windows/eventtargetarray-begin-method.md)|Ottiene l'indirizzo del primo elemento della matrice interna di gestori eventi.|  
|[Metodo eventtargetarray:: end](../windows/eventtargetarray-end-method.md)|Ottiene l'indirizzo dell'ultimo elemento della matrice interna di gestori eventi.|  
|[Metodo eventtargetarray:: Length](../windows/eventtargetarray-length-method.md)|Ottiene il numero corrente di elementi nella matrice interna di gestori eventi.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `EventTargetArray`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)