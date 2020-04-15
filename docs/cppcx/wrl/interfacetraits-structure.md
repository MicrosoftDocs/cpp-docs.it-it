---
title: InterfaceTraits (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceTraits
- implements/Microsoft::WRL::Details::InterfaceTraits::CanCastTo
- implements/Microsoft::WRL::Details::InterfaceTraits::CastToBase
- implements/Microsoft::WRL::Details::InterfaceTraits::CastToUnknown
- implements/Microsoft::WRL::Details::InterfaceTraits::FillArrayWithIid
- implements/Microsoft::WRL::Details::InterfaceTraits::IidCount
- implements/Microsoft::WRL::Details::InterfaceTraits::Verify
helpviewer_keywords:
- Microsoft::WRL::Details::InterfaceTraits structure
- Microsoft::WRL::Details::InterfaceTraits::CanCastTo method
- Microsoft::WRL::Details::InterfaceTraits::CastToBase method
- Microsoft::WRL::Details::InterfaceTraits::CastToUnknown method
- Microsoft::WRL::Details::InterfaceTraits::FillArrayWithIid method
- Microsoft::WRL::Details::InterfaceTraits::IidCount constant
- Microsoft::WRL::Details::InterfaceTraits::Verify method
ms.assetid: ede0c284-19a7-4892-9738-ff3da4923d0a
ms.openlocfilehash: 17f743a38af3ddc600a55e38905d19868d076a22
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371367"
---
# <a name="interfacetraits-structure"></a>InterfaceTraits (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<typename I0>
struct __declspec(novtable) InterfaceTraits;

template<typename CloakedType>
struct __declspec(novtable) InterfaceTraits<
    CloakedIid<CloakedType>
>;

template<>
struct __declspec(novtable) InterfaceTraits<Nil>;
```

### <a name="parameters"></a>Parametri

*I0*<br/>
Nome di un'interfaccia.

*CloakedType*<br/>
Per `RuntimeClass` `Implements` , `ChainInterfaces`e , un'interfaccia che non sarà presente nell'elenco degli ID di interfaccia supportati.

## <a name="remarks"></a>Osservazioni

Implementa le caratteristiche comuni di un'interfaccia.

Il secondo modello è una specializzazione per le interfacce mascherate. Il terzo modello è una specializzazione per i parametri Nil.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a><a name="public-typedefs"></a>Typedef pubblici

Nome   | Descrizione
------ | ------------------------------------------
`Base` | Sinonimo del parametro di modello *I0.*

### <a name="public-methods"></a>Metodi pubblici

Nome                                                   | Descrizione
------------------------------------------------------ | ----------------------------------------------------------------------------------------
[Traits interfaccia::CanCastTo](#cancastto)               | Indica se è possibile eseguire il cast `Base`del puntatore specificato a un puntatore a .
[Tratti di interfaccia::CastToBaseInterfaceTraits::CastToBase](#casttobase)             | Esegue il cast del puntatore specificato a un puntatore a `Base`.
[InterfaceTraits::CastToUnknownInterfaceTraits::CastToUnknown](#casttounknown)       | Esegue il cast del puntatore specificato a un puntatore a `IUnknown`.
[Traits interfaccia::FillArrayWithIid](#fillarraywithiid) | Assegna l'ID `Base` di interfaccia di all'elemento della matrice specificato dall'argomento index.
[InterfaceTraits::Verifica](#verify)                     | Verifica che `Base` sia derivato correttamente.

### <a name="public-constants"></a>Costanti pubbliche

Nome                                   | Descrizione
-------------------------------------- | ---------------------------------------------------------------------------------------
[Traits interfaccia::IidCount](#iidcount) | Contiene il numero di ID di `InterfaceTraits` interfaccia associati all'oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InterfaceTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="interfacetraitscancastto"></a><a name="cancastto"></a>Traits interfaccia::CanCastTo

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
template<typename T>
static __forceinline bool CanCastTo(
   _In_ T* ptr,
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### <a name="parameters"></a>Parametri

*Ptr*<br/>
Nome di un puntatore a un tipo.

*Riid*<br/>
ID dell'interfaccia di `Base`.

*Ppv*<br/>
Se l'operazione ha esito positivo, `Base` *ppv* punta all'interfaccia specificata da . In caso contrario, `nullptr` *ppv* è impostato su .

### <a name="return-value"></a>Valore restituito

**true** se l'operazione *ptr* ha esito positivo `Base`e ptr viene emesso il cast a un puntatore a ; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

Indica se è possibile eseguire il cast `Base`del puntatore specificato a un puntatore a .

Per ulteriori `Base`informazioni su , vedere la sezione [Public Typedefs](#public-typedefs) .

## <a name="interfacetraitscasttobase"></a><a name="casttobase"></a>Tratti di interfaccia::CastToBaseInterfaceTraits::CastToBase

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
template<typename T>
static __forceinline Base* CastToBase(
   _In_ T* ptr
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di parametro *ptr*.

*Ptr*<br/>
Puntatore a un tipo *T*.

### <a name="return-value"></a>Valore restituito

Puntatore a `Base`.

### <a name="remarks"></a>Osservazioni

Esegue il cast del puntatore specificato a un puntatore a `Base`.

Per ulteriori `Base`informazioni su , vedere la sezione [Public Typedefs](#public-typedefs) .

## <a name="interfacetraitscasttounknown"></a><a name="casttounknown"></a>InterfaceTraits::CastToUnknownInterfaceTraits::CastToUnknown

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
template<typename T>
static __forceinline IUnknown* CastToUnknown(
   _In_ T* ptr
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di parametro *ptr*.

*Ptr*<br/>
Puntatore al tipo *T*.

### <a name="return-value"></a>Valore restituito

Puntatore all'IUnknown `Base` da cui deriva.

### <a name="remarks"></a>Osservazioni

Esegue il cast del puntatore specificato a un puntatore a `IUnknown`.

Per ulteriori `Base`informazioni su , vedere la sezione [Public Typedefs](#public-typedefs) .

## <a name="interfacetraitsfillarraywithiid"></a><a name="fillarraywithiid"></a>Traits interfaccia::FillArrayWithIid

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
__forceinline static void FillArrayWithIid(
   _Inout_ unsigned long &index,
   _In_ IID* iids
);
```

### <a name="parameters"></a>Parametri

*Indice*<br/>
Puntatore a un campo che contiene un valore di indice in base zero.

*iids*<br/>
Matrice di ID di interfaccia.

### <a name="remarks"></a>Osservazioni

Assegna l'ID `Base` di interfaccia di all'elemento della matrice specificato dall'argomento index.

Contrariamente al nome di questa API, viene modificato un solo elemento di matrice; non l'intero array.

Per ulteriori `Base`informazioni su , vedere la sezione [Public Typedefs](#public-typedefs) .

## <a name="interfacetraitsiidcount"></a><a name="iidcount"></a>Traits interfaccia::IidCount

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const unsigned long IidCount = 1;
```

### <a name="remarks"></a>Osservazioni

Contiene il numero di ID di `InterfaceTraits` interfaccia associati all'oggetto corrente.

## <a name="interfacetraitsverify"></a><a name="verify"></a>InterfaceTraits::Verifica

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
__forceinline static void Verify();
```

### <a name="remarks"></a>Osservazioni

Verifica che `Base` sia derivato correttamente.

Per ulteriori `Base`informazioni su , vedere la sezione [Public Typedefs](#public-typedefs) .
