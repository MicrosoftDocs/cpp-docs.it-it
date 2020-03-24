---
title: Classe RemoveIUnknown
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- client/Microsoft::WRL::Details::RemoveIUnknown
ms.assetid: 998e711a-7d1a-44c6-a016-e6167aa40863
ms.openlocfilehash: cfcdefbb8d7cd12d2ebf99710f595fdd2fc16f76
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213616"
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

## <a name="remarks"></a>Osservazioni

Crea un tipo equivalente a un tipo `IUnknown`-based, ma dispone di funzioni membro `QueryInterface``AddRef` e `Release` non virtuali.

Per impostazione predefinita, i metodi COM forniscono i metodi `QueryInterface`virtuali, `AddRef`e `Release`. Tuttavia, `ComPtr` non richiede il sovraccarico di metodi virtuali. `RemoveIUnknown` elimina tale overhead fornendo metodi privati, non virtuali `QueryInterface`, `AddRef`e `Release`.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`ReturnType`|Sinonimo di un tipo equivalente al parametro di modello *T* ma con membri `IUnknown` non virtuali.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`T`

`RemoveIUnknown`

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)
