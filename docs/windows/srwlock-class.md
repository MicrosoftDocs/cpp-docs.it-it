---
title: SRWLock (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::SRWLock
dev_langs:
- C++
helpviewer_keywords:
- SRWLock class
ms.assetid: 4fa250e3-5f29-4b06-ac24-61b6c04ade93
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 58b537a29a042f2227f3c2c121a320532d52877c
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40016366"
---
# <a name="srwlock-class"></a>SRWLock (classe)
Rappresenta un blocco in lettura/scrittura.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
class SRWLock;  
```  
  
## <a name="remarks"></a>Note  
 Un blocco in lettura/scrittura è utilizzato per sincronizzare l'accesso attraverso i thread a un oggetto o una risorsa. Per altre informazioni, vedere [funzioni di sincronizzazione](http://msdn.microsoft.com/9b6359c2-0113-49b6-83d0-316ad95aba1b).  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|||  
|-|-|  
|`SyncLockExclusive`|Sinonimo di un **SRWLock** oggetto che viene acquisito in modalità esclusiva.|  
|`SyncLockShared`|Sinonimo di un **SRWLock** oggetto che viene acquisito in modalità condivisa.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore SRWLock::SRWLock](../windows/srwlock-srwlock-constructor.md)|Inizializza una nuova istanza di **SRWLock** classe.|  
|[Distruttore SRWLock::~SRWLock](../windows/srwlock-tilde-srwlock-destructor.md)|Deinizializza un'istanza di **SRWLock** classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SRWLock::LockExclusive](../windows/srwlock-lockexclusive-method.md)|Acquisisce un **SRWLock** oggetto in modalità esclusiva.|  
|[Metodo SRWLock::LockShared](../windows/srwlock-lockshared-method.md)|Acquisisce un **SRWLock** oggetto in modalità condivisa.|  
|[Metodo SRWLock::TryLockExclusive](../windows/srwlock-trylockexclusive-method.md)|Prova ad acquisire un **SRWLock** oggetto in modalità esclusiva per il correnti o specificate **SRWLock** oggetto.|  
|[Metodo SRWLock::TryLockShared](../windows/srwlock-trylockshared-method.md)|Prova ad acquisire un **SRWLock** oggetto in modalità condivisa per il correnti o specificate **SRWLock** oggetto.|  
  
### <a name="protected-data-member"></a>Membro dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Membro dati SRWLock::SRWLock_](../windows/srwlock-srwlock-data-member.md)|Contiene la variabile di blocco sottostante per l'oggetto corrente **SRWLock** oggetto.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `SRWLock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)