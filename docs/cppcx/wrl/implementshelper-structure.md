---
description: 'Altre informazioni su: Struttura ImplementsHelper'
title: ImplementsHelper (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ImplementsHelper
- implements/Microsoft::WRL::Details::ImplementsHelper::CanCastTo
- implements/Microsoft::WRL::Details::ImplementsHelper::CastToUnknown
- implements/Microsoft::WRL::Details::ImplementsHelper::FillArrayWithIid
- implements/Microsoft::WRL::Details::ImplementsHelper::IidCount
helpviewer_keywords:
- Microsoft::WRL::Details::ImplementsHelper structure
- Microsoft::WRL::Details::ImplementsHelper::CanCastTo method
- Microsoft::WRL::Details::ImplementsHelper::CastToUnknown method
- Microsoft::WRL::Details::ImplementsHelper::FillArrayWithIid method
- Microsoft::WRL::Details::ImplementsHelper::IidCount constant
ms.assetid: b857ba80-81bd-4e53-92b6-210991954243
ms.openlocfilehash: 142cc532a89758c35c3387c398311acd077b8385
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249815"
---
# <a name="implementshelper-structure"></a>ImplementsHelper (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename RuntimeClassFlagsT, typename ILst, bool IsDelegateToClass>
friend struct Details::ImplementsHelper;
```

### <a name="parameters"></a>Parametri

*RuntimeClassFlagsT*<br/>
Campo di flag che specifica uno o più enumeratori [RuntimeClassType](runtimeclasstype-enumeration.md) .

*ILst*<br/>
Elenco di ID di interfaccia.

*IsDelegateToClass*<br/>
Specificare **`true`** se l'istanza corrente di `Implements` è una classe di base del primo ID di interfaccia in *ILst*; in caso contrario, **`false`** .

## <a name="remarks"></a>Commenti

Consente di implementare la struttura [Implements](implements-structure.md) .

Questo modello attraversa un elenco di interfacce e le aggiunge come classi base e come informazioni necessarie per abilitare `QueryInterface` .

## <a name="members"></a>Membri

### <a name="protected-methods"></a>Metodi protetti

Nome                                                    | Description
------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------
[ImplementsHelper:: CanCastTo](#cancastto)               | Ottiene un puntatore all'ID di interfaccia specificato.
[ImplementsHelper:: CastToUnknown](#casttounknown)       | Ottiene un puntatore all'interfaccia sottostante `IUnknown` per la struttura corrente `Implements` .
[ImplementsHelper:: FillArrayWithIid](#fillarraywithiid) | Inserisce l'ID di interfaccia specificato dal parametro del modello zero corrente nell'elemento di matrice specificato.
[ImplementsHelper:: IidCount](#iidcount)                 | Include il numero di ID di interfaccia implementati nell' `Implements` oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ImplementsHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="implementshelpercancastto"></a><a name="cancastto"></a> ImplementsHelper:: CanCastTo

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
HRESULT CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);

HRESULT CanCastTo(
   _In_ const IID &iid,
   _Deref_out_ void **ppv
);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
Riferimento a un ID di interfaccia.

*PPV*<br/>
Se l'operazione ha esito positivo, un puntatore all'interfaccia specificata da *riid* o *IID*.

*IID*<br/>
Riferimento a un ID di interfaccia.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Commenti

Ottiene un puntatore all'ID di interfaccia specificato.

## <a name="implementshelpercasttounknown"></a><a name="casttounknown"></a> ImplementsHelper:: CastToUnknown

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
IUnknown* CastToUnknown();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia sottostante `IUnknown` .

### <a name="remarks"></a>Commenti

Ottiene un puntatore all'interfaccia sottostante `IUnknown` per la struttura corrente `Implements` .

## <a name="implementshelperfillarraywithiid"></a><a name="fillarraywithiid"></a> ImplementsHelper:: FillArrayWithIid

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
void FillArrayWithIid(
   _Inout_ unsigned long *index,
   _Inout_ IID* iids) throw();
```

### <a name="parameters"></a>Parametri

*index*<br/>
Indice in base zero che indica l'elemento di matrice iniziale per questa operazione. Al termine dell'operazione, l' *Indice* viene incrementato di 1.

*IID*<br/>
Matrice di tipo IID.

### <a name="remarks"></a>Commenti

Inserisce l'ID di interfaccia specificato dal parametro del modello zero corrente nell'elemento di matrice specificato.

## <a name="implementshelperiidcount"></a><a name="iidcount"></a> ImplementsHelper:: IidCount

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const unsigned long IidCount;
```

### <a name="remarks"></a>Commenti

Include il numero di ID di interfaccia implementati nell' `Implements` oggetto corrente.
