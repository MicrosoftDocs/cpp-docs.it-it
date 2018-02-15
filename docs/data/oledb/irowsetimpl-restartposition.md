---
title: 'IRowsetImpl:: RestartPosition | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL.IRowsetImpl.RestartPosition
- IRowsetImpl::RestartPosition
- RestartPosition
- ATL::IRowsetImpl::RestartPosition
- IRowsetImpl.RestartPosition
dev_langs:
- C++
helpviewer_keywords:
- RestartPosition method
ms.assetid: 14de66ef-8d2c-4404-adb6-3f6c74ac6cf1
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5cfdf198b68b3587146ebc4a666ac2e596d05aba
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="irowsetimplrestartposition"></a>IRowsetImpl::RestartPosition
Riposiziona posizione del recupero successivo per la posizione iniziale. vale a dire la posizione quando il set di righe è stato inizialmente creato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      STDMETHOD(RestartPosition )(HCHAPTER /* hReserved */);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [IRowset:: RestartPosition](https://msdn.microsoft.com/en-us/library/ms712877.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="remarks"></a>Note  
 La posizione del set di righe viene definita fino **GetNextRow** viene chiamato. È possibile spostare le versioni precedenti un rowet chiamando `RestartPosition` e il recupero o lo scorrimento all'indietro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)