---
title: COLUMN_ENTRY_PS_LENGTH | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- COLUMN_ENTRY_PS_LENGTH
dev_langs:
- C++
helpviewer_keywords:
- COLUMN_ENTRY_PS_LENGTH macro
ms.assetid: d63ab895-a4df-4183-ac09-cf2311222408
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f3b37c9e8dead15fcc0b4cf0a9a8f6c0d1aac217
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="columnentrypslength"></a>COLUMN_ENTRY_PS_LENGTH
Rappresenta un'associazione sul rowset alla colonna specifica nel database.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
COLUMN_ENTRY_PS_LENGTH(nOrdinal, nPrecision, nScale, data, length)  
  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) nel *di riferimento per programmatori OLE DB*.  
  
 `nOrdinal`  
 [in] Il numero di colonna, a partire da uno. Segnalibro corrisponde alla colonna zero.  
  
 `nPrecision`  
 [in] Precisione massima della colonna che si desidera associare.  
  
 `nScale`  
 [in] Scala della colonna che si desidera associare.  
  
 `data`  
 [in] Membro dati corrispondente nel record utente.  
  
 *length*  
 [in] Variabile da associare alla lunghezza della colonna.  
  
## <a name="remarks"></a>Note  
 Consente di specificare la precisione e la scala della colonna che si desidera associare. Questa macro supporta il *lunghezza* variabile. Viene utilizzata nelle seguenti posizioni:  
  
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
 [COLUMN_ENTRY_LENGTH](../../data/oledb/column-entry-length.md)   
 [COLUMN_ENTRY_PS](../../data/oledb/column-entry-ps.md)   
 [COLUMN_ENTRY_LENGTH_STATUS](../../data/oledb/column-entry-length-status.md)   
 [COLUMN_ENTRY_PS_LENGTH_STATUS](../../data/oledb/column-entry-ps-length-status.md)   
 [COLUMN_ENTRY_STATUS](../../data/oledb/column-entry-status.md)   
 [COLUMN_ENTRY_PS_STATUS](../../data/oledb/column-entry-ps-status.md)   
 [END_ACCESSOR](../../data/oledb/end-accessor.md)   
 [END_ACCESSOR_MAP](../../data/oledb/end-accessor-map.md)   
 [END_COLUMN_MAP](../../data/oledb/end-column-map.md)