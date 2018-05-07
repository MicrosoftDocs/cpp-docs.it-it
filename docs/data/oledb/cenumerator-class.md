---
title: Classe CEnumerator | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CEnumerator
dev_langs:
- C++
helpviewer_keywords:
- CEnumerator class
ms.assetid: 25805f1b-26e3-402f-af83-1b5fe5ddebf7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2b7e390212da53f85cb50dd5bb151ea6740784b0
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cenumerator-class"></a>Classe CEnumerator
Usa un oggetto enumeratore OLE DB che espone il [ISourcesRowset](https://msdn.microsoft.com/en-us/library/ms715969.aspx) interfaccia per restituire un set di righe che descrivono tutte le origini dati e gli enumeratori.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CEnumerator :   
   public CAccessorRowset< CAccessor <CEnumeratorAccessor >>  
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Trova](../../data/oledb/cenumerator-find.md)|Esegue una ricerca attraverso i provider disponibili (origini dati) per cercare un elemento con il nome specificato.|  
|[GetMoniker](../../data/oledb/cenumerator-getmoniker.md)|Recupera l'interfaccia `IMoniker` per il record corrente.|  
|[Apri](../../data/oledb/cenumerator-open.md)|Apre l'enumeratore.|  
  
## <a name="remarks"></a>Note  
 È possibile recuperare il **ISourcesRowset** dati indirettamente da questa classe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli. h  
  
## <a name="see-also"></a>Vedere anche  
 [DBViewer](../../visual-cpp-samples.md)   
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)