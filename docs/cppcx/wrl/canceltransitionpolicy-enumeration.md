---
title: Enumerazione CancelTransitionPolicy
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::CancelTransitionPolicy::TransitionFromCanceled
- module/Microsoft::WRL::CancelTransitionPolicy::RemainCanceled
- module/Microsoft::WRL::CancelTransitionPolicy
helpviewer_keywords:
- CancelTransitionPolicy Enumeration
ms.assetid: 5de49f7d-e5e3-43e9-bbca-666caf226cef
ms.openlocfilehash: cb07f28794d466dde08719057a21ebf62f989e85
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59038054"
---
# <a name="canceltransitionpolicy-enumeration"></a>Enumerazione CancelTransitionPolicy

Indica come operazione asincrona del tentativo di eseguire la transizione a uno stato terminale di completamento o errore di comportamento rispetto a uno stato annullato di richiesta del client.

## <a name="syntax"></a>Sintassi

```cpp
enum CancelTransitionPolicy;
```

## <a name="members"></a>Membri

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`RemainCanceled`|Se l'operazione asincrona è attualmente in uno stato annullato di richiesta del client, ciò indica che viene mantenuta nello stato annullato anziché in fase di transizione a uno stato di errore o il terminal completata.|
|`TransitionFromCanceled`|Se l'operazione asincrona è attualmente in uno stato annullato di richiesta del client, ciò indica che lo stato deve eseguire la transizione da quello stato annullato per lo stato terminale di completamento o errore, come determinato dalla chiamata che usa questo flag.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)