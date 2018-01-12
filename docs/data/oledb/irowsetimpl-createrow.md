---
title: 'IRowsetImpl:: CreateRow | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IRowsetImpl.CreateRow
- ATL.IRowsetImpl.CreateRow
- ATL::IRowsetImpl::CreateRow
- CreateRow
- IRowsetImpl::CreateRow
dev_langs: C++
helpviewer_keywords: CreateRow method
ms.assetid: b01c430c-9484-4fef-a6cf-a2e8d9d99130
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: f90a5de73b5eea37eea192a4886fe29d1d8b435b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="irowsetimplcreaterow"></a>IRowsetImpl::CreateRow
Chiamato da un metodo di supporto [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) per allocare un nuovo **HROW**.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT CreateRow(  
   DBROWOFFSET lRowsOffset,  
   DBCOUNTITEM& cRowsObtained,  
   HROW* rgRows   
);  
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