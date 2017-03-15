---
title: "CRowset::Undo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowset.Undo"
  - "ATL::CRowset<TAccessor>::Undo"
  - "CRowset<TAccessor>::Undo"
  - "ATL.CRowset.Undo"
  - "ATL.CRowset<TAccessor>.Undo"
  - "CRowset<TAccessor>.Undo"
  - "ATL::CRowset::Undo"
  - "CRowset::Undo"
  - "Undo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Undo (metodo)"
ms.assetid: 1ccd70e2-3931-41c4-893e-a05d0e295410
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CRowset::Undo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Annulla tutte le modifiche apportate ad una riga dall'ultima raccolta o [Aggiorna](../../data/oledb/crowset-update.md).  
  
## Sintassi  
  
```  
  
      HRESULT Undo(   
   DBCOUNTITEM* pcRows = NULL,   
   HROW* phRow = NULL,   
   DBROWSTATUS* pStatus = NULL    
) throw( );  
```  
  
#### Parametri  
 `pcRows`  
 \[out\] Un puntatore alla posizione in cui **Annulla** restituisce il numero di righe che si è cercato di annullare se necessario.  
  
 `phRow`  
 \[out\] Un puntatore alla posizione in cui **Annulla** restituisce una matrice di handle a tutte le righe le quali che si è cercato di annullare, se necessario.  
  
 `pStatus`  
 \[out\] Un puntatore al percorso in cui **Annulla** restituisce il valore dello stato della riga.  Nessuno stato viene restituito se `pStatus` è null.  
  
## Valore restituito  
 Un `HRESULT` standard.  
  
## Note  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetUpdate`, che potrebbe non essere supportata in tutti i provider; in questo caso, il metodo restituisce **E\_NOINTERFACE**.  È inoltre necessario impostare **DBPROP\_IRowsetScroll** a `VARIANT_TRUE` chiamare **Apri** nella tabella o il comando che contiene il rowset.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [IRowsetUpdate::Undo](https://msdn.microsoft.com/en-us/library/ms719655.aspx)