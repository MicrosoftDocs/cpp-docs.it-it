---
title: "CDynamicAccessor::GetLength | Microsoft Docs"
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
  - "CDynamicAccessor.GetLength"
  - "ATL.CDynamicAccessor.GetLength"
  - "CDynamicAccessor::GetLength"
  - "ATL::CDynamicAccessor::GetLength"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetLength (metodo)"
ms.assetid: 3ae8983b-b267-4cf9-bfc0-3e191f79e646
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicAccessor::GetLength
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera la lunghezza della colonna specificata.  
  
## Sintassi  
  
```  
  
      bool GetLength(   
   DBORDINAL nColumn,   
   DBLENGTH* pLength    
) const throw( );  
bool GetLength(   
   const CHAR* pColumnName,   
   DBLENGTH* pLength    
) const throw( );  
bool GetLength(   
   const WCHAR* pColumnName,   
   DBLENGTH* pLength    
) const throw( );  
```  
  
#### Parametri  
 `nColumn`  
 \[in\] Numero della colonna.  I numeri di colonna partono con 1.  Un valore 0 si riferisce alla colonna bookmark, se disponibile.  
  
 `pColumnName`  
 \[in\] Un puntatore ad una stringa di caratteri che contiene il nome della colonna.  
  
 `pLength`  
 \[out\] Un puntatore all'intero che contiene la lunghezza della colonna in byte.  
  
## Valore restituito  
 Restituisce **true** se la colonna specificata viene trovata.  In caso contrario, la funzione restituirà **false**.  
  
## Note  
 Le prime override accettano il numero di colonne e la seconda e la terza override accettano rispettivamente il nome della colonna in ANSI o in formato Unicode.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)   
 [CDynamicAccessor::SetLength](../../data/oledb/cdynamicaccessor-setlength.md)