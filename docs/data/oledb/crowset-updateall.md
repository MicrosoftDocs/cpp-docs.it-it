---
title: "CRowset::UpdateAll | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowset::UpdateAll"
  - "ATL.CRowset.UpdateAll"
  - "CRowset<TAccessor>.UpdateAll"
  - "ATL.CRowset<TAccessor>.UpdateAll"
  - "UpdateAll"
  - "CRowset.UpdateAll"
  - "ATL::CRowset<TAccessor>::UpdateAll"
  - "CRowset<TAccessor>::UpdateAll"
  - "ATL::CRowset::UpdateAll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UpdateAll (metodo)"
ms.assetid: e5b26c0a-40fc-4c91-a293-5084951788e6
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CRowset::UpdateAll
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Trasmette tutte le modifiche in sospeso apportate a tutte le righe dall'ultima raccolta o chiamata di **Aggiorna** su.  
  
## Sintassi  
  
```  
  
      HRESULT UpdateAll(   
   DBCOUNTITEM* pcRows = NULL,   
   HROW** pphRow = NULL,   
   DBROWSTATUS** ppStatus = NULL    
) throw( );  
```  
  
#### Parametri  
 `pcRows`  
 \[out\] puntatore Al percorso in cui `UpdateAll` restituisce il numero di righe che ha tentato di aggiornare, se necessario.  
  
 `pphRow`  
 \[out\] il puntatore Alla memoria in cui `UpdateAll` restituisce l'handle della riga ha tentato di aggiornare.  Nessuna handle viene restituito se `pphRow` è null.  
  
 `ppStatus`  
 \[out\] puntatore Al percorso in cui **Aggiorna** restituisce il valore dello stato della riga.  Il alcuno stato viene restituito se `ppStatus` è null.  
  
## Note  
 Trasmette tutte le modifiche in sospeso apportate a tutte le righe poiché le righe per ultimo recuperate o aggiornato si sta utilizzando [Aggiorna](../../data/oledb/crowset-update.md) o di `UpdateAll`.  `UpdateAll` aggiornati a ogni riga che è stata modificata, indipendentemente dal fatto che si dispone ancora dell'handle per questi \(vedere `pphRow`\) o meno.  
  
 Ad esempio, se si utilizzasse **Inserimento** per inserire cinque righe in un rowset, è possibile chiamare **Aggiorna** cinque volte oppure chiamare una volta `UpdateAll` per tutte aggiornabili.  
  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetUpdate`, che potrebbe non essere supportata in tutti i provider; in questo caso, il metodo restituisce **E\_NOINTERFACE**.  È inoltre necessario disporre **DBPROP\_IRowsetUpdate** a `VARIANT_TRUE` chiamare **Apri** la tabella o il comando che contiene il rowset.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [IRowsetUpdate::Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx)   
 [CRowset::SetData](../../data/oledb/crowset-setdata.md)   
 [CRowset::Update](../../data/oledb/crowset-update.md)