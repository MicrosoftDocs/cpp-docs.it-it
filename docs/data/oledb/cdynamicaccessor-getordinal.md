---
title: "CDynamicAccessor::GetOrdinal | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDynamicAccessor.GetOrdinal"
  - "ATL::CDynamicAccessor::GetOrdinal"
  - "CDynamicAccessor::GetOrdinal"
  - "ATL.CDynamicAccessor.GetOrdinal"
  - "GetOrdinal"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetOrdinal (metodo)"
ms.assetid: 2095b71c-a7a4-4034-89a1-77a78cb9633f
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDynamicAccessor::GetOrdinal
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera il numero di colonne dato il nome di una colonna.  
  
## Sintassi  
  
```  
  
      bool GetOrdinal(  
   const CHAR* pColumnName,  
   DBORDINAL* pOrdinal   
) const throw( );  
bool GetOrdinal(  
   const WCHAR* pColumnName,  
   DBORDINAL* pOrdinal   
) const throw( );  
```  
  
#### Parametri  
 `pColumnName`  
 \[in\] Un puntatore ad una stringa di caratteri che contiene il nome della colonna.  
  
 *pOrdinal*  
 \[out\] Un puntatore al numero di colonne.  
  
## Valore restituito  
 Restituisce **true** se viene trovata una colonna con il nome specificato.  In caso contrario, la funzione restituirà **false**.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)