---
title: 'IRowsetImpl:: CreateRow | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IRowsetImpl.CreateRow
- ATL.IRowsetImpl.CreateRow
- ATL::IRowsetImpl::CreateRow
- CreateRow
- IRowsetImpl::CreateRow
dev_langs:
- C++
helpviewer_keywords:
- CreateRow method
ms.assetid: b01c430c-9484-4fef-a6cf-a2e8d9d99130
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: eae3fbdce1db5760d4ee5ca75e007c01e98b7bed
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33103242"
---
# <a name="irowsetimplcreaterow"></a>IRowsetImpl::CreateRow
Chiamato da un metodo di supporto [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) per allocare un nuovo **HROW**.  
  
## <a name="syntax"></a>Sintassi  
  
```
HRESULT CreateRow(DBROWOFFSET lRowsOffset,  
  DBCOUNTITEM& cRowsObtained,  
   HROW* rgRows);  
```  
  
#### <a name="parameters"></a>Parametri  
 *lRowsOffset*  
 Posizione del cursore di riga da creare.  
  
 *cRowsObtained*  
 Passato un riferimento all'utente che indica il numero di righe creati.  
  
 *rgRows*  
 Matrice di **HROW**s restituito al chiamante con gli handle di riga appena creata.  
  
## <a name="remarks"></a>Note  
 Se la riga esiste, questo metodo chiama [AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md) e restituisce. In caso contrario, alloca una nuova istanza della variabile RowClass modello e lo aggiunge a [m_rgRowHandles](../../data/oledb/irowsetimpl-m-rgrowhandles.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)