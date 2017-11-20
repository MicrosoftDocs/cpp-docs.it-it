---
title: 'IRowsetChangeImpl:: FlushData | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IRowsetChangeImpl::FlushData
- IRowsetChangeImpl.FlushData
- FlushData
dev_langs: C++
helpviewer_keywords: FlushData method
ms.assetid: fd4bc73b-bc25-4aab-90d5-0bed92670c88
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 31555e1f8305a281955902b71fdc71fbcc5405e5
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="irowsetchangeimplflushdata"></a>IRowsetChangeImpl::FlushData
Sottoposto a override dal provider per eseguire il commit nell'archivio dati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT FlushData(  
   HROW hRowToFlush,  
   HACCESSOR hAccessorToFlush   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *hRowToFlush*  
 [in] Handle per le righe per i dati. Il tipo di questa riga è determinato dal *RowClass* argomento di modello del `IRowsetImpl` classe (`CSimpleRow` per impostazione predefinita).  
  
 *hAccessorToFlush*  
 [in] Handle per la funzione di accesso, che contiene informazioni di associazione e informazioni sul tipo nel relativo **PROVIDER_MAP** (vedere [IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)).  
  
## <a name="return-value"></a>Valore restituito  
 `HRESULT` standard.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md)