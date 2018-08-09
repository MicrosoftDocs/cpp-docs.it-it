---
title: 'Metodo asyncbase:: Trytransitiontocompleted | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::TryTransitionToCompleted
dev_langs:
- C++
helpviewer_keywords:
- TryTransitionToCompleted method
ms.assetid: 8d038e0a-47ec-4cfc-8aeb-6821282df67a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: a44434c530bd0685627e2e807140e31068cb5eb8
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39645760"
---
# <a name="asyncbasetrytransitiontocompleted-method"></a>Metodo AsyncBase::TryTransitionToCompleted
Indica se l'operazione asincrona corrente è stata completata.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
bool TryTransitionToCompleted(  
   void  
);  
```  
  
## <a name="return-value"></a>Valore restituito  
 **true** se l'operazione asincrona è stata completata; in caso contrario, **false**.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)