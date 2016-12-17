---
title: "CRowset::Compare | Microsoft Docs"
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
  - "CRowset<TAccessor>.Compare"
  - "CRowset<TAccessor>::Compare"
  - "ATL.CRowset<TAccessor>.Compare"
  - "ATL::CRowset<TAccessor>::Compare"
  - "CRowset.Compare"
  - "ATL::CRowset::Compare"
  - "ATL.CRowset.Compare"
  - "CRowset::Compare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Compare (metodo)"
ms.assetid: a8117b40-7abd-4867-b0ba-eb9e9808204e
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::Compare
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Confronta due segnalibri utilizzando [IRowsetLocate::Compare](https://msdn.microsoft.com/en-us/library/ms709539.aspx).  
  
## Sintassi  
  
```  
  
      HRESULT Compare(   
   const CBookmarkBase& bookmark1,   
   const CBookmarkBase& bookmark2,   
   DBCOMPARE* pComparison    
) const throw( );  
```  
  
#### Parametri  
 *Bookmark1*  
 \[in\] il primo segnalibro da confrontare.  
  
 *Bookmark2*  
 \[in\] il secondo segnalibro da confrontare.  
  
 `pComparison`  
 \[out\] puntatore Al risultato del confronto.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetLocate`, che potrebbe non essere supportata in tutti i provider; in questo caso, il metodo restituisce **E\_NOINTERFACE**.  È inoltre necessario disporre **DBPROP\_IRowsetLocate** a `VARIANT_TRUE` chiamare **Apri** la tabella o il comando che contiene il rowset.  
  
 Per informazioni sull'utilizzo dei segnalibri in consumer, vedere [Utilizzo dei bookmark](../../data/oledb/using-bookmarks.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)