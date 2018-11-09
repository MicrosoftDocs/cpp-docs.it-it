---
title: Allocazione memoria azzerata
ms.date: 11/04/2016
helpviewer_keywords:
- memory allocation, zero memory
- zero memory
ms.assetid: 768f2ab9-83a1-4887-8eb5-c094c18489a8
ms.openlocfilehash: c7d5f307a38fff938c94cf2e1660cec99262a10a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50447307"
---
# <a name="allocating-zero-memory"></a>Allocazione memoria azzerata

**ANSI 4.10.3** Comportamento della funzione `calloc`, `malloc` o `realloc` se la dimensione richiesta è zero

Le funzioni `calloc`, `malloc` e `realloc` accettano lo zero come argomento. Non è stata allocata alcuna memoria, ma viene restituito un puntatore valido e il blocco di memoria può essere modificato in un secondo momento da realloc.

## <a name="see-also"></a>Vedere anche

[Funzioni della libreria](../c-language/library-functions.md)