---
description: 'Altre informazioni su: Move Function'
title: Move (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::Move
helpviewer_keywords:
- Move function
ms.assetid: c9525426-97e8-4d8c-9877-b689d8a0dc67
ms.openlocfilehash: eada3cac16abc445a9c48d01240f4ccf46d78372
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97209308"
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

*ARG*<br/>
Argomento da spostare.

## <a name="return-value"></a>Valore restituito

I parametri *arg* dopo i riferimenti o i tratti di riferimento rvalue, se presenti, sono stati rimossi.

## <a name="remarks"></a>Commenti

Sposta l'argomento specificato da una posizione a un'altra.

Per ulteriori informazioni, vedere la sezione relativa alla **semantica di spostamento** del [dichiaratore di riferimento rvalue:  &&](../../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL::D etails](microsoft-wrl-details-namespace.md)
