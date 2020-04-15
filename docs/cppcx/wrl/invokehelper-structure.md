---
title: InvokeHelper (struttura)
ms.date: 10/18/2018
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::InvokeHelper
- event/Microsoft::WRL::Details::InvokeHelper::callback_
- event/Microsoft::WRL::Details::InvokeHelper::Invoke
- event/Microsoft::WRL::Details::InvokeHelper::InvokeHelper
helpviewer_keywords:
- Microsoft::WRL::Details::InvokeHelper structure
- Microsoft::WRL::Details::callback_ data member
- Microsoft::WRL::Details::Invoke method
- Microsoft::WRL::Details::InvokeHelper, constructor
ms.assetid: 555ad2bc-4dd6-4e65-a2e2-1242c395f0e5
ms.openlocfilehash: 9cb4e166628a6b5e7671494446d467e73c9f8cc3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371377"
---
# <a name="invokehelper-structure"></a>InvokeHelper (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<typename TDelegateInterface, typename TCallback, unsigned int argCount>
struct InvokeHelper;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 0> :
    public Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 1> :
    public Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 2> :
    public Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 3> :
    public Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 4> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 5> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 6> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 7> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 8> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 9> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;
```

### <a name="parameters"></a>Parametri

*TDelegateInterface*<br/>
Tipo di interfaccia del delegato.

*TCallback*<br/>
Tipo della funzione del gestore eventi.

*argCount (conteggio arg)*<br/>
Numero di argomenti `InvokeHelper` in una specializzazione.

## <a name="remarks"></a>Osservazioni

Fornisce un'implementazione `Invoke()` del metodo in base al numero e al tipo di argomenti specificati.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome     | Descrizione
-------- | -----------------------------------------------------------------------------
`Traits` | Sinonimo della classe che definisce il tipo di ogni argomento del gestore eventi.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                        | Descrizione
------------------------------------------- | -------------------------------------------------------
[Richiamare::RichiamareInvokeHelper::InvokeHelper](#invokehelper) | Inizializza una nuova istanza della classe `InvokeHelper`.

### <a name="public-methods"></a>Metodi pubblici

Nome                            | Descrizione
------------------------------- | -----------------------------------------------------------------------------------
[Richiamare::Richiamare](#invoke) | Chiama il gestore eventi la cui firma contiene il numero specificato di argomenti.

### <a name="public-data-members"></a>Membri dati pubblici

Nome                                 | Descrizione
------------------------------------ | ----------------------------------------------------------
[Richiamare::callback_](#callback) | Rappresenta il gestore eventi da chiamare quando si verifica un evento.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InvokeHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** event.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="invokehelpercallback_"></a><a name="callback"></a>Richiamare::callback_

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
TCallback callback_;
```

### <a name="remarks"></a>Osservazioni

Rappresenta il gestore eventi da chiamare quando si verifica un evento.

Il `TCallback` parametro template consente di specificare il tipo del gestore eventi.

## <a name="invokehelperinvoke"></a><a name="invoke"></a>Richiamare::Richiamare

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
STDMETHOD(
   Invoke
)();
STDMETHOD(
   Invoke
)(typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
```

### <a name="parameters"></a>Parametri

*arg1*<br/>
Argomento 1.

*arg2*<br/>
Argomento 2.

*arg3 (informazioni in due)*<br/>
Argomento 3.

*arg4 (in questo modo)*<br/>
Argomento 4.

*arg5 (in questo modo)*<br/>
Argomento 5.

*arg6*<br/>
Argomento 6.

*arg7 (in questo modo)*<br/>
Argomento 7.

*arg8 (informazioni in due)*<br/>
Argomento 8.

*arg9*<br/>
Argomento 9.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un HRESULT che descrive l'errore.

### <a name="remarks"></a>Osservazioni

Chiama il gestore eventi la cui firma contiene il numero specificato di argomenti.

## <a name="invokehelperinvokehelper"></a><a name="invokehelper"></a>Richiamare::RichiamareInvokeHelper::InvokeHelper

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
explicit InvokeHelper(
   TCallback callback
);
```

### <a name="parameters"></a>Parametri

*callback*<br/>
Gestore eventi.

### <a name="remarks"></a>Osservazioni

Inizializza una nuova istanza della classe `InvokeHelper`.

Il `TCallback` parametro template consente di specificare il tipo del gestore eventi.
