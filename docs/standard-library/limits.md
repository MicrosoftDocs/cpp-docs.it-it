---
title: '&lt;limits&gt;'
ms.date: 11/04/2016
f1_keywords:
- limits/std::<limits>
- <limits>
helpviewer_keywords:
- limits header
ms.assetid: e07d6379-5b00-4a3d-a789-40d41538b59e
ms.openlocfilehash: 3ad740975cfff4f65f9e1c800a709cfaca3367db
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72687814"
---
# <a name="ltlimitsgt"></a>&lt;limits&gt;

Definisce il modello di classe `numeric_limits` e due enumerazioni riguardanti le rappresentazioni a virgola mobile e l'arrotondamento.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<limits>

**Spazio dei nomi:** std

## <a name="remarks"></a>Note

Le specializzazioni esplicite della classe `numeric_limits` descrivono molte proprietà dei tipi fondamentali, inclusi i tipi di carattere, Integer e a virgola mobile e **bool** che sono definiti dall'implementazione anziché corretti dalle regole del C++ linguaggio. Le proprietà descritte in \<limits> includono accuratezza, rappresentazioni con dimensioni minime e massime, arrotondamento e segnalazione degli errori di tipo.

## <a name="members"></a>Members

### <a name="enumerations"></a>Enumerazioni

|||
|-|-|
|[float_denorm_style](../standard-library/limits-enums.md#float_denorm_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per la rappresentazione di un valore a virgola mobile denormalizzato, ovvero troppo piccolo per essere rappresentato come valore normalizzato.|
|[float_round_style](../standard-library/limits-enums.md#float_round_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.|

### <a name="classes"></a>Classi

|||
|-|-|
|[Classe numeric_limits](../standard-library/numeric-limits-class.md)|Il modello di classe descrive le proprietà aritmetiche dei tipi numerici incorporati.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
