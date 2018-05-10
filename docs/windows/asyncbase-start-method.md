---
title: 'Metodo asyncbase:: Start | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::Start
dev_langs:
- C++
helpviewer_keywords:
- Start method
ms.assetid: 67405c9d-0d1a-4c1e-8ea4-6ba01c1f90d9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0acc6f62530daf641a2e4d568ed511d6fd831c20
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="asyncbasestart-method"></a>Metodo AsyncBase::Start
Avvia l'operazione asincrona.  
  
## <a name="syntax"></a>Sintassi  
  
```  
STDMETHOD(  
   Start  
)(void);  
```  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione viene avviata o è già stato avviato. in caso contrario, E_ILLEGAL_STATE_CHANGE.  
  
## <a name="remarks"></a>Note  
 Start () è un'implementazione predefinita di IAsyncInfo::Start e non funziona effettivo. Per avviare un'operazione asincrona, eseguire l'override del metodo virtuale puro metodo OnStart ().  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)