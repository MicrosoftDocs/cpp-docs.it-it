---
title: BLOB_NAME_STATUS | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: BLOB_NAME_STATUS
dev_langs: C++
helpviewer_keywords: BLOB_NAME_STATUS macro
ms.assetid: 4564e4a0-8e5e-436a-bd1e-012d2a1b8642
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 35cbd313bce1e0bc22a4ee0fe70d18f577d901f0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="blobnamestatus"></a>BLOB_NAME_STATUS
Utilizzato con `BEGIN_COLUMN_MAP` e `END_COLUMN_MAP` per associare un oggetto binario di grandi dimensioni ([BLOB](https://msdn.microsoft.com/en-us/library/ms711511.aspx)). Simile a [BLOB_NAME](../../data/oledb/blob-name.md), ad eccezione del fatto che questa macro ottiene anche lo stato della colonna di dati BLOB.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
BLOB_NAME_STATUS(  
pszName  
,   
IID  
,   
flags  
,   
data  
, status )  
```  
  
#### <a name="parameters"></a>Parametri  
 `pszName`  
 [in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile effettuare questa operazione inserisce una "L" davanti al nome, ad esempio: `L"MyColumn"`.  
  
 *IID*  
 [in] Interfaccia GUID, ad esempio **IDD_ISequentialStream**, utilizzato per recuperare il BLOB.  
  
 `flags`  
 [in] Modalità di archiviazione flag definiti dal modello di archivio strutturato OLE (ad esempio, **STGM_READ**).  
  
 `data`  
 [in] Membro dati corrispondente nel record utente.  
  
 *status*  
 [out] Lo stato del campo BLOB.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [END_COLUMN_MAP](../../data/oledb/end-column-map.md)   
 [COLUMN_ENTRY](../../data/oledb/column-entry.md)   
 [BLOB_NAME](../../data/oledb/blob-name.md)   
 [BLOB_NAME_LENGTH](../../data/oledb/blob-name-length.md)   
 [BLOB_NAME_LENGTH_STATUS](../../data/oledb/blob-name-length-status.md)