---
title: "CBulkRowset::MoveToRatio | Microsoft Docs"
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
  - "CBulkRowset.MoveToRatio"
  - "ATL::CBulkRowset::MoveToRatio"
  - "MoveToRatio"
  - "CBulkRowset::MoveToRatio"
  - "ATL.CBulkRowset<TAccessor>.MoveToRatio"
  - "ATL::CBulkRowset<TAccessor>::MoveToRatio"
  - "ATL.CBulkRowset.MoveToRatio"
  - "CBulkRowset<TAccessor>::MoveToRatio"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MoveToRatio (metodo)"
ms.assetid: 86be60f5-9341-44c1-8e1e-9174c082d0d5
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CBulkRowset::MoveToRatio
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le raccolte di righe da una posizione frazionaria del rowset.  
  
## Sintassi  
  
```  
  
      HRESULT MoveToRatio(  
   DBCOUNTITEM nNumerator,  
   DBCOUNTITEM nDenominator   
) throw( );  
```  
  
#### Parametri  
 `nNumerator`  
 \[in\] il numeratore utilizzato per determinare la posizione frazionaria da cui recuperare i dati.  
  
 `nDenominator`  
 \[in\] il denominatore utilizzato per determinare la posizione frazionaria da cui recuperare i dati.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 `MoveToRatio` recupera approssimativamente le righe nella seguente formula:  
  
 `( nNumerator *  RowsetSize ) / nDenominator`  
  
 Dove `RowsetSize` è la dimensione del rowset, misurata righe.  La precisione della formula dipende dal provider specifico.  Per informazioni dettagliate, vedere [IRowsetScroll::GetRowsAtRatio](https://msdn.microsoft.com/en-us/library/ms709602.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CBulkRowset](../../data/oledb/cbulkrowset-class.md)