---
description: 'Altre informazioni su: struttura InvokeHelper'
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
ms.openlocfilehash: 0b9bb8abb59cce5a3c25d795d0946ffbe88d0076
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97299020"
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

*argCount*<br/>
Numero di argomenti in una `InvokeHelper` specializzazione.

## <a name="remarks"></a>Commenti

Fornisce un'implementazione del `Invoke()` metodo in base al numero e al tipo di argomenti specificati.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

Nome     | Description
-------- | -----------------------------------------------------------------------------
`Traits` | Sinonimo della classe che definisce il tipo di ogni argomento del gestore eventi.

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                        | Description
------------------------------------------- | -------------------------------------------------------
[InvokeHelper:: InvokeHelper](#invokehelper) | Inizializza una nuova istanza della classe `InvokeHelper`.

### <a name="public-methods"></a>Metodi pubblici

Nome                            | Description
------------------------------- | -----------------------------------------------------------------------------------
[InvokeHelper:: Invoke](#invoke) | Chiama il gestore eventi la cui firma contiene il numero specificato di argomenti.

### <a name="public-data-members"></a>Membri dati pubblici

Nome                                 | Description
------------------------------------ | ----------------------------------------------------------
[InvokeHelper:: callback_](#callback) | Rappresenta il gestore eventi da chiamare quando si verifica un evento.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InvokeHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="invokehelpercallback_"></a><a name="callback"></a> InvokeHelper:: callback_

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
TCallback callback_;
```

### <a name="remarks"></a>Commenti

Rappresenta il gestore eventi da chiamare quando si verifica un evento.

Il `TCallback` parametro di modello specifica il tipo del gestore eventi.

## <a name="invokehelperinvoke"></a><a name="invoke"></a> InvokeHelper:: Invoke

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

*Arg3*<br/>
Argomento 3.

*Arg4*<br/>
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

S_OK in caso di esito positivo; in caso contrario, HRESULT che descrive l'errore.

### <a name="remarks"></a>Commenti

Chiama il gestore eventi la cui firma contiene il numero specificato di argomenti.

## <a name="invokehelperinvokehelper"></a><a name="invokehelper"></a> InvokeHelper:: InvokeHelper

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
explicit InvokeHelper(
   TCallback callback
);
```

### <a name="parameters"></a>Parametri

*callback*<br/>
Gestore eventi.

### <a name="remarks"></a>Commenti

Inizializza una nuova istanza della classe `InvokeHelper`.

Il `TCallback` parametro di modello specifica il tipo del gestore eventi.
