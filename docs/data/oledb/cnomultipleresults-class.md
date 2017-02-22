---
title: "Classe CNoMultipleResults | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CNoMultipleResults"
  - "ATL.CNoMultipleResults"
  - "ATL::CNoMultipleResults"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CNoMultipleResults (classe)"
ms.assetid: 343e77c4-b319-476e-b592-901ab9b2f34e
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe CNoMultipleResults
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato come argomento di modello \(*TMultiple*\) in [CCommand](../../data/oledb/ccommand-class.md) per creare un comando ottimizzato che gestisce un solo set di risultati.  
  
## Sintassi  
  
```  
class CNoMultipleResults  
```  
  
## Note  
 Invece se si desidera che un comando gestisca più set di risultati, utilizzare [CMultipleResults](../../data/oledb/cmultipleresults-class.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)