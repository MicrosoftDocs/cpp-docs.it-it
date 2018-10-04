---
title: InvokeHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 10/03/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::InvokeHelper
- event/Microsoft::WRL::Details::InvokeHelper::callback_
- event/Microsoft::WRL::Details::InvokeHelper::Invoke
- event/Microsoft::WRL::Details::InvokeHelper::InvokeHelper
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Details::InvokeHelper structure
- Microsoft::WRL::Details::callback_ data member
- Microsoft::WRL::Details::Invoke method
- Microsoft::WRL::Details::InvokeHelper, constructor
ms.assetid: 555ad2bc-4dd6-4e65-a2e2-1242c395f0e5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 46cd067e41fcc9ac0d8d3dd9fe50c9edd23532c3
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48789111"
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
*TCallback*  
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
[InvokeHelper:: InvokeHelper](#invokehelper) | Inizializza una nuova istanza della classe `InvokeHelper`.

### <a name="public-methods"></a>Metodi pubblici

Nome                            | Descrizione
------------------------------- | -----------------------------------------------------------------------------------
[InvokeHelper:: Invoke](#invoke) | Chiama il gestore dell'evento la cui firma contiene il numero di argomenti specificato.

### <a name="public-data-members"></a>Membri dati pubblici

Nome                                 | Descrizione
------------------------------------ | ----------------------------------------------------------
[InvokeHelper::callback_](#callback) | Rappresenta il gestore eventi da chiamare quando si verifica un evento.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InvokeHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Namespace:** Microsoft::WRL::Details

## <a name="callback"></a>InvokeHelper::callback_

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
TCallback callback_;
```

### <a name="remarks"></a>Note

Rappresenta il gestore eventi da chiamare quando si verifica un evento.

Il `TCallback` modello parametro specifica il tipo del gestore dell'evento.

## <a name="invoke"></a>InvokeHelper:: Invoke

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

*Arg2*<br/>
Argomento 2.

*arg3*<br/>
Argomento 3.

*Arg4*<br/>
Argomento 4.

*Arg5*<br/>
Argomento 5.

*Arg6*<br/>
Argomento 6.

*Arg7*<br/>
Argomento 7.

*arg8*<br/>
Argomento 8.

*arg9*<br/>
Argomento 9.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che descrive l'errore.

### <a name="remarks"></a>Note

Chiama il gestore dell'evento la cui firma contiene il numero di argomenti specificato.

## <a name="invokehelper"></a>InvokeHelper:: InvokeHelper

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
