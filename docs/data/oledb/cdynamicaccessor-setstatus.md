---
title: "CDynamicAccessor::SetStatus | Microsoft Docs"
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
  - "CDynamicAccessor::SetStatus"
  - "ATL::CDynamicAccessor::SetStatus"
  - "CDynamicAccessor.SetStatus"
  - "ATL.CDynamicAccessor.SetStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetStatus (metodo)"
ms.assetid: 6db82694-e87d-4bf8-a7e3-5765cf6abff9
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicAccessor::SetStatus
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta lo stato della colonna specificata.  
  
## Sintassi  
  
```  
  
      bool SetStatus(   
   DBORDINAL nColumn,   
   DBSTATUS status    
) throw( );  
bool SetStatus(   
   const CHAR* pColumnName,   
   DBSTATUS status    
) throw( );  
bool SetStatus(   
   const WCHAR* pColumnName,   
   DBSTATUS status    
) throw( );  
```  
  
#### Parametri  
 `nColumn`  
 \[in\] numero di colonne.  I numeri di colonne iniziano con 1.  Un valore 0 si riferisce alla colonna bookmark, se disponibile.  
  
 *status*  
 \[in\] lo stato della colonna.  Vedere [DBSTATUS](https://msdn.microsoft.com/en-us/library/ms722617.aspx)*in OLE DB Programmer's Reference* per ulteriori informazioni.  
  
 `pColumnName`  
 \[in\] puntatore A una stringa di caratteri che contiene il nome della colonna.  
  
## Valore restituito  
 Restituisce **true** se la condizione specificata la colonna è impostato correttamente.  In caso contrario, la funzione restituisce **false**.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)   
 [CDynamicAccessor::GetStatus](../../data/oledb/cdynamicaccessor-getstatus.md)