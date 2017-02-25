---
title: "CRowset::GetApproximatePosition | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CRowset::GetApproximatePosition"
  - "ATL::CRowset<TAccessor>::GetApproximatePosition"
  - "CRowset.GetApproximatePosition"
  - "CRowset::GetApproximatePosition"
  - "GetApproximatePosition"
  - "ATL.CRowset.GetApproximatePosition"
  - "CRowset<TAccessor>::GetApproximatePosition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetApproximatePosition (metodo)"
ms.assetid: 8f9ccd41-0590-468e-b202-6731d0f99d21
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CRowset::GetApproximatePosition
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce la posizione approssimativa di una riga corrispondente a un segnalibro.  
  
## Sintassi  
  
```  
  
      HRESULT GetApproximatePosition(   
   const CBookmarkBase* pBookmark,   
   DBCOUNTITEM* pPosition,   
   DBCOUNTITEM* pcRows    
) throw( );  
```  
  
#### Parametri  
 `pBookmark`  
 \[in\] puntatore A un segnalibro che identifica la riga di cui il percorso deve essere trovata.  **NULL** solo se il conteggio delle righe è obbligatorio.  
  
 *pPosition*  
 \[out\] puntatore Al percorso in cui `GetApproximatePosition` restituisce la posizione della riga.  **NULL** se la posizione non è necessaria.  
  
 `pcRows`  
 \[out\] puntatore Al percorso in cui `GetApproximatePosition` restituisce il numero complessivo di righe.  **NULL** se il conteggio delle righe non è obbligatorio.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questo metodo richiede l'interfaccia facoltativa `IRowsetScroll`, che potrebbe non essere supportata in tutti i provider; in questo caso, il metodo restituisce **E\_NOINTERFACE**.  È inoltre necessario disporre **DBPROP\_IRowsetScroll** a `VARIANT_TRUE` chiamare **Apri** la tabella o il comando che contiene il rowset.  
  
 Per informazioni sull'utilizzo dei segnalibri in consumer, vedere [Utilizzo dei bookmark](../../data/oledb/using-bookmarks.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [IRowsetScroll::GetApproximatePosition](https://msdn.microsoft.com/en-us/library/ms712901.aspx)