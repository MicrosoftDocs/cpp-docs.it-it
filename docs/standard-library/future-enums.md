---
title: Enumerazioni &lt;future&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- future/std::future_errc
- future/std::future_status
- future/std::launch
ms.assetid: 8c675645-db47-4cab-bc0e-7b87f8a302df
ms.openlocfilehash: 6e228eb538a0d281dff8066390b0c6dd2e7ea4d8
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33843847"
---
# <a name="ltfuturegt-enums"></a>Enumerazioni &lt;future&gt;

||||
|-|-|-|
|[future_errc](#future_errc)|[future_status](#future_status)|[Avvio veloce](#launch)|

## Enumerazione <a name="future_errc"></a>  future_errc

Fornisce i nomi simbolici per tutti gli errori segnalati dalla classe [future_error](../standard-library/future-error-class.md).

class future_errc { broken_promise, future_already_retrieved, promise_already_satisfied, no_state };

## Enumerazione <a name="future_status"></a>  future_status

Fornisce i nomi simbolici per i motivi che una funzione di attesa temporizzata può restituire.

```cpp
enum future_status{    ready,
    timeout,
 deferred};
```

## Enumerazione <a name="launch"></a>  launch

Rappresenta un tipo di maschera di bit che descrive le modalità possibili per la funzione modello [async](../standard-library/future-functions.md#async).

class launch{ async, deferred };

## <a name="see-also"></a>Vedere anche

[\<future>](../standard-library/future.md)<br/>
