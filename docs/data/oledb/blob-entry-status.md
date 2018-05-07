---
title: BLOB_ENTRY_STATUS | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- BLOB_ENTRY_STATUS
dev_langs:
- C++
helpviewer_keywords:
- BLOB_ENTRY_STATUS macro
ms.assetid: 191007f4-dfcc-4ae2-a7fc-6f7899accc9f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a6429a6b227cb7c06369d1a82d36e0ad513e6d0e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="blobentrystatus"></a>BLOB_ENTRY_STATUS
Utilizzato con `BEGIN_COLUMN_MAP` o `BEGIN_ACCESSOR_MAP` per associare un oggetto binario di grandi dimensioni ([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)). Simile a [BLOB_ENTRY](../../data/oledb/blob-entry.md), ad eccezione del fatto che questa macro ottiene anche lo stato della colonna BLOB.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
BLOB_ENTRY_STATUS(nOrdinal, IID, flags, data, status)  
  
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
  
 *status*  
 [out] Lo stato del campo BLOB.  
  
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
 [BLOB_ENTRY_LENGTH](../../data/oledb/blob-entry-length.md)   
 [BLOB_ENTRY_LENGTH_STATUS](../../data/oledb/blob-entry-length-status.md)