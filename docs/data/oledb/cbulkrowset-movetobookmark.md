---
title: "CBulkRowset::MoveToBookmark | Microsoft Docs"
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
  - "CBulkRowset<TAccessor>::MoveToBookmark"
  - "CBulkRowset.MoveToBookmark"
  - "MoveToBookmark"
  - "ATL.CBulkRowset.MoveToBookmark"
  - "CBulkRowset::MoveToBookmark"
  - "ATL::CBulkRowset<TAccessor>::MoveToBookmark"
  - "ATL::CBulkRowset::MoveToBookmark"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MoveToBookmark (metodo)"
ms.assetid: 76aab025-819e-4ecd-ae0a-d8d3fb2d2099
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CBulkRowset::MoveToBookmark
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera la riga contrassegnata da un segnalibro o la riga in un offset specificato \(`lSkip`\) dal bookmark.  
  
## Sintassi  
  
```  
  
      HRESULT MoveToBookmark(  
   const CBookmarkBase& bookmark,  
   DBCOUNTITEM lSkip = 0   
) throw( );  
```  
  
#### Parametri  
 `bookmark`  
 \[in\] segnalibro A che contrassegna la posizione da cui si desidera recuperare i dati.  
  
 `lSkip`  
 \[in\] numero di numero di righe dal segnalibro nella riga di destinazione.  Se `lSkip` è zero, la prima riga viene recuperata la riga contrassegnata con il segnalibro.  Se `lSkip` è 1, la prima riga viene recuperata la riga dopo la riga contrassegnata con il segnalibro.  Se `lSkip` è a 1, la prima riga recuperata è la riga prima della riga contrassegnata con il segnalibro.  
  
## Valore restituito  
 Vedere [IRowset::GetData](https://msdn.microsoft.com/en-us/library/ms716988.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CBulkRowset](../../data/oledb/cbulkrowset-class.md)