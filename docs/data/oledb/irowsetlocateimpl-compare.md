---
title: "IRowsetLocateImpl::Compare | Microsoft Docs"
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
  - "ATL.IRowsetLocateImpl.Compare"
  - "IRowsetLocateImpl::Compare"
  - "IRowsetLocateImpl.Compare"
  - "ATL::IRowsetLocateImpl::Compare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Compare (metodo)"
ms.assetid: 6f84052c-c68c-480a-982f-03748faa7d5d
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetLocateImpl::Compare
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Confronta due segnalibri.  
  
## Sintassi  
  
```  
  
      STDMETHOD ( Compare )(  
   HCHAPTER /* hReserved */,  
   DBBKMARK cbBookmark1,  
   const BYTE* pBookmark1,  
   DBBKMARK cbBookmark2,  
   const BYTE* pBookmark2,  
   DBCOMPARE* pComparison   
);  
```  
  
#### Parametri  
 Vedere [IRowsetLocate::Compare](https://msdn.microsoft.com/en-us/library/ms709539.aspx)*in OLE DB Programmer's Reference*.  
  
## Note  
 Uno dei bookmark può essere un OLE standard [segnalibro standard](https://msdn.microsoft.com/en-us/library/ms712954.aspx) DB\- definito \(**DBBMK\_FIRST**, **DBBMK\_LAST**, o **DBBMK\_INVALID**\).  Il valore restituito in `pComparison` indica la relazione tra i due segnalibri:  
  
-   **DBCOMPARE\_LT** \(`cbBookmark1` è prima di `cbBookmark2`\).  
  
-   **DBCOMPARE\_EQ** \(`cbBookmark1` è uguale a `cbBookmark2`\).  
  
-   **DBCOMPARE\_GT** \(`cbBookmark1` è rappresentata `cbBookmark2`\).  
  
-   **DBCOMPARE\_NE** \(segnalibri sono uguali e non ordinati.\)  
  
-   **DBCOMPARE\_NOTCOMPARABLE** \(i segnalibri non possono essere confrontati.\)  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetLocateImpl](../../data/oledb/irowsetlocateimpl-class.md)