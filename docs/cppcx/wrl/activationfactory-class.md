---
description: 'Altre informazioni su: Classe ActivationFactory'
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
ms.openlocfilehash: 7204a3c2f981947a03efba648dd91b69d582fee1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287840"
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
Interfaccia zero.

*I1*<br/>
Prima interfaccia.

*I2*<br/>
Seconda interfaccia.

## <a name="remarks"></a>Commenti

`ActivationFactory` fornisce i metodi di registrazione e le funzionalità di base per l' `IActivationFactory` interfaccia. `ActivationFactory` consente inoltre di fornire un'implementazione personalizzata della factory.

Il frammento di codice seguente illustra in modo simbolico come usare ActivationFactory.

[!code-cpp[wrl-microsoft__wrl__activationfactory#1](../codesnippet/CPP/activationfactory-class_1.cpp)]

Nel frammento di codice seguente viene illustrato come utilizzare la struttura [Implements](implements-structure.md) per specificare più di tre ID di interfaccia.

`struct MyFactory : ActivationFactory<Implements<I1, I2, I3>, I4, I5>;`

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                       | Description
---------------------------------------------------------- | ------------------------------------------
[ActivationFactory:: ActivationFactory](#activationfactory) | Inizializza la classe `ActivationFactory`.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                           | Description
-------------------------------------------------------------- | --------------------------------------------------------------------------------------------
[ActivationFactory:: AddRef](#addref)                           | Incrementa il conteggio dei riferimenti dell'oggetto corrente `ActivationFactory` .
[ActivationFactory:: GetIids](#getiids)                         | Recupera una matrice di ID di interfaccia implementati.
[ActivationFactory:: GetRuntimeClassName](#getruntimeclassname) | Ottiene il nome della classe di runtime dell'oggetto di cui viene `ActivationFactory` creata l'istanza corrente.
[ActivationFactory:: GetTrustLevel](#gettrustlevel)             | Ottiene il livello di attendibilità dell'oggetto di cui viene `ActivationFactory` creata l'istanza corrente.
[ActivationFactory:: QueryInterface](#queryinterface)           | Recupera un puntatore all'interfaccia specificata.
[ActivationFactory:: Release](#release)                         | Decrementa il conteggio dei riferimenti dell' `ActivationFactory` oggetto corrente.

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

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="activationfactoryactivationfactory"></a><a name="activationfactory"></a> ActivationFactory:: ActivationFactory

Inizializza la classe `ActivationFactory`.

```cpp
ActivationFactory();
```

## <a name="activationfactoryaddref"></a><a name="addref"></a> ActivationFactory:: AddRef

Incrementa il conteggio dei riferimenti dell'oggetto corrente `ActivationFactory` .

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="activationfactorygetiids"></a><a name="getiids"></a> ActivationFactory:: GetIids

Recupera una matrice di ID di interfaccia implementati.

```cpp
STDMETHOD(
   GetIids
)(_Out_ ULONG *iidCount, _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);
```

### <a name="parameters"></a>Parametri

*iidCount*<br/>
Al termine dell'operazione, il numero di ID interfaccia nella matrice *IID* .

*IID*<br/>
Al termine di questa operazione, matrice di ID di interfaccia implementata.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. E_OUTOFMEMORY è possibile che si verifichi un errore HRESULT.

## <a name="activationfactorygetruntimeclassname"></a><a name="getruntimeclassname"></a> ActivationFactory:: GetRuntimeClassName

Ottiene il nome della classe di runtime dell'oggetto di cui viene `ActivationFactory` creata l'istanza corrente.

```cpp
STDMETHOD(
   GetRuntimeClassName
)(_Out_ HSTRING* runtimeName);
```

### <a name="parameters"></a>Parametri

*runtimename*<br/>
Al termine di questa operazione, un handle a una stringa che contiene il nome della classe di runtime dell'oggetto di cui viene `ActivationFactory` creata l'istanza corrente.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="activationfactorygettrustlevel"></a><a name="gettrustlevel"></a> ActivationFactory:: GetTrustLevel

Ottiene il livello di attendibilità dell'oggetto di cui viene `ActivationFactory` creata l'istanza corrente.

```cpp
STDMETHOD(
   GetTrustLevel
)(_Out_ TrustLevel* trustLvl);
```

### <a name="parameters"></a>Parametri

*trustLvl*<br/>
Al termine di questa operazione, il livello di attendibilità della classe di runtime che `ActivationFactory` Crea un'istanza di.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, viene generato un errore di asserzione e *trustLvl* è impostato su `FullTrust` .

## <a name="activationfactoryqueryinterface"></a><a name="queryinterface"></a> ActivationFactory:: QueryInterface

Recupera un puntatore all'interfaccia specificata.

```cpp
STDMETHOD(
   QueryInterface
)(REFIID riid, _Deref_out_ void **ppvObject);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
ID di interfaccia.

*ppvObject*<br/>
Al termine di questa operazione, puntatore all'interfaccia specificata dal parametro *riid*.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="activationfactoryrelease"></a><a name="release"></a> ActivationFactory:: Release

Decrementa il conteggio dei riferimenti dell' `ActivationFactory` oggetto corrente.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.
