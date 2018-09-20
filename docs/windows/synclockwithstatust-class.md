---
title: Classe SyncLockWithStatusT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT
dev_langs:
- C++
helpviewer_keywords:
- SyncLockWithStatusT class
ms.assetid: 4832fd93-0ac8-4168-9404-b43fefea7476
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 69676651c77175b55f4363b525a3ca3acb9be46d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46437456"
---
# <a name="synclockwithstatust-class"></a>Classe SyncLockWithStatusT

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename SyncTraits
>
class SyncLockWithStatusT : public SyncLockT<SyncTraits>;
```

### <a name="parameters"></a>Parametri

*SyncTraits*<br/>
Un tipo che può accettare esclusivo o la proprietà di una risorsa condivisa.

## <a name="remarks"></a>Note

Rappresenta un tipo che può accettare esclusivo o la proprietà di una risorsa condivisa.

Il **SyncLockWithStatusT** classe viene utilizzata per implementare le [Mutex](../windows/mutex-class1.md) e [semaforo](../windows/semaphore-class.md) classi.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore SyncLockWithStatusT::SyncLockWithStatusT](../windows/synclockwithstatust-synclockwithstatust-constructor.md)|Inizializza una nuova istanza di **SyncLockWithStatusT** classe.|

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore SyncLockWithStatusT::SyncLockWithStatusT](../windows/synclockwithstatust-synclockwithstatust-constructor.md)|Inizializza una nuova istanza di **SyncLockWithStatusT** classe.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo SyncLockWithStatusT::GetStatus](../windows/synclockwithstatust-getstatus-method.md)|Recupera lo stato di attesa dell'oggetto corrente **SyncLockWithStatusT** oggetto.|
|[Metodo SyncLockWithStatusT::IsLocked](../windows/synclockwithstatust-islocked-method.md)|Indica se l'oggetto corrente **SyncLockWithStatusT** oggetto proprietario di una risorsa, ovvero, il **SyncLockWithStatusT** oggetto è *bloccato*.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[Membro dati SyncLockWithStatusT::status_](../windows/synclockwithstatust-status-data-member.md)|Contiene il risultato dell'operazione di attesa sottostanti dopo un'operazione di blocco su un oggetto in base a corrente **SyncLockWithStatusT** oggetto.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SyncLockT`

`SyncLockWithStatusT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)