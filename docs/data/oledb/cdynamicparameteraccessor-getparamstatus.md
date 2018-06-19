---
title: 'CDynamicParameterAccessor:: Getparamstatus | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- CDynamicParameterAccessor::GetParamStatus
- CDynamicParameterAccessor.GetParamStatus
- ATL.CDynamicParameterAccessor.GetParamStatus
- ATL::CDynamicParameterAccessor::GetParamStatus
- GetParamStatus
dev_langs:
- C++
helpviewer_keywords:
- GetParamStatus method
ms.assetid: 9300225a-616c-4a7d-82d0-8c2ecd4d8185
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 5be2b663dfc1fedf9dffdf1d3acb34e58de23269
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33096828"
---
# <a name="cdynamicparameteraccessorgetparamstatus"></a>CDynamicParameterAccessor::GetParamStatus
Recupera lo stato del parametro specificato archiviato nel buffer.  
  
## <a name="syntax"></a>Sintassi  
  
```
bool GetParamStatus(DBORDINAL nParam,  
  DBSTATUS* pStatus);  

DBSTATUS* GetParamStatus(DBORDINAL nParam) const throw();  
```  
  
#### <a name="parameters"></a>Parametri  
 `nParam`  
 [in] Numero di parametro (offset da 1). Il parametro 0 è riservato ai valori restituiti. Il numero di parametro è l'indice del parametro in base al relativo ordine nella chiamata SQL o nella chiamata della stored procedure. Vedere [SetParam](../../data/oledb/cdynamicparameteraccessor-setparam.md) per un esempio.  
  
 `pStatus`  
 [out] Un puntatore a una variabile contenente il `DBSTATUS` lo stato del parametro specificato. Per informazioni su `DBSTATUS` valori, vedere [stato](https://msdn.microsoft.com/en-us/library/ms722617.aspx) nel *riferimento per programmatori OLE DB*, o cercare `DBSTATUS` in OleDb.  
  
## <a name="remarks"></a>Note  
 Il primo override restituisce **true** in caso di esito positivo o **false** in caso di errore. Il secondo override punta alla memoria contenente lo stato del parametro specificato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)