---
title: "Classe ITarget | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::ITarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ITarget (classe)"
ms.assetid: 5678db25-112a-4f72-be13-42e16b67c48b
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# Classe ITarget
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `ITarget,`  corrisponde all'interfaccia per tutti i blocchi di destinazione.  I blocchi di destinazione utilizzano messaggi a loro offerti da blocchi `ISource`.  
  
## Sintassi  
  
```  
template<  
   class _Type  
>  
class ITarget;  
```  
  
#### Parametri  
 `_Type`  
 Tipo di dati del payload nei messaggi accettati dal blocco di destinazione.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`filter_method`|La firma di qualsiasi metodo utilizzato dal blocco che restituisce un valore `bool` per determinare se deve essere accettato un messaggio offerto.|  
|`type`|Tipo alias per `_Type`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Distruttore ITarget::~ITarget](../Topic/ITarget::~ITarget%20Destructor.md)|Elimina l'oggetto `ITarget`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ITarget::propagate](../Topic/ITarget::propagate%20Method.md)|Quando sottoposto a override in una classe derivata, passa in modo asincrono un messaggio da un blocco di origine a quello di destinazione.|  
|[Metodo ITarget::send](../Topic/ITarget::send%20Method.md)|Quando sottoposto a override in una classe derivata, passa in modo sincrono un messaggio al blocco di destinazione.|  
|[Metodo ITarget::supports\_anonymous\_source](../Topic/ITarget::supports_anonymous_source%20Method.md)|Quando viene sottoposto a override in una classe derivata, restituisce true o false a seconda che il blocco dei messaggi accetti dei messaggi offerti da un'origine che non è collegata ad esso.  Se il metodo sottoposto a override restituisce `true`, la destinazione non può posticipare un messaggio offerto, poiché l'utilizzo di un messaggio posticipato in un secondo momento richiede all'origine di essere identificata nel registro di sistema del collegamento.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ITarget::link\_source](../Topic/ITarget::link_source%20Method.md)|Quando sottoposto a override in una classe derivata, collega un blocco di origine specificato al blocco `ITarget`.|  
|[Metodo ITarget::unlink\_source](../Topic/ITarget::unlink_source%20Method.md)|Quando sottoposto a override in una classe derivata, scollega un blocco di origine specificato dal blocco `ITarget`.|  
|[Metodo ITarget::unlink\_sources](../Topic/ITarget::unlink_sources%20Method.md)|Quando sottoposto a override in una classe derivata, scollega tutti i blocchi di origine dal blocco `ITarget`.|  
  
## Note  
 Per ulteriori informazioni, vedere [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Gerarchia di ereditarietà  
 `ITarget`  
  
## Requisiti  
 **Header:** agents.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe ISource](../../../parallel/concrt/reference/isource-class.md)