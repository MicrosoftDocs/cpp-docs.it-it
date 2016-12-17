---
title: "CDynamicAccessor::GetColumnInfo | Microsoft Docs"
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
  - "GetColumnInfo"
  - "ATL.CDynamicAccessor.GetColumnInfo"
  - "ATL::CDynamicAccessor::GetColumnInfo"
  - "CDynamicAccessor.GetColumnInfo"
  - "CDynamicAccessor::GetColumnInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetColumnInfo (metodo)"
ms.assetid: 7f2102ea-b7cc-4714-812f-3ca2857f4b9a
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicAccessor::GetColumnInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce i metadati della colonna necessari per la maggior parte degli utenti.  
  
## Sintassi  
  
```  
  
      HRESULT GetColumnInfo(   
   IRowset* pRowset,   
   DBORDINAL* pColumns,   
   DBCOLUMNINFO** ppColumnInfo,   
   OLECHAR** ppStringsBuffer    
) throw( );  
```  
  
#### Parametri  
 `pRowset`  
 \[in\] puntatore All'interfaccia di [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx).  
  
 *pColumns*  
 \[out\] puntatore Alla memoria in cui viene utilizzata per restituire il numero di colonne del rowset; questo numero include la colonna bookmark, se presente.  
  
 *ppColumnInfo*  
 \[out\] puntatore Alla memoria in cui restituire una matrice di **DBCOLUMNINFO** struttura.  Vedere DBCOLUMNINFO "struttura" in [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx)*in OLE DB Programmer's Reference*.  
  
 `ppStringsBuffer`  
 \[out\] puntatore Alla memoria in cui per restituire un puntatore all'archiviazione per i valori stringa \(nomi utilizzati in *columnid* o per *pwszName*\) in un unico blocco di allocazione.  
  
## Valore restituito  
 Uno dei valori standard di `HRESULT`.  
  
## Note  
 Vedere [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx)*in OLE DB Programmer's Reference* per informazioni sui tipi di dati **DBORDINAL**, **DBCOLUMNINFO** e **OLECHAR**.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)