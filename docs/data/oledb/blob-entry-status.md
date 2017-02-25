---
title: "BLOB_ENTRY_STATUS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BLOB_ENTRY_STATUS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BLOB_ENTRY_STATUS (macro)"
ms.assetid: 191007f4-dfcc-4ae2-a7fc-6f7899accc9f
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# BLOB_ENTRY_STATUS
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Viene utilizzato con `BEGIN_COLUMN_MAP` o `BEGIN_ACCESSOR_MAP` per legare un oggetto binario di grandi dimensioni \([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)\).  È simile a [BLOB\_ENTRY](../../data/oledb/blob-entry.md), tranne per il fatto che questa macro ottiene anche lo stato della colonna BLOB.  
  
## Sintassi  
  
```  
  
BLOB_ENTRY_STATUS(  
nOrdinal  
,   
IID  
,   
flags  
,   
data  
,   
status  
 )  
  
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
  
 *status*  
 \[out\] Stato del campo BLOB.  
  
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
 [BLOB\_ENTRY\_LENGTH\_STATUS](../../data/oledb/blob-entry-length-status.md)