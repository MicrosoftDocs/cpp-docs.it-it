---
title: Valori
ms.date: 11/04/2016
ms.assetid: 24003f89-220f-4f93-be7a-b650c26157d7
ms.openlocfilehash: e0a200bfea8c0a0a06f064b280dad320da25550c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50534056"
---
# <a name="values"></a>Valori

**ANSI 3.1.2.5**   Rappresentazioni e set di valori dei vari tipi di numeri a virgola mobile

Il tipo **float** contiene 32 bit: 1 per il segno, 8 per l'esponente e 23 per la mantissa. L'intervallo è +/- 3,4E38 con almeno 7 cifre di precisione.

Il tipo **double** contiene 64 bit: 1 per il segno, 11 per l'esponente e 52 per la mantissa. L'intervallo è +/- 1,7E308 con almeno 15 cifre di precisione.

Il tipo **long double** contiene 80 bit: 1 per il segno, 15 per l'esponente e 64 per la mantissa. L'intervallo è +/- 1,2E4932 con almeno 19 cifre di precisione. Si noti che nel compilatore C di Microsoft la rappresentazione del tipo **long double** è identico al tipo **double**.

## <a name="see-also"></a>Vedere anche

[Matematica a virgola mobile](../c-language/floating-point-math.md)