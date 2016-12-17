---
title: "SCHEMA_ENTRY | Microsoft Docs"
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
  - "SCHEMA_ENTRY"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SCHEMA_ENTRY (macro)"
ms.assetid: e8bee479-80f3-417e-8f41-cdaddd49690c
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# SCHEMA_ENTRY
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Associa un GUID da una classe.  
  
## Sintassi  
  
```  
  
      SCHEMA_ENTRY(  
   guid,  
   rowsetClass   
);   
```  
  
#### Parametri  
 `guid`  
 Un GUID rowset dello schema.  Vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx)*in OLE DB Programmer's Reference* per un elenco dei rowset dello schema e dei relativi GUID.  
  
 *rowsetClass*  
 La classe che verrà creata per rappresentare il rowset dello schema.  
  
## Note  
 [IDBSchemaRowsetImpl](../../data/oledb/idbschemarowsetimpl-class.md) può quindi eseguire una query sulla mappa per un elenco di GUID, oppure per creare un rowset se viene fornito un GUID.  Il `IDBSchemaRowsetImpl` rowset dello schema viene creata è simile a `CRowsetImpl`standard \- classe derivata, a meno che deve fornire un metodo di **Esegui** che ha la seguente firma:  
  
 `HRESULT Execute (LONG* pcRowsAffected, ULONG cRestrictions,`  
  
 `const VARIANT* rgRestrictions)`  
  
 Questa funzione di **Esegui** popola i dati del rowset.  La creazione guidata progetto ATL viene, come descritto in [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx)*in OLE DB Programmer's Reference*, iniziali tre rowset dello schema nel progetto per ciascuno dei tre schemi obbligatori OLE DB:  
  
-   `DBSCHEMA_TABLES`  
  
-   **DBSCHEMA\_COLUMNS**  
  
-   **DBSCHEMA\_PROVIDER\_TYPES**  
  
 La procedura guidata vengono inoltre aggiunti tre voci corrispondenti nella mappa degli schemi.  Vedere [Creare un provider di modelli OLE DB](../../data/oledb/creating-an-ole-db-provider.md) per ulteriori informazioni su come utilizzare la procedura guidata per creare un provider.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Macro per i modelli di provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [BEGIN\_SCHEMA\_MAP](../../data/oledb/begin-schema-map.md)   
 [END\_SCHEMA\_MAP](../../data/oledb/end-schema-map.md)