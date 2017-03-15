---
title: "CDynamicAccessor::GetColumnFlags | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDynamicAccessor.GetColumnFlags"
  - "ATL::CDynamicAccessor::GetColumnFlags"
  - "ATL.CDynamicAccessor.GetColumnFlags"
  - "CDynamicAccessor::GetColumnFlags"
  - "GetColumnFlags"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetColumnFlags (metodo)"
ms.assetid: b2ba2f3a-2c61-4a49-abfb-75823908ccf4
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDynamicAccessor::GetColumnFlags
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera le caratteristiche delle colonne.  
  
## Sintassi  
  
```  
  
      bool GetColumnFlags(   
   DBORDINAL nColumn,   
   DBCOLUMNFLAGS* pFlags    
) const throw( );  
```  
  
#### Parametri  
 `nColumn`  
 \[in\] numero di colonne.  I numeri di colonne iniziano con 1.  Un valore 0 si riferisce alla colonna bookmark, se disponibile.  
  
 `pFlags`  
 \[out\] puntatore A una maschera di bit che vengono descritte le caratteristiche delle colonne.  Vedere "tipo enumerato DBCOLUMNFLAGS" in [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx)*in OLE DB Programmer's Reference*.  
  
## Valore restituito  
 Restituisce **true** se le caratteristiche delle colonne recuperate correttamente.  Negli altri casi, viene restituito **false**.  
  
## Note  
 Il numero di colonne è sottoposto a offset di uno.  La colonna zero è un caso speciale; è il segnalibro se disponibile.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)