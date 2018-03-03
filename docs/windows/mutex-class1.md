---
title: Mutex Class1 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Mutex
dev_langs:
- C++
helpviewer_keywords:
- Mutex class
ms.assetid: 682a0963-721c-46a2-8871-000e9997505b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c0e849d1fee7eca67f3b5765d31b54e0660eaa25
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mutex-class1"></a>Mutex Class1
Rappresenta un oggetto di sincronizzazione che controlla esclusivamente una risorsa condivisa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class Mutex : public HandleT<HandleTraits::MutexTraits>  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|**SyncLock**|Un sinonimo per una classe che supporta i blocchi sincroni.|  
  
### <a name="public-constructor"></a>Costruttore pubblico  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Mutex::Mutex](../windows/mutex-mutex-constructor.md)|Inizializza una nuova istanza della classe Mutex.|  
  
### <a name="public-members"></a>Membri pubblici  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Metodo Mutex::Lock](../windows/mutex-lock-method.md)|Attende l'oggetto corrente o l'oggetto Mutex associato all'handle specificato, il mutex rilasciato o è trascorso l'intervallo di timeout specificato.|  
  
### <a name="public-operator"></a>Operatore pubblico  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Operatore Mutex::operator=](../windows/mutex-operator-assign-operator.md)|Assegna il Mutex specificato (sposta) dell'oggetto per l'oggetto Mutex corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Mutex`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)