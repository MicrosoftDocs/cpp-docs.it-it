---
title: PROVIDER_COLUMN_ENTRY_FIXED | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- PROVIDER_COLUMN_ENTRY_FIXED
dev_langs:
- C++
helpviewer_keywords:
- PROVIDER_COLUMN_ENTRY_FIXED macro
ms.assetid: 71f9c9aa-56a0-488b-96ba-5c72da9c71d0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 901a5ba5e903af95d846c21cca297387f1aaf57e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33104984"
---
# <a name="providercolumnentryfixed"></a>PROVIDER_COLUMN_ENTRY_FIXED
Rappresenta una colonna specifica è supportata dal provider.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
PROVIDER_COLUMN_ENTRY_FIXED(name  
, ordinal, dbtype, member )  
```  
  
#### <a name="parameters"></a>Parametri  
 *name*  
 [in] Il nome della colonna.  
  
 `ordinal`  
 [in] Numero di colonna. A meno che la colonna è una colonna del segnalibro, il numero di colonna non deve essere 0.  
  
 `dbtype`  
 [in] Il tipo di dati [DBTYPE](https://msdn.microsoft.com/en-us/library/ms711251.aspx).  
  
 `member`  
 [in] La variabile membro in `dataClass` che archivia i dati.  
  
## <a name="remarks"></a>Note  
 Consente di specificare il tipo di dati della colonna.  
  
## <a name="example"></a>Esempio  
 Vedere [BEGIN_PROVIDER_COLUMN_MAP](../../data/oledb/begin-provider-column-map.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)