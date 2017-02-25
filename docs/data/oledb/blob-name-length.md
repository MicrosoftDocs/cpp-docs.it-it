---
title: "BLOB_NAME_LENGTH | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BLOB_NAME_LENGTH"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BLOB_NAME_LENGTH (macro)"
ms.assetid: 38150260-a127-486d-a7ab-0d01b731b6fd
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# BLOB_NAME_LENGTH
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Viene utilizzato con `BEGIN_COLUMN_MAP` e `END_COLUMN_MAP` per legare un oggetto binario di grandi dimensioni \([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)\).  Simile a [BLOB\_NAME](../../data/oledb/blob-name.md), tranne per il fatto che questa macro ottiene anche la lunghezza in byte della colonna di dati BLOB.  
  
## Sintassi  
  
```  
  
BLOB_NAME_LENGTH(  
pszName  
,   
IID  
,   
flags  
,   
data  
,   
length )  
```  
  
#### Parametri  
 `pszName`  
 \[in\] Un puntatore al nome della colonna.  Il nome deve essere una stringa Unicode.  È possibile ottenere questo risultato inserendo una 'L' davanti al nome, per esempio: `L"MyColumn"`.  
  
 *IID*  
 \[in\] Interfaccia GUID, ad esempio **IDD\_ISequentialStream**, utilizzata per recuperare il BLOB.  
  
 `flags`  
 \[in\] Flag modalità di archiviazione come definita dal modello di archiviazione strutturata OLE \(ad esempio, **STGM\_READ**\).  
  
 `data`  
 \[in\] Membro dati corrispondente nel record utente.  
  
 *length*  
 \[out\] Lunghezza \(effettiva\) in byte della colonna BLOB.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md)   
 [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md)   
 [COLUMN\_ENTRY](../../data/oledb/column-entry.md)   
 [BLOB\_NAME](../../data/oledb/blob-name.md)   
 [BLOB\_NAME\_LENGTH\_STATUS](../../data/oledb/blob-name-length-status.md)   
 [BLOB\_NAME\_STATUS](../../data/oledb/blob-name-status.md)