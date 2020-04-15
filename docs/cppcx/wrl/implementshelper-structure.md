---
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
ms.openlocfilehash: e33842f574df5617fb40c5b3f6bb8324d5ba7c1e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371389"
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
Campo di flag che specifica uno o più enumeratori [RuntimeClassType.](runtimeclasstype-enumeration.md)

*ILst*<br/>
Elenco di ID di interfaccia.

*IsDelegateToClass (Classe)*<br/>
Specificare **true** se `Implements` l'istanza corrente di è una classe base del primo ID di interfaccia in *ILst*; in caso contrario, **false**.

## <a name="remarks"></a>Osservazioni

Consente di implementare la struttura [Implements.](implements-structure.md)

Questo modello attraversa un elenco di interfacce e le aggiunge come `QueryInterface`classi base e come informazioni necessarie per abilitare .

## <a name="members"></a>Membri

### <a name="protected-methods"></a>Metodi protetti

Nome                                                    | Descrizione
------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------
[ImplementsHelper::CanCastTo](#cancastto)               | Ottiene un puntatore all'ID di interfaccia specificato.
[ImplementaHelper::CastToUnknownImplementsHelper::CastToUnknown](#casttounknown)       | Ottiene un puntatore `IUnknown` all'interfaccia `Implements` sottostante per la struttura corrente.
[Implementahelper::FillArrayWithIid](#fillarraywithiid) | Inserisce l'ID di interfaccia specificato dal parametro di modello zero corrente nell'elemento di matrice specificato.
[ImplementaHelper::IidCount](#iidcount)                 | Contiene il numero di ID di `Implements` interfaccia implementati nell'oggetto corrente.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ImplementsHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** implements.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="implementshelpercancastto"></a><a name="cancastto"></a>ImplementsHelper::CanCastTo

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

*Riid*<br/>
Riferimento a un ID di interfaccia.

*Ppv*<br/>
Se l'operazione ha esito positivo, un puntatore all'interfaccia specificata da *riid* o *iid*.

*Iid*<br/>
Riferimento a un ID di interfaccia.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Osservazioni

Ottiene un puntatore all'ID di interfaccia specificato.

## <a name="implementshelpercasttounknown"></a><a name="casttounknown"></a>ImplementaHelper::CastToUnknownImplementsHelper::CastToUnknown

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
IUnknown* CastToUnknown();
```

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia sottostante. `IUnknown`

### <a name="remarks"></a>Osservazioni

Ottiene un puntatore `IUnknown` all'interfaccia `Implements` sottostante per la struttura corrente.

## <a name="implementshelperfillarraywithiid"></a><a name="fillarraywithiid"></a>Implementahelper::FillArrayWithIid

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
void FillArrayWithIid(
   _Inout_ unsigned long *index,
   _Inout_ IID* iids) throw();
```

### <a name="parameters"></a>Parametri

*Indice*<br/>
Indice in base zero che indica l'elemento di matrice iniziale per questa operazione. Al termine dell'operazione, *l'indice* viene incrementato di 1.

*iids*<br/>
Matrice di IID di tipo.

### <a name="remarks"></a>Osservazioni

Inserisce l'ID di interfaccia specificato dal parametro di modello zero corrente nell'elemento di matrice specificato.

## <a name="implementshelperiidcount"></a><a name="iidcount"></a>ImplementaHelper::IidCount

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

```cpp
static const unsigned long IidCount;
```

### <a name="remarks"></a>Osservazioni

Contiene il numero di ID di `Implements` interfaccia implementati nell'oggetto corrente.
