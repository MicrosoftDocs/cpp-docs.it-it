---
title: 'ICommandImpl:: M_bcancelwhenexecuting | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ICommandImpl::m_bCancelWhenExecuting
- ICommandImpl.m_bCancelWhenExecuting
- ATL::ICommandImpl::m_bCancelWhenExecuting
- m_bCancelWhenExecuting
- ATL.ICommandImpl.m_bCancelWhenExecuting
dev_langs:
- C++
helpviewer_keywords:
- m_bCancelWhenExecuting
ms.assetid: d7d33e4c-a862-4e6d-a9a1-4400bfe45b88
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 30faa50739d5546c6204322f6aa5bd19da1033d1
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="icommandimplmbcancelwhenexecuting"></a>ICommandImpl::m_bCancelWhenExecuting
Indica se il comando può essere annullato durante l'esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
unsigned m_bCancelWhenExecuting:1;  
  
```  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita **true** (può essere annullato).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [ICommandImpl (classe)](../../data/oledb/icommandimpl-class.md)   
 [ICommandImpl::m_bCancel](../../data/oledb/icommandimpl-m-bcancel.md)