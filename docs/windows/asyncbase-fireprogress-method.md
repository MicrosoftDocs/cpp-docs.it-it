---
title: 'Metodo asyncbase:: Fireprogress | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: async/Microsoft::WRL::AsyncBase::FireProgress
dev_langs: C++
helpviewer_keywords: FireProgress method
ms.assetid: 4512bef6-0ebc-4465-9b8a-4c9dfa82084c
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 358a85f6ec0a451534684f2201caffefb1c1ad1b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 `ProgressTraits`derivato da [ArgTraitsHelper (struttura)](../windows/argtraitshelper-structure.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Async  
  
 **Spazio dei nomi:** Microsoft::WRL  
  
## <a name="see-also"></a>Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)