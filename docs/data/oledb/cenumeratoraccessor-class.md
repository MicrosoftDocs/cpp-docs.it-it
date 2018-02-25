---
title: Classe CEnumeratorAccessor | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5b3efe610e53d591f17d3ce227c6dbc09f0e23ce
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
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