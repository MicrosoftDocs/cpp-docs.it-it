---
title: "Classe CAccessorBase | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CAccessorBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAccessorBase (classe)"
ms.assetid: 389b65be-11ca-4ae0-9290-60c621c4982b
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe CAccessorBase
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Tutte le funzioni di accesso nei modelli OLE DB derivano da questa classe.  `CAccessorBase` consente a un rowset di gestire di più funzioni di accesso.  Fornisce anche l'associazione sia per i parametri che per le colonne di output.  
  
## Sintassi  
  
```  
// Replace with syntax  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Chiudi](../../data/oledb/caccessorbase-close.md)|Chiusura delle funzioni di accesso.|  
|[GetHAccessor](../../data/oledb/caccessorbase-gethaccessor.md)|Recupera l'handle della funzione di accesso.|  
|[GetNumAccessors](../../data/oledb/caccessorbase-getnumaccessors.md)|Recupera il numero delle funzioni di accesso create dalla classe.|  
|[IsAutoAccessor](../../data/oledb/caccessorbase-isautoaccessor.md)|Verifica se la funzione di accesso specificata sia automatica o meno.|  
|[ReleaseAccessors](../../data/oledb/caccessorbase-releaseaccessors.md)|Rilascia le funzioni di accesso.|  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)