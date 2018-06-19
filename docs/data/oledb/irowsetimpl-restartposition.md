---
title: 'IRowsetImpl:: RestartPosition | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 1c203cc19e31f22df5903f099e953fcf5663718f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33101250"
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