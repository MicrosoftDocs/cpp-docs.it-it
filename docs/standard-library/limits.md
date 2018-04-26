---
title: '&lt;limits&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- limits/std::<limits>
- <limits>
dev_langs:
- C++
helpviewer_keywords:
- limits header
ms.assetid: e07d6379-5b00-4a3d-a789-40d41538b59e
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 84437f53d8685c842e102fac3da7b062058bb20e
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ltlimitsgt"></a>&lt;limits&gt;

Definisce la classe modello `numeric_limits` e due enumerazioni relative all'arrotondamento e alle rappresentazioni a virgola mobile.

## <a name="syntax"></a>Sintassi

```cpp
#include <limits>

```

## <a name="remarks"></a>Note

Le specializzazioni esplicite della classe `numeric_limits` descrivono molte proprietà dei tipi fondamentali, inclusi i tipi di carattere, integer e a virgola mobile e `bool`, che sono definite dall'implementazione anziché dalle regole del linguaggio C++. Le proprietà descritte in \<limits> includono accuratezza, rappresentazioni con dimensioni minime e massime, arrotondamento e segnalazione degli errori di tipo.

### <a name="enumerations"></a>Enumerazioni

|||
|-|-|
|[float_denorm_style](../standard-library/limits-enums.md#float_denorm_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per la rappresentazione di un valore a virgola mobile denormalizzato, ovvero troppo piccolo per essere rappresentato come valore normalizzato.|
|[float_round_style](../standard-library/limits-enums.md#float_round_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe numeric_limits](../standard-library/numeric-limits-class.md)|La classe modello descrive le proprietà aritmetiche dei tipi numerici predefiniti.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
