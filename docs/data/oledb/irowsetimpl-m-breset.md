---
title: 'IRowsetImpl:: M_breset | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ATL.IRowsetImpl.m_bReset
- IRowsetImpl.m_bReset
- m_bReset
- IRowsetImpl::m_bReset
- ATL::IRowsetImpl::m_bReset
dev_langs:
- C++
helpviewer_keywords:
- m_bReset
ms.assetid: d423f9f3-4d48-4d0c-b152-684c81a0b34e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a9aec38e3cf7e9a58c4fe99d06f35ae55cfdf81c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33102007"
---
# <a name="irowsetimplmbreset"></a>IRowsetImpl::m_bReset
Un flag di bit utilizzato per determinare se la posizione del cursore è definita nel set di righe.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
unsigned m_bReset:1;  
  
```  
  
## <a name="remarks"></a>Note  
 Se il consumer chiama [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) con un valore negativo `lOffset` o *cRows* e `m_bReset` è true, `GetNextRows` sposta alla fine del set di righe. Se `m_bReset` è false, il consumer riceve un codice di errore, in conformità con la specifica OLE DB. Il `m_bReset` flag viene impostato su **true** quando si crea il set di righe e quando il consumer chiama [IRowsetImpl:: RestartPosition](../../data/oledb/irowsetimpl-restartposition.md). Viene impostato su **false** quando si chiama `GetNextRows`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)