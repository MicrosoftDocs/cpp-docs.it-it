---
description: 'Altre informazioni su: make Function'
title: Funzione Make
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Make
helpviewer_keywords:
- Make function
ms.assetid: 66704143-df99-4a95-904d-ed99607e1034
ms.openlocfilehash: bb83c6c163440f911bc625a8646d1758442b25f6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97298903"
---
# <a name="make-function"></a>Funzione Make

Inizializza la classe Windows Runtime specificata. Utilizzare questa funzione per creare un'istanza di un componente definito nello stesso modulo.

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

`ComPtr<T>`Oggetto in caso di esito positivo; in caso contrario, **`nullptr`** .

## <a name="remarks"></a>Commenti

Vedere [procedura: creare un'istanza dei componenti WRL direttamente](how-to-instantiate-wrl-components-directly.md) per informazioni sulle differenze tra questa funzione e [Microsoft:: WRL::D etails:: MakeAndInitialize](makeandinitialize-function.md)e per un esempio.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)
