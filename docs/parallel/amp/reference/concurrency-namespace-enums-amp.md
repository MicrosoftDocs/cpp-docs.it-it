---
title: Enumerazioni dello spazio dei nomi Concurrency (AMP) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- amp/Concurrency::access_type
- amp/Concurrency::queuing_mode
dev_langs:
- C++
ms.assetid: 4c87457e-184f-4992-81ab-ca75e7d524ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d4f842b799a81179fa1a612e652aae391ca3375d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46435662"
---
# <a name="concurrency-namespace-enums-amp"></a>Enumerazioni dello spazio dei nomi Concurrency (AMP)

|||
|-|-|
|[Enumerazione access_type](#access_type)|[Enumerazione queuing_mode](#queuing_mode)|

##  <a name="access_type"></a>  Enumerazione access_type

Tipo di enumerazione utilizzato per indicare i vari tipi di accesso ai dati.

```
enum access_type;
```
### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`access_type_auto`|Scegliere automaticamente il migliore `access_type` all'acceleratore.|
|`access_type_none`|Dedicato. L'allocazione è accessibile solo sul tasto di scelta rapida e non sulla CPU.|
|`access_type_read`|Condiviso. L'allocazione è accessibile nell'acceleratore e viene letta sulla CPU.|
|`access_type_read_write`|Condiviso. L'allocazione è accessibile nell'acceleratore e viene scritta sulla CPU.|
|`access_type_write`|Condiviso. L'allocazione è accessibile nel tasto di scelta rapida ed è sia letta che scritta sulla CPU.|

##  <a name="queuing_mode"></a>  Enumerazione queuing_mode

Specifica la modalità di accodamento sono supportate dall'acceleratore.

```
enum queuing_mode;
```
### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`queuing_mode_immediate`|Una modalità di accodamento che specifica che tutti i comandi, ad esempio, [parallel_for_each (funzione) (C++ AMP)](concurrency-namespace-functions-amp.md#parallel_for_each), vengono inviati al dispositivo acceleratore corrispondente non appena ritornano al chiamante.|
|`queuing_mode_automatic`|Una modalità di accodamento che specifica che i comandi sono messi in una coda di comandi corrispondente per il [accelerator_view](accelerator-view-class.md) oggetto. I comandi vengono inviati al dispositivo quando [accelerator_view:: Flush](accelerator-view-class.md#flush) viene chiamato.|

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
