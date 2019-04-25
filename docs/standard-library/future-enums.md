---
title: Enumerazioni &lt;future&gt;
ms.date: 11/04/2016
f1_keywords:
- future/std::future_errc
- future/std::future_status
- future/std::launch
ms.assetid: 8c675645-db47-4cab-bc0e-7b87f8a302df
ms.openlocfilehash: 1e487128d4af5c6f9b3f29f5c71e52f616e1807a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62159522"
---
# <a name="ltfuturegt-enums"></a>Enumerazioni &lt;future&gt;

||||
|-|-|-|
|[future_errc](#future_errc)|[future_status](#future_status)|[launch](#launch)|

## Enumerazione <a name="future_errc"></a>  future_errc

Fornisce i nomi simbolici per tutti gli errori segnalati dalla classe [future_error](../standard-library/future-error-class.md).

```cpp
class future_errc {
   broken_promise,
   future_already_retrieved,
   promise_already_satisfied,
   no_state
   };
```

## Enumerazione <a name="future_status"></a>  future_status

Fornisce i nomi simbolici per i motivi che una funzione di attesa temporizzata può restituire.

```cpp
enum future_status{
    ready,
    timeout,
    deferred
};
```

## Enumerazione <a name="launch"></a>  launch

Rappresenta un tipo di maschera di bit che descrive le modalità possibili per la funzione modello [async](../standard-library/future-functions.md#async).

```cpp
class launch{
   async,
   deferred
   };
```

## <a name="see-also"></a>Vedere anche

[\<future>](../standard-library/future.md)<br/>
