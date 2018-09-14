---
title: Classe EventSource | Microsoft Docs
ms.custom: ''
ms.date: 09/12/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::EventSource
- event/Microsoft::WRL::EventSource::Add
- event/Microsoft::WRL::EventSource::addRemoveLock_
- event/Microsoft::WRL::EventSource::EventSource
- event/Microsoft::WRL::EventSource::GetSize
- event/Microsoft::WRL::EventSource::InvokeAll
- event/Microsoft::WRL::EventSource::Remove
- event/Microsoft::WRL::EventSource::targets_
- event/Microsoft::WRL::EventSource::targetsPointerLock_
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::EventSource class
- Microsoft::WRL::EventSource::Add method
- Microsoft::WRL::EventSource::addRemoveLock_ data member
- Microsoft::WRL::EventSource::EventSource, constructor
- Microsoft::WRL::EventSource::GetSize method
- Microsoft::WRL::EventSource::InvokeAll method
- Microsoft::WRL::EventSource::Remove method
- Microsoft::WRL::EventSource::targets_ data member
- Microsoft::WRL::EventSource::targetsPointerLock_ data member
ms.assetid: 91f1c072-6af4-44e6-b6d8-ac6d0c688dde
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 08347b4ccfa44d8645acc2bd5e96775bab4e7740
ms.sourcegitcommit: 87d317ac62620c606464d860aaa9e375a91f4c99
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/14/2018
ms.locfileid: "45601496"
---
# <a name="eventsource-class"></a>EventSource (classe)

Rappresenta un evento non agile. Le funzioni membro `EventSource` aggiungono, rimuovono ed invocano i gestori di eventi. Per gli eventi di agili, usare [AgileEventSource](agileeventsource-class.md).

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

| Nome                                     | Descrizione                                            |
| ---------------------------------------- | ------------------------------------------------------ |
| [EventSource:: EventSource](#eventsource) | Inizializza una nuova istanza della classe `EventSource`. |

### <a name="public-methods"></a>Metodi pubblici

| Nome                                 | Descrizione                                                                                                                                                      |
| ------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [EventSource:: Add](#add)             | Aggiunge il gestore dell'evento rappresentato dall'interfaccia del delegato specificato all'insieme di gestori di eventi per l'oggetto corrente `EventSource` oggetto.                     |
| [EventSource:: GetSize](#getsize)     | Recupera il numero di gestori di eventi associato all'oggetto corrente `EventSource` oggetto.                                                                         |
| [EventSource:: Invokeall](#invokeall) | Chiama ciascun gestore eventi associato all'oggetto corrente `EventSource` utilizzando i tipi di argomento specificati e gli argomenti dell'oggetto.                                      |
| [EventSource:: Remove](#remove)       | Elimina il gestore dell'evento rappresentato dal token di registrazione di eventi specificato dall'insieme di gestori di eventi associato all'oggetto corrente `EventSource` oggetto. |

### <a name="protected-data-members"></a>Membri dati protetti

| nome                                                    | Descrizione                                                                                                                       |
| ------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| [EventSource::addRemoveLock_](#addremovelock)           | Sincronizza l'accesso per il [targets](#targets) matrice durante l'aggiunta, rimozione o richiamare i gestori eventi.                          |
| [EventSource::targets_](#targets)                       | Matrice di uno o più gestori di eventi.                                                                                           |
| [EventSource::targetsPointerLock_](#targetspointerlock) | Sincronizza l'accesso ai membri dati interni anche quando vengono aggiunti i gestori eventi per questo EventSource, rimosso o richiamato. |

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`EventSource`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="add"></a>EventSource:: Add

Aggiunge il gestore dell'evento rappresentato dall'interfaccia del delegato specificato all'insieme di gestori di eventi per l'oggetto corrente `EventSource` oggetto.

```cpp
HRESULT Add(
   _In_ TDelegateInterface* delegateInterface,
   _Out_ EventRegistrationToken* token
);
```

### <a name="parameters"></a>Parametri

*delegateInterface*  
L'interfaccia per un oggetto delegato, che rappresenta un gestore eventi.

*token*  
Quando questa operazione viene completata, un handle che rappresenta l'evento. Usare questo token come parametro per il [Remove ()](#remove) metodo rimuovere il gestore dell'evento.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="addremovelock"></a>EventSource::addRemoveLock_

Sincronizza l'accesso per il [targets](#targets) matrice durante l'aggiunta, rimozione o richiamare i gestori eventi.

```cpp
Wrappers::SRWLock addRemoveLock_;
```

## <a name="eventsource"></a>EventSource:: EventSource

Inizializza una nuova istanza della classe `EventSource`.

```cpp
EventSource();
```

## <a name="getsize"></a>EventSource:: GetSize

Recupera il numero di gestori di eventi associato all'oggetto corrente `EventSource` oggetto.

```cpp
size_t GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di gestori eventi in [targets](#targets).

## <a name="invokeall"></a>EventSource:: Invokeall

Chiama ciascun gestore eventi associato all'oggetto corrente `EventSource` utilizzando i tipi di argomento specificati e gli argomenti dell'oggetto.

```cpp
void InvokeAll();
template <
   typename T0
>
void InvokeAll(
   T0arg0
);
template <
   typename T0,
   typename T1
>
void InvokeAll(
   T0arg0,
   T1arg1
);
template <
   typename T0,
   typename T1,
   typename T2
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4,
   typename T5
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4,
   T5arg5
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4,
   typename T5,
   typename T6
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4,
   T5arg5,
   T6arg6
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4,
   typename T5,
   typename T6,
   typename T7
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4,
   T5arg5,
   T6arg6,
   T7arg7
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4,
   typename T5,
   typename T6,
   typename T7,
   typename T8
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4,
   T5arg5,
   T6arg6,
   T7arg7,
   T8arg8
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4,
   typename T5,
   typename T6,
   typename T7,
   typename T8,
   typename T9
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4,
   T5arg5,
   T6arg6,
   T7arg7,
   T8arg8,
   T9arg9
);
```

### <a name="parameters"></a>Parametri

*T0*  
Tipo di argomento del gestore dell'evento iniziale.

*T1*  
Il tipo del primo argomento del gestore eventi.

*T2*  
Il tipo del secondo argomento del gestore eventi.

*T3*  
Il tipo del terzo argomento gestore dell'evento.

*T4*  
Il tipo del quarto argomento gestore dell'evento.

*T5*  
Il tipo del quinto argomento del gestore eventi.

*T6*  
Il tipo del sesto argomento del gestore eventi.

*T7*  
Il tipo del settimo argomento del gestore eventi.

*T8*  
Il tipo dell'ottavo argomento gestore eventi.

*T9*  
Il tipo del nono argomento del gestore eventi.

*arg0*  
L'argomento del gestore dell'evento iniziale.

*arg1*  
Il primo argomento di gestore dell'evento.

*Arg2*  
Il secondo argomento di gestore dell'evento.

*arg3*  
Il terzo argomento di gestore dell'evento.

*Arg4*  
Il quarto argomento gestore dell'evento.

*Arg5*  
Il quinto argomento del gestore dell'evento.

*Arg6*  
Il sesto argomento del gestore dell'evento.

*Arg7*  
Il settimo argomento del gestore dell'evento.

*arg8*  
Argomento ottavo gestore dell'evento.

*arg9*  
Il nono argomento del gestore dell'evento.

## <a name="remove"></a>EventSource:: Remove

Elimina il gestore dell'evento rappresentato dal token di registrazione di eventi specificato dall'insieme di gestori di eventi associato all'oggetto corrente `EventSource` oggetto.

```cpp
HRESULT Remove(
   EventRegistrationToken token
);
```

### <a name="parameters"></a>Parametri

*token*  
Un handle che rappresenta un gestore eventi. Questo token è stato restituito quando il gestore dell'evento è stato registrato per il [Add ()](#add) (metodo).

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Note

Per altre informazioni sul `EventRegistrationToken` struttura, vedere la **Windows::Foundation::EventRegistrationToken struttura** argomento nel **Windows Runtime** documentazione di riferimento.

## <a name="targets"></a>EventSource::targets_

Matrice di uno o più gestori di eventi.

```cpp
ComPtr<Details::EventTargetArray> targets_;
```

### <a name="remarks"></a>Note

Quando l'evento rappresentato dall'oggetto corrente `EventSource` oggetto è presente, vengono chiamati i gestori di eventi.

## <a name="targetspointerlock"></a>EventSource::targetsPointerLock_

Sincronizza l'accesso ai membri dati interni anche durante i gestori eventi per questo `EventSource` vengono aggiunti, rimossi o richiamato.

```cpp
Wrappers::SRWLock targetsPointerLock_;
```
