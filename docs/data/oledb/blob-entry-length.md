---
title: "BLOB_ENTRY_LENGTH | Microsoft Docs"
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
  - "BLOB_ENTRY_LENGTH"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BLOB_ENTRY_LENGTH (macro)"
ms.assetid: 832d21ab-5fdd-49ad-af6e-4fca5722ec93
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# BLOB_ENTRY_LENGTH
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato con `BEGIN_COLUMN_MAP` e `END_COLUMN_MAP` per associare un oggetto binario di grandi dimensioni \([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)\).  Simile a [BLOB\_ENTRY](../../data/oledb/blob-entry.md), tranne per il fatto che questa macro anche ottiene la lunghezza in byte della colonna dei BLOB.  
  
## Sintassi  
  
```  
  
BLOB_ENTRY_LENGTH(  
nOrdinal  
,   
IID  
,   
flags  
,   
data  
,   
length  
 )  
  
```  
  
#### Parametri  
 `nOrdinal`  
 \[in\] numero di colonne.  
  
 *IID*  
 \[in\] collegare il GUID, come **IDD\_ISequentialStream**, utilizzato per recuperare il BLOB.  
  
 `flags`  
 \[in\] contrassegni modalità di archiviazione definiti dal modello di un'archiviazione strutturata OLE, ad esempio **STGM\_READ**\).  
  
 `data`  
 \[in\] il membro dati corrispondente al record utente.  
  
 *length*  
 \[out\] \(in realtà\) lunghezza in byte della colonna dei BLOB.  
  
## Esempio  
 Vedere [Come è possibile recuperare un BLOB?](../../data/oledb/retrieving-a-blob.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md)   
 [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md)   
 [COLUMN\_ENTRY](../../data/oledb/column-entry.md)   
 [BLOB\_ENTRY](../../data/oledb/blob-entry.md)   
 [BLOB\_ENTRY\_LENGTH\_STATUS](../../data/oledb/blob-entry-length-status.md)   
 [BLOB\_ENTRY\_STATUS](../../data/oledb/blob-entry-status.md)