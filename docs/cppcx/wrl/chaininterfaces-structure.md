---
description: 'Altre informazioni su: struttura ChainInterfaces'
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
ms.openlocfilehash: cc943b16d587a3b542e49d72e6bdc24ba2546e16
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97328876"
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
Necessaria ID interfaccia 0.

*I1*<br/>
Necessaria ID interfaccia 1.

*I2*<br/>
Opzionale ID interfaccia 2.

*I3*<br/>
Opzionale ID interfaccia 3.

*I4*<br/>
Opzionale ID interfaccia 4.

*I5*<br/>
Opzionale ID interfaccia 5.

*I6*<br/>
Opzionale ID interfaccia 6.

*I7*<br/>
Opzionale ID interfaccia 7.

*I8*<br/>
Opzionale ID interfaccia 8.

*I9*<br/>
Opzionale ID interfaccia 9.

*DerivedType*<br/>
Tipo derivato.

*BaseType*<br/>
Tipo di base di un tipo derivato.

*hasImplements*<br/>
Valore booleano che **`true`** , se, significa che non è possibile usare una struttura [mixin](mixin-structure.md) con una classe che non deriva da [implementa](implements-structure.md) struttura.

## <a name="members"></a>Membri

### <a name="protected-methods"></a>Metodi protetti

Nome                                                   | Description
------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ChainInterfaces:: CanCastTo](#cancastto)               | Indica se è possibile eseguire il cast dell'ID di interfaccia specificato a ognuna delle specializzazioni definite dai `ChainInterface` parametri del modello.
[ChainInterfaces:: CastToUnknown](#casttounknown)       | Esegue il cast del puntatore a interfaccia del tipo definito dal parametro di modello *I0* a un puntatore a `IUnknown` .
[ChainInterfaces:: FillArrayWithIid](#fillarraywithiid) | Archivia l'ID di interfaccia definito dal parametro di modello *I0* in una posizione specificata in una matrice specificata di ID di interfaccia.
[ChainInterfaces:: Verify](#verify)                     | Verifica che ogni interfaccia definita dai parametri del modello *I0* tramite *i9* erediti da `IUnknown` e/o `IInspectable` e che *I0* erediti da *I1* a *i9*.

### <a name="protected-constants"></a>Costanti protette

Nome                                   | Description
-------------------------------------- | -----------------------------------------------------------------------------------------------------------------
[ChainInterfaces:: IidCount](#iidcount) | Numero totale di ID di interfaccia contenuti nelle interfacce specificate dai parametri del modello *I0* tramite *i9*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`I0`

`ChainInterfaces`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="chaininterfacescancastto"></a><a name="cancastto"></a> ChainInterfaces:: CanCastTo

Indica se è possibile eseguire il cast dell'ID di interfaccia specificato a ognuna delle specializzazioni definite dai parametri di modello non predefiniti.

```cpp
__forceinline bool CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
ID di interfaccia.

*PPV*<br/>
Puntatore all'ultimo ID di interfaccia di cui è stato eseguito il cast.

### <a name="return-value"></a>Valore restituito

**`true`** Se tutte le operazioni cast sono state completate correttamente; in caso contrario, **`false`** .

## <a name="chaininterfacescasttounknown"></a><a name="casttounknown"></a> ChainInterfaces:: CastToUnknown

Esegue il cast del puntatore a interfaccia del tipo definito dal parametro di modello *I0* a un puntatore a `IUnknown` .

```cpp
__forceinline IUnknown* CastToUnknown();
```

### <a name="return-value"></a>Valore restituito

Puntatore a `IUnknown`.

## <a name="chaininterfacesfillarraywithiid"></a><a name="fillarraywithiid"></a> ChainInterfaces:: FillArrayWithIid

Archivia l'ID di interfaccia definito dal parametro di modello *I0* in una posizione specificata in una matrice specificata di ID di interfaccia.

```cpp
__forceinline static void FillArrayWithIid(
   _Inout_ unsigned long &index,
   _In_ IID* iids
);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Puntatore a un valore di indice nella matrice *IID* .

*IID*<br/>
Matrice di ID di interfaccia.

## <a name="chaininterfacesiidcount"></a><a name="iidcount"></a> ChainInterfaces:: IidCount

Numero totale di ID di interfaccia contenuti nelle interfacce specificate dai parametri del modello *I0* tramite *i9*.

```cpp
static const unsigned long IidCount = Details::InterfaceTraits<I0>::IidCount + Details::InterfaceTraits<I1>::IidCount + Details::InterfaceTraits<I2>::IidCount + Details::InterfaceTraits<I3>::IidCount + Details::InterfaceTraits<I4>::IidCount + Details::InterfaceTraits<I5>::IidCount + Details::InterfaceTraits<I6>::IidCount + Details::InterfaceTraits<I7>::IidCount + Details::InterfaceTraits<I8>::IidCount + Details::InterfaceTraits<I9>::IidCount;
```

### <a name="return-value"></a>Valore restituito

Numero totale di ID di interfaccia.

### <a name="remarks"></a>Commenti

I parametri di modello *I0* e *I1* sono obbligatori e i parametri *I2* tramite *i9* sono facoltativi. Il numero di IID di ogni interfaccia è in genere pari a 1.

## <a name="chaininterfacesverify"></a><a name="verify"></a> ChainInterfaces:: Verify

Verifica che ogni interfaccia definita dai parametri del modello *I0* tramite *i9* erediti da `IUnknown` e/o `IInspectable` e che *I0* erediti da *I1* a *i9*.

```cpp
WRL_NOTHROW __forceinline static void Verify();
```

### <a name="remarks"></a>Commenti

Se l'operazione di verifica ha esito negativo, un oggetto **`static_assert`** genera un messaggio di errore che descrive l'errore.

I parametri di modello *I0* e *I1* sono obbligatori e i parametri *I2* tramite *i9* sono facoltativi.
