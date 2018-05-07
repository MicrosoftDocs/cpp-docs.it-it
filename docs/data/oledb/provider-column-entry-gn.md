---
title: PROVIDER_COLUMN_ENTRY_GN | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- PROVIDER_COLUMN_ENTRY_GN
dev_langs:
- C++
helpviewer_keywords:
- PROVIDER_COLUMN_ENTRY_GN macro
ms.assetid: be77ba85-634c-4e28-832f-d2fa40413254
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: be0cfa80b0d2a18d04dd329feda6547b5d89e6e1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="providercolumnentrygn"></a>PROVIDER_COLUMN_ENTRY_GN
Rappresenta una colonna specifica è supportata dal provider.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
PROVIDER_COLUMN_ENTRY_GN (name  
, ordinal, flags, colSize, dbtype, precision, scale, guid )  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 `ordinal`  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 `flags`  
 [in] Specifica come vengono restituiti dati. Vedere il `dwFlags` descrizione in [strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 *colSize*  
 [in] La dimensione della colonna.  
  
 `dbtype`  
 [in] Indica il tipo di dati del valore. Vedere il **wType** descrizione in [strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 *precision*  
 [in] Indica la precisione da utilizzare durante il recupero dei dati se *dbType* è `DBTYPE_NUMERIC` o **DBTYPE_DECIMAL**. Vedere il **bPrecision** descrizione in [strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 `scale`  
 [in] Indica la scala da usare durante il recupero dei dati se è dbType `DBTYPE_NUMERIC` o **DBTYPE_DECIMAL**. Vedere il **bScale** descrizione in [strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 `guid`  
 Un GUID di rowset dello schema. Vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) nel *riferimento per programmatori OLE DB* per un elenco di set di righe dello schema e i relativi GUID.  
  
## <a name="remarks"></a>Note  
 Consente di specificare le dimensioni della colonna, tipo di dati, precisione, scala e GUID set di righe dello schema.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)