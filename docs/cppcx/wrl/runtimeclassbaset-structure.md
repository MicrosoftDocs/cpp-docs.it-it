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
ms.openlocfilehash: 06a9f73e00d541b0e5bcbe20c57befe4a67c5132
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375728"
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
Campo di flag che specifica uno o più enumeratori [RuntimeClassType.](runtimeclasstype-enumeration.md)

## <a name="remarks"></a>Osservazioni

Fornisce metodi `QueryInterface` di supporto per le operazioni e il recupero degli ID di interfaccia.

## <a name="members"></a>Membri

### <a name="protected-methods"></a>Metodi protetti

Nome                                                         | Descrizione
------------------------------------------------------------ | -----------------------------------------------------------------------------
[RuntimeClassBaseT::AsIID](#asiid)                           | Recupera un puntatore all'ID di interfaccia specificato.
[RuntimeClassBaseT::GetImplementedIIDS](#getimplementediids) | Recupera una matrice di ID di interfaccia implementati da un tipo specificato.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`RuntimeClassBaseT`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="runtimeclassbasetasiid"></a><a name="asiid"></a>RuntimeClassBaseT::AsIID

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

*Implementa*<br/>
Variabile del tipo specificato dal parametro di modello *T*.

*Riid*<br/>
ID dell'interfaccia da recuperare.

*Oggetto ppv*<br/>
Se l'operazione ha esito positivo, un puntatore a un puntatore all'interfaccia specificata dal parametro *riid*.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un HRESULT che descrive l'errore.

### <a name="remarks"></a>Osservazioni

Recupera un puntatore all'ID di interfaccia specificato.

## <a name="runtimeclassbasetgetimplementediids"></a><a name="getimplementediids"></a>RuntimeClassBaseT::GetImplementedIIDS

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
Tipo del parametro *implements.*

*Implementa*<br/>
Puntatore al tipo specificato dal parametro *T*.

*iidCount*<br/>
Numero massimo di ID di interfaccia da recuperare.

*iids*<br/>
Se questa operazione viene completata correttamente, matrice degli ID di interfaccia implementata dal tipo *T*.

### <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un HRESULT che descrive l'errore.

### <a name="remarks"></a>Osservazioni

Recupera una matrice di ID di interfaccia implementati da un tipo specificato.
