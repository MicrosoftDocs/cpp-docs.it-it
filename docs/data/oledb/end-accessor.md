---
title: "END_ACCESSOR | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "END_ACCESSOR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "END_ACCESSOR (macro)"
ms.assetid: 26f74167-68c4-4909-a474-73dc7ebc9542
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# END_ACCESSOR
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contrassegna la fine di una voce della funzione di accesso.  
  
## Sintassi  
  
```  
  
END_ACCESSOR( )  
  
```  
  
## Note  
 Per più funzioni di accesso per un rowset, è necessario specificare `BEGIN_ACCESSOR_MAP` e utilizzare la macro di `BEGIN_ACCESSOR` per ogni singola funzione di accesso.  La macro `BEGIN_ACCESSOR` viene completata con la macro `END_ACCESSOR`.  La macro `BEGIN_ACCESSOR_MAP` viene completata con la macro `END_ACCESSOR_MAP`.  
  
## Esempio  
 Vedere [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [END\_ACCESSOR\_MAP](../../data/oledb/end-accessor-map.md)