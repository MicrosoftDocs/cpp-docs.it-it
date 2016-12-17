---
title: "CRowset::Update | Microsoft Docs"
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
  - "CRowset.Update"
  - "ATL.CRowset.Update"
  - "ATL.CRowset<TAccessor>.Update"
  - "ATL::CRowset<TAccessor>::Update"
  - "CRowset<TAccessor>::Update"
  - "CRowset::Update"
  - "CRowset<TAccessor>.Update"
  - "ATL::CRowset::Update"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Update (metodo)"
ms.assetid: cd5fedc8-2b85-4cb8-8c40-c79576316903
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::Update
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Trasmette tutte le modifiche in sospeso apportate alla riga corrente dall'ultima raccolta o chiamata di **Aggiorna** su.  
  
## Sintassi  
  
```  
  
      HRESULT Update(   
   DBCOUNTITEM* pcRows = NULL,   
   HROW* phRow = NULL,   
   DBROWSTATUS* pStatus = NULL    
) throw( );  
```  
  
#### Parametri  
 `pcRows`  
 \[out\] puntatore Al percorso in cui **Aggiorna** restituisce il numero di righe che ha tentato di aggiornare, se necessario.  
  
 `phRow`  
 \[out\] il puntatore Alla posizione in cui **Aggiorna** restituisce l'handle della riga ha tentato di aggiornare.  Nessuna handle viene restituito se `phRow` è null.  
  
 `pStatus`  
 \[out\] puntatore Al percorso in cui **Aggiorna** restituisce il valore dello stato della riga.  Il alcuno stato viene restituito se `pStatus` è null.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Trasmette tutte le modifiche in sospeso apportate successivamente alla riga corrente nella riga ultima volta in cui è stata recuperata o aggiornato stata \(utilizzando **Aggiorna** o di [UpdateAll](../../data/oledb/crowset-updateall.md)\).  In genere chiamato [SetData](../../data/oledb/crowset-setdata.md) per impostare i valori dei dati in colonne in una riga e quindi chiama **Aggiorna** per trasmettere le modifiche.  
  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetUpdate`, che potrebbe non essere supportata in tutti i provider; in questo caso, il metodo restituisce **E\_NOINTERFACE**.  È inoltre necessario disporre **DBPROP\_IRowsetUpdate** a `VARIANT_TRUE` chiamare **Apri** la tabella o il comando che contiene il rowset.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [IRowsetUpdate::Update](https://msdn.microsoft.com/en-us/library/ms719709.aspx)   
 [CRowset::UpdateAll](../../data/oledb/crowset-updateall.md)   
 [CRowset::SetData](../../data/oledb/crowset-setdata.md)