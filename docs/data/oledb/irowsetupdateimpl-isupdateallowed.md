---
title: 'IRowsetUpdateImpl:: IsUpdateAllowed | Documenti Microsoft'
ms.custom: ''
ms.date: 06/25/2018
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- IRowsetUpdateImpl::IsUpdateAllowed
- IRowsetUpdateImpl.IsUpdateAllowed
- IsUpdateAllowed
dev_langs:
- C++
helpviewer_keywords:
- IsUpdateAllowed method
ms.assetid: d6daf3b3-a8e0-4275-a67d-897dea01e297
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 363626cedddea3da57e829a43c21c63b5c2b05cd
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122004"
---
# <a name="irowsetupdateimplisupdateallowed"></a>IRowsetUpdateImpl::IsUpdateAllowed
Eseguire l'override di questo metodo per verificare la presenza di sicurezza, integrità e così via prima degli aggiornamenti.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
HRESULT IsUpdateAllowed(DBPENDINGSTATUS /* [in] */ /* status */,  
   HROW /* [in] */ /* hRowUpdate */,  
   DBROWSTATUS* /* [out] */ /* pRowStatus */);  
```  
  
#### <a name="parameters"></a>Parametri  
 *status*  
 [in] Lo stato di operazioni sulle righe in sospeso.  
  
 *hRowUpdate*  
 [in] Handle per le righe che l'utente desidera aggiornare.  
  
 *pRowStatus*  
 [out] Lo stato restituito all'utente.  
  
## <a name="remarks"></a>Note  
 Se si determina che un aggiornamento sono consentito, restituisce `S_OK`; in caso contrario restituisce **E_FAIL**. Se si consente a un aggiornamento, è inoltre necessario impostare il **DBROWSTATUS** in [IRowsetUpdateImpl:: Update](../../data/oledb/irowsetupdateimpl-update.md) al relativo [lo stato della riga](https://msdn.microsoft.com/en-us/library/ms722752.aspx).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md)