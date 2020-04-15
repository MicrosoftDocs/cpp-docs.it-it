---
title: EventSource (classe)
ms.date: 09/12/2018
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
ms.openlocfilehash: bb9151e55d133e3e5d8bf10baeb8448101ad6ce0
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371533"
---
# <a name="eventsource-class"></a>EventSource (classe)

Rappresenta un evento non agile. Le funzioni membro `EventSource` aggiungono, rimuovono ed invocano i gestori di eventi. Per gli eventi Agile, utilizzare [AgileEventSource](agileeventsource-class.md).

## <a name="syntax"></a>Sintassi

```cpp
template<typename TDelegateInterface>
class EventSource;
```

### <a name="parameters"></a>Parametri

*TDelegateInterface*<br/>
Interfaccia a un delegato che rappresenta un gestore eventi.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

| Nome                                     | Descrizione                                            |
| ---------------------------------------- | ------------------------------------------------------ |
| [EventSource::EventSource](#eventsource) | Inizializza una nuova istanza della classe `EventSource`. |

### <a name="public-methods"></a>Metodi pubblici

| Nome                                 | Descrizione                                                                                                                                                      |
| ------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [EventSource::Aggiungi](#add)             | Aggiunge il gestore eventi rappresentato dall'interfaccia del delegato specificato `EventSource` al set di gestori eventi per l'oggetto corrente.                     |
| [EventSource::GetSize](#getsize)     | Recupera il numero di gestori eventi `EventSource` associati all'oggetto corrente.                                                                         |
| [EventSource::InvokeAll](#invokeall) | Chiama ogni gestore eventi `EventSource` associato all'oggetto corrente utilizzando i tipi di argomento e gli argomenti specificati.                                      |
| [EventSource::Rimuovi](#remove)       | Elimina il gestore eventi rappresentato dal token di registrazione eventi specificato `EventSource` dal set di gestori eventi associati all'oggetto corrente. |

### <a name="protected-data-members"></a>Membri dati protetti

| Nome                                                    | Descrizione                                                                                                                       |
| ------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| [EventSource::addRemoveLock_](#addremovelock)           | Sincronizza l'accesso alla [matrice di targets_](#targets) durante l'aggiunta, la rimozione o la chiamata di gestori eventi.                          |
| [EventSource::targets_](#targets)                       | Matrice di uno o più gestori eventi.                                                                                           |
| [EventSource::targetsPointerLock_](#targetspointerlock) | Sincronizza l'accesso ai membri dati interni anche durante l'aggiunta, la rimozione o la richiamata dei gestori eventi per questo EventSource. |

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`EventSource`

## <a name="requirements"></a>Requisiti

**Intestazione:** event.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="eventsourceadd"></a><a name="add"></a>EventSource::Aggiungi

Aggiunge il gestore eventi rappresentato dall'interfaccia del delegato specificato `EventSource` al set di gestori eventi per l'oggetto corrente.

```cpp
HRESULT Add(
   _In_ TDelegateInterface* delegateInterface,
   _Out_ EventRegistrationToken* token
);
```

### <a name="parameters"></a>Parametri

*delegateInterfaccia*<br/>
Interfaccia a un oggetto delegato, che rappresenta un gestore eventi.

*Token*<br/>
Quando questa operazione viene completata, handle che rappresenta l'evento. Utilizzate questo token come parametro per il metodo [Remove()](#remove) per eliminare il gestore eventi.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

## <a name="eventsourceaddremovelock_"></a><a name="addremovelock"></a>EventSource::addRemoveLock_

Sincronizza l'accesso alla [matrice di targets_](#targets) durante l'aggiunta, la rimozione o la chiamata di gestori eventi.

```cpp
Wrappers::SRWLock addRemoveLock_;
```

## <a name="eventsourceeventsource"></a><a name="eventsource"></a>EventSource::EventSource

Inizializza una nuova istanza della classe `EventSource`.

```cpp
EventSource();
```

## <a name="eventsourcegetsize"></a><a name="getsize"></a>EventSource::GetSize

Recupera il numero di gestori eventi `EventSource` associati all'oggetto corrente.

```cpp
size_t GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di gestori eventi in [targets_](#targets).

## <a name="eventsourceinvokeall"></a><a name="invokeall"></a>EventSource::InvokeAll

Chiama ogni gestore eventi `EventSource` associato all'oggetto corrente utilizzando i tipi di argomento e gli argomenti specificati.

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

*T0*<br/>
Tipo dell'argomento del gestore eventi zero.

*T1*<br/>
Tipo del primo argomento del gestore eventi.

*T2*<br/>
Tipo del secondo argomento del gestore eventi.

*T3*<br/>
Tipo del terzo argomento del gestore eventi.

*T4*<br/>
Tipo del quarto argomento del gestore eventi.

*T5*<br/>
Tipo del quinto argomento del gestore eventi.

*T6*<br/>
Tipo del sesto argomento del gestore eventi.

*T7*<br/>
Tipo del settimo argomento del gestore eventi.

*T8*<br/>
Tipo dell'ottavo argomento del gestore eventi.

*T9 (in titro*<br/>
Tipo del nono argomento del gestore eventi.

*arg0*<br/>
Argomento del gestore eventi zero.

*arg1*<br/>
Primo argomento del gestore eventi.

*arg2*<br/>
Secondo argomento del gestore eventi.

*arg3 (informazioni in due)*<br/>
Terzo argomento del gestore eventi.

*arg4 (in questo modo)*<br/>
Quarto argomento del gestore eventi.

*arg5 (in questo modo)*<br/>
Argomento del quinto gestore eventi.

*arg6*<br/>
Argomento del gestore eventi del sesto.

*arg7 (in questo modo)*<br/>
Settimo argomento del gestore eventi.

*arg8 (informazioni in due)*<br/>
Argomento del gestore eventi dell'ottavo.

*arg9*<br/>
Nono argomento del gestore eventi.

## <a name="eventsourceremove"></a><a name="remove"></a>EventSource::Rimuovi

Elimina il gestore eventi rappresentato dal token di registrazione eventi specificato `EventSource` dal set di gestori eventi associati all'oggetto corrente.

```cpp
HRESULT Remove(
   EventRegistrationToken token
);
```

### <a name="parameters"></a>Parametri

*Token*<br/>
Handle che rappresenta un gestore eventi. Questo token è stato restituito quando il gestore eventi è stato registrato dal metodo [Add().](#add)

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Osservazioni

Per altre informazioni `EventRegistrationToken` sulla struttura, vedere l'argomento Struttura Windows::Foundation::EventRegistrationToken nella documentazione di riferimento di **Windows Runtime.For** more information about the structure, see the **Windows::Foundation::EventRegistrationToken Structure** topic in the Windows Runtime reference documentation.

## <a name="eventsourcetargets_"></a><a name="targets"></a>EventSource::targets_

Matrice di uno o più gestori eventi.

```cpp
ComPtr<Details::EventTargetArray> targets_;
```

### <a name="remarks"></a>Osservazioni

Quando si verifica l'evento `EventSource` rappresentato dall'oggetto corrente, vengono chiamati i gestori eventi.

## <a name="eventsourcetargetspointerlock_"></a><a name="targetspointerlock"></a>EventSource::targetsPointerLock_

Sincronizza l'accesso ai membri dati interni `EventSource` anche durante l'aggiunta, la rimozione o la richiamata dei gestori eventi.

```cpp
Wrappers::SRWLock targetsPointerLock_;
```
