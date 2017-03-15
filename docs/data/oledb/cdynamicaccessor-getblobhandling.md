---
title: "CDynamicAccessor::GetBlobHandling | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CDynamicAccessor.GetBlobHandling"
  - "CDynamicAccessor::GetBlobHandling"
  - "ATL::CDynamicAccessor::GetBlobHandling"
  - "GetBlobHandling"
  - "CDynamicAccessor.GetBlobHandling"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetBlobHandling (metodo)"
ms.assetid: bbc6dda6-e132-42a3-980d-24e455cbe456
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDynamicAccessor::GetBlobHandling
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera il valore di gestione dei BLOB della riga corrente.  
  
## Sintassi  
  
```  
  
const DBBLOBHANDLINGENUM GetBlobHandling( ) const;  
  
```  
  
## Note  
 Restituisce il valore `eBlobHandling` di gestione dei BLOB come impostare da [SetBlobHandling](../../data/oledb/cdynamicaccessor-setblobhandling.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)