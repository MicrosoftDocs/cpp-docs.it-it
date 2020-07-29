---
title: Cast di Integer a valori a virgola mobile
ms.date: 11/04/2016
helpviewer_keywords:
- integers, casting to floating-point values
ms.assetid: 81fd5b7d-15eb-4c11-a8c8-e1621ff54fd3
ms.openlocfilehash: b3c65beee0cef4eb74d1bad3c03e5a9c11efae27
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227920"
---
# <a name="casting-integers-to-floating-point-values"></a>Cast di Integer a valori a virgola mobile

**ANSI 3.2.1.3** Direzione del troncamento quando un numero integrale viene convertito in un numero a virgola mobile non in grado di rappresentare esattamente il valore originale

Quando viene eseguito il cast di un numero intero in un valore a virgola mobile non in grado di rappresentare esattamente tale valore, il valore viene arrotondato per eccessi o per difetto al valore appropriato più vicino.

Se, ad esempio, si sta eseguendo il cast di un **`unsigned long`** (con 32 bit di precisione) a un oggetto **`float`** (il cui mantissa ha 23 bit di precisione), il numero viene arrotondato al multiplo più vicino di 256. I **`long`** valori da 4.294.966.913 a 4.294.967.167 vengono tutti arrotondati al **`float`** valore 4.294.967.040.

## <a name="see-also"></a>Vedere anche

[Matematica a virgola mobile](../c-language/floating-point-math.md)
