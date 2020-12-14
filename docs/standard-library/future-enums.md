---
description: 'Altre informazioni su: &lt; &gt; enumerazioni future'
title: Enumerazioni &lt;future&gt;
ms.date: 11/04/2016
f1_keywords:
- future/std::future_errc
- future/std::future_status
- future/std::launch
ms.assetid: 8c675645-db47-4cab-bc0e-7b87f8a302df
ms.openlocfilehash: 473533d5d22ac5708af7a86cc58a57ac033545af
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97232135"
---
# <a name="ltfuturegt-enums"></a>Enumerazioni &lt;future&gt;

[future_errc](#future_errc)\
[future_status](#future_status)\
[avvio](#launch)

## <a name="future_errc-enumeration"></a><a name="future_errc"></a> Enumerazione future_errc

Fornisce i nomi simbolici per tutti gli errori segnalati dalla classe [future_error](../standard-library/future-error-class.md).

```cpp
class future_errc {
   broken_promise,
   future_already_retrieved,
   promise_already_satisfied,
   no_state
   };
```

## <a name="future_status-enumeration"></a><a name="future_status"></a> Enumerazione future_status

Fornisce i nomi simbolici per i motivi che una funzione di attesa temporizzata può restituire.

```cpp
enum future_status{
    ready,
    timeout,
    deferred
};
```

## <a name="launch-enumeration"></a><a name="launch"></a> Launch (enumerazione)

Rappresenta un tipo di maschera di bit che descrive le modalità possibili per la funzione modello [async](../standard-library/future-functions.md#async).

```cpp
class launch{
   async,
   deferred
   };
```

## <a name="see-also"></a>Vedere anche

[\<future>](../standard-library/future.md)
