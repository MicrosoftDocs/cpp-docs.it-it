---
title: Macro e funzioni globali per modelli Consumer OLE DB | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.templates.ole
dev_langs: C++
helpviewer_keywords:
- OLE DB consumer templates, macros
- macros, OLE DB consumer template
ms.assetid: 8765eb7b-32dd-407c-bacf-8890ef959837
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 541425a073b4d179a20a33646844723d655f8160
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="macros-and-global-functions-for-ole-db-consumer-templates"></a>Macro e funzioni globali per modelli consumer OLE DB
Modelli Consumer OLE DB includono le seguenti macro e funzioni globali:  
  
### <a name="global-functions"></a>Funzioni globali  
  
|||  
|-|-|  
|[AtlTraceErrorRecords](../../data/oledb/atltraceerrorrecords.md)|Esegue il dump Record errori OLE DB informazioni per il dispositivo di dump se viene restituito un errore.|  
  
### <a name="accessor-map-macros"></a>Macro della mappa delle funzioni di accesso  
  
|||  
|-|-|  
|[BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md)|Contrassegna l'inizio di una voce della funzione di accesso.|  
|[BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md)|Contrassegna l'inizio delle voci della mappa delle funzioni di accesso.|  
|[END_ACCESSOR](../../data/oledb/end-accessor.md)|Contrassegna la fine di una voce della funzione di accesso.|  
|[END_ACCESSOR_MAP](../../data/oledb/end-accessor-map.md)|Contrassegna la fine di voci della mappa di accesso.|  
  
### <a name="column-map-macros"></a>Macro della mappa colonne  
  
|||  
|-|-|  
|[BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)|Contrassegna l'inizio delle voci della mappa colonna in una classe di record utente.|  
|[BLOB_ENTRY](../../data/oledb/blob-entry.md)|Utilizzato per associare un oggetto binario di grandi dimensioni (BLOB).|  
|[BLOB_ENTRY_LENGTH](../../data/oledb/blob-entry-length.md)|Restituisce la lunghezza della colonna di dati BLOB.|  
|[BLOB_ENTRY_LENGTH_STATUS](../../data/oledb/blob-entry-length-status.md)|Restituisce la lunghezza e stato della colonna di dati BLOB.|  
|[BLOB_ENTRY_STATUS](../../data/oledb/blob-entry-status.md)|Segnala lo stato della colonna di dati BLOB.|  
|[BLOB_NAME](../../data/oledb/blob-name.md)|Utilizzato per associare un oggetto binario di grandi dimensioni in base al nome di colonna.|  
|[BLOB_NAME_LENGTH](../../data/oledb/blob-name-length.md)|Restituisce la lunghezza della colonna di dati BLOB.|  
|[BLOB_NAME_LENGTH_STATUS](../../data/oledb/blob-name-length-status.md)|Restituisce la lunghezza e stato della colonna di dati BLOB.|  
|[BLOB_NAME_STATUS](../../data/oledb/blob-name-status.md)|Segnala lo stato della colonna di dati BLOB.|  
|[BOOKMARK_ENTRY](../../data/oledb/bookmark-entry.md)|Rappresenta una voce di segnalibro nel set di righe. Una voce di segnalibro è un tipo speciale di voce di colonna.|  
|[COLUMN_ENTRY](../../data/oledb/column-entry.md)|Rappresenta un'associazione a una colonna specifica nel database.|  
|[COLUMN_ENTRY_EX](../../data/oledb/column-entry-ex.md)|Rappresenta un'associazione a una specifica colonna nel database. Supporta `type`, *lunghezza*, *precisione*, `scale`, e *stato* parametri.|  
|[COLUMN_ENTRY_LENGTH](../../data/oledb/column-entry-length.md)|Rappresenta un'associazione a una specifica colonna nel database. Supporta il *lunghezza* variabile.|  
|[COLUMN_ENTRY_LENGTH_STATUS](../../data/oledb/column-entry-length-status.md)|Rappresenta un'associazione a una specifica colonna nel database. Supporta *stato* e *lunghezza* parametri.|  
|[COLUMN_ENTRY_PS](../../data/oledb/column-entry-ps.md)|Rappresenta un'associazione a una specifica colonna nel database. Supporta *precisione* e `scale` parametri.|  
|[COLUMN_ENTRY_PS_LENGTH](../../data/oledb/column-entry-ps-length.md)|Rappresenta un'associazione a una specifica colonna nel database. Supporta il *lunghezza* variabile, *precisione* e `scale` parametri.|  
|[COLUMN_ENTRY_PS_LENGTH_STATUS](../../data/oledb/column-entry-ps-length-status.md)|Rappresenta un'associazione a una specifica colonna nel database. Supporta *stato* e *lunghezza* variabili, *precisione* e `scale` parametri.|  
|[COLUMN_ENTRY_PS_STATUS](../../data/oledb/column-entry-ps-status.md)|Rappresenta un'associazione a una specifica colonna nel database. Supporta il *stato* variabile, *precisione* e `scale` parametri.|  
|[COLUMN_ENTRY_STATUS](../../data/oledb/column-entry-status.md)|Rappresenta un'associazione a una specifica colonna nel database. Supporta il *stato* variabile.|  
|[COLUMN_ENTRY_TYPE](../../data/oledb/column-entry-type.md)|Rappresenta un'associazione a una colonna specifica nel database. Supporta `type` parametro.|  
|[COLUMN_ENTRY_TYPE_SIZE](../../data/oledb/column-entry-type-size.md)|Rappresenta un'associazione a una specifica colonna nel database. Supporta `type` e `size` parametri.|  
|[COLUMN_NAME](../../data/oledb/column-name.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome.|  
|[COLUMN_NAME_EX](../../data/oledb/column-name-ex.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica del tipo di dati, dimensioni, precisione, scala, lunghezza di colonna e stato della colonna.|  
|[COLUMN_NAME_LENGTH](../../data/oledb/column-name-length.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Consente di specificare la lunghezza della colonna.|  
|[COLUMN_NAME_LENGTH_STATUS](../../data/oledb/column-name-length-status.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Consente di specificare la lunghezza della colonna e lo stato.|  
|[COLUMN_NAME_PS](../../data/oledb/column-name-ps.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica di precisione e scala.|  
|[COLUMN_NAME_PS_LENGTH](../../data/oledb/column-name-ps-length.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica di lunghezza e precisione, scala e colonna.|  
|[COLUMN_NAME_PS_LENGTH_STATUS](../../data/oledb/column-name-ps-length-status.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica di precisione, scala, lunghezza di colonna e stato della colonna.|  
|[COLUMN_NAME_PS_STATUS](../../data/oledb/column-name-ps-status.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica di precisione, scala e colonna stato.|  
|[COLUMN_NAME_STATUS](../../data/oledb/column-name-status.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica di stato della colonna.|  
|[COLUMN_NAME_TYPE](../../data/oledb/column-name-type.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica del tipo di dati.|  
|[COLUMN_NAME_TYPE_PS](../../data/oledb/column-name-type-ps.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica del tipo di dati, precisione e scala.|  
|[COLUMN_NAME_TYPE_SIZE](../../data/oledb/column-name-type-size.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Supporta la specifica del tipo di dati e dimensioni.|  
|[COLUMN_NAME_TYPE_STATUS](../../data/oledb/column-name-type-status.md)|Rappresenta un'associazione a una colonna specifica nel database in base al nome. Consente di specificare lo stato di tipo e di colonna di dati.|  
|[END_COLUMN_MAP](../../data/oledb/end-column-map.md)|Contrassegna la fine delle voci della mappa colonna.|  
  
### <a name="command-macros"></a>Macro di comandi  
  
|||  
|-|-|  
|[DEFINE_COMMAND](../../data/oledb/define-command.md)|Specifica il comando che verrà utilizzato per creare il set di righe quando si usa il [CCommand](../../data/oledb/ccommand-class.md) classe. Accetta solo i tipi di stringa che corrisponde al tipo di applicazione specificata (ANSI o Unicode). È consigliabile utilizzare [DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md) anziché `DEFINE_COMMAND`.|  
|[DEFINE_COMMAND_EX](../../data/oledb/define-command-ex.md)|Specifica il comando che verrà utilizzato per creare il set di righe quando si usa il [CCommand](../../data/oledb/ccommand-class.md) classe. Supporta le applicazioni ANSI e Unicode.|  
  
### <a name="parameter-map-macros"></a>Parametro macro della mappa  
  
|||  
|-|-|  
|[BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md)|Contrassegna l'inizio delle voci della mappa parametro nella classe di record utente.|  
|[END_PARAM_MAP](../../data/oledb/end-param-map.md)|Contrassegna la fine delle voci di mapping del parametro.|  
|[SET_PARAM_TYPE](../../data/oledb/set-param-type.md)|Specifica `COLUMN_ENTRY` macro che seguono il `SET_PARAM_TYPE` macro come input, output o input/output.|  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)