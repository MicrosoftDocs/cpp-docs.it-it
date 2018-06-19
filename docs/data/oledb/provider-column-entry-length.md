---
title: PROVIDER_COLUMN_ENTRY_LENGTH | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- PROVIDER_COLUMN_ENTRY_LENGTH
dev_langs:
- C++
helpviewer_keywords:
- PROVIDER_COLUMN_ENTRY_LENGTH macro
ms.assetid: b4a67246-c049-4622-bb65-242cc8cae4be
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2aaf2532bc63170940a3526bc34c0763ed0a4aa2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33106323"
---
# <a name="providercolumnentrylength"></a>PROVIDER_COLUMN_ENTRY_LENGTH
Rappresenta una colonna specifica è supportata dal provider.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
PROVIDER_COLUMN_ENTRY_LENGTH(name  
, ordinal, size, member )  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 `ordinal`  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 `size`  
 [in] Le dimensioni di colonna in byte.  
  
 `member`  
 [in] La variabile membro in `dataClass` che archivia i dati della colonna.  
  
## <a name="remarks"></a>Note  
 Consente di specificare la dimensione della colonna.  
  
## <a name="example"></a>Esempio  
 Vedere [BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)