---
title: "BEGIN_SCHEMA_MAP | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BEGIN_SCHEMA_MAP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BEGIN_SCHEMA_MAP (macro)"
ms.assetid: 4e751023-35bc-4efd-9018-5448dd1ad751
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# BEGIN_SCHEMA_MAP
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica l'inizio di una mappa degli schemi.  
  
## Sintassi  
  
```  
  
      BEGIN_SCHEMA_MAP(  
   SchemaClass   
);  
```  
  
#### Parametri  
 *SchemaClass*  
 La classe che contiene la MAPPA.  In genere questa verrà la classe di sessione.  
  
## Note  
 Vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni sui rowset dello schema.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Macro per i modelli di provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [SCHEMA\_ENTRY](../../data/oledb/schema-entry.md)   
 [END\_SCHEMA\_MAP](../../data/oledb/end-schema-map.md)   
 [Classe IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md)