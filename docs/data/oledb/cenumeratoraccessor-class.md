---
title: Classe CEnumeratorAccessor | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL::CEnumeratorAccessor
- CEnumeratorAccessor
- ATL.CEnumeratorAccessor
dev_langs:
- C++
helpviewer_keywords:
- CEnumeratorAccessor class
ms.assetid: 21e8e7ea-3511-4afe-b33f-d520f4ff82bb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: bb071f47eb7079c8de63da47ee0d837f44442c1a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33097241"
---
# <a name="cenumeratoraccessor-class"></a>Classe CEnumeratorAccessor
Utilizzato da [CEnumerator](../../data/oledb/cenumerator-class.md) per accedere ai dati dal set di righe di enumeratore.  
  
## <a name="syntax"></a>Sintassi

```cpp
class CEnumeratorAccessor  
```  
  
## <a name="members"></a>Membri  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_bIsParent](../../data/oledb/cenumeratoraccessor-m-bisparent.md)|Una variabile che indica se l'enumeratore è un enumeratore di padre, se la riga è un enumeratore.|  
|[m_nType](../../data/oledb/cenumeratoraccessor-m-ntype.md)|Una variabile che indica se la riga descrive un'origine dati o un enumeratore.|  
|[m_szDescription](../../data/oledb/cenumeratoraccessor-m-szdescription.md)|La descrizione dell'origine dati o enumeratore.|  
|[m_szName](../../data/oledb/cenumeratoraccessor-m-szname.md)|Il nome dell'origine dati o enumeratore.|  
|[m_szParseName](../../data/oledb/cenumeratoraccessor-m-szparsename.md)|Stringa da passare al [IParseDisplayName](http://msdn.microsoft.com/library/windows/desktop/ms680604) per ottenere un moniker per l'origine dati o di un enumeratore.|  
  
## <a name="remarks"></a>Note  
 Questo set di righe è costituito da origini dati e gli enumeratori visibili dall'enumeratore corrente.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)