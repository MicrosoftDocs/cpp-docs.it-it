---
title: ChainInterfaces (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::ChainInterfaces
- implements/Microsoft::WRL::ChainInterfaces::CanCastTo
- implements/Microsoft::WRL::ChainInterfaces::CastToUnknown
- implements/Microsoft::WRL::ChainInterfaces::FillArrayWithIid
- implements/Microsoft::WRL::ChainInterfaces::IidCount
- implements/Microsoft::WRL::ChainInterfaces::Verify
helpviewer_keywords:
- Microsoft::WRL::ChainInterfaces structure
- Microsoft::WRL::ChainInterfaces::CanCastTo method
- Microsoft::WRL::ChainInterfaces::CastToUnknown method
- Microsoft::WRL::ChainInterfaces::FillArrayWithIid method
- Microsoft::WRL::ChainInterfaces::IidCount constant
- Microsoft::WRL::ChainInterfaces::Verify method
ms.assetid: d7415b59-5468-4bef-a3fd-8d82b12f0e9c
ms.openlocfilehash: 9fd315f017d3dcc9823054ea99e845ec99bc4192
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58785225"
---
# <a name="chaininterfaces-structure"></a>ChainInterfaces (struttura)

Specifica le funzioni di verifica e inizializzazione che possono essere applicate a un set di ID di interfaccia.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename I0,
    typename I1,
    typename I2 = Details::Nil,
    typename I3 = Details::Nil,
    typename I4 = Details::Nil,
    typename I5 = Details::Nil,
    typename I6 = Details::Nil,
    typename I7 = Details::Nil,
    typename I8 = Details::Nil,
    typename I9 = Details::Nil
>
struct ChainInterfaces : I0;

template <
    typename DerivedType,
    typename BaseType,
    bool hasImplements,
    typename I1,
    typename I2,
    typename I3,
    typename I4,
    typename I5,
    typename I6,
    typename I7,
    typename I8,
    typename I9
>
struct ChainInterfaces<
    MixIn<
        DerivedType,
        BaseType,
        hasImplements
    >, I1, I2, I3, I4, I5, I6, I7, I8, I9
>;
```

### <a name="parameters"></a>Parametri

*I0*<br/>
(Obbligatorio) Interfaccia ID 0.

*I1*<br/>
(Obbligatorio) Interfaccia ID 1.

*I2*<br/>
(Facoltativo) ID di interfaccia 2.

*I3*<br/>
(Facoltativo) ID di interfaccia 3.

*I4*<br/>
(Facoltativo) ID di interfaccia 4.

*I5*<br/>
(Facoltativo) ID di interfaccia 5.

*I6*<br/>
(Facoltativo) ID di interfaccia 6.

*I7*<br/>
(Facoltativo) ID di interfaccia 7.

*I8*<br/>
(Facoltativo) ID di interfaccia 8.

*I9*<br/>
(Facoltativo) ID di interfaccia 9.

*DerivedType*<br/>
Un tipo derivato.

*BaseType*<br/>
Il tipo di base di un tipo derivato.

*hasImplements*<br/>
Valore booleano che, se **true**, significa che non è possibile utilizzare un [MixIn](mixin-structure.md) struttura con una classe che deriva dal [implementa](implements-structure.md) struttura.

## <a name="members"></a>Membri

### <a name="protected-methods"></a>Metodi protetti

Nome                                                   | Descrizione
------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ChainInterfaces::CanCastTo](#cancastto)               | Indica se l'ID di interfaccia specificato può essere convertito in ognuna delle specializzazioni definite dal `ChainInterface` i parametri del modello.
[ChainInterfaces::CastToUnknown](#casttounknown)       | Viene eseguito il cast del tipo definito per il puntatore di interfaccia di *I0* parametro di modello in un puntatore a `IUnknown`.
[ChainInterfaces::FillArrayWithIid](#fillarraywithiid) | Archivia l'ID di interfaccia definito per il *I0* parametro di modello in una posizione specificata in una matrice specificata di ID di interfaccia.
[ChainInterfaces::Verify](#verify)                     | Verifica che ogni interfaccia definita dai parametri modello *I0* attraverso *I9* eredita `IUnknown` e/o `IInspectable`e che *I0* eredita da *I1* attraverso *I9*.

### <a name="protected-constants"></a>Costanti protette

Nome                                   | Descrizione
-------------------------------------- | -----------------------------------------------------------------------------------------------------------------
[ChainInterfaces::IidCount](#iidcount) | Il numero totale di interfaccia ID contenuti nelle interfacce specificate dai parametri modello *I0* attraverso *I9*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`I0`

`ChainInterfaces`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="cancastto"></a>ChainInterfaces::CanCastTo

Indica se l'ID di interfaccia specificato può essere convertito in ognuna delle specializzazioni definite dai parametri di modello diverso.

```cpp
__forceinline bool CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
ID di interfaccia.

*ppv*<br/>
Un puntatore all'ID di interfaccia ultimo che è stato eseguito il cast correttamente.

### <a name="return-value"></a>Valore restituito

**true** se tutte le operazioni di cast ha esito positivo; in caso contrario, **false**.

## <a name="casttounknown"></a>ChainInterfaces::CastToUnknown

Viene eseguito il cast del tipo definito per il puntatore di interfaccia di *I0* parametro di modello in un puntatore a `IUnknown`.

```cpp
__forceinline IUnknown* CastToUnknown();
```

### <a name="return-value"></a>Valore restituito

Un puntatore a `IUnknown`.

## <a name="fillarraywithiid"></a>ChainInterfaces::FillArrayWithIid

Archivia l'ID di interfaccia definito per il *I0* parametro di modello in una posizione specificata in una matrice specificata di ID di interfaccia.

```cpp
__forceinline static void FillArrayWithIid(
   _Inout_ unsigned long &index,
   _In_ IID* iids
);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Puntatore a un valore di indice nel *IID* matrice.

*iids*<br/>
Matrice ID di interfaccia.

## <a name="iidcount"></a>ChainInterfaces::IidCount

Il numero totale di interfaccia ID contenuti nelle interfacce specificate dai parametri modello *I0* attraverso *I9*.

```cpp
static const unsigned long IidCount = Details::InterfaceTraits<I0>::IidCount + Details::InterfaceTraits<I1>::IidCount + Details::InterfaceTraits<I2>::IidCount + Details::InterfaceTraits<I3>::IidCount + Details::InterfaceTraits<I4>::IidCount + Details::InterfaceTraits<I5>::IidCount + Details::InterfaceTraits<I6>::IidCount + Details::InterfaceTraits<I7>::IidCount + Details::InterfaceTraits<I8>::IidCount + Details::InterfaceTraits<I9>::IidCount;
```

### <a name="return-value"></a>Valore restituito

Il numero totale di ID di interfaccia.

### <a name="remarks"></a>Note

I parametri del modello *I0* e *I1* sono obbligatori e i parametri *I2* tramite *I9* sono facoltativi. Il conteggio IID di ogni interfaccia in genere è 1.

## <a name="verify"></a>Chaininterfaces:: Verify

Verifica che ogni interfaccia definita dai parametri modello *I0* attraverso *I9* eredita `IUnknown` e/o `IInspectable`e che *I0* eredita da *I1* attraverso *I9*.

```cpp
WRL_NOTHROW __forceinline static void Verify();
```

### <a name="remarks"></a>Note

Se l'operazione di verifica non riesce, un `static_assert` genera un messaggio di errore che descrive l'errore.

I parametri del modello *I0* e *I1* sono obbligatori e i parametri *I2* tramite *I9* sono facoltativi.
