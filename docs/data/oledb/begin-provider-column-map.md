---
title: "BEGIN_PROVIDER_COLUMN_MAP | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BEGIN_PROVIDER_COLUMN_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BEGIN_PROVIDER_COLUMN_MAP (macro)"
ms.assetid: 506b8c0f-6be9-4c97-ba81-c4b7f7d428fa
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# BEGIN_PROVIDER_COLUMN_MAP
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contrassegna l'inizio delle voci della mappa delle colonne del provider.  
  
## Sintassi  
  
```  
  
BEGIN_PROVIDER_COLUMN_MAP(  
theClass   
)  
  
```  
  
#### Parametri  
 `theClass`  
 \[in\] nome della classe questa mappa a cui appartiene.  
  
## Esempio  
 Di seguito viene illustrata la mappa delle colonne del provider di esempio:  
  
 [!code-cpp[NVC_OLEDB_Provider#4](../../data/oledb/codesnippet/CPP/begin-provider-column-map_1.h)]  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Macro per i modelli di provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)