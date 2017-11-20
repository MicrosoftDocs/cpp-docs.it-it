---
title: 'IRowsetImpl:: SetDBStatus | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IRowsetImpl.SetDBStatus
- IRowsetImpl::SetDBStatus
- SetDBStatus
dev_langs: C++
helpviewer_keywords: SetDBStatus method
ms.assetid: b73f526a-4fc6-4adb-9611-c3cca2cddb23
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: dcc6783ce210c434e58814bcee8654ddd9111b52
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="irowsetimplsetdbstatus"></a>IRowsetImpl::SetDBStatus
Imposta il `DBSTATUS` flag di stato per il campo specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      virtual HRESULT SetDBStatus(  
   DBSTATUS* statusFlags,  
   RowClass* currentRow,  
   ATLCOLUMNINFO* columnInfo   
);  
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