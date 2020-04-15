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
ms.openlocfilehash: dd1af3fb5c1079a40d8248dc71ae4972537aa856
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372657"
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
(Obbligatorio) ID interfaccia 0.

*I1*<br/>
(Obbligatorio) ID interfaccia 1.

*I2*<br/>
(Facoltativo) ID interfaccia 2.

*I3 I3*<br/>
(Facoltativo) ID interfaccia 3.

*I4*<br/>
(Facoltativo) ID interfaccia 4.

*I5*<br/>
(Facoltativo) ID interfaccia 5.

*I6 I6*<br/>
(Facoltativo) ID interfaccia 6.

*I7 I7*<br/>
(Facoltativo) ID interfaccia 7.

*I8*<br/>
(Facoltativo) ID interfaccia 8.

*I9*<br/>
(Facoltativo) ID interfaccia 9.

*TipoDerivato*<br/>
Tipo derivato.

*BaseType*<br/>
Tipo di base di un tipo derivato.

*hasImplements*<br/>
Un valore booleano che, se **true**, indica che non è possibile utilizzare una struttura [MixIn](mixin-structure.md) con una classe che non deriva dalla struttura [Implements](implements-structure.md) .

## <a name="members"></a>Membri

### <a name="protected-methods"></a>Metodi protetti

Nome                                                   | Descrizione
------------------------------------------------------ | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[Interfacce catena::CanCastToChainInterfaces::CanCastTo](#cancastto)               | Indica se è possibile eseguire il cast dell'ID di `ChainInterface` interfaccia specificato a ognuna delle specializzazioni definite dai parametri del modello.
[Interfacce catena::CastToUnknownChainInterfaces::CastToUnknown](#casttounknown)       | Esegue il cast del puntatore a interfaccia del tipo `IUnknown`definito dal parametro di modello *I0* a un puntatore a .
[Interfacce catena::FillArrayWithIidChainInterfaces::FillArrayWithIid](#fillarraywithiid) | Archivia l'ID di interfaccia definito dal parametro di modello *I0* in una posizione specificata in una matrice specificata di ID di interfaccia.
[Interfacce catena::Verifica](#verify)                     | Verifica che ogni interfaccia definita dai parametri di modello da *I0* a *I9* erediti `IUnknown` da e/o `IInspectable`, e che *I0* erediti da *I1* a *I9*.

### <a name="protected-constants"></a>Costanti protette

Nome                                   | Descrizione
-------------------------------------- | -----------------------------------------------------------------------------------------------------------------
[Interfacce catena::IidCountChainInterfaces::IidCount](#iidcount) | Numero totale di ID di interfaccia contenuti nelle interfacce specificate dai parametri di modello da *I0* a *I9*.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`I0`

`ChainInterfaces`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="chaininterfacescancastto"></a><a name="cancastto"></a>Interfacce catena::CanCastToChainInterfaces::CanCastTo

Indica se è possibile eseguire il cast dell'ID di interfaccia specificato in ognuna delle specializzazioni definite dai parametri di modello non predefiniti.

```cpp
__forceinline bool CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### <a name="parameters"></a>Parametri

*Riid*<br/>
ID di interfaccia.

*Ppv*<br/>
Puntatore all'ultimo ID di interfaccia di cui è stato eseguito correttamente il cast.

### <a name="return-value"></a>Valore restituito

**true** se tutte le operazioni di cast hanno avuto esito positivo; in caso contrario, **false**.

## <a name="chaininterfacescasttounknown"></a><a name="casttounknown"></a>Interfacce catena::CastToUnknownChainInterfaces::CastToUnknown

Esegue il cast del puntatore a interfaccia del tipo `IUnknown`definito dal parametro di modello *I0* a un puntatore a .

```cpp
__forceinline IUnknown* CastToUnknown();
```

### <a name="return-value"></a>Valore restituito

Puntatore a `IUnknown`.

## <a name="chaininterfacesfillarraywithiid"></a><a name="fillarraywithiid"></a>Interfacce catena::FillArrayWithIidChainInterfaces::FillArrayWithIid

Archivia l'ID di interfaccia definito dal parametro di modello *I0* in una posizione specificata in una matrice specificata di ID di interfaccia.

```cpp
__forceinline static void FillArrayWithIid(
   _Inout_ unsigned long &index,
   _In_ IID* iids
);
```

### <a name="parameters"></a>Parametri

*Indice*<br/>
Puntatore a un valore di indice nella matrice *iids.*

*iids*<br/>
Matrice di ID di interfaccia.

## <a name="chaininterfacesiidcount"></a><a name="iidcount"></a>Interfacce catena::IidCountChainInterfaces::IidCount

Numero totale di ID di interfaccia contenuti nelle interfacce specificate dai parametri di modello da *I0* a *I9*.

```cpp
static const unsigned long IidCount = Details::InterfaceTraits<I0>::IidCount + Details::InterfaceTraits<I1>::IidCount + Details::InterfaceTraits<I2>::IidCount + Details::InterfaceTraits<I3>::IidCount + Details::InterfaceTraits<I4>::IidCount + Details::InterfaceTraits<I5>::IidCount + Details::InterfaceTraits<I6>::IidCount + Details::InterfaceTraits<I7>::IidCount + Details::InterfaceTraits<I8>::IidCount + Details::InterfaceTraits<I9>::IidCount;
```

### <a name="return-value"></a>Valore restituito

Numero totale di ID di interfaccia.

### <a name="remarks"></a>Osservazioni

I parametri di modello *I0* e *I1* sono obbligatori e i parametri da *I2* a *I9* sono facoltativi. Il numero di IID di ogni interfaccia è in genere 1.The IID count of each interface is typically 1.

## <a name="chaininterfacesverify"></a><a name="verify"></a>Interfacce catena::Verifica

Verifica che ogni interfaccia definita dai parametri di modello da *I0* a *I9* erediti `IUnknown` da e/o `IInspectable`, e che *I0* erediti da *I1* a *I9*.

```cpp
WRL_NOTHROW __forceinline static void Verify();
```

### <a name="remarks"></a>Osservazioni

Se l'operazione di `static_assert` verifica ha esito negativo, viene generato un messaggio di errore che descrive l'errore.

I parametri di modello *I0* e *I1* sono obbligatori e i parametri da *I2* a *I9* sono facoltativi.
