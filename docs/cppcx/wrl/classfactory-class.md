---
title: ClassFactory (classe)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::ClassFactory
- module/Microsoft::WRL::ClassFactory::AddRef
- module/Microsoft::WRL::ClassFactory::ClassFactory
- module/Microsoft::WRL::ClassFactory::LockServer
- module/Microsoft::WRL::ClassFactory::QueryInterface
- module/Microsoft::WRL::ClassFactory::Release
helpviewer_keywords:
- Microsoft::WRL::ClassFactory class
- Microsoft::WRL::ClassFactory::AddRef method
- Microsoft::WRL::ClassFactory::ClassFactory, constructor
- Microsoft::WRL::ClassFactory::LockServer method
- Microsoft::WRL::ClassFactory::QueryInterface method
- Microsoft::WRL::ClassFactory::Release method
ms.assetid: f13e6bce-722b-4f18-b7cf-3ffa6345c1db
ms.openlocfilehash: ccc1c43e8c68053a773883c25704cdea086bd0b1
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "58784836"
---
# <a name="classfactory-class"></a>ClassFactory (classe)

Implementa le funzionalità di base di un'interfaccia `IClassFactory`.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename I0 = Details::Nil,
    typename I1 = Details::Nil,
    typename I2 = Details::Nil
>
class ClassFactory :
    public Details::RuntimeClass<
        typename Details::InterfaceListHelper<
            IClassFactory,
            I0,
            I1,
            I2,
            Details::Nil
        >::TypeT,
        RuntimeClassFlags<ClassicCom | InhibitWeakReference>,
        false
    >;
```

### <a name="parameters"></a>Parametri

*I0*<br/>
L'interfaccia di zero.

*I1*<br/>
La prima interfaccia.

*I2*<br/>
La seconda interfaccia.

## <a name="remarks"></a>Note

Utilizzare `ClassFactory` per fornire un'implementazione della factory definita dall'utente.

Il modello di programmazione seguente illustra come usare il [implementa](implements-structure.md) struttura per specificare più di tre interfacce in una class factory.

`struct MyFactory : ClassFactory<Implements<I1, I2, I3>, I4, I5>`

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

Nome                                        | Descrizione
------------------------------------------- | -----------
[ClassFactory::ClassFactory](#classfactory) |

### <a name="public-methods"></a>Metodi pubblici

Nome                                            | Descrizione
----------------------------------------------- | ----------------------------------------------------------------------------------------------------------------
[ClassFactory::AddRef](#addref)                 | Incrementa il conteggio dei riferimenti per l'oggetto corrente `ClassFactory` oggetto.
[ClassFactory::LockServer](#lockserver)         | Incrementa o decrementa il numero di base di oggetti che vengono rilevati tramite il `ClassFactory` oggetto.
[ClassFactory::QueryInterface](#queryinterface) | Recupera un puntatore all'interfaccia specificata dal parametro.
[ClassFactory::Release](#release)               | Decrementa il conteggio dei riferimenti per l'oggetto corrente `ClassFactory` oggetto.

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

`ClassFactory`

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="addref"></a>ClassFactory::AddRef

Incrementa il conteggio dei riferimenti per l'oggetto corrente `ClassFactory` oggetto.

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="classfactory"></a>ClassFactory::ClassFactory

```cpp
WRL_NOTHROW ClassFactory();
```

## <a name="lockserver"></a>ClassFactory::LockServer

Incrementa o decrementa il numero di base di oggetti che vengono rilevati tramite il `ClassFactory` oggetto.

```cpp
STDMETHOD(
   LockServer
)(BOOL fLock);
```

### <a name="parameters"></a>Parametri

*fLock*<br/>
**true** per incrementare il numero di oggetti registrati. **false** per ridurre il numero di oggetti registrati.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, E_FAIL.

### <a name="remarks"></a>Note

`ClassFactory` tiene traccia degli oggetti in un'istanza sottostante del [modulo](module-class.md) classe.

## <a name="queryinterface"></a>ClassFactory::QueryInterface

Recupera un puntatore all'interfaccia specificata dal parametro.

```cpp
STDMETHOD(
   QueryInterface
)(REFIID riid, _Deref_out_ void **ppvObject);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
ID di interfaccia.

*ppvObject*<br/>
Al termine di questa operazione, un puntatore all'interfaccia specificata dal parametro *riid*.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.

## <a name="release"></a>ClassFactory::Release

Decrementa il conteggio dei riferimenti per l'oggetto corrente `ClassFactory` oggetto.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore.
