---
title: "Classe CEnumerator | Microsoft Docs"
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
  - "CEnumerator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CEnumerator (classe)"
ms.assetid: 25805f1b-26e3-402f-af83-1b5fe5ddebf7
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CEnumerator
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizza un oggetto enumerator OLE DB, che espone l'interfaccia [ISourcesRowset](https://msdn.microsoft.com/en-us/library/ms715969.aspx) per restituire un rowset che descrive tutti gli origini dati ed enumeratori.  
  
## Sintassi  
  
```  
class CEnumerator :   
   public CAccessorRowset< CAccessor <CEnumeratorAccessor >>  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Find](../../data/oledb/cenumerator-find.md)|Ricerca tramite i provider disponibili \(origini dati\) a cercare uno con il nome specificato.|  
|[GetMoniker](../../data/oledb/cenumerator-getmoniker.md)|Recupera l'interfaccia `IMoniker` per il record corrente.|  
|[Aprire](../../data/oledb/cenumerator-open.md)|Apre l'enumeratore.|  
  
## Note  
 È possibile recuperare indirettamente i dati **ISourcesRowset** da questa classe.  
  
## Requisiti  
 **Intestazione:**atldbcli.h  
  
## Vedere anche  
 [DBViewer](../../top/visual-cpp-samples.md)   
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)