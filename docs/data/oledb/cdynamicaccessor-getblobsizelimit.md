---
title: "CDynamicAccessor::GetBlobSizeLimit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CDynamicAccessor::GetBlobSizeLimit"
  - "CDynamicAccessor.GetBlobSizeLimit"
  - "CDynamicAccessor::GetBlobSizeLimit"
  - "GetBlobSizeLimit"
  - "ATL.CDynamicAccessor.GetBlobSizeLimit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetBlobSizeLimit (metodo)"
ms.assetid: 7131e7c4-6e05-42f3-9d87-110301b672f2
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDynamicAccessor::GetBlobSizeLimit
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera il massimo della dimensione dei BLOB in byte.  
  
## Sintassi  
  
```  
  
const DBLENGTH GetBlobSizeLimit( ) const;  
  
```  
  
## Note  
 Restituisce il valore `nBlobSize` di gestione dei BLOB come impostare da [SetBlobSizeLimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)