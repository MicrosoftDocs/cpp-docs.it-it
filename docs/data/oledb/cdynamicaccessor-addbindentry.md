---
title: "CDynamicAccessor::AddBindEntry | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CDynamicAccessor::AddBindEntry"
  - "AddBindEntry"
  - "CDynamicAccessor.AddBindEntry"
  - "CDynamicAccessor::AddBindEntry"
  - "ATL.CDynamicAccessor.AddBindEntry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddBindEntry (metodo)"
ms.assetid: 8f139376-7db3-4193-ba3b-63fe938ffa79
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDynamicAccessor::AddBindEntry
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aggiunge una voce di associazione alle colonne di output.  
  
## Sintassi  
  
```  
  
      HRESULT AddBindEntry(   
   const DBCOLUMNINFO& info    
) throw( );  
```  
  
#### Parametri  
 `info`  
 \[in\] una struttura di **DBCOLUMNINFO** contenente le informazioni di colonna.  Vedere DBCOLUMNINFO "struttura" in [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx)*in OLE DB Programmer's Reference*.  
  
## Valore restituito  
 Uno dei valori standard di `HRESULT`.  
  
## Note  
 Utilizzare questo metodo quando si esegue l'override della funzione di accesso predefinita creata con `CDynamicAccessor` \(vedere [Come recuperare i dati?](../../data/oledb/fetching-data.md)\).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)