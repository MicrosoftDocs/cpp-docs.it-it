---
title: 'IRowsetUpdateImpl:: IsUpdateAllowed | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IRowsetUpdateImpl::IsUpdateAllowed
- IRowsetUpdateImpl.IsUpdateAllowed
- IsUpdateAllowed
dev_langs: C++
helpviewer_keywords: IsUpdateAllowed method
ms.assetid: d6daf3b3-a8e0-4275-a67d-897dea01e297
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 312d0488afc73d38ebd1ceb8a3f4334468607ed9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="irowsetupdateimplisupdateallowed"></a>IRowsetUpdateImpl::IsUpdateAllowed
Eseguire l'override di questo metodo per verificare la presenza di sicurezza, l'integrità, e così via prima degli aggiornamenti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT IsUpdateAllowed(  
   DBPENDINGSTATUS /* [in] *//* status */,  
   HROW /* [in] *//* hRowUpdate */,  
   DBROWSTATUS* /* [out] *//* pRowStatus */  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *status*  
 [in] Lo stato di operazioni sulle righe in sospeso.  
  
 *hRowUpdate*  
 [in] Handle per le righe in cui che l'utente desidera aggiornare.  
  
 *pRowStatus*  
 [out] Lo stato restituito all'utente.  
  
## <a name="remarks"></a>Note  
 Se si determina che un aggiornamento sono consentito, restituisce `S_OK`; in caso contrario restituisce **E_FAIL**. Se si consente a un aggiornamento, è inoltre necessario impostare il **DBROWSTATUS** in [IRowsetUpdateImpl:: Update](../../data/oledb/irowsetupdateimpl-update.md) al relativo [lo stato della riga](https://msdn.microsoft.com/en-us/library/ms722752.aspx).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)