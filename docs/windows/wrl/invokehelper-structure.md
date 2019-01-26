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
ms.openlocfilehash: 3fcba210d4018d22487d234b437acfee3634cec6
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54336668"
---
# <a name="invokehelper-structure"></a>InvokeHelper (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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
Il tipo di interfaccia di delegato.

*TCallback*<br/>
Tipo di funzione del gestore eventi.

*argCount*<br/>
Il numero di argomenti in un `InvokeHelper` specializzazione.

## <a name="remarks"></a>Note

Fornisce un'implementazione del `Invoke()` metodo basato sul numero specificato e il tipo di argomenti.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome     | Descrizione
-------- | -----------------------------------------------------------------------------
`Traits` | Un sinonimo della classe che definisce il tipo di ogni argomento di gestore dell'evento.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                        | Descrizione
------------------------------------------- | -------------------------------------------------------
[InvokeHelper::InvokeHelper](#invokehelper) | Inizializza una nuova istanza della classe `InvokeHelper`.

### <a name="public-methods"></a>Metodi pubblici

Nome                            | Descrizione
------------------------------- | -----------------------------------------------------------------------------------
[InvokeHelper::Invoke](#invoke) | Chiama il gestore dell'evento la cui firma contiene il numero di argomenti specificato.

### <a name="public-data-members"></a>Membri dati pubblici

Nome                                 | Descrizione
------------------------------------ | ----------------------------------------------------------
[InvokeHelper::callback_](#callback) | Rappresenta il gestore eventi da chiamare quando si verifica un evento.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InvokeHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="callback"></a>InvokeHelper::callback_

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
TCallback callback_;
```

### <a name="remarks"></a>Note

Rappresenta il gestore eventi da chiamare quando si verifica un evento.

Il `TCallback` modello parametro specifica il tipo del gestore dell'evento.

## <a name="invoke"></a>InvokeHelper::Invoke

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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

*arg3*<br/>
Argomento 3.

*arg4*<br/>
Argomento 4.

*arg5*<br/>
Argomento 5.

*arg6*<br/>
Argomento 6.

*arg7*<br/>
Argomento 7.

*arg8*<br/>
Argomento 8.

*arg9*<br/>
Argomento 9.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che descrive l'errore.

### <a name="remarks"></a>Note

Chiama il gestore dell'evento la cui firma contiene il numero di argomenti specificato.

## <a name="invokehelper"></a>InvokeHelper::InvokeHelper

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
explicit InvokeHelper(
   TCallback callback
);
```

### <a name="parameters"></a>Parametri

*callback*<br/>
Un gestore eventi.

### <a name="remarks"></a>Note

Inizializza una nuova istanza della classe `InvokeHelper`.

Il `TCallback` modello parametro specifica il tipo del gestore dell'evento.