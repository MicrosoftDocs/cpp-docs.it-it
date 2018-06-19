---
title: COLUMN_ENTRY_TYPE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- COLUMN_ENTRY_TYPE
dev_langs:
- C++
helpviewer_keywords:
- COLUMN_ENTRY_TYPE macro
ms.assetid: ac424261-ff6c-443b-a197-2cec8d78d738
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: b297b641913c59c95cd54fdb4e5e02a293dbf71e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33091544"
---
# <a name="columnentrytype"></a>COLUMN_ENTRY_TYPE
Rappresenta un'associazione a una specifica colonna nel database. Supporta `type` parametro.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
COLUMN_ENTRY_TYPE (nOrdinal, wType, data)  
  
```  
  
#### <a name="parameters"></a>Parametri  
 `nOrdinal`  
 [in] Numero di colonna.  
  
 `wType`  
 [in] Tipo di dati della voce di colonna.  
  
 `data`  
 [in] Membro dati corrispondente nel record utente.  
  
## <a name="remarks"></a>Note  
 Questa macro è una variante specializzata del [COLUMN_ENTRY](../../data/oledb/column-entry.md) macro che consente di specificare il tipo di dati.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [END_COLUMN_MAP](../../data/oledb/end-column-map.md)