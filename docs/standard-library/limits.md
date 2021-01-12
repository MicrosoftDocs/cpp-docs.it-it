---
description: 'Altre informazioni su: &lt; limiti&gt;'
title: '&lt;limits&gt;'
ms.date: 11/04/2016
f1_keywords:
- <limits>
helpviewer_keywords:
- limits header
ms.assetid: e07d6379-5b00-4a3d-a789-40d41538b59e
ms.openlocfilehash: 23601b4b7f7ea06071a6b1f5fbd87ce0a0babce3
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126390"
---
# <a name="ltlimitsgt"></a>&lt;limits&gt;

Definisce il modello `numeric_limits` di classe e due enumerazioni riguardanti le rappresentazioni a virgola mobile e l'arrotondamento.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<limits>

**Spazio dei nomi:** std

## <a name="remarks"></a>Osservazioni

Le specializzazioni esplicite della `numeric_limits` classe descrivono molte proprietà dei tipi fondamentali, inclusi i tipi di carattere, Integer e a virgola mobile e **`bool`** che sono definite dall'implementazione anziché corrette dalle regole del linguaggio C++. Le proprietà descritte in \<limits> includono accuratezza, rappresentazioni con dimensioni minime e massime, arrotondamento e segnalazione degli errori di tipo.

## <a name="members"></a>Membri

### <a name="enumerations"></a>Enumerazioni

|Nome|Descrizione|
|-|-|
|[float_denorm_style](../standard-library/limits-enums.md#float_denorm_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per la rappresentazione di un valore a virgola mobile denormalizzato, ovvero troppo piccolo per essere rappresentato come valore normalizzato.|
|[float_round_style](../standard-library/limits-enums.md#float_round_style)|L'enumerazione descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.|

### <a name="classes"></a>Classi

|Nome|Descrizione|
|-|-|
|[Classe numeric_limits](../standard-library/numeric-limits-class.md)|Il modello di classe descrive le proprietà aritmetiche dei tipi numerici incorporati.|

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
