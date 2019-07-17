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
ms.openlocfilehash: 0b00b20e7cea4fa24b37ad33d5536eb9844e6953
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68269123"
---
# <a name="steadyclock-struct"></a>Struct steady_clock

Rappresenta un *high_resolution* orologio.

## <a name="syntax"></a>Sintassi

```cpp
class high_resolution_clock
```

## <a name="members"></a>Members

### <a name="typedefs"></a>Definizioni typedef

|Name|Descrizione|
|----------|-----------------|
|`duration`|Un sinonimo `nanoseconds`, definita in \<chrono >.|
|`period`|Un sinonimo `nano`, definita in \<ratio >.|
|`rep`|Un sinonimo **lungo** **long**, il tipo che viene usato per rappresentare il numero di tick del clock in istanze di contenuti di `duration`.|
|`time_point`|Sinonimo di `chrono::time_point<high_resolution_clock>`.|

## <a name="functions"></a>Funzioni

|||
|-|-|
|`now`|Restituisce l'ora corrente come un `time_point` valore.|

## <a name="constants"></a>Costanti

|Name|Descrizione|
|----------|-----------------|
|`is_steady`|Mantiene **true**. Un oggetto `high_resolution_clock` è *costante*.|
