---
title: "Classe CEnumeratorAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CEnumeratorAccessor"
  - "CEnumeratorAccessor"
  - "ATL.CEnumeratorAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CEnumeratorAccessor (classe)"
ms.assetid: 21e8e7ea-3511-4afe-b33f-d520f4ff82bb
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Classe CEnumeratorAccessor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato da [CEnumerator](../../data/oledb/cenumerator-class.md) per accedere ai dati del rowset enumeratori.  
  
## Sintassi  
  
```  
class CEnumeratorAccessor  
```  
  
## Membri  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_bIsParent](../../data/oledb/cenumeratoraccessor-m-bisparent.md)|Una variabile che indica se l'enumeratore è un enumeratore padre, se la riga è un enumeratore.|  
|[m\_nType](../../data/oledb/cenumeratoraccessor-m-ntype.md)|Una variabile che indica se la riga descrive un'origine dati o un enumeratore.|  
|[m\_szDescription](../../data/oledb/cenumeratoraccessor-m-szdescription.md)|La descrizione dell'origine dati o dell'enumeratore.|  
|[m\_szName](../../data/oledb/cenumeratoraccessor-m-szname.md)|Il nome dell'origine dati o dell'enumeratore.|  
|[m\_szParseName](../../data/oledb/cenumeratoraccessor-m-szparsename.md)|Stringa da passare a [IParseDisplayName](http://msdn.microsoft.com/library/windows/desktop/ms680604) per ottenere un moniker per l'origine dati o enumeratore.|  
  
## Note  
 Questo rowset è costituito dalle origini dati e gli enumeratori visibili dall'enumeratore corrente.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)