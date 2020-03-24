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
ms.openlocfilehash: e820b3fffb4a00e95a1210a5c0beb3229c6d1657
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214123"
---
# <a name="canceltransitionpolicy-enumeration"></a>Enumerazione CancelTransitionPolicy

Indica il comportamento di un tentativo di transizione di un'operazione asincrona a uno stato terminale di completato o errore rispetto a uno stato di annullamento richiesto dal client.

## <a name="syntax"></a>Sintassi

```cpp
enum CancelTransitionPolicy;
```

## <a name="members"></a>Members

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`RemainCanceled`|Se l'operazione asincrona si trova attualmente in uno stato di annullamento richiesto dal client, significa che resterà nello stato annullato anziché passare a uno stato di completamento o di errore del terminale.|
|`TransitionFromCanceled`|Se l'operazione asincrona si trova attualmente in uno stato di annullamento richiesto dal client, indica che lo stato deve passare dallo stato annullato allo stato finale di completato o errore come determinato dalla chiamata che utilizza questo flag.|

## <a name="requirements"></a>Requisiti

**Intestazione:** Async. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL](microsoft-wrl-namespace.md)
