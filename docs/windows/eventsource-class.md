---
title: Classe EventSource | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource
dev_langs:
- C++
helpviewer_keywords:
- EventSource class
ms.assetid: 91f1c072-6af4-44e6-b6d8-ac6d0c688dde
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 705260547d5a42b463d61b79c38592874f9dfa19
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="eventsource-class"></a>EventSource (classe)
Rappresenta un evento. Funzioni membro EventSource aggiungono, rimuovere e richiamano i gestori eventi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<  
   typename TDelegateInterface  
>  
class EventSource;  
```  
  
#### <a name="parameters"></a>Parametri  
 `TDelegateInterface`  
 L'interfaccia a un delegato che rappresenta un gestore eventi.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore EventSource::EventSource](../windows/eventsource-eventsource-constructor.md)|Inizializza una nuova istanza della classe EventSource.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo EventSource::Add](../windows/eventsource-add-method.md)|Aggiunge il gestore dell'evento rappresentato dall'interfaccia del delegato specificato all'insieme di gestori eventi per l'oggetto EventSource corrente.|  
|[Metodo EventSource::GetSize](../windows/eventsource-getsize-method.md)|Recupera il numero di gestori di eventi associato all'oggetto EventSource corrente|  
|[Metodo EventSource::InvokeAll](../windows/eventsource-invokeall-method.md)|Chiama ogni gestore dell'evento associato all'oggetto EventSource corrente usando gli argomenti e i tipi di argomenti specificati.|  
|[Metodo EventSource::Remove](../windows/eventsource-remove-method.md)|Elimina il gestore dell'evento rappresentato dal token di registrazione di eventi specificato dall'insieme di gestori di eventi associato all'oggetto EventSource corrente.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati EventSource::addRemoveLock_](../windows/eventsource-addremovelock-data-member.md)|Sincronizza l'accesso per il [targets](../windows/eventsource-targets-data-member.md) matrice durante l'aggiunta, rimozione o richiamare gestori eventi.|  
|[Membro dati EventSource::targets_](../windows/eventsource-targets-data-member.md)|Matrice di uno o più gestori di eventi.|  
|[Membro dati EventSource::targetsPointerLock_](../windows/eventsource-targetspointerlock-data-member.md)|Sincronizza l'accesso ai membri dati interni, anche se i gestori eventi per questo elemento EventSource vengono aggiunte, rimosse o richiamato.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `EventSource`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)