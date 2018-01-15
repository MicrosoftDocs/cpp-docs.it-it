---
title: ModuleBase (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: implements/Microsoft::WRL::Details::ModuleBase
dev_langs: C++
helpviewer_keywords: ModuleBase class
ms.assetid: edce7591-6893-46f7-94a7-382827775548
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: b02efe3ee61234b2439c1cbbae07827d6a879b2a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 **Intestazione:** h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)