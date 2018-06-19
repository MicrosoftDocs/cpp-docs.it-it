---
title: Modifica del buffer | Microsoft Docs
ms.custom: ''
ms.date: 04/04/2018
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.memory
dev_langs:
- C++
helpviewer_keywords:
- buffers, manipulation routines
- buffers
ms.assetid: 164f4860-ce66-412c-8291-396fbd70f03e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6a7544dfa80ce0c7481846383dd812ce30b78290
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32389088"
---
# <a name="buffer-manipulation"></a>Modifica del buffer

Usare queste routine per utilizzare le aree di memoria byte per byte.

## <a name="buffer-manipulation-routines"></a>Routine di modifica del buffer

|Routine|Usa|
|-------------|---------|
|[_memccpy](../c-runtime-library/reference/memccpy.md)|Copia i caratteri da un buffer a un altro finché non è stato copiato un carattere specifico o un numero specifico|
|[memchr, wmemchr](../c-runtime-library/reference/memchr-wmemchr.md)|Restituisce un puntatore alla prima occorrenza, all'interno di un numero definito di caratteri, di un carattere specificato nel buffer|
|[memcmp, wmemcmp](../c-runtime-library/reference/memcmp-wmemcmp.md)|Confronta un numero specificato di caratteri di due buffer|
|[memcpy, wmemcpy](../c-runtime-library/reference/memcpy-wmemcpy.md), [memcpy_s, wmemcpy_s](../c-runtime-library/reference/memcpy-s-wmemcpy-s.md)|Copia un numero specificato di caratteri da un buffer a un altro|
|[_memicmp, _memicmp_l](../c-runtime-library/reference/memicmp-memicmp-l.md)|Confronta un numero specificato di caratteri di due buffer senza fare distinzione tra maiuscole e minuscole|
|[memmove, wmemmove](../c-runtime-library/reference/memmove-wmemmove.md),[memmove_s, wmemmove_s](../c-runtime-library/reference/memmove-s-wmemmove-s.md)|Copia un numero specificato di caratteri da un buffer a un altro|
|[memset, wmemset](../c-runtime-library/reference/memset-wmemset.md)|Usa il carattere specificato per inizializzare un numero specificato di byte nel buffer|
|[_swab](../c-runtime-library/reference/swab.md)|Scambia byte di dati e li memorizza nella posizione specificata|

Quando l'area di origine e quella di destinazione si sovrappongono, solo **memmove** garantisce la copia completa e corretta dell'origine.

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
