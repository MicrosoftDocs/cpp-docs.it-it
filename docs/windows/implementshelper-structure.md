---
title: ImplementsHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 09/21/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::ImplementsHelper
- implements/Microsoft::WRL::Details::ImplementsHelper::CanCastTo
- implements/Microsoft::WRL::Details::ImplementsHelper::CastToUnknown
- implements/Microsoft::WRL::Details::ImplementsHelper::FillArrayWithIid
- implements/Microsoft::WRL::Details::ImplementsHelper::IidCount
dev_langs:
- C++
helpviewer_keywords:
- Microsoft::WRL::Details::ImplementsHelper structure
- Microsoft::WRL::Details::ImplementsHelper::CanCastTo method
- Microsoft::WRL::Details::ImplementsHelper::CastToUnknown method
- Microsoft::WRL::Details::ImplementsHelper::FillArrayWithIid method
- Microsoft::WRL::Details::ImplementsHelper::IidCount constant
ms.assetid: b857ba80-81bd-4e53-92b6-210991954243
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9436185ca6abc19f89e007ed20091e9c7be168a3
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48235048"
---
# <a name="implementshelper-structure"></a>ImplementsHelper (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename RuntimeClassFlagsT,
   typename ILst,
   bool IsDelegateToClass
>
friend struct Details::ImplementsHelper;
```

### <a name="parameters"></a>Parametri

*RuntimeClassFlagsT*<br/>
Un campo di flag che specifica uno o più [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeratori.

*ILst*<br/>
Un elenco ID di interfaccia.

*IsDelegateToClass*<br/>
Specificare `true` se l'istanza corrente di `Implements` è una classe di base del primo ID di interfaccia nella *ILst*; in caso contrario, `false`.

## <a name="remarks"></a>Note

Consente di implementare il [implementa](../windows/implements-structure.md) struttura.

Questo modello consente di scorrere un elenco di interfacce e li aggiunge come classi di base e le informazioni necessarie per abilitare `QueryInterface`.

## <a name="members"></a>Membri

### <a name="protected-methods"></a>Metodi protetti

Nome                                                    | Descrizione
------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------
[Implementshelper:: Cancastto](#cancastto)               | Ottiene un puntatore all'ID di interfaccia specificato.
[Implementshelper:: Casttounknown](#casttounknown)       | Ottiene un puntatore sottostante `IUnknown` interfaccia per l'oggetto corrente `Implements` struttura.
[Implementshelper:: Fillarraywithiid](#fillarraywithiid) | Inserisce l'ID di interfaccia specificato dal parametro di modello iniziale corrente nell'elemento di matrice specificato.
[Implementshelper:: Iidcount](#iidcount)                 | Contiene il numero di ID di interfaccia implementata nell'attuale `Implements` oggetto.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`ImplementsHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="cancastto"></a>Implementshelper:: Cancastto

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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
Riferimento all'ID di interfaccia.

*ppv*<br/>
Se questa operazione ha esito positivo, un puntatore all'interfaccia specificata da *riid* oppure *iid*.

*IID*<br/>
Riferimento all'ID di interfaccia.

### <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT indica un errore.

### <a name="remarks"></a>Note

Ottiene un puntatore all'ID di interfaccia specificato.

## <a name="casttounknown"></a>Implementshelper:: Casttounknown

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
IUnknown* CastToUnknown();
```

### <a name="return-value"></a>Valore restituito

Puntatore sottostante `IUnknown` interfaccia.

### <a name="remarks"></a>Note

Ottiene un puntatore sottostante `IUnknown` interfaccia per l'oggetto corrente `Implements` struttura.

## <a name="fillarraywithiid"></a>Implementshelper:: Fillarraywithiid

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
void FillArrayWithIid(
   _Inout_ unsigned long *index,
   _Inout_ IID* iids) throw();
```

### <a name="parameters"></a>Parametri

*index*<br/>
Indice in base zero che indica l'elemento di matrice iniziale per questa operazione. Al termine, questa operazione *indice* viene incrementato di 1.

*IID*<br/>
Matrice di tipo IID.

### <a name="remarks"></a>Note

Inserisce l'ID di interfaccia specificato dal parametro di modello iniziale corrente nell'elemento di matrice specificato.

## <a name="iidcount"></a>Implementshelper:: Iidcount

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

```cpp
static const unsigned long IidCount;
```

### <a name="remarks"></a>Note

Contiene il numero di ID di interfaccia implementata nell'attuale `Implements` oggetto.
