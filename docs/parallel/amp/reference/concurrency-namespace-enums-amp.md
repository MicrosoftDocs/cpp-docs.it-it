---
title: Enumerazioni dello spazio dei nomi Concurrency (AMP)
ms.date: 11/04/2016
f1_keywords:
- amp/Concurrency::access_type
- amp/Concurrency::queuing_mode
ms.assetid: 4c87457e-184f-4992-81ab-ca75e7d524ab
ms.openlocfilehash: 2467db27ad36dfcda31dfb5bb45067ada5470d07
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81376325"
---
# <a name="concurrency-namespace-enums-amp"></a>Enumerazioni dello spazio dei nomi Concurrency (AMP)

|||
|-|-|
|[Enumerazione access_type](#access_type)|[Enumerazione queuing_mode](#queuing_mode)|

## <a name="access_type-enumeration"></a><a name="access_type"></a>Enumerazione access_type

Tipo di enumerazione utilizzato per indicare i vari tipi di accesso ai dati.

```cpp
enum access_type;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`access_type_auto`|Scegli automaticamente `access_type` il migliore per l'acceleratore.|
|`access_type_none`|Dedicato. L'allocazione è accessibile solo sull'acceleratore e non sulla CPU.|
|`access_type_read`|condiviso. L'allocazione è accessibile sull'acceleratore ed è leggibile sulla CPU.|
|`access_type_read_write`|condiviso. L'allocazione è accessibile sull'acceleratore ed è scrivibile sulla CPU.|
|`access_type_write`|condiviso. L'allocazione è accessibile sull'acceleratore ed è leggibile e scrivibile sulla CPU.|

## <a name="queuing_mode-enumeration"></a><a name="queuing_mode"></a>Enumerazione queuing_mode

Specifica le modalità di accodamento supportate sull'acceleratore.

```cpp
enum queuing_mode;
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`queuing_mode_immediate`|Una modalità di accodamento che specifica che tutti i comandi, ad esempio [parallel_for_each Funzione (C-AMP),](concurrency-namespace-functions-amp.md#parallel_for_each)vengono inviati al dispositivo di scelta rapida corrispondente non appena ritornano al chiamante.|
|`queuing_mode_automatic`|Modalità di accodamento che specifica che i comandi devono essere accodati in una coda di comandi che corrisponde all'oggetto [accelerator_view.](accelerator-view-class.md) I comandi vengono inviati al dispositivo quando viene chiamato [accelerator_view::flush.Commands](accelerator-view-class.md#flush) are sent to the device when accelerator_view::flush is called.|

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (AMP)](concurrency-namespace-cpp-amp.md)
