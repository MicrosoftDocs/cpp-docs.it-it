---
title: Struttura RuntimeClassBaseT
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::RuntimeClassBaseT
- implements/Microsoft::WRL::Details::RuntimeClassBaseT::AsIID
- implements/Microsoft::WRL::Details::RuntimeClassBaseT::GetImplementedIIDS
helpviewer_keywords:
- Microsoft::WRL::Details::RuntimeClassBaseT structure
- Microsoft::WRL::Details::RuntimeClassBaseT::AsIID method
- Microsoft::WRL::Details::RuntimeClassBaseT::GetImplementedIIDS method
ms.assetid: a62775fb-3359-4f45-9ff1-c07fa8da464b
ms.openlocfilehash: 3dd55c322e7da3be3f888c4faa88172fd0c17672
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50456849"
---
# <a name="runtimeclassbaset-structure"></a>Struttura RuntimeClassBaseT

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <unsigned int RuntimeClassTypeT>
friend struct Details::RuntimeClassBaseT;
```

### <a name="parameters"></a>Parametri

*RuntimeClassTypeT*<br/>
Un campo di flag che specifica uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeratori.

## <a name="remarks"></a>Note

Fornisce metodi helper per `QueryInterface` operazioni e ottenere gli ID di interfaccia.

## <a name="members"></a>Membri

### <a name="protected-methods"></a>Metodi protetti

Nome                                                         | Descrizione
------------------------------------------------------------ | -----------------------------------------------------------------------------
[Runtimeclassbaset:: Asiid](#asiid)                           | Recupera un puntatore all'ID di interfaccia specificato.
[Runtimeclassbaset:: Getimplementediids](#getimplementediids) | Recupera una matrice ID che sono implementate da un tipo specificato di interfaccia.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RuntimeClassBaseT`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="asiid"></a>Runtimeclassbaset:: Asiid

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
template<typename T>
__forceinline static HRESULT AsIID(
   _In_ T* implements,
   REFIID riid,
   _Deref_out_ void **ppvObject
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Un tipo che implementa l'ID di interfaccia specificato dal parametro *riid*.

*implements*<br/>
Una variabile del tipo specificato dal parametro di modello *T*.

*riid*<br/>
L'ID di interfaccia da recuperare.

*ppvObject*<br/>
Se questa operazione ha esito positivo, un puntatore-a-a-puntatore all'interfaccia specificata dal parametro *riid*.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che descrive l'errore.

### <a name="remarks"></a>Note

Recupera un puntatore all'ID di interfaccia specificato.

## <a name="getimplementediids"></a>Runtimeclassbaset:: Getimplementediids

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
template<typename T>
__forceinline static HRESULT GetImplementedIIDS(
   _In_ T* implements,
   _Out_ ULONG *iidCount,
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo dei *implementa* parametro.

*implements*<br/>
Puntatore al tipo specificato dal parametro *T*.

*iidCount*<br/>
Il numero massimo di ID di interfaccia da recuperare.

*IID*<br/>
Se questa operazione viene completata correttamente, una matrice di ID di interfaccia implementato dal tipo *T*.

### <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che descrive l'errore.

### <a name="remarks"></a>Note

Recupera una matrice ID che sono implementate da un tipo specificato di interfaccia.
