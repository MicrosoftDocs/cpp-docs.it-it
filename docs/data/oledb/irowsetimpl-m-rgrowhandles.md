---
title: 'IRowsetImpl:: M_rgrowhandles | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IRowsetImpl::m_rgRowHandles
- IRowsetImpl.m_rgRowHandles
- m_rgRowHandles
- ATL::IRowsetImpl::m_rgRowHandles
- ATL.IRowsetImpl.m_rgRowHandles
dev_langs: C++
helpviewer_keywords: m_rgRowHandles
ms.assetid: d3c2578f-58c4-4301-bf59-cf101a523a95
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: bcfe46c6ca0e1e3303aae60ef371548bedfa7b1e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="irowsetimplmrgrowhandles"></a>IRowsetImpl::m_rgRowHandles
Una mappa di handle di riga attualmente contenuti dal provider in risposta a `GetNextRows`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
MapClass  
 m_rgRowHandles;  
  
```  
  
## <a name="remarks"></a>Note  
 Handle di riga vengono rimosse chiamando `ReleaseRows`. Vedere il [IRowsetImpl Panoramica](../../data/oledb/irowsetimpl-class.md) per la definizione di *MapClass*.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)