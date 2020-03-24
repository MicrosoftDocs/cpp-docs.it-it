---
title: Funzione MakeAndInitialize
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::MakeAndInitialize
ms.assetid: 71ceeb12-d2a2-4317-b010-3dcde1b39467
ms.openlocfilehash: 28d9e586a766a131e7ab6280859845810c1d9814
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213798"
---
# <a name="makeandinitialize-function"></a>Funzione MakeAndInitialize

Inizializza la classe Windows Runtime specificata. Utilizzare questa funzione per creare un'istanza di un componente definito nello stesso modulo.

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
Tipo di argomento 1 passato alla classe di runtime specificata.

*TArg2*<br/>
Tipo di argomento 2 passato alla classe di runtime specificata.

*TArg3*<br/>
Tipo di argomento 3 passato alla classe di runtime specificata.

*TArg4*<br/>
Tipo di argomento 4 passato alla classe di runtime specificata.

*TArg5*<br/>
Tipo di argomento 5 passato alla classe di runtime specificata.

*TArg6*<br/>
Tipo di argomento 6 passato alla classe di runtime specificata.

*TArg7*<br/>
Tipo di argomento 7 passato alla classe di runtime specificata.

*TArg8*<br/>
Tipo di argomento 8 che viene passato alla classe di runtime specificata.

*TArg9*<br/>
Tipo di argomento 9 passato alla classe di runtime specificata.

*arg1*<br/>
Argomento 1 passato alla classe di runtime specificata.

*arg2*<br/>
Argomento 2 passato alla classe di runtime specificata.

*Arg3*<br/>
Argomento 3 passato alla classe di runtime specificata.

*Arg4*<br/>
Argomento 4 passato alla classe di runtime specificata.

*arg5*<br/>
Argomento 5 passato alla classe di runtime specificata.

*arg6*<br/>
Argomento 6 passato alla classe di runtime specificata.

*arg7*<br/>
Argomento 7 passato alla classe di runtime specificata.

*arg8*<br/>
Argomento 8 passato alla classe di runtime specificata.

*arg9*<br/>
Argomento 9 passato alla classe di runtime specificata.

## <a name="return-value"></a>Valore restituito

Valore HRESULT.

## <a name="remarks"></a>Osservazioni

Vedere [procedura: creare un'istanza dei componenti WRL direttamente](how-to-instantiate-wrl-components-directly.md) per informazioni sulle differenze tra questa funzione e [Microsoft:: WRL:: make](make-function.md)e per un esempio.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)
