---
title: "BLOB_ENTRY_LENGTH_STATUS | Microsoft Docs"
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
  - "BLOB_ENTRY_LENGTH_STATUS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BLOB_ENTRY_LENGTH_STATUS (macro)"
ms.assetid: 09da67de-421b-4853-9a26-760e38324502
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# BLOB_ENTRY_LENGTH_STATUS
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Viene utilizzato con `BEGIN_COLUMN_MAP` e `END_COLUMN_MAP` per legare un oggetto binario di grandi dimensioni \([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)\).  È simile a [BLOB\_ENTRY](../../data/oledb/blob-entry.md), tranne per il fatto che questa macro ottiene anche la lunghezza e lo stato della colonna BLOB.  
  
## Sintassi  
  
```  
  
BLOB_ENTRY_LENGTH_STATUS(  
nOrdinal  
,   
IID  
,   
flags  
,   
data  
, length, status )  
```  
  
#### Parametri  
 `nOrdinal`  
 \[in\] Numero della colonna.  
  
 *IID*  
 \[in\] Interfaccia GUID, ad esempio **IDD\_ISequentialStream**, utilizzata per recuperare il BLOB.  
  
 `flags`  
 \[in\] Flag modalità di archiviazione come definita dal modello di archiviazione strutturata OLE \(ad esempio, **STGM\_READ**\).  
  
 `data`  
 \[in\] Membro dati corrispondente nel record utente.  
  
 *length*  
 \[out\] Lunghezza \(effettiva\) in byte della colonna BLOB.  
  
 *status*  
 \[out\] Stato della colonna di dati BLOB.  
  
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
 [BLOB\_ENTRY\_LENGTH](../../data/oledb/blob-entry-length.md)   
 [BLOB\_ENTRY\_STATUS](../../data/oledb/blob-entry-status.md)