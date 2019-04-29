---
title: Funzione Make
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Make
helpviewer_keywords:
- Make function
ms.assetid: 66704143-df99-4a95-904d-ed99607e1034
ms.openlocfilehash: b45337ef773f93968570f62ab73c02d11fae88ff
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62398192"
---
# <a name="make-function"></a>Funzione Make

Inizializza la classe di Runtime di Windows specificata. Utilizzare questa funzione per creare un'istanza di un componente definito nello stesso modulo.

## <a name="syntax"></a>Sintassi

```cpp
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5,
   typename TArg6,
   typename TArg7,
   typename TArg8,
   typename TArg9
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4,
   TArg5 &&arg5,
   TArg6 &&arg6,
   TArg7 &&arg7,
   TArg8 &&arg8,
   TArg9 &&arg9
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5,
   typename TArg6,
   typename TArg7,
   typename TArg8
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4,
   TArg5 &&arg5,
   TArg6 &&arg6,
   TArg7 &&arg7,
   TArg8 &&arg8
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5,
   typename TArg6,
   typename TArg7
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4,
   TArg5 &&arg5,
   TArg6 &&arg6,
   TArg7 &&arg7
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5,
   typename TArg6
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4,
   TArg5 &&arg5,
   TArg6 &&arg6
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4,
   TArg5 &&arg5
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3,
   TArg4 &&arg4
);
template <
   typename T,
   typename TArg1,
   typename TArg2,
   typename TArg3
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2,
   TArg3 &&arg3
);
template <
   typename T,
   typename TArg1,
   typename TArg2
>
ComPtr<T> Make(
   TArg1 &&arg1,
   TArg2 &&arg2
);
template <
   typename T,
   typename TArg1
>
ComPtr<T> Make(
   TArg1 &&arg1
);
template <
   typename T
>
ComPtr<T> Make();
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

Un oggetto `ComPtr<T>` in caso di esito positivo; in caso contrario, `nullptr`.

## <a name="remarks"></a>Note

Vedere [How to: Creare un'istanza direttamente componenti WRL](how-to-instantiate-wrl-components-directly.md) per informazioni sulle differenze tra questa funzione e [Microsoft::WRL::Details::MakeAndInitialize](makeandinitialize-function.md)e per un esempio.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)