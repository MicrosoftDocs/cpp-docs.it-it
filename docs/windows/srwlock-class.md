---
title: SRWLock (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: corewrappers/Microsoft::WRL::Wrappers::SRWLock
dev_langs: C++
helpviewer_keywords: SRWLock class
ms.assetid: 4fa250e3-5f29-4b06-ac24-61b6c04ade93
caps.latest.revision: "5"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b6721620490a00da0b9c8fa039be0379f4d7dd1b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="srwlock-class"></a>SRWLock (classe)
Rappresenta un blocco in lettura/scrittura.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class SRWLock;  
```  
  
## <a name="remarks"></a>Note  
 Un blocco in lettura/scrittura è utilizzato per sincronizzare l'accesso attraverso i thread a un oggetto o una risorsa. Per ulteriori informazioni, vedere [funzioni di sincronizzazione](http://msdn.microsoft.com/en-us/9b6359c2-0113-49b6-83d0-316ad95aba1b).  
  
## <a name="members"></a>Membri  
  
### <a name="public-typedefs"></a>Typedef pubblici  
  
|||  
|-|-|  
|**SyncLockExclusive**|Sinonimo di un oggetto SRWLock che viene acquisito in modalità esclusiva.|  
|**SyncLockShared**|Sinonimo di un oggetto SRWLock che viene acquisito in modalità condivisa.|  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore SRWLock::SRWLock](../windows/srwlock-srwlock-constructor.md)|Inizializza una nuova istanza della classe SRWLock.|  
|[Distruttore SRWLock::~SRWLock](../windows/srwlock-tilde-srwlock-destructor.md)|Deinizializza un'istanza della classe SRWLock.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo SRWLock::LockExclusive](../windows/srwlock-lockexclusive-method.md)|Acquisisce un oggetto SRWLock in modalità esclusiva.|  
|[Metodo SRWLock::LockShared](../windows/srwlock-lockshared-method.md)|Acquisisce un oggetto SRWLock in modalità condivisa.|  
|[Metodo SRWLock::TryLockExclusive](../windows/srwlock-trylockexclusive-method.md)|Tenta di acquisire un oggetto SRWLock in modalità esclusiva per l'oggetto SRWLock corrente o specificata.|  
|[Metodo SRWLock::TryLockShared](../windows/srwlock-trylockshared-method.md)|Tenta di acquisire un oggetto SRWLock in modalità condivisa per l'oggetto SRWLock corrente o specificata.|  
  
### <a name="protected-data-member"></a>Membro dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati SRWLock::SRWLock_](../windows/srwlock-srwlock-data-member.md)|Contiene la variabile sottostante di blocco per l'oggetto SRWLock corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `SRWLock`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** corewrappers. h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Wrappers](../windows/microsoft-wrl-wrappers-namespace.md)