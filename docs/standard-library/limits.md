---
description: 'Altre informazioni su: &lt; limiti&gt;'
title: '&lt;limits&gt;'
ms.date: 11/04/2016
f1_keywords:
- limits/std::<limits>
- <limits>
helpviewer_keywords:
- limits header
ms.assetid: e07d6379-5b00-4a3d-a789-40d41538b59e
ms.openlocfilehash: 5347a5035e3650a2685d3be9166b41506fc14b1f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97312839"
---
# <a name="ltlimitsgt"></a>&lt;limits&gt;

Definisce il modello `numeric_limits` di classe e due enumerazioni riguardanti le rappresentazioni a virgola mobile e l'arrotondamento.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<limits>

**Spazio dei nomi:** std

## <a name="remarks"></a>Commenti

Le specializzazioni esplicite della `numeric_limits` classe descrivono molte proprietà dei tipi fondamentali, inclusi i tipi di carattere, Integer e a virgola mobile e **`bool`** che sono definite dall'implementazione anziché corrette dalle regole del linguaggio C++. Le proprietà descritte in \<limits> includono accuratezza, rappresentazioni con dimensioni minime e massime, arrotondamento e segnalazione degli errori di tipo.

## <a name="members"></a>Membri

### <a name="enumerations"></a>Enumerazioni

|Nome|Description|
|-|-|
|[float_denorm_style](../standard-library/limits-enums.md#float_denorm_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per la rappresentazione di un valore a virgola mobile denormalizzato, ovvero troppo piccolo per essere rappresentato come valore normalizzato.|
|[float_round_style](../standard-library/limits-enums.md#float_round_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.|

### <a name="classes"></a>Classi

|Nome|Description|
|-|-|
|[Classe numeric_limits](../standard-library/numeric-limits-class.md)|Il modello di classe descrive le proprietà aritmetiche dei tipi numerici incorporati.|

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
