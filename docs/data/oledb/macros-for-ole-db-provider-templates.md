---
title: "Macro per i modelli di provider OLE DB | Microsoft Docs"
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
  - "vc.templates.ole"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "macro, Modelli provider OLE DB"
  - "macro dei modelli di provider OLE DB"
  - "modelli del provider OLE DB, macro"
  - "macro dei modelli di provider OLE DB"
ms.assetid: 909482c5-64ab-4e52-84a9-1c07091db183
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Macro per i modelli di provider OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le macro del provider dei modelli OLE DB offrono funzionalità nelle categorie seguenti:  
  
### Macro di mapping di insiemi di proprietà  
  
|||  
|-|-|  
|[BEGIN\_PROPERTY\_SET](../../data/oledb/begin-property-set.md)|Contrassegna l'inizio di un insieme di proprietà.|  
|[BEGIN\_PROPERTY\_SET\_EX](../../data/oledb/begin-property-set-ex.md)|Contrassegna l'inizio di un insieme di proprietà.|  
|[BEGIN\_PROPSET\_MAP](../../data/oledb/begin-propset-map.md)|Contrassegna l'inizio di un set di proprietà che può essere nascosto o definito l'ambito del provider.|  
|[CHAIN\_PROPERTY\_SET](../../data/oledb/chain-property-set.md)|Concatena raccolta di gruppi di proprietà.|  
|[END\_PROPERTY\_SET](../../data/oledb/end-property-set.md)|Contrassegna la fine di una proprietà.|  
|[END\_PROPSET\_MAP](../../data/oledb/end-propset-map.md)|Contrassegna la fine di una mappa degli insiemi di proprietà.|  
|[PROPERTY\_INFORMATION\_ENTRY](../../data/oledb/property-info-entry.md)|Imposta una proprietà specifica in un insieme di proprietà su un valore predefinito.|  
|[PROPERTY\_INFORMATION\_ENTRY\_EX](../../data/oledb/property-info-entry-ex.md)|Imposta una proprietà specifica in un insieme di proprietà a un valore fornito dall'utente.  Consente inoltre di impostare i flag e le opzioni.|  
|[PROPERTY\_INFORMATION\_ENTRY\_VALUE](../../data/oledb/property-info-entry-value.md)|Imposta una proprietà specifica in un insieme di proprietà a un valore fornito dall'utente.|  
  
### Macro di mapping di colonne  
  
|||  
|-|-|  
|[BEGIN\_PROVIDER\_COLUMN\_MAP](../../data/oledb/begin-provider-column-map.md)|Contrassegna l'inizio delle voci della mappa delle colonne del provider.|  
|[END\_PROVIDER\_COLUMN\_MAP](../../data/oledb/end-provider-column-map.md)|Contrassegna la fine delle voci della mappa delle colonne del provider.|  
|[PROVIDER\_COLUMN\_ENTRY](../../data/oledb/provider-column-entry.md)|Rappresenta una determinata colonna supportati dal provider.|  
|[PROVIDER\_COLUMN\_ENTRY\_GN](../../data/oledb/provider-column-entry-gn.md)|Rappresenta una determinata colonna supportati dal provider.  È possibile specificare la dimensione della colonna, il tipo di dati, la precisione, la scala e il GUID rowset dello schema.|  
|[PROVIDER\_COLUMN\_ENTRY\_FIXED](../../data/oledb/provider-column-entry-fixed.md)|Rappresenta una determinata colonna supportati dal provider.  È possibile specificare il tipo di dati della colonna.|  
|[PROVIDER\_COLUMN\_ENTRY\_LENGTH](../../data/oledb/provider-column-entry-length.md)|Rappresenta una determinata colonna supportati dal provider.  È possibile specificare la dimensione della colonna.|  
|[PROVIDER\_COLUMN\_ENTRY\_STR](../../data/oledb/provider-column-entry-str.md)|Rappresenta una determinata colonna supportati dal provider.  Presuppone che il tipo di colonna è una stringa.|  
|[PROVIDER\_COLUMN\_ENTRY\_TYPE\_LENGTH](../../data/oledb/provider-column-entry-type-length.md)|Rappresenta una determinata colonna supportati dal provider.  Come PROVIDER\_COLUMN\_ENTRY\_LENGTH, ma consente inoltre di specificare il tipo di dati nonché la dimensione della colonna.|  
|[PROVIDER\_COLUMN\_ENTRY\_WSTR](../../data/oledb/provider-column-entry-wstr.md)|Rappresenta una determinata colonna supportati dal provider.  Presuppone che il tipo di colonna è una stringa di caratteri unicode.|  
  
### Macro di rowset dello schema  
  
|||  
|-|-|  
|[BEGIN\_SCHEMA\_MAP](../../data/oledb/begin-schema-map.md)|Contrassegna l'inizio di una mappa degli schemi.|  
|[SCHEMA\_ENTRY](../../data/oledb/schema-entry.md)|Associa un GUID da una classe.|  
|[END\_SCHEMA\_MAP](../../data/oledb/end-schema-map.md)|Contrassegna la fine di una mappa degli schemi.|  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)   
 [Riferimenti ai modelli del provider OLE DB](../../data/oledb/ole-db-provider-templates-reference.md)