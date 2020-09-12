---
title: struct high_resolution_clock | Microsoft Docs
ms.custom: ''
ms.date: 05/22/2018
ms.technology: cpp-standard-libraries
ms.topic: reference
f1_keywords:
- chrono/std::chrono::high_resolution_clock
dev_langs:
- C++
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 341cae04742d72fdcc7483e74977bf413854df82
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90039651"
---
# <a name="high_resolution_clock-struct"></a>struct high_resolution_clock

Rappresenta un' *high_resolution* Clock.

## <a name="syntax"></a>Sintassi

```cpp
class high_resolution_clock
```

## <a name="members"></a>Members

### <a name="typedefs"></a>Typedef

|Nome|Descrizione|
|----------|-----------------|
|`duration`|Sinonimo di `nanoseconds` , definito in \<chrono> .|
|`period`|Sinonimo di `nano` , definito in \<ratio> .|
|`rep`|Sinonimo di **`long long`** , il tipo utilizzato per rappresentare il numero di cicli di clock nella creazione di un'istanza contenuta di `duration` .|
|`time_point`|Sinonimo di `chrono::time_point<high_resolution_clock>`.|

## <a name="functions"></a>Funzioni

|Nome|Descrizione|
|-|-|
|`now`|Restituisce l'ora corrente come `time_point` valore.|

## <a name="constants"></a>Costanti

|Nome|Descrizione|
|----------|-----------------|
|`is_steady`|Include **`true`** . Un oggetto `high_resolution_clock` è *costante*.|
