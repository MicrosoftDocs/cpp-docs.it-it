---
title: "BLOB_NAME_LENGTH_STATUS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BLOB_NAME_LENGTH_STATUS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BLOB_NAME_LENGTH_STATUS (macro)"
ms.assetid: 3cc3ec8d-80a5-4522-848a-123fcaee58cb
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# BLOB_NAME_LENGTH_STATUS
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Utilizzato con `BEGIN_COLUMN_MAP` e `END_COLUMN_MAP` per associare un oggetto binario di grandi dimensioni \([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)\).  Simile a [BLOB\_NAME](../../data/oledb/blob-name.md), tranne per il fatto che questa macro anche ottiene la lunghezza e lo stato della colonna di dati BLOB.  
  
## Sintassi  
  
```  
  
BLOB_NAME_LENGTH_STATUS(  
pszName  
,   
IID  
,   
flags  
,   
data  
,   
length  
, status )  
```  
  
#### Parametri  
 `pszName`  
 \[in\] puntatore Al nome della colonna.  Il nome deve essere una stringa Unicode.  È possibile ottenere questo risultato inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.  
  
 *IID*  
 \[in\] collegare il GUID, come **IDD\_ISequentialStream**, utilizzato per recuperare il BLOB.  
  
 `flags`  
 \[in\] contrassegni modalità di archiviazione definiti dal modello di un'archiviazione strutturata OLE, ad esempio **STGM\_READ**\).  
  
 `data`  
 \[in\] il membro dati corrispondente al record utente.  
  
 *length*  
 \[out\] \(in realtà\) lunghezza in byte della colonna dei BLOB.  
  
 *status*  
 \[out\] lo stato dei campi dei BLOB.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md)   
 [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md)   
 [COLUMN\_ENTRY](../../data/oledb/column-entry.md)   
 [BLOB\_NAME](../../data/oledb/blob-name.md)   
 [BLOB\_NAME\_LENGTH](../../data/oledb/blob-name-length.md)   
 [BLOB\_NAME\_STATUS](../../data/oledb/blob-name-status.md)