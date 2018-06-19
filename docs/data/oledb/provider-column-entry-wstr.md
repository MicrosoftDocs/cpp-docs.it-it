---
title: PROVIDER_COLUMN_ENTRY_WSTR | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- PROVIDER_COLUMN_ENTRY_WSTR
dev_langs:
- C++
helpviewer_keywords:
- PROVIDER_COLUMN_ENTRY_WSTR macro
ms.assetid: 70630bd5-d782-473b-9777-aebbbf5321c5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: faa6630d8821065d056e922dbf4790265d2497f0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33104074"
---
# <a name="providercolumnentrywstr"></a>PROVIDER_COLUMN_ENTRY_WSTR
Rappresenta una colonna specifica è supportata dal provider.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
PROVIDER_COLUMN_ENTRY_WSTR(name  
, ordinal, member )  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 `ordinal`  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 `member`  
 [in] La variabile membro nella classe di dati che archiviano i dati.  
  
## <a name="remarks"></a>Note  
 Utilizzare questa macro quando i dati della colonna sono una stringa di caratteri Unicode con terminazione di un valore null [DBTYPE_WSTR](https://msdn.microsoft.com/en-us/library/ms711251.aspx).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)