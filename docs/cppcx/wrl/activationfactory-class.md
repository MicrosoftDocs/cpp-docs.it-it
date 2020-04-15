---
title: ActivationFactory (classe)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ActivationFactory
- module/Microsoft::WRL::ActivationFactory::ActivationFactory
- module/Microsoft::WRL::ActivationFactory::AddRef
- module/Microsoft::WRL::ActivationFactory::GetIids
- module/Microsoft::WRL::ActivationFactory::GetRuntimeClassName
- module/Microsoft::WRL::ActivationFactory::GetTrustLevel
- module/Microsoft::WRL::ActivationFactory::QueryInterface
- module/Microsoft::WRL::ActivationFactory::Release
helpviewer_keywords:
- Microsoft::WRL::ActivationFactory class
- Microsoft::WRL::ActivationFactory::ActivationFactory, constructor
- Microsoft::WRL::ActivationFactory::AddRef method
- Microsoft::WRL::ActivationFactory::GetIids method
- Microsoft::WRL::ActivationFactory::GetRuntimeClassName method
- Microsoft::WRL::ActivationFactory::GetTrustLevel method
- Microsoft::WRL::ActivationFactory::QueryInterface method
- Microsoft::WRL::ActivationFactory::Release method
ms.assetid: 5faddf1f-43b6-4f8a-97de-8c9d3ae1e1ff
ms.openlocfilehash: 0655caeb3f49a18e9c57c78f0008901aaaedda4a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81368700"
---
# <a name="activationfactory-class"></a>ActivationFactory (classe)

Abilita l'attivazione di una o più classi da Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename I0 = Details::Nil,
    typename I1 = Details::Nil,
    typename I2 = Details::Nil
>
class ActivationFactory :
    public Details::RuntimeClass<
        typename Details::InterfaceListHelper<
            IActivationFactory,
            I0,
            I1,
            I2,
            Details::Nil
        >::TypeT,
        RuntimeClassFlags<WinRt | InhibitWeakReference>,
        false
    >;
```

### <a name="parameters"></a>Parametri

*I0*<br/>
L'interfaccia zero.

*I1*<br/>
La prima interfaccia.

*I2*<br/>
Seconda interfaccia.

## <a name="remarks"></a>Osservazioni

`ActivationFactory`fornisce metodi di registrazione `IActivationFactory` e funzionalità di base per l'interfaccia. `ActivationFactory`consente inoltre di fornire un'implementazione di factory personalizzata.

Il frammento di codice seguente illustra simbolicamente come usare ActivationFactory.The following code fragment symbolically illustrates how to use ActivationFactory.

[!code-cpp[wrl-microsoft__wrl__activationfactory#1](../codesnippet/CPP/activationfactory-class_1.cpp)]

Nel frammento di codice seguente viene illustrato come utilizzare il [Implements](implements-structure.md) struttura per specificare più di tre ID di interfaccia.

`struct MyFactory : ActivationFactory<Implements<I1, I2, I3>, I4, I5>;`

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                       | Descrizione
---------------------------------------------------------- | ------------------------------------------
[ActivationFactory::ActivationFactory](#activationfactory) | Inizializza la classe `ActivationFactory`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                           | Descrizione
-------------------------------------------------------------- | --------------------------------------------------------------------------------------------
[ActivationFactory::AddRef](#addref)                           | Incrementa il conteggio dei `ActivationFactory` riferimenti dell'oggetto corrente.
[ActivationFactory::GetIids](#getiids)                         | Recupera una matrice di ID di interfaccia implementati.
[ActivationFactory::GetRuntimeClassName](#getruntimeclassname) | Ottiene il nome della classe runtime `ActivationFactory` dell'oggetto di cui è stata creata un'istanza.
[ActivationFactory::GetTrustLevel](#gettrustlevel)             | Ottiene il livello di attendibilità `ActivationFactory` dell'oggetto di cui è stata creata un'istanza corrente.
[ActivationFactory::QueryInterface](#queryinterface)           | Recupera un puntatore all'interfaccia specificata.
[ActivationFactory::Release](#release)                         | Decrementa il conteggio dei `ActivationFactory` riferimenti dell'oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`I0`

`ChainInterfaces`

`I0`

`RuntimeClassBase`

`ImplementsHelper`

`DontUseNewUseMake`

`RuntimeClassFlags`

`RuntimeClassBaseT`

`RuntimeClass`

`ActivationFactory`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="activationfactoryactivationfactory"></a><a name="activationfactory"></a>ActivationFactory::ActivationFactory

Inizializza la classe `ActivationFactory`.

```cpp
ActivationFactory();
```

## <a name="activationfactoryaddref"></a><a name="addref"></a>ActivationFactory::AddRef

Incrementa il conteggio dei `ActivationFactory` riferimenti dell'oggetto corrente.

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="activationfactorygetiids"></a><a name="getiids"></a>ActivationFactory::GetIids

Recupera una matrice di ID di interfaccia implementati.

```cpp
STDMETHOD(
   GetIids
)(_Out_ ULONG *iidCount, _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);
```

### <a name="parameters"></a>Parametri

*iidCount*<br/>
Al termine dell'operazione, il numero di ID di interace nella matrice *iids.*

*iids*<br/>
Quando questa operazione viene completata, una matrice di ID di interfaccia implementati.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. E_OUTOFMEMORY è un possibile HRESULT di errore.

## <a name="activationfactorygetruntimeclassname"></a><a name="getruntimeclassname"></a>ActivationFactory::GetRuntimeClassName

Ottiene il nome della classe runtime `ActivationFactory` dell'oggetto di cui è stata creata un'istanza.

```cpp
STDMETHOD(
   GetRuntimeClassName
)(_Out_ HSTRING* runtimeName);
```

### <a name="parameters"></a>Parametri

*runtimeName*<br/>
Quando questa operazione viene completata, handle a una stringa che contiene `ActivationFactory` il nome della classe runtime dell'oggetto di cui è stata creata un'istanza corrente.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="activationfactorygettrustlevel"></a><a name="gettrustlevel"></a>ActivationFactory::GetTrustLevel

Ottiene il livello di attendibilità `ActivationFactory` dell'oggetto di cui è stata creata un'istanza corrente.

```cpp
STDMETHOD(
   GetTrustLevel
)(_Out_ TrustLevel* trustLvl);
```

### <a name="parameters"></a>Parametri

*trustLvl*<br/>
Quando questa operazione viene completata, livello di `ActivationFactory` attendibilità della classe di runtime di cui viene creata un'istanza.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, viene generato un errore `FullTrust`di asserzione e *trustLvl* è impostato su .

## <a name="activationfactoryqueryinterface"></a><a name="queryinterface"></a>ActivationFactory::QueryInterface

Recupera un puntatore all'interfaccia specificata.

```cpp
STDMETHOD(
   QueryInterface
)(REFIID riid, _Deref_out_ void **ppvObject);
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
ID di interfaccia.

*Oggetto ppv*<br/>
Al termine dell'operazione, un puntatore all'interfaccia specificata dal parametro *riid*.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="activationfactoryrelease"></a><a name="release"></a>ActivationFactory::Release

Decrementa il conteggio dei `ActivationFactory` riferimenti dell'oggetto corrente.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.
