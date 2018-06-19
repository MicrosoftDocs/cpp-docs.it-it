---
title: 'ICommandImpl:: M_bisexecuting | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- ICommandImpl.m_bIsExecuting
- ATL::ICommandImpl::m_bIsExecuting
- m_bIsExecuting
- ATL.ICommandImpl.m_bIsExecuting
- ICommandImpl::m_bIsExecuting
dev_langs:
- C++
helpviewer_keywords:
- m_bIsExecuting
ms.assetid: 1e152164-514c-4116-88a3-16984af99991
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: d4e445ccee027aa980c2c651d04d9473321a6b56
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33099901"
---
# <a name="icommandimplmbisexecuting"></a>ICommandImpl::m_bIsExecuting
Indica se il comando è attualmente in esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
unsigned m_bIsExecuting:1;  
  
```  
  
## <a name="remarks"></a>Note  
 Il **Execute** metodo della classe del comando è possibile impostare questa variabile su **true**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [ICommandImpl (classe)](../../data/oledb/icommandimpl-class.md)   
 [ICommandImpl::m_bCancelWhenExecuting](../../data/oledb/icommandimpl-m-bcancelwhenexecuting.md)