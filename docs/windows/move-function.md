---
title: Move (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::Move
helpviewer_keywords:
- Move function
ms.assetid: c9525426-97e8-4d8c-9877-b689d8a0dc67
ms.openlocfilehash: a53dbbe54cef2ac2557648e66e5d8dafc4fb4768
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50591360"
---
# <a name="move-function"></a>Move (funzione)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
inline typename RemoveReference<T>::Type&& Move(
   _Inout_ T&& arg
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di argomento.

*arg*<br/>
Un argomento da spostare.

## <a name="return-value"></a>Valore restituito

Parametro *arg* dopo traits riferimento o un riferimento rvalue, se presenti, sono state rimosse.

## <a name="remarks"></a>Note

Sposta l'argomento specificato da una posizione a altra.

Per altre informazioni, vedere la **semantica di spostamento** sezione [dichiaratore di riferimento Rvalue: & &](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)