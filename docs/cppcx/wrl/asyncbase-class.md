---
title: AsyncBase (classe)
ms.date: 10/08/2018
ms.topic: reference
f1_keywords:
- async/Microsoft::WRL::AsyncBase
- async/Microsoft::WRL::AsyncBase::AsyncBase
- async/Microsoft::WRL::AsyncBase::Cancel
- async/Microsoft::WRL::AsyncBase::CheckValidStateForDelegateCall
- async/Microsoft::WRL::AsyncBase::CheckValidStateForResultsCall
- async/Microsoft::WRL::AsyncBase::Close
- async/Microsoft::WRL::AsyncBase::ContinueAsyncOperation
- async/Microsoft::WRL::AsyncBase::CurrentStatus
- async/Microsoft::WRL::AsyncBase::ErrorCode
- async/Microsoft::WRL::AsyncBase::FireCompletion
- async/Microsoft::WRL::AsyncBase::FireProgress
- async/Microsoft::WRL::AsyncBase::get_ErrorCode
- async/Microsoft::WRL::AsyncBase::get_Id
- async/Microsoft::WRL::AsyncBase::get_Status
- async/Microsoft::WRL::AsyncBase::GetOnComplete
- async/Microsoft::WRL::AsyncBase::GetOnProgress
- async/Microsoft::WRL::AsyncBase::OnCancel
- async/Microsoft::WRL::AsyncBase::OnClose
- async/Microsoft::WRL::AsyncBase::OnStart
- async/Microsoft::WRL::AsyncBase::put_Id
- async/Microsoft::WRL::AsyncBase::PutOnComplete
- async/Microsoft::WRL::AsyncBase::PutOnProgress
- async/Microsoft::WRL::AsyncBase::TryTransitionToCompleted
- async/Microsoft::WRL::AsyncBase::TryTransitionToError
helpviewer_keywords:
- Microsoft::WRL::AsyncBase class
- Microsoft::WRL::AsyncBase::AsyncBase, constructor
- Microsoft::WRL::AsyncBase::Cancel method
- Microsoft::WRL::AsyncBase::CheckValidStateForDelegateCall method
- Microsoft::WRL::AsyncBase::CheckValidStateForResultsCall method
- Microsoft::WRL::AsyncBase::Close method
- Microsoft::WRL::AsyncBase::ContinueAsyncOperation method
- Microsoft::WRL::AsyncBase::CurrentStatus method
- Microsoft::WRL::AsyncBase::ErrorCode method
- Microsoft::WRL::AsyncBase::FireCompletion method
- Microsoft::WRL::AsyncBase::FireProgress method
- Microsoft::WRL::AsyncBase::get_ErrorCode method
- Microsoft::WRL::AsyncBase::get_Id method
- Microsoft::WRL::AsyncBase::get_Status method
- Microsoft::WRL::AsyncBase::GetOnComplete method
- Microsoft::WRL::AsyncBase::GetOnProgress method
- Microsoft::WRL::AsyncBase::OnCancel method
- Microsoft::WRL::AsyncBase::OnClose method
- Microsoft::WRL::AsyncBase::OnStart method
- Microsoft::WRL::AsyncBase::put_Id method
- Microsoft::WRL::AsyncBase::PutOnComplete method
- Microsoft::WRL::AsyncBase::PutOnProgress method
- Microsoft::WRL::AsyncBase::TryTransitionToCompleted method
- Microsoft::WRL::AsyncBase::TryTransitionToError method
ms.assetid: 64259b9b-f427-4ffd-a611-e7a2f82362b2
ms.openlocfilehash: 367d0b0cd3197623b27ee1a50e804cca797aedf3
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58784813"
---
# <a name="asyncbase-class"></a>AsyncBase (classe)

Implementa la macchina a stati asincrona di Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename TComplete,
    typename TProgress = Details::Nil,
    AsyncResultType resultType = SingleResult
>
class AsyncBase : public AsyncBase<TComplete, Details::Nil, resultType>;

template <typename TComplete, AsyncResultType resultType>
class AsyncBase<TComplete, Details::Nil, resultType> :
    public Microsoft::WRL::Implements<IAsyncInfo>;
```

### <a name="parameters"></a>Parametri

*TComplete*<br/>
Un gestore eventi che viene chiamato quando viene completata un'operazione asincrona.

*TProgress*<br/>
Un gestore eventi che viene chiamato quando l'esecuzione dell'operazione asincrona segnala lo stato corrente dell'operazione.

*resultType*<br/>
Uno dei [AsyncResultType](asyncresulttype-enumeration.md) valori di enumerazione. Per impostazione predefinita, `SingleResult`.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                               | Descrizione
---------------------------------- | -------------------------------------------------
[AsyncBase::AsyncBase](#asyncbase) | Inizializza un'istanza della classe `AsyncBase`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                         | Descrizione
-------------------------------------------- | -------------------------------------------------------------------------------------
[AsyncBase::Cancel](#cancel)                 | Annulla un'operazione asincrona.
[AsyncBase::Close](#close)                   | Termina l'operazione asincrona.
[AsyncBase::FireCompletion](#firecompletion) | Richiama il gestore di evento di completamento, o Reimposta il delegato di stato interno.
[AsyncBase::FireProgress](#fireprogress)     | Richiama il gestore di evento di stato di avanzamento corrente.
[AsyncBase::get_ErrorCode](#get-errorcode)   | Recupera il codice di errore per l'operazione asincrona corrente.
[AsyncBase::get_Id](#get-id)                 | Recupera l'handle dell'operazione asincrona.
[AsyncBase::get_Status](#get-status)         | Recupera un valore che indica lo stato dell'operazione asincrona.
[AsyncBase::GetOnComplete](#getoncomplete)   | Copia l'indirizzo del gestore dell'evento di completamento corrente per la variabile specificata.
[AsyncBase::GetOnProgress](#getonprogress)   | Copia l'indirizzo del gestore dell'evento di stato di avanzamento corrente per la variabile specificata.
[AsyncBase::put_Id](#put-id)                 | Imposta l'handle dell'operazione asincrona.
[AsyncBase::PutOnComplete](#putoncomplete)   | Imposta l'indirizzo del gestore dell'evento di completamento al valore specificato.
[AsyncBase::PutOnProgress](#putonprogress)   | Imposta l'indirizzo del gestore dell'evento di stato di avanzamento sul valore specificato.


### <a name="protected-methods"></a>Metodi protetti

Nome                                                                         | Descrizione
---------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------
[AsyncBase::CheckValidStateForDelegateCall](#checkvalidstatefordelegatecall) | Verifica se le proprietà di delegato possono essere modificate nello stato asincrono corrente.
[AsyncBase::CheckValidStateForResultsCall](#checkvalidstateforresultscall)   | Verifica se i risultati di un'operazione asincrona possono essere raccolti nello stato asincrono corrente.
[AsyncBase::ContinueAsyncOperation](#continueasyncoperation)                 | Determina se l'operazione asincrona deve continuare l'elaborazione o deve interrompersi.
[AsyncBase::CurrentStatus](#currentstatus)                                   | Recupera lo stato dell'operazione asincrona corrente.
[AsyncBase::ErrorCode](#errorcode)                                           | Recupera il codice di errore per l'operazione asincrona corrente.
[AsyncBase::OnCancel](#oncancel)                                             | Quando sottoposto a override in una classe derivata, Annulla un'operazione asincrona.
[AsyncBase::OnClose](#onclose)                                               | Quando sottoposto a override in una classe derivata, termina un'operazione asincrona.
[AsyncBase::OnStart](#onstart)                                               | Quando sottoposto a override in una classe derivata, avvia un'operazione asincrona.
[AsyncBase::Start](#start)                                                   | Avvia l'operazione asincrona.
[AsyncBase::TryTransitionToCompleted](#trytransitiontocompleted)             | Indica se l'operazione asincrona corrente è stata completata.
[AsyncBase::TryTransitionToError](#trytransitiontoerror)                     | Indica se il codice di errore può modificare lo stato di errore interno.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`AsyncBase`

`AsyncBase`

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="asyncbase"></a>AsyncBase::AsyncBase

Inizializza un'istanza della classe `AsyncBase`.

```cpp
AsyncBase();
```

## <a name="cancel"></a>AsyncBase::Cancel

Annulla un'operazione asincrona.

```cpp
STDMETHOD(
   Cancel
)(void);
```

### <a name="return-value"></a>Valore restituito

Per impostazione predefinita, restituisce sempre S_OK.

### <a name="remarks"></a>Note

`Cancel()` è un'implementazione predefinita di `IAsyncInfo::Cancel`, e non esegue alcuna operazione effettiva. Per effettivamente annullare un'operazione asincrona, eseguire l'override di `OnCancel()` metodo virtuale puro.

## <a name="checkvalidstatefordelegatecall"></a>AsyncBase::CheckValidStateForDelegateCall

Verifica se le proprietà di delegato possono essere modificate nello stato asincrono corrente.

```cpp
inline HRESULT CheckValidStateForDelegateCall();
```

### <a name="return-value"></a>Valore restituito

S_OK se le proprietà di delegato possono essere modificate. in caso contrario, E_ILLEGAL_METHOD_CALL.

## <a name="checkvalidstateforresultscall"></a>AsyncBase::CheckValidStateForResultsCall

Verifica se i risultati di un'operazione asincrona possono essere raccolti nello stato asincrono corrente.

```cpp
inline HRESULT CheckValidStateForResultsCall();
```

### <a name="return-value"></a>Valore restituito

S_OK se i risultati possono essere raccolti; in caso contrario, E_ILLEGAL_METHOD_CALLE_ILLEGAL_METHOD_CALL.

## <a name="close"></a>AsyncBase::Close

Termina l'operazione asincrona.

```cpp
STDMETHOD(
   Close
)(void) override;
```

### <a name="return-value"></a>Valore restituito

S_OK se l'operazione chiude o è già chiusa. in caso contrario, E_ILLEGAL_STATE_CHANGE.

### <a name="remarks"></a>Note

`Close()` è un'implementazione predefinita di `IAsyncInfo::Close`, e non esegue alcuna operazione effettiva. Per chiudere effettivamente un'operazione asincrona, eseguire l'override di `OnClose()` metodo virtuale puro.

## <a name="continueasyncoperation"></a>AsyncBase::ContinueAsyncOperation

Determina se l'operazione asincrona deve continuare l'elaborazione o deve interrompersi.

```cpp
inline bool ContinueAsyncOperation();
```

### <a name="return-value"></a>Valore restituito

**true** se lo stato corrente dell'operazione asincrona *avviato*, ovvero l'operazione deve continuare. In caso contrario, **false**, ovvero l'operazione deve interrompersi.

## <a name="currentstatus"></a>AsyncBase::CurrentStatus

Recupera lo stato dell'operazione asincrona corrente.

```cpp
inline void CurrentStatus(
   Details::AsyncStatusInternal *status
);
```

### <a name="parameters"></a>Parametri

*status*<br/>
Il percorso in cui questa operazione archivia lo stato corrente.

### <a name="remarks"></a>Note

Questa operazione è thread-safe.

## <a name="errorcode"></a>AsyncBase::ErrorCode

Recupera il codice di errore per l'operazione asincrona corrente.

```cpp
inline void ErrorCode(
   HRESULT *error
);
```

### <a name="parameters"></a>Parametri

*error*<br/>
Il percorso in cui questa operazione archivia il codice di errore corrente.

### <a name="remarks"></a>Note

Questa operazione è thread-safe.

## <a name="firecompletion"></a>AsyncBase::FireCompletion

Richiama il gestore di evento di completamento, o Reimposta il delegato di stato interno.

```cpp
void FireCompletion(
   void
) override;

virtual void FireCompletion();
```

### <a name="remarks"></a>Note

La prima versione di `FireCompletion()` Reimposta la variabile delegato stato interno. La seconda versione richiama il gestore di evento di completamento se l'operazione asincrona è completa.

## <a name="fireprogress"></a>AsyncBase::FireProgress

Richiama il gestore di evento di stato di avanzamento corrente.

```cpp
void FireProgress(
   const typename ProgressTraits::Arg2Type arg
);
```

### <a name="parameters"></a>Parametri

*arg*<br/>
Il metodo del gestore eventi da richiamare.

### <a name="remarks"></a>Note

`ProgressTraits` è derivato da [ArgTraitsHelper (struttura)](argtraitshelper-structure.md).

## <a name="get-errorcode"></a>AsyncBase::get_ErrorCode

Recupera il codice di errore per l'operazione asincrona corrente.

```cpp
STDMETHOD(
   get_ErrorCode
)(HRESULT* errorCode) override;
```

### <a name="parameters"></a>Parametri

*errorCode*<br/>
Il percorso in cui è archiviato il codice di errore corrente.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL se l'operazione asincrona corrente è chiuso.

## <a name="get-id"></a>AsyncBase::get_Id

Recupera l'handle dell'operazione asincrona.

```cpp
STDMETHOD(
   get_Id
)(unsigned int *id) override;
```

### <a name="parameters"></a>Parametri

*ID*<br/>
Il percorso in cui viene archiviato l'handle.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.

### <a name="remarks"></a>Note

Questo metodo implementa `IAsyncInfo::get_Id`.

## <a name="get-status"></a>AsyncBase::get_Status

Recupera un valore che indica lo stato dell'operazione asincrona.

```cpp
STDMETHOD(
   get_Status
)(AsyncStatus *status) override;
```

### <a name="parameters"></a>Parametri

*status*<br/>
Il percorso in cui viene archiviato lo stato. Per ulteriori informazioni, vedere l'enumerazione `Windows::Foundation::AsyncStatus`.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.

### <a name="remarks"></a>Note

Questo metodo implementa `IAsyncInfo::get_Status`.

## <a name="getoncomplete"></a>AsyncBase::GetOnComplete

Copia l'indirizzo del gestore dell'evento di completamento corrente per la variabile specificata.

```cpp
STDMETHOD(
   GetOnComplete
)(TComplete** completeHandler);
```

### <a name="parameters"></a>Parametri

*completeHandler*<br/>
Il percorso in cui è archiviato l'indirizzo del gestore dell'evento di completamento corrente.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.

## <a name="getonprogress"></a>AsyncBase::GetOnProgress

Copia l'indirizzo del gestore dell'evento di stato di avanzamento corrente per la variabile specificata.

```cpp
STDMETHOD(
   GetOnProgress
)(TProgress** progressHandler);
```

### <a name="parameters"></a>Parametri

*progressHandler*<br/>
Il percorso in cui è archiviato l'indirizzo del gestore dell'evento di stato di avanzamento corrente.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.

## <a name="oncancel"></a>AsyncBase::OnCancel

Quando sottoposto a override in una classe derivata, Annulla un'operazione asincrona.

```cpp
virtual void OnCancel(
   void
) = 0;
```

## <a name="onclose"></a>AsyncBase::OnClose

Quando sottoposto a override in una classe derivata, termina un'operazione asincrona.

```cpp
virtual void OnClose(
   void
) = 0;
```

## <a name="onstart"></a>AsyncBase::OnStart

Quando sottoposto a override in una classe derivata, avvia un'operazione asincrona.

```cpp
virtual HRESULT OnStart(
   void
) = 0;
```

## <a name="put-id"></a>AsyncBase::put_Id

Imposta l'handle dell'operazione asincrona.

```cpp
STDMETHOD(
   put_Id
)(const unsigned int id);
```

### <a name="parameters"></a>Parametri

*ID*<br/>
Un handle diverso da zero.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_INVALIDARG o E_ILLEGAL_METHOD_CALL.

## <a name="putoncomplete"></a>AsyncBase::PutOnComplete

Imposta l'indirizzo del gestore dell'evento di completamento al valore specificato.

```cpp
STDMETHOD(
   PutOnComplete
)(TComplete* completeHandler);
```

### <a name="parameters"></a>Parametri

*completeHandler*<br/>
L'indirizzo a cui è impostato il gestore di evento di completamento.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.

## <a name="putonprogress"></a>AsyncBase::PutOnProgress

Imposta l'indirizzo del gestore dell'evento di stato di avanzamento sul valore specificato.

```cpp
STDMETHOD(
   PutOnProgress
)(TProgress* progressHandler);
```

### <a name="parameters"></a>Parametri

*progressHandler*<br/>
L'indirizzo a cui è impostato il gestore dell'evento di stato di avanzamento.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_ILLEGAL_METHOD_CALL.

## <a name="start"></a>AsyncBase::Start

Avvia l'operazione asincrona.

```cpp
STDMETHOD(
   Start
)(void);
```

### <a name="return-value"></a>Valore restituito

S_OK se l'operazione viene avviata o è già stato avviato. in caso contrario, E_ILLEGAL_STATE_CHANGE.

### <a name="remarks"></a>Note

`Start()` è un metodo protetto che non è visibile esternamente perché operazioni asincrone "accesso frequente start" prima di restituire al chiamante.

## <a name="trytransitiontocompleted"></a>AsyncBase::TryTransitionToCompleted

Indica se l'operazione asincrona corrente è stata completata.

```cpp
bool TryTransitionToCompleted(
   void
);
```

### <a name="return-value"></a>Valore restituito

**true** se l'operazione asincrona è stata completata; in caso contrario, **false**.

## <a name="trytransitiontoerror"></a>AsyncBase::TryTransitionToError

Indica se il codice di errore può modificare lo stato di errore interno.

```cpp
bool TryTransitionToError(
   const HRESULT error
);
```

### <a name="parameters"></a>Parametri

*error*<br/>
Un errore HRESULT.

### <a name="return-value"></a>Valore restituito

**true** se lo stato di errore interno è stato modificato; in caso contrario, **false**.

### <a name="remarks"></a>Note

Questa operazione modifica lo stato di errore solo se lo stato di errore è già impostato su S_OK. Questa operazione non ha effetto se lo stato di errore è già errore, annullato, completato o chiuso.
