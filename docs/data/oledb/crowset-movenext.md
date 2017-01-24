---
title: "CRowset::MoveNext | Microsoft Docs"
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
  - "ATL.CRowset<TAccessor>.MoveNext"
  - "ATL.CRowset.MoveNext"
  - "ATL::CRowset<TAccessor>::MoveNext"
  - "CRowset<TAccessor>.MoveNext"
  - "CRowset.MoveNext"
  - "CRowset<TAccessor>::MoveNext"
  - "CRowset::MoveNext"
  - "ATL::CRowset::MoveNext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MoveNext (metodo)"
ms.assetid: 0df3288c-2bce-494f-99c0-6344b54a4adf
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::MoveNext
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sposta il cursore sul record successivo.  
  
## Sintassi  
  
```  
  
      HRESULT MoveNext( ) throw( );   
HRESULT MoveNext(   
   LONG lSkip,   
   bool bForward = true    
) throw( );  
```  
  
#### Parametri  
 `lSkip`  
 \[in\] Numero di righe da ignorare prima del recupero.  
  
 `bForward`  
 \[in\] Passare **true** per spostarsi in avanti verso il record successivo, **false** per spostarsi indietro.  
  
## Valore restituito  
 Un `HRESULT` standard.  Quando è stata raggiunta la fine del rowset, restituisce **DB\_S\_ENDOFROWSET**.  
  
## Note  
 Recupera la riga successiva nella sequenza dall'oggetto `CRowset`, ricordando la posizione precedente.  Se lo si desidera, è possibile scegliere di ignorare le righe fino a `lSkip` oppure è possibile spostarsi indietro.  
  
 Questo metodo richiede che siano state impostate le seguenti proprietà prima di chiamare **Open** sulla tabella o il comando che contiene il rowset:  
  
-   **DBPROP\_CANSCROLLBACKWARDS** deve essere `VARIANT_TRUE` se `lSkip` \< 0  
  
-   **DBPROP\_CANFETCHBACKWARDS** deve essere `VARIANT_TRUE` se `bForward` \= false  
  
 In caso contrario \(se `lSkip` \>\= 0 e `bForward` \= true\), non è necessario impostare alcuna proprietà aggiuntiva.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [CRowset::MoveFirst](../../data/oledb/crowset-movefirst.md)   
 [CRowset::MoveToBookmark](../../data/oledb/crowset-movetobookmark.md)   
 [CRowset::MovePrev](../../data/oledb/crowset-moveprev.md)   
 [CRowset::MoveLast](../../data/oledb/crowset-movelast.md)