---
title: "BLOB_ENTRY | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BLOB_ENTRY"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BLOB_ENTRY (macro)"
ms.assetid: 89e40678-0869-49ed-b502-0fa2630a9081
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# BLOB_ENTRY
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato con `BEGIN_COLUMN_MAP` e `END_COLUMN_MAP` per associare un oggetto binario di grandi dimensioni \([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)\).  
  
## Sintassi  
  
```  
  
BLOB_ENTRY(  
nOrdinal  
,  
 IID  
,   
flags  
,   
data  
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
  
## Esempio  
 Vedere [Come è possibile recuperare un BLOB?](../../data/oledb/retrieving-a-blob.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md)   
 [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md)   
 [COLUMN\_ENTRY](../../data/oledb/column-entry.md)   
 [BLOB\_ENTRY\_LENGTH](../../data/oledb/blob-entry-length.md)   
 [BLOB\_ENTRY\_LENGTH\_STATUS](../../data/oledb/blob-entry-length-status.md)   
 [BLOB\_ENTRY\_STATUS](../../data/oledb/blob-entry-status.md)