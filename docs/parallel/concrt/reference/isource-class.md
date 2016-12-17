---
title: "Classe ISource | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::ISource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ISource (classe)"
ms.assetid: c7b73463-42f6-4dcc-801a-81379b12d35a
caps.latest.revision: 20
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe ISource
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe `ISource,`  corrisponde all'interfaccia per tutti i blocchi di origine.  I blocchi di origine propagano messaggi nei blocchi `ITarget`.  
  
## Sintassi  
  
```  
template<  
   class _Type  
>  
class ISource;  
```  
  
#### Parametri  
 `_Type`  
 Tipo di dati del payload nei messaggi prodotti dal blocco di destinazione.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`source_type`|Tipo alias per `_Type`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Distruttore ISource::~ISource](../Topic/ISource::~ISource%20Destructor.md)|Elimina l'oggetto `ISource`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ISource::accept](../Topic/ISource::accept%20Method.md)|Quando sottoposto a override in una classe derivata, accetta un messaggio proposto dal blocco `ISource`, trasferendo la proprietà al chiamante.|  
|[Metodo ISource::acquire\_ref](../Topic/ISource::acquire_ref%20Method.md)|Quando sottoposto a override in una classe derivata, acquisisce un conteggio dei riferimenti sul blocco `ISource` per evitare l'eliminazione.|  
|[Metodo ISource::consume](../Topic/ISource::consume%20Method.md)|Quando sottoposto a override in una classe derivata, utilizza un messaggio precedentemente proposto dal blocco `ISource` e riservato correttamente dalla destinazione, trasferendo la proprietà al chiamante.|  
|[Metodo ISource::link\_target](../Topic/ISource::link_target%20Method.md)|Quando sottoposto a override in una classe derivata, collega un blocco di destinazione al blocco `ISource`.|  
|[Metodo ISource::release](../Topic/ISource::release%20Method.md)|Quando sottoposto a override in una classe derivata, rilascia una precedente prenotazione corretta del messaggio.|  
|[Metodo ISource::release\_ref](../Topic/ISource::release_ref%20Method.md)|Quando sottoposto a override in una classe derivata, rilascia un conteggio dei riferimenti sul blocco `ISource`.|  
|[Metodo ISource::reserve](../Topic/ISource::reserve%20Method.md)|Quando sottoposto a override in una classe derivata, riserva un messaggio precedentemente proposto dal blocco `ISource`.|  
|[Metodo ISource::unlink\_target](../Topic/ISource::unlink_target%20Method.md)|Quando sottoposto a override in una classe derivata, scollega un blocco di destinazione dal blocco `ISource`, se risulta precedentemente collegato.|  
|[Metodo ISource::unlink\_targets](../Topic/ISource::unlink_targets%20Method.md)|Quando sottoposto a override in una classe derivata, scollega tutti i blocchi di destinazione dal blocco `ISource`.|  
  
## Note  
 Per ulteriori informazioni, vedere [Blocchi dei messaggi asincroni](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Gerarchia di ereditarietà  
 `ISource`  
  
## Requisiti  
 **Header:** agents.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe ITarget](../../../parallel/concrt/reference/itarget-class.md)