---
title: Classe RemoveIUnknown
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::RemoveIUnknown
ms.assetid: 998e711a-7d1a-44c6-a016-e6167aa40863
ms.openlocfilehash: 06b3ec86874bcf7968483eb4557b6b6b247ecdfe
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50556351"
---
# <a name="removeiunknown-class"></a>Classe RemoveIUnknown

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <typename T>
struct RemoveIUnknown;

template <typename T>
class RemoveIUnknown : public T;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Una classe.

## <a name="remarks"></a>Note

Crea un tipo equivalente a un tipo `IUnknown`-based, ma dispone di funzioni membro `QueryInterface` `AddRef` e `Release` non virtuali.

Per impostazione predefinita, i metodi COM forniscono virtual `QueryInterface`, `AddRef`, e `Release` metodi. Tuttavia, `ComPtr` non richiedono il sovraccarico di metodi virtuali. `RemoveIUnknown` Elimina le spese generali, fornendo privato, non virtuale `QueryInterface`, `AddRef`, e `Release` metodi.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`ReturnType`|Un sinonimo per un tipo equivalente al parametro di modello *T* ma non virtuali `IUnknown` membri.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`T`

`RemoveIUnknown`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)