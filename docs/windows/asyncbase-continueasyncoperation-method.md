---
title: 'Metodo asyncbase:: Continueasyncoperation | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::ContinueAsyncOperation
dev_langs:
- C++
helpviewer_keywords:
- ContinueAsyncOperation method
ms.assetid: ce38181d-2fc3-4579-b0ce-237a3c7648bc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: caf7cd1cbee97761c6877ec6ab3a51ea956cbfd1
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="asyncbasecontinueasyncoperation-method"></a>Metodo AsyncBase::ContinueAsyncOperation
Determina se l'operazione asincrona deve continuare l'elaborazione o l'interruzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline bool ContinueAsyncOperation();  
```  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se lo stato corrente dell'operazione asincrona *avviato*, ovvero l'operazione deve continuare. In caso contrario, `false`, ovvero l'operazione deve interrompersi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)