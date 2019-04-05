---
title: Classe RemoveIUnknown
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::RemoveIUnknown
ms.assetid: 998e711a-7d1a-44c6-a016-e6167aa40863
ms.openlocfilehash: 3b54f6a3072d82d40db4ac698503f0939e745472
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59036773"
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

Crea un tipo equivalente a un tipo `IUnknown`-based, ma dispone di funzioni membro `QueryInterface``AddRef` e `Release` non virtuali.

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

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)