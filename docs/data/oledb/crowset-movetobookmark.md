---
title: "CRowset::MoveToBookmark | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CRowset::MoveToBookmark"
  - "ATL::CRowset<TAccessor>::MoveToBookmark"
  - "ATL.CRowset.MoveToBookmark"
  - "ATL.CRowset<TAccessor>.MoveToBookmark"
  - "MoveToBookmark"
  - "CRowset::MoveToBookmark"
  - "CRowset.MoveToBookmark"
  - "CRowset<TAccessor>::MoveToBookmark"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MoveToBookmark (metodo)"
ms.assetid: 90124723-8daf-4692-ae2f-0db26b5db920
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CRowset::MoveToBookmark
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera la riga contrassegnata da un segnalibro o la riga in un offset specificato \(`lSkip`\) dal bookmark.  
  
## Sintassi  
  
```  
  
      HRESULT MoveToBookmark(   
   const CBookmarkBase& bookmark,   
   LONG lSkip = 0    
) throw( );  
```  
  
#### Parametri  
 `bookmark`  
 \[in\] segnalibro A che contrassegna la posizione da cui si desidera recuperare i dati.  
  
 `lSkip`  
 \[in\] numero di numero di righe dal segnalibro nella riga di destinazione.  Se `lSkip` è zero, la prima riga viene recuperata la riga contrassegnata con il segnalibro.  Se `lSkip` è 1, la prima riga viene recuperata la riga dopo la riga contrassegnata con il segnalibro.  Se `lSkip` è a 1, la prima riga recuperata è la riga prima della riga contrassegnata con il segnalibro.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetLocate`, che potrebbe non essere supportata in tutti i provider; in questo caso, il metodo restituisce **E\_NOINTERFACE**.  È inoltre necessario disporre **DBPROP\_IRowsetLocate** a `VARIANT_TRUE` e a **DBPROP\_CANFETCHBACKWARDS** insieme a `VARIANT_TRUE` chiamare **Apri** la tabella o il comando che contiene il rowset.  
  
 Per informazioni sull'utilizzo dei segnalibri in consumer, vedere [Utilizzo dei bookmark](../../data/oledb/using-bookmarks.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [CRowset::MoveNext](../../data/oledb/crowset-movenext.md)   
 [CRowset::MoveFirst](../../data/oledb/crowset-movefirst.md)   
 [IRowsetLocate::GetRowsAt](https://msdn.microsoft.com/en-us/library/ms723031.aspx)   
 [CRowset::MovePrev](../../data/oledb/crowset-moveprev.md)   
 [CRowset::MoveLast](../../data/oledb/crowset-movelast.md)