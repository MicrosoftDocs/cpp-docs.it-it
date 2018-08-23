---
title: SyncLockT (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockT
dev_langs:
- C++
helpviewer_keywords:
- SyncLockT class
ms.assetid: a967f6f7-3555-43d1-b210-2bb65d63d15e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: e8589c43d49709842a745464d2727860ccd2c1e2
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42609677"
---
# <a name="synclockt-class"></a>SyncLockT (classe)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename SyncTraits
>
class SyncLockT;
```

### <a name="parameters"></a>Parametri

*SyncTraits*  
Tipo che può assumere la proprietà di una risorsa.

## <a name="remarks"></a>Note

Rappresenta un tipo che può accettare esclusivo o la proprietà di una risorsa condivisa.

Il **SyncLockT** classe viene utilizzata, ad esempio, per facilitare l'implementazione di [SRWLock](../windows/srwlock-class.md) classe.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore SyncLockT::SyncLockT](../windows/synclockt-synclockt-constructor.md)|Inizializza una nuova istanza di **SyncLockT** classe.|
|[Distruttore SyncLockT::~SyncLockT](../windows/synclockt-tilde-synclockt-destructor.md)|Deinizializza un'istanza di **SyncLockT** classe.|

### <a name="protected-constructors"></a>Costruttori protetti

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore SyncLockT::SyncLockT](../windows/synclockt-synclockt-constructor.md)|Inizializza una nuova istanza di **SyncLockT** classe.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo SyncLockT::IsLocked](../windows/synclockt-islocked-method.md)|Indica se l'oggetto corrente **SyncLockT** oggetto proprietario di una risorsa, ovvero, il **SyncLockT** oggetto è *bloccato*.|
|[Metodo SyncLockT::Unlock](../windows/synclockt-unlock-method.md)|Controllo della risorsa contenuta nel corrente rilascia **SyncLockT** dell'oggetto, se presente.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[Membro dati SyncLockT::sync_](../windows/synclockt-sync-data-member.md)|Contiene la risorsa sottostante rappresentata dal **SyncLockT** classe.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`SyncLockT`

## <a name="requirements"></a>Requisiti

**Intestazione:** corewrappers. h

**Namespace:** Microsoft::WRL::Wrappers::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Wrappers::Details](../windows/microsoft-wrl-wrappers-details-namespace.md)  
[Classe SRWLock](../windows/srwlock-class.md)