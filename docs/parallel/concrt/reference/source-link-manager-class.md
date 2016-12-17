---
title: "Classe source_link_manager | Microsoft Docs"
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
  - "agents/concurrency::source_link_manager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "source_link_manager (classe)"
ms.assetid: 287487cf-e0fe-4c35-aa3c-24f081d1ddae
caps.latest.revision: 17
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe source_link_manager
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

L'oggetto `source_link_manager` gestisce i collegamenti di rete dei blocchi della messaggistica nei blocchi `ISource`.  
  
## Sintassi  
  
```  
template<  
   class _LinkRegistry  
>  
class source_link_manager;  
```  
  
#### Parametri  
 `_LinkRegistry`  
 Registro di sistema del collegamento di rete.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`const_pointer`|Un tipo che fornisce un puntatore a un elemento `const` in un oggetto `source_link_manager`.|  
|`const_reference`|Un tipo che fornisce un riferimento all'elemento `const` archiviato in un oggetto `source_link_manager` per la lettura e l'esecuzione di operazioni const.|  
|`iterator`|Un tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento nell'oggetto `source_link_manager`.|  
|`type`|Tipo di registro del sistema di collegamento gestito dall'oggetto `source_link_manager`.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore source\_link\_manager::source\_link\_manager](../Topic/source_link_manager::source_link_manager%20Constructor.md)|Costruisce un oggetto `source_link_manager`.|  
|[Distruttore source\_link\_manager::~source\_link\_manager](../Topic/source_link_manager::~source_link_manager%20Destructor.md)|Elimina l'oggetto `source_link_manager`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo source\_link\_manager::add](../Topic/source_link_manager::add%20Method.md)|Aggiunge un collegamento di origine all'oggetto `source_link_manager`.|  
|[Metodo source\_link\_manager::begin](../Topic/source_link_manager::begin%20Method.md)|Consente di restituire un iteratore al primo elemento nell'oggetto `source_link_manager`.|  
|[Metodo source\_link\_manager::contains](../Topic/source_link_manager::contains%20Method.md)|Consente di cercare il `network_link_registry` all'interno di tale oggetto `source_link_manager` per un blocco specificato.|  
|[Metodo source\_link\_manager::count](../Topic/source_link_manager::count%20Method.md)|Conta il numero di blocchi collegati nell'oggetto `source_link_manager`.|  
|[Metodo source\_link\_manager::reference](../Topic/source_link_manager::reference%20Method.md)|Acquisisce un riferimento sull'oggetto `source_link_manager`.|  
|[Metodo source\_link\_manager::register\_target\_block](../Topic/source_link_manager::register_target_block%20Method.md)|Consente di registrare il blocco di destinazione contenente l'oggetto `source_link_manager`.|  
|[Metodo source\_link\_manager::release](../Topic/source_link_manager::release%20Method.md)|Consente di rilasciare il riferimento sull'oggetto `source_link_manager`.|  
|[Metodo source\_link\_manager::remove](../Topic/source_link_manager::remove%20Method.md)|Rimuove un collegamento dall'oggetto `source_link_manager`.|  
|[Metodo source\_link\_manager::set\_bound](../Topic/source_link_manager::set_bound%20Method.md)|Consente di impostare il numero massimo di collegamenti di origine da aggiungere all'oggetto `source_link_manager`.|  
  
## Note  
 Attualmente, i blocchi di origine sono con riferimenti contati.  Si tratta di un wrapper su un oggetto `network_link_registry` che consente l'accesso simultaneo ai collegamenti e offre la possibilità di fare riferimento ai collegamenti tramite callback.  I blocchi del messaggio \(`target_block` o `propagator_block`\) devono utilizzare questa classe per i collegamenti di origine.  
  
## Gerarchia di ereditarietà  
 `source_link_manager`  
  
## Requisiti  
 **Header:** agents.h  
  
 Concorrenza di**Spazio dei nomi:**  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Classe single\_link\_registry](../../../parallel/concrt/reference/single-link-registry-class.md)   
 [Classe multi\_link\_registry](../../../parallel/concrt/reference/multi-link-registry-class.md)