---
title: 'IRowsetImpl:: SetDBStatus | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IRowsetImpl.SetDBStatus
- IRowsetImpl::SetDBStatus
- SetDBStatus
dev_langs:
- C++
helpviewer_keywords:
- SetDBStatus method
ms.assetid: b73f526a-4fc6-4adb-9611-c3cca2cddb23
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 7e6e07b6fe1a45a779c5ffe1e1afffaabdcb6d34
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33103902"
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