---
title: EXTERNDEF
ms.date: 08/30/2018
f1_keywords:
- EXTERNDEF
helpviewer_keywords:
- EXTERNDEF directive
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
ms.openlocfilehash: 23d34af470e825a8535de8cb28645a7bfb4c4d1b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50619765"
---
# <a name="externdef"></a>EXTERNDEF

Definisce uno o più variabili esterne, le etichette o simboli denominati *name* il cui tipo è `type`.

## <a name="syntax"></a>Sintassi

> : Tipo di nome EXTERNDEF [[langtype]] [[, [[langtype]]. nome: type]]...

## <a name="remarks"></a>Note

Se *name* viene definito nel modulo, viene considerato [pubblico](../../assembler/masm/public-masm.md). Se *name* viene fatto riferimento nel modulo, viene considerato [EXTERN](../../assembler/masm/extern-masm.md). Se *nome* non è viene fatto riferimento, viene ignorato. Il `type` può essere [ABS](../../assembler/masm/operator-abs.md), che importa *nome* come costante. In genere usato nel file di inclusione.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>