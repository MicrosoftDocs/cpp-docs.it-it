---
title: Classe EventSource | Microsoft Docs
ms.custom: ''
ms.date: 03/22/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource
dev_langs:
- C++
helpviewer_keywords:
- EventSource class
ms.assetid: 91f1c072-6af4-44e6-b6d8-ac6d0c688dde
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 8805547c5803ae665178330063e6b77b1b3c662e
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42596211"
---
# <a name="eventsource-class"></a>EventSource (classe)

Rappresenta un evento non agile. **EventSource** funzioni membro aggiungere, rimuovere e richiamare i gestori eventi. Per gli eventi di agili, usare [AgileEventSource](agileeventsource-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template<typename TDelegateInterface>
class EventSource;
```

### <a name="parameters"></a>Parametri

*TDelegateInterface*  
L'interfaccia a un delegato che rappresenta un gestore eventi.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore EventSource::EventSource](../windows/eventsource-eventsource-constructor.md)|Inizializza una nuova istanza di **EventSource** classe.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo EventSource::Add](../windows/eventsource-add-method.md)|Aggiunge il gestore dell'evento rappresentato dall'interfaccia del delegato specificato all'insieme di gestori di eventi per l'oggetto corrente **EventSource** oggetto.|
|[Metodo EventSource::GetSize](../windows/eventsource-getsize-method.md)|Recupera il numero di gestori di eventi associato all'oggetto corrente **EventSource** oggetto|
|[Metodo EventSource::InvokeAll](../windows/eventsource-invokeall-method.md)|Chiama ciascun gestore eventi associato all'oggetto corrente **EventSource** utilizzando i tipi di argomento specificati e gli argomenti dell'oggetto.|
|[Metodo EventSource::Remove](../windows/eventsource-remove-method.md)|Elimina il gestore dell'evento rappresentato dal token di registrazione di eventi specificato dall'insieme di gestori di eventi associato all'oggetto corrente **EventSource** oggetto.|

### <a name="protected-data-members"></a>Membri dati protetti

|nome|Descrizione|
|----------|-----------------|
|[Membro dati EventSource::addRemoveLock_](../windows/eventsource-addremovelock-data-member.md)|Sincronizza l'accesso per il [targets](../windows/eventsource-targets-data-member.md) matrice durante l'aggiunta, rimozione o richiamare i gestori eventi.|
|[Membro dati EventSource::targets_](../windows/eventsource-targets-data-member.md)|Matrice di uno o più gestori di eventi.|
|[Membro dati EventSource::targetsPointerLock_](../windows/eventsource-targetspointerlock-data-member.md)|Sincronizza l'accesso ai membri dati interni anche quando vengono aggiunti i gestori eventi per questo EventSource, rimosso o richiamato.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`EventSource`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](../windows/microsoft-wrl-namespace.md)  
[Classe AgileEventSource](agileeventsource-class.md)