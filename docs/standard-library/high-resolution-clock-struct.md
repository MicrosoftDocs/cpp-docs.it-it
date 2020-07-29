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
ms.openlocfilehash: 850d5e3a5434aa44e23a7f74aeb9c306ab6c0a8e
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87203208"
---
# <a name="steady_clock-struct"></a>Struct steady_clock

Rappresenta un' *high_resolution* Clock.

## <a name="syntax"></a>Sintassi

```cpp
class high_resolution_clock
```

## <a name="members"></a>Membri

### <a name="typedefs"></a>Typedef

|Nome|Descrizione|
|----------|-----------------|
|`duration`|Sinonimo di `nanoseconds` , definito in \<chrono> .|
|`period`|Sinonimo di `nano` , definito in \<ratio> .|
|`rep`|Sinonimo di **`long long`** , il tipo utilizzato per rappresentare il numero di cicli di clock nella creazione di un'istanza contenuta di `duration` .|
|`time_point`|Sinonimo di `chrono::time_point<high_resolution_clock>`.|

## <a name="functions"></a>Funzioni

|||
|-|-|
|`now`|Restituisce l'ora corrente come `time_point` valore.|

## <a name="constants"></a>Costanti

|Nome|Descrizione|
|----------|-----------------|
|`is_steady`|Include **`true`** . Un oggetto `high_resolution_clock` è *costante*.|
