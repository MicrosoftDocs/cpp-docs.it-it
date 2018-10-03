---
title: ActivationFactory (classe) | Microsoft Docs
ms.custom: ''
ms.date: 09/28/2018
ms.technology:
- cpp-windows
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 3997ee3e435aceec536215599ea0d95321fd5a38
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234671"
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
class ActivationFactory : public Details::RuntimeClass<typename Details::InterfaceListHelper<IActivationFactory, I0, I1, I2, Details::Nil>::TypeT, RuntimeClassFlags<WinRt | InhibitWeakReference>, false>;
```

### <a name="parameters"></a>Parametri

*I0*<br/>
L'interfaccia di zero.

*I1*<br/>
La prima interfaccia.

*I2*<br/>
La seconda interfaccia.

## <a name="remarks"></a>Note

`ActivationFactory` fornisce metodi di registrazione e la funzionalità di base per il `IActivationFactory` interfaccia. `ActivationFactory` consente inoltre di fornire un'implementazione della factory personalizzata.

Simbolicamente, il frammento di codice seguente viene illustrato come utilizzare ActivationFactory.

[!code-cpp[wrl-microsoft__wrl__activationfactory#1](../windows/codesnippet/CPP/activationfactory-class_1.cpp)]

Il frammento di codice seguente viene illustrato come utilizzare il [implementa](../windows/implements-structure.md) struttura per specificare più di tre ID di interfaccia.

`struct MyFactory : ActivationFactory<Implements<I1, I2, I3>, I4, I5>;`

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                                       | Descrizione
---------------------------------------------------------- | ------------------------------------------
[Activationfactory:: Activationfactory](#activationfactory) | Inizializza il `ActivationFactory` classe.

### <a name="public-methods"></a>Metodi pubblici

Nome                                                           | Descrizione
-------------------------------------------------------------- | --------------------------------------------------------------------------------------------
[Activationfactory:: AddRef](#addref)                           | Incrementa il conteggio dei riferimenti dell'oggetto corrente `ActivationFactory` oggetto.
[Activationfactory:: Getiids](#getiids)                         | Recupera una matrice di ID di interfaccia implementata.
[Activationfactory:: Getruntimeclassname](#getruntimeclassname) | Ottiene il nome della classe di runtime dell'oggetto che corrente `ActivationFactory` crea un'istanza.
[Activationfactory:: Gettrustlevel](#gettrustlevel)             | Ottiene il livello di attendibilità dell'oggetto che corrente `ActivationFactory` crea un'istanza.
[Activationfactory:: QueryInterface](#queryinterface)           | Recupera un puntatore all'interfaccia specificata.
[Activationfactory:: Release](#release)                         | Decrementa il conteggio dei riferimenti dell'oggetto corrente `ActivationFactory` oggetto.

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

## <a name="activationfactory"></a>Activationfactory:: Activationfactory

Inizializza il `ActivationFactory` classe.

```cpp
ActivationFactory();
```

## <a name="addref"></a>Activationfactory:: AddRef

Incrementa il conteggio dei riferimenti dell'oggetto corrente `ActivationFactory` oggetto.

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="getiids"></a>Activationfactory:: Getiids

Recupera una matrice di ID di interfaccia implementata.

```cpp
STDMETHOD(
   GetIids
)(_Out_ ULONG *iidCount, _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);
```

### <a name="parameters"></a>Parametri

*iidCount*<br/>
Al termine di questa operazione, il numero di ID di interfaccia nel *IID* matrice.

*IID*<br/>
Quando questa operazione viene completata, una matrice di implementato gli ID di interfaccia.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. E_OUTOFMEMORY è un HRESULT di errore possibili.

## <a name="getruntimeclassname"></a>Activationfactory:: Getruntimeclassname

Ottiene il nome della classe di runtime dell'oggetto che corrente `ActivationFactory` crea un'istanza.

```cpp
STDMETHOD(
   GetRuntimeClassName
)(_Out_ HSTRING* runtimeName);
```

### <a name="parameters"></a>Parametri

*runtimeName*<br/>
Al termine di questa operazione, un handle a una stringa che contiene il nome della classe di runtime dell'oggetto che corrente `ActivationFactory` crea un'istanza.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="gettrustlevel"></a>Activationfactory:: Gettrustlevel

Ottiene il livello di attendibilità dell'oggetto che corrente `ActivationFactory` crea un'istanza.

```cpp
STDMETHOD(
   GetTrustLevel
)(_Out_ TrustLevel* trustLvl);
```

### <a name="parameters"></a>Parametri

*trustLvl*<br/>
Quando questa operazione viene completata, il livello di attendibilità del runtime di classe che il `ActivationFactory` crea un'istanza.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, viene generato un errore di asserzione e *trustLvl* è impostata su `FullTrust`.

## <a name="queryinterface"></a>Activationfactory:: QueryInterface

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
Quando questa operazione viene completata, un puntatore all'interfaccia specificata dal parametro *riid*.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="release"></a>Activationfactory:: Release

Decrementa il conteggio dei riferimenti dell'oggetto corrente `ActivationFactory` oggetto.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.
