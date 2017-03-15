---
title: "Classe EventSource | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "event/Microsoft::WRL::EventSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "EventSource (classe)"
ms.assetid: 91f1c072-6af4-44e6-b6d8-ac6d0c688dde
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Classe EventSource
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Rappresenta un evento.  Le funzioni membro EventSource aggiungono, rimuovono ed invocano i gestori di eventi.  
  
## Sintassi  
  
```  
template<  
   typename TDelegateInterface  
>  
class EventSource;  
```  
  
#### Parametri  
 `TDelegateInterface`  
 L'interfaccia a un delegato che rappresenta un gestore eventi.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore EventSource::EventSource](../windows/eventsource-eventsource-constructor.md)|Inizializza una nuova istanza della classe EventSource.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo EventSource::Add](../windows/eventsource-add-method.md)|Aggiunge il gestore eventi rappresentato dall'interfaccia specificata del delegato all'insieme di gestori eventi per l'oggetto corrente di EventSource.|  
|[Metodo EventSource::GetSize](../windows/eventsource-getsize-method.md)|Recupera il numero dei gestori di evento associati all'oggetto corrente di EventSource|  
|[Metodo EventSource::InvokeAll](../windows/eventsource-invokeall-method.md)|Chiama ogni gestore eventi associato all'oggetto corrente di EventSource utilizzando l'argomento secificato e altri argomenti.|  
|[Metodo EventSource::Remove](../windows/eventsource-remove-method.md)|Elimina il gestore eventi rappresentato dal token specificato di registrazione di eventi dal set di gestori eventi associati all'oggetto corrente di EventSource.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati EventSource::addRemoveLock\_](../windows/eventsource-addremovelock-data-member.md)|Sincronizza l'accesso all'array [targets\_](../windows/eventsource-targets-data-member.md) nel caso di aggiunta, rimozione, o invocazione dei gestore eventi.|  
|[Membro dati EventSource::targets\_](../windows/eventsource-targets-data-member.md)|Un array di uno o più gestori di eventi.|  
|[Membro dati EventSource::targetsPointerLock\_](../windows/eventsource-targetspointerlock-data-member.md)|Sincronizza l'accesso ai membri di dati interni anche mentre i gestori eventi per questo EventSource aggiungono, rimuovono, oppure di richiamano.|  
  
## Gerarchia di ereditarietà  
 `EventSource`  
  
## Requisiti  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)