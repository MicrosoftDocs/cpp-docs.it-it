---
description: 'Scopri di più su: enumerazioni dello spazio dei nomi Concurrency (AMP)'
title: Enumerazioni dello spazio dei nomi Concurrency (AMP)
ms.date: 11/04/2016
f1_keywords:
- amp/Concurrency::access_type
- amp/Concurrency::queuing_mode
ms.assetid: 4c87457e-184f-4992-81ab-ca75e7d524ab
ms.openlocfilehash: 60f4b325de47a600ee5a28f30ecc4a06fc2082a2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97284902"
---
# <a name="concurrency-namespace-enums-amp"></a>Enumerazioni dello spazio dei nomi Concurrency (AMP)

[Enumerazione access_type](#access_type)\
[Enumerazione queuing_mode](#queuing_mode)

## <a name="access_type-enumeration"></a><a name="access_type"></a> Enumerazione access_type

Tipo di enumerazione utilizzato per indicare i vari tipi di accesso ai dati.

```cpp
enum access_type;
```

### <a name="values"></a>Valori

|Nome|Description|
|----------|-----------------|
|`access_type_auto`|Scegliere automaticamente il migliore `access_type` per il tasto di scelta rapida.|
|`access_type_none`|Dedicato. L'allocazione è accessibile solo sul tasto di scelta rapida e non sulla CPU.|
|`access_type_read`|Condiviso. L'allocazione è accessibile sul tasto di scelta rapida ed è leggibile sulla CPU.|
|`access_type_read_write`|Condiviso. L'allocazione è accessibile sul tasto di scelta rapida ed è scrivibile sulla CPU.|
|`access_type_write`|Condiviso. L'allocazione è accessibile sul tasto di scelta rapida ed è leggibile e scrivibile sulla CPU.|

## <a name="queuing_mode-enumeration"></a><a name="queuing_mode"></a> Enumerazione queuing_mode

Specifica le modalità di accodamento supportate nel tasto di scelta rapida.

```cpp
enum queuing_mode;
```

### <a name="values"></a>Valori

|Nome|Description|
|----------|-----------------|
|`queuing_mode_immediate`|Modalità di accodamento che specifica che tutti i comandi, ad esempio [Parallel_for_each funzione (C++ amp)](concurrency-namespace-functions-amp.md#parallel_for_each), vengono inviati al dispositivo acceleratore corrispondente non appena vengono restituiti al chiamante.|
|`queuing_mode_automatic`|Modalità di accodamento che specifica che i comandi devono essere accodati in una coda di comandi che corrisponde all'oggetto [accelerator_view](accelerator-view-class.md) . Quando viene chiamato [accelerator_view:: Flush](accelerator-view-class.md#flush) , i comandi vengono inviati al dispositivo.|

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
