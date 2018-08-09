---
title: Classe ModuleBase | Microsoft Docs
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
ms.openlocfilehash: 8ff7fb86b7b39e283c27ee78611444b78bc53c5b
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40020278"
---
# <a name="modulebase-class"></a>Classe ModuleBase
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
class ModuleBase;  
```  
  
## <a name="remarks"></a>Note  
 Rappresenta la classe di base di [modulo](../windows/module-class.md) classi.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore ModuleBase::ModuleBase](../windows/modulebase-modulebase-constructor.md)|Inizializza un'istanza della classe `Module`.|  
|[Distruttore ModuleBase::~ModuleBase](../windows/modulebase-tilde-modulebase-destructor.md)|Deinizializza l'istanza corrente del `Module` classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo ModuleBase::DecrementObjectCount](../windows/modulebase-decrementobjectcount-method.md)|Quando viene implementato, decrementa il numero di oggetti registrati dal modulo.|  
|[Metodo ModuleBase::IncrementObjectCount](../windows/modulebase-incrementobjectcount-method.md)|Quando implementato, incrementa il numero di oggetti registrati dal modulo.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `ModuleBase`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Implements. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)