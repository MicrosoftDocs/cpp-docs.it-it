---
title: "END_ACCESSOR_MAP | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "END_ACCESSOR_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "END_ACCESSOR_MAP (macro)"
ms.assetid: ede813c7-46c9-48a6-aa1a-8ebf38e92023
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# END_ACCESSOR_MAP
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contrassegna la fine delle voci della mappa della funzione di accesso.  
  
## Sintassi  
  
```  
  
END_ACCESSOR_MAP( )  
  
```  
  
## Note  
 Per le più funzioni di accesso per un rowset, è necessario specificare `BEGIN_ACCESSOR_MAP` e utilizzare la macro di `BEGIN_ACCESSOR` per ogni singola funzione di accesso.  La macro di `BEGIN_ACCESSOR` viene completata con la macro di `END_ACCESSOR`.  La macro di `BEGIN_ACCESSOR_MAP` viene completata con la macro di `END_ACCESSOR_MAP`.  
  
## Esempio  
 Vedere [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md)