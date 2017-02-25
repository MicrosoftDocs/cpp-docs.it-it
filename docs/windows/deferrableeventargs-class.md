---
title: "Classe DeferrableEventArgs | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: ece89267-7b72-40e1-8185-550c865b070a
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Classe DeferrableEventArgs
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Classe di modello usata per i tipi di argomento evento per rinvii.  
  
## Sintassi  
  
```cpp  
template <  
typename TEventArgsInterface,  
typename TEventArgsClass  
>  
class DeferrableEventArgs : public TEventArgsInterface  
  
```  
  
#### Parametri  
 `TEventArgsInterface`  
 Tipo di interfaccia che dichiara gli argomenti per un evento posticipato.  
  
 `TEventArgsClass`  
 Classe che implementa `TEventArgsInterface`.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo DeferrableEventArgs::GetDeferral](../windows/deferrableeventargs-getdeferral-method.md)|Ottiene un riferimento all'oggetto [Deferral](http://go.microsoft.com/fwlink/?LinkId=526520) che rappresenta un evento posticipato.|  
|[Metodo DeferrableEventArgs::InvokeAllFinished](../windows/deferrableeventargs-invokeallfinished-method.md)|Chiamato per indicare il completamento dell'elaborazione per la gestione di un evento posticipato.|  
  
## Note  
 Istanze di questa classe vengono passate ai gestori eventi per eventi posticipati.  I parametri del modello rappresentano un'interfaccia che definisce i dettagli degli argomenti dell'evento per un tipo specifico di evento posticipato e una classe che implementa tale interfaccia.  
  
 La classe viene visualizzata come primo argomento a un gestore eventi per un evento posticipato.  È possibile chiamare il metodo [GetDeferral](../windows/deferrableeventargs-getdeferral-method.md) per ottenere l'oggetto [Deferral](http://go.microsoft.com/fwlink/?LinkId=526520) da cui è possibile ottenere tutte le informazioni sull'evento posticipato.  Dopo aver completato la gestione degli eventi, è necessario chiamare Complete sull'oggetto Deferral.  È necessario quindi chiamare [InvokeAllFinished](../windows/deferrableeventargs-invokeallfinished-method.md) alla fine del metodo del gestore eventi, che assicura che il completamento di tutti gli eventi posticipati sia comunicato correttamente.  
  
## Requisiti  
 **Intestazione:** event.h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)