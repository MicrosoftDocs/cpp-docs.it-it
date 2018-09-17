---
title: Registri salvati dal chiamante-chiamato | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 0533bd4b-d6bb-4ce1-8201-495e16870cbb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e8e877387dbb5b0be865e11017a3ac71a0c38faa
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45707655"
---
# <a name="callercallee-saved-registers"></a>Registri salvati dal chiamante o dal chiamato

I registri RAX, ovvero RCX, RDX, R8, R9, R10, R11 considerati volatile e deve essere considerato eliminato definitivamente on le chiamate di funzione (a meno che in caso contrario, la sicurezza-comprovabili dall'analisi, ad esempio Ottimizzazione intero programma).

I registri RBX RBP, RDI, RSI, RSP, R12, R13, R14 e R15 sono considerati non volatile e devono essere salvati e ripristinato da una funzione che li Usa.

## <a name="see-also"></a>Vedere anche

[Convenzione di chiamata](../build/calling-convention.md)