---
title: Cast di Integer a valori a virgola mobile
ms.date: 11/04/2016
helpviewer_keywords:
- integers, casting to floating-point values
ms.assetid: 81fd5b7d-15eb-4c11-a8c8-e1621ff54fd3
ms.openlocfilehash: 8fa013668278fae82bcb2bb9eb1f2aec3cb61581
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56152872"
---
# <a name="casting-integers-to-floating-point-values"></a>Cast di Integer a valori a virgola mobile

**ANSI 3.2.1.3** Direzione del troncamento quando un numero integrale viene convertito in un numero a virgola mobile non in grado di rappresentare esattamente il valore originale

Quando viene eseguito il cast di un numero intero in un valore a virgola mobile non in grado di rappresentare esattamente tale valore, il valore viene arrotondato per eccessi o per difetto al valore appropriato più vicino.

Se ad esempio si esegue il cast di un valore di tipo **unsigned long** (a 32 bit di precisione) in un tipo **float**, la cui mantissa è a 23 bit di precisione, il numero viene arrotondato al multiplo più vicino di 256. I valori **long** da 4.294.966.913 a 4.294.967.167 vengono tutti arrotondati al valore **float** 4.294.967.040.

## <a name="see-also"></a>Vedere anche

[Matematica a virgola mobile](../c-language/floating-point-math.md)
