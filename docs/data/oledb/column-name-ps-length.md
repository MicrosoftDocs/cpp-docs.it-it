---
title: COLUMN_NAME_PS_LENGTH | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- COLUMN_NAME_PS_LENGTH
dev_langs:
- C++
helpviewer_keywords:
- COLUMN_NAME_PS_LENGTH macro
ms.assetid: 415a154b-cb7c-4072-9e7d-8cfa32a15d6e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 9ab975f011aaeed036c615d1b66836478ba9c472
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="columnnamepslength"></a>COLUMN_NAME_PS_LENGTH
Rappresenta un'associazione sul rowset alla colonna specifica nel set di righe. Simile a [COLUMN_NAME](../../data/oledb/column-name.md), ad eccezione del fatto che questa macro accetta anche la lunghezza e precisione, scala e colonna.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
COLUMN_NAME_PS_LENGTH(pszName, nPrecision, nScale, data, length )  
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
  
 *length*  
 [in] Variabile da associare alla lunghezza della colonna.  
  
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
 [COLUMN_NAME_PS_STATUS](../../data/oledb/column-name-ps-status.md)   
 [COLUMN_NAME_PS_LENGTH_STATUS](../../data/oledb/column-name-ps-length-status.md)   
 [COLUMN_NAME_TYPE](../../data/oledb/column-name-type.md)   
 [COLUMN_NAME_TYPE_PS](../../data/oledb/column-name-type-ps.md)   
 [COLUMN_NAME_TYPE_SIZE](../../data/oledb/column-name-type-size.md)   
 [COLUMN_NAME_TYPE_STATUS](../../data/oledb/column-name-type-status.md)