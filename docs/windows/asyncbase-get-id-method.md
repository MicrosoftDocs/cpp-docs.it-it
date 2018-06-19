---
title: 'Metodo asyncbase:: Get_id | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::get_Id
dev_langs:
- C++
helpviewer_keywords:
- get_Id method
ms.assetid: 591d8366-ea76-4deb-9278-9d3bc394a42b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b6720348692e92e05922bde1100e42c24a866933
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33859800"
---
# <a name="asyncbasegetid-method"></a>Metodo AsyncBase::get_Id
Recupera l'handle dell'operazione asincrona.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   get_Id  
)(unsigned int *id) override;  
```  
  
#### <a name="parameters"></a>Parametri  
 `id`  
 Il percorso in cui l'handle è da archiviare.  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se ha esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.  
  
## <a name="remarks"></a>Note  
 Questo metodo implementa IAsyncInfo::get_Id.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)