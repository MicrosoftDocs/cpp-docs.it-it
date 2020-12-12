---
description: 'Altre informazioni su: Classe RemoveIUnknown'
title: Classe RemoveIUnknown
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::RemoveIUnknown
ms.assetid: 998e711a-7d1a-44c6-a016-e6167aa40863
ms.openlocfilehash: 0ef00ee9859a27252550aaeec6fb9b4f9ef2d5b8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97278727"
---
# <a name="removeiunknown-class"></a>Classe RemoveIUnknown

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
struct RemoveIUnknown;

template <typename T>
class RemoveIUnknown : public T;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe.

## <a name="remarks"></a>Commenti

Crea un tipo equivalente a un tipo `IUnknown`-based, ma dispone di funzioni membro `QueryInterface``AddRef` e `Release` non virtuali.

Per impostazione predefinita, i metodi COM forniscono i `QueryInterface` metodi virtuali, `AddRef` e `Release` . Tuttavia, `ComPtr` non richiede il sovraccarico di metodi virtuali. `RemoveIUnknown` Elimina tale overhead fornendo metodi privati, non virtuali `QueryInterface` , `AddRef` e `Release` .

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`ReturnType`|Sinonimo di un tipo equivalente al parametro di modello *T* ma con membri non virtuali `IUnknown` .|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`T`

`RemoveIUnknown`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL::D etails](microsoft-wrl-details-namespace.md)
