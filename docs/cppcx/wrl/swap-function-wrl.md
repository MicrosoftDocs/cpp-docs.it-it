---
description: 'Altre informazioni su: funzione swap (WRL)'
title: Funzione swap (WRL)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::Swap
ms.assetid: ed134a08-ceb7-4279-aa02-a183c3a426ea
ms.openlocfilehash: e81c9e332c6c6a69f475f53132689dc99fffdfee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186194"
---
# <a name="swap-function-wrl"></a>Funzione swap (WRL)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
WRL_NOTHROW inline void Swap(
   _Inout_ T& left,
   _Inout_ T& right
);
```

### <a name="parameters"></a>Parametri

*sinistra*<br/>
Primo argomento.

*Ok*<br/>
Secondo argomento.

## <a name="return-value"></a>Valore restituito

## <a name="remarks"></a>Commenti

Scambia i valori dei due argomenti specificati.

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL::D etails](microsoft-wrl-details-namespace.md)
