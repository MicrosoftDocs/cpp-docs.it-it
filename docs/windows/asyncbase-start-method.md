---
title: 'Metodo asyncbase:: Start | Microsoft Docs'
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
ms.openlocfilehash: 32c59c00180b26a2856b1fc210302ffff0e72f0c
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641304"
---
# <a name="asyncbasestart-method"></a>Metodo AsyncBase::Start
Avvia l'operazione asincrona.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
STDMETHOD(  
   Start  
)(void);  
```  
  
## <a name="return-value"></a>Valore restituito  
 S_OK se l'operazione viene avviata o è già stato avviato. in caso contrario, E_ILLEGAL_STATE_CHANGE.  
  
## <a name="remarks"></a>Note  
 **Start ()** è un'implementazione predefinita di `IAsyncInfo::Start`, e non esegue alcuna operazione effettiva. Per iniziare effettivamente a un'operazione asincrona, eseguire l'override di `OnStart()` metodo virtuale puro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)