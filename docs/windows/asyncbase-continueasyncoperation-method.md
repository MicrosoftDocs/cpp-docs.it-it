---
title: 'Metodo asyncbase:: Continueasyncoperation | Microsoft Docs'
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
ms.openlocfilehash: e7b5d2b10b571a3517beab98eaa839d5c7fd86c2
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39460833"
---
# <a name="asyncbasecontinueasyncoperation-method"></a>Metodo AsyncBase::ContinueAsyncOperation
Determina se l'operazione asincrona deve continuare l'elaborazione o deve interrompersi.  
  
## <a name="syntax"></a>Sintassi  
  
```  
inline bool ContinueAsyncOperation();  
```  
  
## <a name="return-value"></a>Valore restituito  
 **true** se lo stato corrente dell'operazione asincrona *avviato*, ovvero l'operazione deve continuare. In caso contrario, **false**, ovvero l'operazione deve interrompersi.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)