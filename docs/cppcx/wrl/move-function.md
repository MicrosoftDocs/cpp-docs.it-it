---
title: Move (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::Move
helpviewer_keywords:
- Move function
ms.assetid: c9525426-97e8-4d8c-9877-b689d8a0dc67
ms.openlocfilehash: 65fe85e95453165430c7ef3cfd4c4bb2babd9868
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213707"
---
# <a name="move-function"></a>Move (funzione)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

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
Argomento da spostare.

## <a name="return-value"></a>Valore restituito

I parametri *arg* dopo i riferimenti o i tratti di riferimento rvalue, se presenti, sono stati rimossi.

## <a name="remarks"></a>Osservazioni

Sposta l'argomento specificato da una posizione a un'altra.

Per ulteriori informazioni, vedere la sezione relativa alla **semantica di spostamento** del [dichiaratore di riferimento Rvalue: & &](../../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)
