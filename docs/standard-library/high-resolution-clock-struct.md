---
description: 'Altre informazioni su: high_resolution_clock struct'
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
ms.openlocfilehash: 2c5272413636e40dadf9201f684d32aaaa6708ac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324054"
---
# <a name="high_resolution_clock-struct"></a>struct high_resolution_clock

Rappresenta un' *high_resolution* Clock.

## <a name="syntax"></a>Sintassi

```cpp
class high_resolution_clock
```

## <a name="members"></a>Members

### <a name="typedefs"></a>Typedef

|Nome|Description|
|----------|-----------------|
|`duration`|Sinonimo di `nanoseconds` , definito in \<chrono> .|
|`period`|Sinonimo di `nano` , definito in \<ratio> .|
|`rep`|Sinonimo di **`long long`** , il tipo utilizzato per rappresentare il numero di cicli di clock nella creazione di un'istanza contenuta di `duration` .|
|`time_point`|Sinonimo di `chrono::time_point<high_resolution_clock>`.|

## <a name="functions"></a>Funzioni

|Nome|Description|
|-|-|
|`now`|Restituisce l'ora corrente come `time_point` valore.|

## <a name="constants"></a>Costanti

|Nome|Description|
|----------|-----------------|
|`is_steady`|Include **`true`** . Un oggetto `high_resolution_clock` è *costante*.|
