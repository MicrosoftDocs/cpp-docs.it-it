---
title: Registri salvati dal chiamante-chiamato
ms.date: 11/04/2016
ms.assetid: 0533bd4b-d6bb-4ce1-8201-495e16870cbb
ms.openlocfilehash: f34fbfff8e6c61b5d568c073f6b7da2a12e34535
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50654701"
---
# <a name="callercallee-saved-registers"></a>Registri salvati dal chiamante o dal chiamato

I registri RAX, ovvero RCX, RDX, R8, R9, R10, R11 considerati volatile e deve essere considerato eliminato definitivamente on le chiamate di funzione (a meno che in caso contrario, la sicurezza-comprovabili dall'analisi, ad esempio Ottimizzazione intero programma).

I registri RBX RBP, RDI, RSI, RSP, R12, R13, R14 e R15 sono considerati non volatile e devono essere salvati e ripristinato da una funzione che li Usa.

## <a name="see-also"></a>Vedere anche

[Convenzione di chiamata](../build/calling-convention.md)