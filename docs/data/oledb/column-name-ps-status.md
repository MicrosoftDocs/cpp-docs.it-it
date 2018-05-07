---
title: COLUMN_NAME_PS_STATUS | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- COLUMN_NAME_PS_STATUS
dev_langs:
- C++
helpviewer_keywords:
- COLUMN_NAME_PS_STATUS macro
ms.assetid: 134e1bfe-abfa-4b64-9159-e492f31de44b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f4b2409e343ea9899994c7c391bbd3273e5fad23
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="columnnamepsstatus"></a>COLUMN_NAME_PS_STATUS
Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta anche lo stato di precisione, scala e colonna.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
COLUMN_NAME_PS_STATUS(pszName, nPrecision, nScale, data, status )  
```  
  
#### <a name="parameters"></a>Parametri  
 `pszName`  
 [in] Puntatore al nome della colonna. Il nome deve essere una stringa Unicode. È possibile effettuare questa operazione inserisce una "L" davanti al nome, ad esempio: `L"MyColumn"`.  
  
 `nPrecision`  
 [in] Precisione massima della colonna che si desidera associare.  
  
 `nScale`  
 [in] Scala della colonna che si desidera associare.  
  
 `data`  
 [in] Membro dati corrispondente nel record utente.  
  
 *status*  
 [in] Variabile da associare allo stato della colonna.  
  
## <a name="remarks"></a>Note  
 Vedere [COLUMN_NAME](../../data/oledb/column-name.md) per informazioni su dove il **column_name _\***  vengono utilizzate le macro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali per modelli Consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [BEGIN_ACCESSOR_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN_COLUMN_MAP](../../data/oledb/begin-column-map.md)   
 [COLUMN_NAME](../../data/oledb/column-name.md)   
 [COLUMN_NAME_EX](../../data/oledb/column-name-ex.md)   
 [COLUMN_NAME_LENGTH](../../data/oledb/column-name-length.md)   
 [COLUMN_NAME_LENGTH_STATUS](../../data/oledb/column-name-length-status.md)   
 [COLUMN_NAME_STATUS](../../data/oledb/column-name-status.md)   
 [COLUMN_NAME_PS](../../data/oledb/column-name-ps.md)   
 [COLUMN_NAME_PS_LENGTH](../../data/oledb/column-name-ps-length.md)   
 [COLUMN_NAME_PS_LENGTH_STATUS](../../data/oledb/column-name-ps-length-status.md)   
 [COLUMN_NAME_TYPE](../../data/oledb/column-name-type.md)   
 [COLUMN_NAME_TYPE_PS](../../data/oledb/column-name-type-ps.md)   
 [COLUMN_NAME_TYPE_SIZE](../../data/oledb/column-name-type-size.md)   
 [COLUMN_NAME_TYPE_STATUS](../../data/oledb/column-name-type-status.md)