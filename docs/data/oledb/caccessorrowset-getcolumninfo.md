---
title: "CAccessorRowset::GetColumnInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetColumnInfo"
  - "CAccessorRowset.GetColumnInfo"
  - "CAccessorRowset::GetColumnInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetColumnInfo (metodo)"
ms.assetid: 8ade2388-3c58-43cd-8ed6-499ee0531291
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CAccessorRowset::GetColumnInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ottiene le informazioni di colonna dal rowset apri.  
  
## Sintassi  
  
```  
  
      HRESULT GetColumnInfo(  
   DBORDINAL* pulColumns,  
   DBCOLUMNINFO** ppColumnInfo,  
   LPOLESTR* ppStrings   
) const;  
HRESULT GetColumnInfo(  
   DBORDINAL* pColumns,  
   DBCOLUMNINFO** ppColumnInfo   
);  
```  
  
#### Parametri  
 Vedere [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx)*in OLE DB Programmer's Reference*.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 L'utente deve liberare le informazioni di colonna e il buffer di stringa restituiti.  Utilizzare la seconda versione di questo metodo quando si utilizza [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) ed eseguire l'override delle associazioni.  
  
 Per ulteriori informazioni, vedere [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CAccessorRowset](../../data/oledb/caccessorrowset-class.md)