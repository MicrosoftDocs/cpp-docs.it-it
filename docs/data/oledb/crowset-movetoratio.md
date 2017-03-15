---
title: "CRowset::MoveToRatio | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "MoveToRatio"
  - "CRowset<TAccessor>::MoveToRatio"
  - "CRowset::MoveToRatio"
  - "CRowset<TAccessor>.MoveToRatio"
  - "ATL.CRowset.MoveToRatio"
  - "ATL::CRowset::MoveToRatio"
  - "CRowset.MoveToRatio"
  - "ATL.CRowset<TAccessor>.MoveToRatio"
  - "ATL::CRowset<TAccessor>::MoveToRatio"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MoveToRatio (metodo)"
ms.assetid: 1fa313bd-8fd1-4608-8e85-44993b97dd88
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# CRowset::MoveToRatio
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera le righe a partire da una posizione frazionare del rowset.  
  
## Sintassi  
  
```  
  
      HRESULT MoveToRatio(   
   DBCOUNTITEM nNumerator,   
   DBCOUNTITEM nDenominator,   
   bool bForward = true    
) throw( );  
```  
  
#### Parametri  
 `nNumerator`  
 \[in\] Il numeratore viene utilizzato per determinare il posizionale frazionario da cui recuperare i dati.  
  
 `nDenominator`  
 \[in\] Il denominatore viene utilizzato per determinare il posizionale frazionario da cui recuperare i dati.  
  
 `bForward`  
 \[in\] Indica se spostare avanti o indietro.  Il valore predefinito è forward.  
  
## Valore restituito  
 Un `HRESULT` standard.  
  
## Note  
 `MoveToRatio` recupera le righe che si conciliano approssimativamente alla seguente formula:  
  
 `( nNumerator *  RowsetSize ) / nDenominator`  
  
 dove `RowsetSize` è la dimensione del rowset, misurata righe.  La precisione della formula dipende dal provider specifico.  Per informazioni dettagliate, vedere [IRowsetScroll::GetRowsAtRatio](https://msdn.microsoft.com/en-us/library/ms709602.aspx).  
  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetScroll`, che potrebbe non essere supportata in tutti i provider; in questo caso, il metodo restituisce **E\_NOINTERFACE**.  È inoltre necessario impostare **DBPROP\_IRowsetScroll** a `VARIANT_TRUE` prima di chiamare **Apri** nella tabella o il comando che contiene il rowset.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)