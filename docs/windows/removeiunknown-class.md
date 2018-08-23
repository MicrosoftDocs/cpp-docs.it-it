---
title: Classe RemoveIUnknown | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::RemoveIUnknown
dev_langs:
- C++
ms.assetid: 998e711a-7d1a-44c6-a016-e6167aa40863
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 11751bf4e6f43e18fddb71a5ba2fd331a6d36977
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42599371"
---
# <a name="removeiunknown-class"></a>Classe RemoveIUnknown

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename T
>
struct RemoveIUnknown;

template <
   typename T
>
class RemoveIUnknown : public T;
```

### <a name="parameters"></a>Parametri

*T*  
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