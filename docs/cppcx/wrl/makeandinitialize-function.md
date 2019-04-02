---
title: Funzione MakeAndInitialize
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::MakeAndInitialize
ms.assetid: 71ceeb12-d2a2-4317-b010-3dcde1b39467
ms.openlocfilehash: ba34b1fde546187e823a73a063bce9f69f4e7e89
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58784933"
---
# <a name="makeandinitialize-function"></a>Funzione MakeAndInitialize

Inizializza la classe di Runtime di Windows specificata. Utilizzare questa funzione per creare un'istanza di un componente definito nello stesso modulo.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename T,
    typename I,
    typename TArg1,
    typename TArg2,
    typename TArg3,
    typename TArg4,
    typename TArg5,
    typename TArg6,
    typename TArg7,
    typename TArg8,
    typename TArg9>
HRESULT MakeAndInitialize(
    _Outptr_result_nullonfailure_ I** ppvObject,
    TArg1 &&arg1,
    TArg2 &&arg2,
    TArg3 &&arg3,
    TArg4 &&arg4,
    TArg5 &&arg5,
    TArg6 &&arg6,
    TArg7 &&arg7,
    TArg8 &&arg8,
    TArg9 &&arg9) throw()
```

### <a name="parameters"></a>Parametri

*T*<br/>
Classe definita dall'utente che eredita da `WRL::RuntimeClass`.

*TArg1*<br/>
Tipo di argomento 1 che viene passato alla classe di runtime specificato.

*TArg2*<br/>
Tipo di argomento 2 che viene passato alla classe di runtime specificato.

*TArg3*<br/>
Tipo di argomento 3 che viene passato alla classe di runtime specificato.

*TArg4*<br/>
Tipo di argomento 4 che viene passato alla classe di runtime specificato.

*TArg5*<br/>
Tipo di argomento 5 che viene passato alla classe di runtime specificato.

*TArg6*<br/>
Tipo di argomento 6 che viene passato alla classe di runtime specificato.

*TArg7*<br/>
Tipo di argomento 7 che viene passato alla classe di runtime specificato.

*TArg8*<br/>
Tipo di argomento 8 che viene passato alla classe di runtime specificato.

*TArg9*<br/>
Tipo di argomento 9 che viene passato alla classe di runtime specificato.

*arg1*<br/>
Argomento 1 che viene passato alla classe di runtime specificato.

*arg2*<br/>
Argomento 2 che viene passato alla classe di runtime specificato.

*arg3*<br/>
Argomento 3 che viene passato alla classe di runtime specificato.

*arg4*<br/>
Argomento 4 che viene passato alla classe di runtime specificato.

*arg5*<br/>
Argomento 5 che viene passato alla classe di runtime specificato.

*arg6*<br/>
Argomento 6 che viene passato alla classe di runtime specificato.

*arg7*<br/>
Argomento 7 che viene passato alla classe di runtime specificato.

*arg8*<br/>
Argomento 8 che viene passato alla classe di runtime specificato.

*arg9*<br/>
Argomento 9 che viene passato alla classe di runtime specificato.

## <a name="return-value"></a>Valore restituito

Valore HRESULT.

## <a name="remarks"></a>Note

Vedere [How to: Creare un'istanza direttamente componenti WRL](how-to-instantiate-wrl-components-directly.md) per informazioni sulle differenze tra questa funzione e [makeandinitialize](make-function.md)e per un esempio.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)