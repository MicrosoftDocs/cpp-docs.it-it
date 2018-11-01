---
title: Supporto a virgola mobile per il codice precedente (Visual C++)
ms.date: 11/04/2016
ms.assetid: a2a26b96-7bc2-418a-981a-51aa1a0294a2
ms.openlocfilehash: 2340a4d136dee3438a47ce06793ed9274035250d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50509643"
---
# <a name="floating-point-support-for-older-code-visual-c"></a>Supporto a virgola mobile per il codice precedente (Visual C++)

I registri MMX e stack a virgola mobile (MM0-MM7/ST0-ST7) vengono mantenuti tra i cambi di contesto.  Non vi è alcuna convenzione di chiamata esplicita per questi registri.  L'uso di questi registri è proibita nel codice in modalità kernel.

## <a name="see-also"></a>Vedere anche

[Convenzione di chiamata](../build/calling-convention.md)