---
title: 'Metodo asyncbase:: Fireprogress | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase::FireProgress
dev_langs:
- C++
helpviewer_keywords:
- FireProgress method
ms.assetid: 4512bef6-0ebc-4465-9b8a-4c9dfa82084c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 35faad82357b0f449d407787840c865b798427f1
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39642009"
---
# <a name="asyncbasefireprogress-method"></a>Metodo AsyncBase::FireProgress
Richiama il gestore di evento di stato di avanzamento corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
void FireProgress(  
   const typename ProgressTraits::Arg2Type arg  
);  
```  
  
### <a name="parameters"></a>Parametri  
 *arg*  
 Il metodo del gestore eventi da richiamare.  
  
## <a name="remarks"></a>Note  
 `ProgressTraits` è derivato da [ArgTraitsHelper (struttura)](../windows/argtraitshelper-structure.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)