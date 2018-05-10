---
title: ModuleBase (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ModuleBase
dev_langs:
- C++
helpviewer_keywords:
- ModuleBase class
ms.assetid: edce7591-6893-46f7-94a7-382827775548
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bfee0c0cd7ff7bd7f4525a291184f08f1e2898e5
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="modulebase-class"></a>Classe ModuleBase
Supporta l'infrastruttura WRL e non deve essere utilizzato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class ModuleBase;  
```  
  
## <a name="remarks"></a>Note  
 Rappresenta la classe di base di [modulo](../windows/module-class.md) classi.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ModuleBase::ModuleBase](../windows/modulebase-modulebase-constructor.md)|Inizializza un'istanza della classe del modulo.|  
|[Distruttore ModuleBase::~ModuleBase](../windows/modulebase-tilde-modulebase-destructor.md)|Deinizializza l'istanza corrente della classe del modulo.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ModuleBase::DecrementObjectCount](../windows/modulebase-decrementobjectcount-method.md)|Quando viene implementato, riduce il numero di oggetti rilevate dal modulo.|  
|[Metodo ModuleBase::IncrementObjectCount](../windows/modulebase-incrementobjectcount-method.md)|Quando viene implementato, incrementa il numero di oggetti registrati dal modulo.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ModuleBase`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** FTM.  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)