---
description: 'Altre informazioni su: struttura RuntimeClassBaseT'
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
ms.openlocfilehash: 48f03a5d54eba455b60646ed47c48e228f07863e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135291"
---
# <a name="runtimeclassbaset-structure"></a>Struttura RuntimeClassBaseT

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <unsigned int RuntimeClassTypeT>
friend struct Details::RuntimeClassBaseT;
```

### <a name="parameters"></a>Parametri

*RuntimeClassTypeT*<br/>
Campo di flag che specifica uno o più enumeratori [RuntimeClassType](runtimeclasstype-enumeration.md) .

## <a name="remarks"></a>Commenti

Fornisce metodi helper per `QueryInterface` le operazioni e il recupero degli ID di interfaccia.

## <a name="members"></a>Membri

### <a name="protected-methods"></a>Metodi protetti

Nome                                                         | Description
------------------------------------------------------------ | -----------------------------------------------------------------------------
[RuntimeClassBaseT:: AsIID](#asiid)                           | Recupera un puntatore all'ID di interfaccia specificato.
[RuntimeClassBaseT:: GetImplementedIIDS](#getimplementediids) | Recupera una matrice di ID di interfaccia implementata da un tipo specificato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RuntimeClassBaseT`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="runtimeclassbasetasiid"></a><a name="asiid"></a> RuntimeClassBaseT:: AsIID

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

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
Tipo che implementa l'ID di interfaccia specificato dal parametro *riid*.

*implementa*<br/>
Variabile del tipo specificato dal parametro di modello *T*.

*riid*<br/>
ID di interfaccia da recuperare.

*ppvObject*<br/>
Se l'operazione ha esito positivo, un puntatore a un puntatore all'interfaccia specificata dal parametro *riid*.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, HRESULT che descrive l'errore.

### <a name="remarks"></a>Commenti

Recupera un puntatore all'ID di interfaccia specificato.

## <a name="runtimeclassbasetgetimplementediids"></a><a name="getimplementediids"></a> RuntimeClassBaseT:: GetImplementedIIDS

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

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
Tipo del parametro *Implements* .

*implementa*<br/>
Puntatore al tipo specificato dal parametro *T*.

*iidCount*<br/>
Numero massimo di ID di interfaccia da recuperare.

*IID*<br/>
Se questa operazione viene completata correttamente, una matrice di ID di interfaccia implementata dal tipo *T*.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, HRESULT che descrive l'errore.

### <a name="remarks"></a>Commenti

Recupera una matrice di ID di interfaccia implementata da un tipo specificato.
