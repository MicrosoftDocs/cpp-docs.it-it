---
title: "Classe CSimpleRow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CSimpleRow"
  - "ATL::CSimpleRow"
  - "ATL.CSimpleRow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleRow (classe)"
ms.assetid: 06d9621d-60cc-4508-8b0c-528d1b1a809b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe CSimpleRow
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione predefinita per gli handle di riga, il quale viene utilizzato nella classe [IRowsetImpl](../../data/oledb/irowsetimpl-class.md).  
  
## Sintassi  
  
```  
class CSimpleRow  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[AddRefRow](../../data/oledb/csimplerow-addrefrow.md)|Aggiunge un conteggio dei riferimenti a un handle di riga esistente.|  
|[Confronto](../../data/oledb/csimplerow-compare.md)|Confronta due righe per determinare se si riferiscono alla stessa istanza di riga.|  
|[CSimpleRow](../../data/oledb/csimplerow-csimplerow.md)|Costruttore.|  
|[ReleaseRow](../../data/oledb/csimplerow-releaserow.md)|Rilascia righe.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_dwRef](../../data/oledb/csimplerow-m-dwref.md)|Conteggio di riferimento ad un handle di riga esistente.|  
|[m\_iRowset](../../data/oledb/csimplerow-m-irowset.md)|Un indice al rowset che rappresenta il cursore.|  
  
## Note  
 Un handle di riga è logicamente un tag univoco per una riga di risultati.  `IRowsetImpl` crea un nuovo `CSimpleRow` per ogni riga richiesta in [IRowsetImpl::GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md).  `CSimpleRow` può anche essere sostituito con la propria implementazione dell'handle di riga, poiché è un argomento di modello predefinito a `IRowsetImpl`.  L'unico requisito per sostituire questa classe è di fornire alla classe di sostituzione un costruttore che accetta un solo parametro di tipo **LONG**.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)