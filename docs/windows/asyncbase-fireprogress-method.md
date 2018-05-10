---
title: 'Metodo asyncbase:: Fireprogress | Documenti Microsoft'
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
ms.openlocfilehash: 7c2c5aab609b597c3a9ff464b868ba831889deed
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="asyncbasefireprogress-method"></a>Metodo AsyncBase::FireProgress
Richiama il gestore di evento di stato di avanzamento corrente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void FireProgress(  
   const typename ProgressTraits::Arg2Type arg  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `arg`  
 Metodo del gestore eventi da richiamare.  
  
## <a name="remarks"></a>Note  
 `ProgressTraits` derivato da [ArgTraitsHelper (struttura)](../windows/argtraitshelper-structure.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async. h  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)