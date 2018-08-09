---
title: Classe di semaforo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Semaphore
dev_langs:
- C++
helpviewer_keywords:
- Semaphore class
ms.assetid: ded53526-17b4-4381-9c60-ea5e77363db6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5101aba24cd8a0ed4f44587ffc4ad9e973099b8a
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39652636"
---
# <a name="semaphore-class"></a>Semaphore (classe)
Rappresenta un oggetto di sincronizzazione che controlla una risorsa condivisa che può supportare un numero limitato di utenti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class Semaphore : public HandleT<HandleTraits::SemaphoreTraits>  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`SyncLock`|Un sinonimo per una classe che supporta i blocchi sincroni.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Semaphore::Semaphore](../windows/semaphore-semaphore-constructor.md)|Inizializza una nuova istanza di **semaforo** classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo InvokeHelper::Invoke](../windows/invokehelper-invoke-method.md)|Chiama il gestore dell'evento la cui firma contiene il numero di argomenti specificato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Semaphore::Lock](../windows/semaphore-lock-method.md)|Attende che l'oggetto corrente oppure l'oggetto associato all'handle specificato, si trova nello stato segnalato oppure è trascorso l'intervallo di timeout specificato.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore Semaphore::operator=](../windows/semaphore-operator-assign-operator.md)|Sposta l'handle specificato da un **semaforo** oggetto all'oggetto corrente **semaforo** oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Semaphore`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)