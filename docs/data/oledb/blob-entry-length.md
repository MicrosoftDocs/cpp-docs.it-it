---
title: BLOB_ENTRY_LENGTH | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: BLOB_ENTRY_LENGTH
dev_langs: C++
helpviewer_keywords: BLOB_ENTRY_LENGTH macro
ms.assetid: 832d21ab-5fdd-49ad-af6e-4fca5722ec93
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 216e3b1882efcf479defde679c49337d21de732e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="blobentrylength"></a>BLOB_ENTRY_LENGTH
Utilizzato con `BEGIN_COLUMN_MAP` e `END_COLUMN_MAP` per associare un oggetto binario di grandi dimensioni ([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)). Simile a [BLOB_ENTRY](../../data/oledb/blob-entry.md), ad eccezione del fatto che questa macro ottiene anche la lunghezza in byte della colonna BLOB.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
#### <a name="parameters"></a>Parametri  
 `nOrdinal`  
 [in] Numero di colonna.  
  
 *IID*  
 [in] Interfaccia GUID, ad esempio **IDD_ISequentialStream**, utilizzato per recuperare il BLOB.  
  
 `flags`  
 [in] Modalità di archiviazione flag definiti dal modello di archivio strutturato OLE (ad esempio, **STGM_READ**).  
  
 `data`  
 [in] Membro dati corrispondente nel record utente.  
  
 *length*  
 [out] Lunghezza in byte (effettiva) della colonna BLOB.  
  
## <a name="example"></a>Esempio  
 Vedere [come è possibile recuperare un BLOB?](../../data/oledb/retrieving-a-blob.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [END_COLUMN_MAP](../../data/oledb/end-column-map.md)   
 [COLUMN_ENTRY](../../data/oledb/column-entry.md)   
 [BLOB_ENTRY](../../data/oledb/blob-entry.md)   
 [BLOB_ENTRY_LENGTH_STATUS](../../data/oledb/blob-entry-length-status.md)   
 [BLOB_ENTRY_STATUS](../../data/oledb/blob-entry-status.md)