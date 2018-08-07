---
title: Classe EventTargetArray | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::EventTargetArray
dev_langs:
- C++
helpviewer_keywords:
- EventTargetArray class
ms.assetid: e3cadb7c-2160-4cbb-a2f8-c28733d1e96d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2757589509e4a2b091c5057ef2065866a8829494
ms.sourcegitcommit: d5d6bb9945c3550b8e8864b22b3a565de3691fde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/06/2018
ms.locfileid: "39570421"
---
# <a name="eventtargetarray-class"></a>Classe EventTargetArray
Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class EventTargetArray : public Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<ClassicCom>, IUnknown>;  
```  
  
## <a name="remarks"></a>Note  
 Rappresenta una matrice di gestori di eventi.  
  
 I gestori di eventi che sono associati un [EventSource](../windows/eventsource-class.md) oggetto vengono archiviati in un protetto **EventTargetArray** (membro dati).  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore EventTargetArray::EventTargetArray](../windows/eventtargetarray-eventtargetarray-constructor.md)|Inizializza una nuova istanza di **EventTargetArray** classe.|  
|[Distruttore EventTargetArray::~EventTargetArray](../windows/eventtargetarray-tilde-eventtargetarray-destructor.md)|Deinizializza corrente **EventTargetArray** classe.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo EventTargetArray::AddTail](../windows/eventtargetarray-addtail-method.md)|Aggiunge il gestore eventi specificato alla fine della matrice interna di gestori eventi.|  
|[Metodo EventTargetArray::Begin](../windows/eventtargetarray-begin-method.md)|Ottiene l'indirizzo del primo elemento della matrice interna di gestori eventi.|  
|[Metodo EventTargetArray::End](../windows/eventtargetarray-end-method.md)|Ottiene l'indirizzo dell'ultimo elemento nella matrice interna di gestori di eventi.|  
|[Metodo EventTargetArray::Length](../windows/eventtargetarray-length-method.md)|Ottiene il numero corrente di elementi nella matrice interna di gestori di eventi.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `EventTargetArray`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Event. h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)