---
title: Supporto a virgola mobile per il codice precedente (Visual C++) | Microsoft Docs
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
ms.openlocfilehash: 7285325bf1a934afcef337da318d019ec6fe375c
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45706810"
---
# <a name="floating-point-support-for-older-code-visual-c"></a>Supporto a virgola mobile per il codice precedente (Visual C++)

I registri MMX e stack a virgola mobile (MM0-MM7/ST0-ST7) vengono mantenuti tra i cambi di contesto.  Non vi è alcuna convenzione di chiamata esplicita per questi registri.  L'uso di questi registri è proibita nel codice in modalità kernel.

## <a name="see-also"></a>Vedere anche

[Convenzione di chiamata](../build/calling-convention.md)