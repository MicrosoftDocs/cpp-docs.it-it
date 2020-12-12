---
description: 'Altre informazioni su: Struttura InterfaceTraits'
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
ms.openlocfilehash: 8dfa540119b0a120ea7b8d9365a0e8b8203939b1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97124527"
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
Per `RuntimeClass` , `Implements` e `ChainInterfaces` , un'interfaccia che non sarà presente nell'elenco di ID di interfaccia supportati.

## <a name="remarks"></a>Commenti

Implementa caratteristiche comuni di un'interfaccia.

Il secondo modello è una specializzazione per le interfacce mascherate. Il terzo modello è una specializzazione per i parametri Nil.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a><a name="public-typedefs"></a> Typedef pubblici

Nome   | Description
------ | ------------------------------------------
`Base` | Sinonimo del parametro di modello *I0* .

### <a name="public-methods"></a>Metodi pubblici

Nome                                                   | Description
------------------------------------------------------ | ----------------------------------------------------------------------------------------
[InterfaceTraits:: CanCastTo](#cancastto)               | Indica se è possibile eseguire il cast del puntatore specificato a un puntatore a `Base` .
[InterfaceTraits:: CastToBase](#casttobase)             | Esegue il cast del puntatore specificato a un puntatore a `Base` .
[InterfaceTraits:: CastToUnknown](#casttounknown)       | Esegue il cast del puntatore specificato a un puntatore a `IUnknown` .
[InterfaceTraits:: FillArrayWithIid](#fillarraywithiid) | Assegna l'ID di interfaccia di `Base` all'elemento di matrice specificato dall'argomento index.
[InterfaceTraits:: Verify](#verify)                     | Verifica che `Base` sia derivato correttamente.

### <a name="public-constants"></a>Costanti pubbliche

Nome                                   | Description
-------------------------------------- | ---------------------------------------------------------------------------------------
[InterfaceTraits:: IidCount](#iidcount) | Include il numero di ID di interfaccia associati all' `InterfaceTraits` oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InterfaceTraits`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="interfacetraitscancastto"></a><a name="cancastto"></a> InterfaceTraits:: CanCastTo

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

*ptr*<br/>
Nome di un puntatore a un tipo.

*riid*<br/>
ID di interfaccia di `Base` .

*PPV*<br/>
Se l'operazione ha esito positivo, *PPV* punta all'interfaccia specificata da `Base` . In caso contrario, *PPV* è impostato su **`nullptr`** .

### <a name="return-value"></a>Valore restituito

**`true`** Se l'operazione ha esito positivo e viene eseguito il cast di *ptr* a un puntatore a `Base` ; in caso contrario, **`false`** .

### <a name="remarks"></a>Commenti

Indica se è possibile eseguire il cast del puntatore specificato a un puntatore a `Base` .

Per ulteriori informazioni su `Base` , vedere la sezione [public Typedefs](#public-typedefs) .

## <a name="interfacetraitscasttobase"></a><a name="casttobase"></a> InterfaceTraits:: CastToBase

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
template<typename T>
static __forceinline Base* CastToBase(
   _In_ T* ptr
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di parametro *ptr*.

*ptr*<br/>
Puntatore a un tipo *T*.

### <a name="return-value"></a>Valore restituito

Puntatore a `Base`.

### <a name="remarks"></a>Commenti

Esegue il cast del puntatore specificato a un puntatore a `Base` .

Per ulteriori informazioni su `Base` , vedere la sezione [public Typedefs](#public-typedefs) .

## <a name="interfacetraitscasttounknown"></a><a name="casttounknown"></a> InterfaceTraits:: CastToUnknown

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
template<typename T>
static __forceinline IUnknown* CastToUnknown(
   _In_ T* ptr
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo di parametro *ptr*.

*ptr*<br/>
Puntatore al tipo *T*.

### <a name="return-value"></a>Valore restituito

Puntatore all'IUnknown da cui `Base` è derivato.

### <a name="remarks"></a>Commenti

Esegue il cast del puntatore specificato a un puntatore a `IUnknown` .

Per ulteriori informazioni su `Base` , vedere la sezione [public Typedefs](#public-typedefs) .

## <a name="interfacetraitsfillarraywithiid"></a><a name="fillarraywithiid"></a> InterfaceTraits:: FillArrayWithIid

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
__forceinline static void FillArrayWithIid(
   _Inout_ unsigned long &index,
   _In_ IID* iids
);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Puntatore a un campo che contiene un valore di indice in base zero.

*IID*<br/>
Matrice di ID di interfaccia.

### <a name="remarks"></a>Commenti

Assegna l'ID di interfaccia di `Base` all'elemento di matrice specificato dall'argomento index.

Contrariamente al nome di questa API, viene modificato solo un elemento della matrice; non è l'intera matrice.

Per ulteriori informazioni su `Base` , vedere la sezione [public Typedefs](#public-typedefs) .

## <a name="interfacetraitsiidcount"></a><a name="iidcount"></a> InterfaceTraits:: IidCount

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const unsigned long IidCount = 1;
```

### <a name="remarks"></a>Commenti

Include il numero di ID di interfaccia associati all' `InterfaceTraits` oggetto corrente.

## <a name="interfacetraitsverify"></a><a name="verify"></a> InterfaceTraits:: Verify

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
__forceinline static void Verify();
```

### <a name="remarks"></a>Commenti

Verifica che `Base` sia derivato correttamente.

Per ulteriori informazioni su `Base` , vedere la sezione [public Typedefs](#public-typedefs) .
