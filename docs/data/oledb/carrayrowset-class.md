---
title: "Classe CArrayRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CArrayRowset<TAccessor>"
  - "ATL.CArrayRowset"
  - "CArrayRowset"
  - "ATL::CArrayRowset"
  - "ATL::CArrayRowset<TAccessor>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CArrayRowset (classe)"
ms.assetid: 511427e1-73ca-4fd8-9ba1-ae9463557cb6
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Classe CArrayRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'accesso agli elementi di un rowset tramite la sintassi delle matrici.  
  
## Sintassi  
  
```  
template < class TAccessor >  
class CArrayRowset :   
   public CVirtualBuffer <TAccessor>,   
   protected CBulkRowset <TAccessor>  
```  
  
#### Parametri  
 `TAccessor`  
 Il tipo di classe di funzione di accesso che il rowset da utilizzare.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[CArrayRowset](../../data/oledb/carrayrowset-carrayrowset.md)|Costruttore.|  
|[Snapshot](../../data/oledb/carrayrowset-snapshot.md)|Legge l'intero rowset in memoria.|  
  
### Operatori  
  
|||  
|-|-|  
|[Operatore &#91;&#93;](../../data/oledb/carrayrowset-operator.md)|Accede a un elemento del rowset.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[CArrayRowset::m\_nRowsRead](../../data/oledb/carrayrowset-m-nrowsread.md)|Il numero di righe già lettura.|  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [Classe CRowset](../../data/oledb/crowset-class.md)