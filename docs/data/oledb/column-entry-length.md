---
title: COLUMN_ENTRY_LENGTH | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- COLUMN_ENTRY_LENGTH
dev_langs:
- C++
helpviewer_keywords:
- COLUMN_ENTRY_LENGTH macro
ms.assetid: 1758babf-204c-4d1d-b82a-f9a607072e9a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a923f4474f15ffbb2011611bc1f8de476fc399c7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="columnentrylength"></a>COLUMN_ENTRY_LENGTH
Rappresenta un'associazione sul rowset alla colonna specifica nel database.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
COLUMN_ENTRY_LENGTH(nOrdinal, data, length)  
  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) nel *di riferimento per programmatori OLE DB*.  
  
 `nOrdinal`  
 [in] Il numero di colonna, a partire da uno. Segnalibro corrisponde alla colonna zero.  
  
 `data`  
 [in] Membro dati corrispondente nel record utente.  
  
 *length*  
 [in] Variabile da associare alla lunghezza della colonna.  
  
## <a name="remarks"></a>Note  
 Questa macro supporta il *lunghezza* variabile. Viene utilizzata nelle seguenti posizioni:  
  
-   Tra le [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md) e [END_COLUMN_MAP](../../data/oledb/end-column-map.md) macro.  
  
-   Tra le [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md) e [END_ACCESSOR](../../data/oledb/end-accessor.md) macro.  
  
-   Tra le [BEGIN_PARAM_MAP](../../data/oledb/begin-param-map.md) e [END_PARAM_MAP](../../data/oledb/end-param-map.md) macro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [COLUMN_ENTRY](../../data/oledb/column-entry.md)   
 [COLUMN_ENTRY_EX](../../data/oledb/column-entry-ex.md)   
 [COLUMN_ENTRY_PS](../../data/oledb/column-entry-ps.md)   
 [COLUMN_ENTRY_PS_LENGTH](../../data/oledb/column-entry-ps-length.md)   
 [COLUMN_ENTRY_LENGTH_STATUS](../../data/oledb/column-entry-length-status.md)   
 [COLUMN_ENTRY_PS_LENGTH_STATUS](../../data/oledb/column-entry-ps-length-status.md)   
 [COLUMN_ENTRY_STATUS](../../data/oledb/column-entry-status.md)   
 [COLUMN_ENTRY_PS_STATUS](../../data/oledb/column-entry-ps-status.md)   
 [END_ACCESSOR](../../data/oledb/end-accessor.md)   
 [END_ACCESSOR_MAP](../../data/oledb/end-accessor-map.md)   
 [END_COLUMN_MAP](../../data/oledb/end-column-map.md)