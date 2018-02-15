---
title: 'IRowsetImpl:: SetDBStatus | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IRowsetImpl.SetDBStatus
- IRowsetImpl::SetDBStatus
- SetDBStatus
dev_langs:
- C++
helpviewer_keywords:
- SetDBStatus method
ms.assetid: b73f526a-4fc6-4adb-9611-c3cca2cddb23
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 0448e6e72fcfe760b6ed01fa2b1e40a85c9d08f5
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="irowsetimplsetdbstatus"></a>IRowsetImpl::SetDBStatus
Imposta il `DBSTATUS` flag di stato per il campo specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
      virtual HRESULT SetDBStatus(DBSTATUS* statusFlags,  
   RowClass* currentRow,  
   ATLCOLUMNINFO* columnInfo);  
```  
  
#### <a name="parameters"></a>Parametri  
 `statusFlags`  
 Il [DBSTATUS](https://msdn.microsoft.com/en-us/library/ms722617.aspx) flag da impostare per la colonna.  
  
 `currentRow`  
 La riga corrente.  
  
 *columnInfo*  
 La colonna per cui stato è impostato.  
  
## <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
## <a name="remarks"></a>Note  
 Il provider esegue l'override di questa funzione per fornire un'elaborazione speciale per **DBSTATUS_S_ISNULL** e **DBSTATUS_S_DEFAULT**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)