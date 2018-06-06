---
title: Struct steady_clock | Microsoft Docs
ms.custom: ''
ms.date: 05/22/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- chrono/std::chrono::steady_clock
dev_langs:
- C++
ms.assetid: 970d12ec-fc80-4391-a2f7-b57b2aec668d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5445379597c4fefcd657303a05c33b6509d54d2e
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34569898"
---
# <a name="steadyclock-struct"></a>Struct steady_clock

Rappresenta un *costante* orologio.

## <a name="syntax"></a>Sintassi

```cpp
struct steady_clock;
```

## <a name="remarks"></a>Note

In Windows, `steady_clock` esegue il wrapping di `QueryPerformanceCounter` (funzione).

Un clock è *monotonico* se il valore restituito da una prima chiamata a `now` è sempre minore o uguale al valore restituito da una chiamata successiva a `now`. Un clock è *costante* se è *monotonico* e se il tempo tra i cicli macchina è costante.

`high_resolution_clock` è un typedef per `steady_clock`.

### <a name="public-typedefs"></a>TypeDef pubblici

|nome|Descrizione|
|----------|-----------------|
|`steady_clock::duration`|Un sinonimo `nanoseconds`, definito in \<chrono >.|
|`steady_clock::period`|Un sinonimo `nano`, definito in \<percentuale >.|
|`steady_clock::rep`|Un sinonimo **lungo** **long**, il tipo che viene utilizzato per rappresentare il numero di tick del clock in istanze di contenuti di `duration`.|
|`steady_clock::time_point`|Sinonimo di `chrono::time_point<steady_clock>`.|

## <a name="public-functions"></a>Funzioni pubbliche

|Funzione|Descrizione|
|--------------|-----------------|
|`now`|Restituisce l'ora corrente come una `time_point` valore.|

## <a name="public-constants"></a>Costanti pubbliche

|nome|Descrizione|
|----------|-----------------|
|`steady_clock::is_steady`|Contiene `true`. Un oggetto `steady_clock` è *costante*.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<chrono >

**Spazio dei nomi:** std::chrono

## <a name="see-also"></a>Vedere anche

- [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
- [\<chrono>](../standard-library/chrono.md)
- [Struct system_clock](../standard-library/system-clock-structure.md)
