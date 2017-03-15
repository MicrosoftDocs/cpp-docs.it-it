---
title: "Macro e funzioni globali per modelli consumer OLE DB | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "macro, modello consumer OLE DB"
  - "OLE DB (modelli consumer), macro"
ms.assetid: 8765eb7b-32dd-407c-bacf-8890ef959837
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Macro e funzioni globali per modelli consumer OLE DB
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I modelli consumer OLE DB includono le seguenti macro e funzioni globali:  
  
### Funzioni globali  
  
|||  
|-|-|  
|[AtlTraceErrorRecords](../../data/oledb/atltraceerrorrecords.md)|Esegue il dump delle informazioni di errore record OLE DB al dispositivo di dump se viene restituito un errore.|  
  
### Macro di mapping della funzione di accesso  
  
|||  
|-|-|  
|[BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md)|Contrassegna l'inizio di una voce della funzione di accesso.|  
|[BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md)|Contrassegna l'inizio delle voci della mappa della funzione di accesso.|  
|[END\_ACCESSOR](../../data/oledb/end-accessor.md)|Contrassegna la fine di una voce della funzione di accesso.|  
|[END\_ACCESSOR\_MAP](../../data/oledb/end-accessor-map.md)|Contrassegna la fine delle voci della mappa della funzione di accesso.|  
  
### Macro di mapping di colonne  
  
|||  
|-|-|  
|[BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md)|Contrassegna l'inizio delle voci della mappa delle colonne nella classe di record utente.|  
|[BLOB\_ENTRY](../../data/oledb/blob-entry.md)|Utilizzata per associare un oggetto binario di grandi dimensioni \(BLOB\).|  
|[BLOB\_ENTRY\_LENGTH](../../data/oledb/blob-entry-length.md)|Indica la lunghezza della colonna di dati BLOB.|  
|[BLOB\_ENTRY\_LENGTH\_STATUS](../../data/oledb/blob-entry-length-status.md)|Indica la lunghezza e lo stato della colonna di dati BLOB.|  
|[BLOB\_ENTRY\_STATUS](../../data/oledb/blob-entry-status.md)|Segnala lo stato della colonna di dati BLOB.|  
|[BLOB\_NAME](../../data/oledb/blob-name.md)|Utilizzata per associare un oggetto binario di grandi dimensioni in base al nome della colonna.|  
|[BLOB\_NAME\_LENGTH](../../data/oledb/blob-name-length.md)|Indica la lunghezza della colonna di dati BLOB.|  
|[BLOB\_NAME\_LENGTH\_STATUS](../../data/oledb/blob-name-length-status.md)|Indica la lunghezza e lo stato della colonna di dati BLOB.|  
|[BLOB\_NAME\_STATUS](../../data/oledb/blob-name-status.md)|Segnala lo stato della colonna di dati BLOB.|  
|[BOOKMARK\_ENTRY](../../data/oledb/bookmark-entry.md)|Rappresenta una voce di bookmark il rowset.  Una voce di bookmark è un tipo speciale di voce della colonna.|  
|[COLUMN\_ENTRY](../../data/oledb/column-entry.md)|Rappresenta un'associazione a una determinata colonna nel database.|  
|[COLUMN\_ENTRY\_EX](../../data/oledb/column-entry-ex.md)|Rappresenta un'associazione a una determinata colonna nel database.  Supporta `type`, *la lunghezza*, *la precisione*, `scale` e i parametri dello *stato*.|  
|[COLUMN\_ENTRY\_LENGTH](../../data/oledb/column-entry-length.md)|Rappresenta un'associazione a una determinata colonna nel database.  Supporta la variabile *length*.|  
|[COLUMN\_ENTRY\_LENGTH\_STATUS](../../data/oledb/column-entry-length-status.md)|Rappresenta un'associazione a una determinata colonna nel database.  Supporta parametri *stato* e *di lunghezza*.|  
|[COLUMN\_ENTRY\_PS](../../data/oledb/column-entry-ps.md)|Rappresenta un'associazione a una determinata colonna nel database.  *Precisione* databinding e parametri di `scale`.|  
|[COLUMN\_ENTRY\_PS\_LENGTH](../../data/oledb/column-entry-ps-length.md)|Rappresenta un'associazione a una determinata colonna nel database.  Supporta la variabile length, *la precisione* e i parametri di `scale`.|  
|[COLUMN\_ENTRY\_PS\_LENGTH\_STATUS](../../data/oledb/column-entry-ps-length-status.md)|Rappresenta un'associazione a una determinata colonna nel database.  Supporta *stato* e variabili *di lunghezza*, *precisione* e parametri di `scale`.|  
|[COLUMN\_ENTRY\_PS\_STATUS](../../data/oledb/column-entry-ps-status.md)|Rappresenta un'associazione a una determinata colonna nel database.  Supporta la variabile dello *stato*, *la precisione* e i parametri di `scale`.|  
|[COLUMN\_ENTRY\_STATUS](../../data/oledb/column-entry-status.md)|Rappresenta un'associazione a una determinata colonna nel database.  Supporta la variabile dello *stato*.|  
|[COLUMN\_ENTRY\_TYPE](../../data/oledb/column-entry-type.md)|Rappresenta un'associazione a una determinata colonna nel database.  Supporta il parametro di `type`.|  
|[COLUMN\_ENTRY\_TYPE\_SIZE](../../data/oledb/column-entry-type-size.md)|Rappresenta un'associazione a una determinata colonna nel database.  Supporta `type` e parametri di `size`.|  
|[COLUMN\_NAME](../../data/oledb/column-name.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.|  
|[COLUMN\_NAME\_EX](../../data/oledb/column-name-ex.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica del tipo di dati, di dimensioni, di precisione, di ridimensionamento, la lunghezza della colonna stato e di colonna.|  
|[COLUMN\_NAME\_LENGTH](../../data/oledb/column-name-length.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica la lunghezza della colonna.|  
|[COLUMN\_NAME\_LENGTH\_STATUS](../../data/oledb/column-name-length-status.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica la lunghezza e lo stato della colonna.|  
|[COLUMN\_NAME\_PS](../../data/oledb/column-name-ps.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica di precisione e di ridimensionamento.|  
|[COLUMN\_NAME\_PS\_LENGTH](../../data/oledb/column-name-ps-length.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica di precisione, della scala e la lunghezza della colonna.|  
|[COLUMN\_NAME\_PS\_LENGTH\_STATUS](../../data/oledb/column-name-ps-length-status.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica di precisione, di ridimensionamento, la lunghezza della colonna stato e di colonna.|  
|[COLUMN\_NAME\_PS\_STATUS](../../data/oledb/column-name-ps-status.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica di precisione, di ridimensionamento e lo stato della colonna.|  
|[COLUMN\_NAME\_STATUS](../../data/oledb/column-name-status.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica dello stato della colonna.|  
|[COLUMN\_NAME\_TYPE](../../data/oledb/column-name-type.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica del tipo di dati.|  
|[COLUMN\_NAME\_TYPE\_PS](../../data/oledb/column-name-type-ps.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica del tipo di dati, di precisione e di ridimensionamento.|  
|[COLUMN\_NAME\_TYPE\_SIZE](../../data/oledb/column-name-type-size.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica del tipo di dati e delle dimensioni.|  
|[COLUMN\_NAME\_TYPE\_STATUS](../../data/oledb/column-name-type-status.md)|Rappresenta un'associazione a una determinata colonna nel database per nome.  Supporta la specifica dello stato della colonna e il tipo di dati.|  
|[END\_COLUMN\_MAP](../../data/oledb/end-column-map.md)|Contrassegna la fine delle voci della mappa delle colonne.|  
  
### Comando  
  
|||  
|-|-|  
|[DEFINE\_COMMAND](../../data/oledb/define-command.md)|Specifica il comando che verrà utilizzato per creare il rowset quando si utilizza la classe di [CCommand](../../data/oledb/ccommand-class.md).  Accetta solo i tipi di stringa che corrispondono al tipo di applicazione specificato \(ANSI o Unicode.  Si consiglia di utilizzare [DEFINE\_COMMAND\_EX](../../data/oledb/define-command-ex.md) anziché `DEFINE_COMMAND`.|  
|[DEFINE\_COMMAND\_EX](../../data/oledb/define-command-ex.md)|Specifica il comando che verrà utilizzato per creare il rowset quando si utilizza la classe di [CCommand](../../data/oledb/ccommand-class.md).  ANSI databinding e applicazioni Unicode.|  
  
### Macro di mapping dei parametri  
  
|||  
|-|-|  
|[BEGIN\_PARAM\_MAP](../../data/oledb/begin-param-map.md)|Contrassegna l'inizio delle voci della mappa dei parametri nella classe di record utente.|  
|[END\_PARAM\_MAP](../../data/oledb/end-param-map.md)|Contrassegna la fine delle voci della mappa dei parametri.|  
|[SET\_PARAM\_TYPE](../../data/oledb/set-param-type.md)|Specifica le macro di `COLUMN_ENTRY` che seguono la macro di `SET_PARAM_TYPE` come input, di output, o inputoutput.|  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)