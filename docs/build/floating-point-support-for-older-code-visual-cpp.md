---
title: Supporto a virgola mobile per il codice precedente (Visual C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a2a26b96-7bc2-418a-981a-51aa1a0294a2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cd7cbf955fbf795d06d9cd2448d0736dc435f3b5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="floating-point-support-for-older-code-visual-c"></a>Supporto a virgola mobile per il codice precedente (Visual C++)
I registri MMX e stack a virgola mobile (MM0-MM7/ST0-ST7) vengono mantenuti per commutazioni di contesto.  Non vi è alcuna convenzione di chiamata esplicita per questi registri.  L'utilizzo di questi registri è rigorosamente vietata nel codice in modalità kernel.  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)