---
title: 'ICommandImpl:: M_bcancel | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ICommandImpl::m_bCancel
- ICommandImpl.m_bCancel
- m_bCancel
- ATL::ICommandImpl::m_bCancel
- ATL.ICommandImpl.m_bCancel
dev_langs: C++
helpviewer_keywords: m_bCancel
ms.assetid: f3b6fb60-4de4-4d81-a5d2-4052c41be0de
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e19b81818d564b3b6e3f7a1623482ef6458defd5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="icommandimplmbcancel"></a>ICommandImpl::m_bCancel
Indica se il comando è stato annullato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
unsigned m_bCancel:1;  
  
```  
  
## <a name="remarks"></a>Note  
 È possibile recuperare questa variabile nel **Execute** metodo di classe di comando e Annulla come appropriato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [ICommandImpl (classe)](../../data/oledb/icommandimpl-class.md)   
 [ICommandImpl::m_bCancelWhenExecuting](../../data/oledb/icommandimpl-m-bcancelwhenexecuting.md)