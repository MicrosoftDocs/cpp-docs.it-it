---
title: "CHAIN_PROPERTY_SET | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CHAIN_PROPERTY_SET"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHAIN_PROPERTY_SET (macro)"
ms.assetid: 2bcf6d7d-f4e5-480d-9140-1e32a0994c94
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CHAIN_PROPERTY_SET
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa macro concatena di gruppi di proprietà.  
  
## Sintassi  
  
```  
  
CHAIN_PROPERTY_SET(  
ChainClass   
)  
  
```  
  
#### Parametri  
 *ChainClass*  
 \[in\] Il nome della classe per cui concatenare le proprietà.  Si tratta di una classe generata dalla creazione guidata progetto ATL che già contiene una mappa \(ad esempio una sessione, un comando, oppure una classe oggetto origine dati\).  
  
## Note  
 È possibile concatenare un insieme di proprietà da un'altra classe alla propria classe, quindi accedere alle proprietà direttamente dalla propria classe.  
  
> [!CAUTION]
>  Utilizzare questa macro sporadicamente.  L'utilizzo improprio può far sì che un consumer non superi i test di conformità OLE DB.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Macro per i modelli di provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)