---
title: IRowsetImpl::m_bReset | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1ca38b0fa56f901d18e90d3305c92cc097452369
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
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