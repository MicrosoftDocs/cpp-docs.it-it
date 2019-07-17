---
title: '&lt;limits&gt;'
ms.date: 11/04/2016
f1_keywords:
- limits/std::<limits>
- <limits>
helpviewer_keywords:
- limits header
ms.assetid: e07d6379-5b00-4a3d-a789-40d41538b59e
ms.openlocfilehash: e23c47b3eaecec92e462af7b2cc47627c5bad86a
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68245323"
---
# <a name="ltlimitsgt"></a>&lt;limits&gt;

Definisce la classe modello `numeric_limits` e due enumerazioni relative all'arrotondamento e alle rappresentazioni a virgola mobile.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<limits>

**Spazio dei nomi:** std

## <a name="remarks"></a>Note

Le specializzazioni esplicite del `numeric_limits` classe descrivono molte proprietà dei tipi fondamentali, tra cui il carattere, integer e tipi a virgola mobile e **bool** che si trovano implementazione definita anziché dalle le regole del linguaggio C++. Le proprietà descritte in \<limits> includono accuratezza, rappresentazioni con dimensioni minime e massime, arrotondamento e segnalazione degli errori di tipo.

## <a name="members"></a>Members

### <a name="enumerations"></a>Enumerazioni

|||
|-|-|
|[float_denorm_style](../standard-library/limits-enums.md#float_denorm_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per la rappresentazione di un valore a virgola mobile denormalizzato, ovvero troppo piccolo per essere rappresentato come valore normalizzato.|
|[float_round_style](../standard-library/limits-enums.md#float_round_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.|

### <a name="classes"></a>Classi

|||
|-|-|
|[Classe numeric_limits](../standard-library/numeric-limits-class.md)|La classe modello descrive le proprietà aritmetiche dei tipi numerici predefiniti.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
