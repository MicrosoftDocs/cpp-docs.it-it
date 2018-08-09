---
title: 'Metodo asyncbase:: Cancel | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::Cancel
dev_langs:
- C++
helpviewer_keywords:
- Cancel method
ms.assetid: 8bfebc63-3848-4629-bc89-aa538ed7e7ad
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 439a118bbea5adce4c306298e573bed85da26291
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39641904"
---
# <a name="asyncbasecancel-method"></a>Metodo AsyncBase::Cancel
Annulla un'operazione asincrona.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
STDMETHOD(  
   Cancel  
)(void);  
```  
  
## <a name="return-value"></a>Valore restituito  
 Per impostazione predefinita, restituisce sempre S_OK.  
  
## <a name="remarks"></a>Note  
 **Cancel ()** è un'implementazione predefinita di `IAsyncInfo::Cancel`, e non esegue alcuna operazione effettiva. Per effettivamente annullare un'operazione asincrona, eseguire l'override di `OnCancel()` metodo virtuale puro.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)