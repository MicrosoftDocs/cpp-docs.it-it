---
description: 'Altre informazioni su: manipolazione del buffer'
title: Modifica del buffer
ms.date: 04/04/2018
helpviewer_keywords:
- buffers, manipulation routines
- buffers
ms.assetid: 164f4860-ce66-412c-8291-396fbd70f03e
ms.openlocfilehash: 8389faf1e2e3de44507784755c7b4831952b9ffe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97221735"
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

## <a name="see-also"></a>Vedi anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
