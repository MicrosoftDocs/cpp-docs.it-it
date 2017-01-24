---
title: "CBookmark::SetBookmark | Microsoft Docs"
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
  - "CBookmark<0>::SetBookmark"
  - "ATL.CBookmark<0>.SetBookmark"
  - "CBookmark<0>.SetBookmark"
  - "SetBookmark"
  - "ATL::CBookmark::SetBookmark"
  - "ATL::CBookmark<0>::SetBookmark"
  - "CBookmark.SetBookmark"
  - "ATL.CBookmark.SetBookmark"
  - "CBookmark::SetBookmark"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetBookmark (metodo)"
ms.assetid: bcd26831-6045-4e69-96d6-abf8037fc18d
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CBookmark::SetBookmark
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Copia il valore del segnalibro fatto riferimento da `pBuffer` nel buffer di `CBookmark` e impostare le dimensioni del buffer su `nSize`.  
  
## Sintassi  
  
```  
  
      HRESULT SetBookmark(  
   DBLENGTH nSize,  
   BYTE* pBuffer   
) throw( );  
```  
  
#### Parametri  
 *nSize*  
 \[in\] dimensione del buffer del segnalibro.  
  
 `pBuffer`  
 \[in\] puntatore A matrice di byte che contiene il valore del segnalibro.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questa funzione è disponibile solo in **CBookmark\<0\>**.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CBookmark](../../data/oledb/cbookmark-class.md)