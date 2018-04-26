---
title: Struct steady_clock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- chrono/std::chrono::steady_clock
dev_langs:
- C++
ms.assetid: 970d12ec-fc80-4391-a2f7-b57b2aec668d
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ba4ebbe6db12fef05bfabd9970d354a7726fcd7d
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="steadyclock-struct"></a>Struct steady_clock

Rappresenta un clock `steady`.

## <a name="syntax"></a>Sintassi

```cpp
struct steady_clock;
```

## <a name="remarks"></a>Note

In Windows, steady_clock esegue il wrapping della funzione QueryPerformanceCounter.

Un clock è *monotonico* se il valore restituito da una prima chiamata a `now()` è sempre minore o uguale al valore restituito da una chiamata successiva a `now()`.

Un clock è *costante* se è *monotonico* e se il tempo tra i cicli macchina è costante.

High_resolution_clock è un typedef per steady_clock.

## <a name="public-functions"></a>Funzioni pubbliche

|Funzione|Descrizione|
|--------------|-----------------|
|now|Restituisce l'ora corrente come valore time_point.|

## <a name="public-constants"></a>Costanti pubbliche

|nome|Descrizione|
|----------|-----------------|
|`system_clock::is_steady`|Contiene `true`. Un oggetto `steady_clock` è *costante*.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<chrono >

**Spazio dei nomi:** std::chrono

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<chrono>](../standard-library/chrono.md)<br/>
[Struct system_clock](../standard-library/system-clock-structure.md)<br/>
