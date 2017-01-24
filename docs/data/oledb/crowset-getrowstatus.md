---
title: "CRowset::GetRowStatus | Microsoft Docs"
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
  - "CRowset.GetRowStatus"
  - "ATL.CRowset<TAccessor>.GetRowStatus"
  - "ATL::CRowset<TAccessor>::GetRowStatus"
  - "CRowset::GetRowStatus"
  - "ATL::CRowset::GetRowStatus"
  - "CRowset<TAccessor>::GetRowStatus"
  - "ATL.CRowset.GetRowStatus"
  - "CRowset<TAccessor>.GetRowStatus"
  - "GetRowStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetRowStatus (metodo)"
ms.assetid: 7a29a235-cb7e-40c1-92ce-5441751febee
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::GetRowStatus
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce lo stato di tutte le righe.  
  
## Sintassi  
  
```  
  
      HRESULT GetRowStatus(   
   DBPENDINGSTATUS* pStatus    
) const throw( );  
```  
  
#### Parametri  
 `pStatus`  
 \[out\] puntatore A una posizione `GetRowStatus` restituisce il valore dello stato.  Vedere DBPENDINGSTATUS in OLE DB Programmer's Reference.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetUpdate`, che potrebbe non essere supportata in tutti i provider; in questo caso, il metodo restituisce **E\_NOINTERFACE**.  È inoltre necessario disporre **DBPROP\_IRowsetUpdate** a `VARIANT_TRUE` chiamare **Apri** la tabella o il comando che contiene il rowset.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [IRowsetUpdate::GetRowStatus](https://msdn.microsoft.com/en-us/library/ms724377.aspx)