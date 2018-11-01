---
title: EXTERN (MASM)
ms.date: 08/30/2018
f1_keywords:
- extern
helpviewer_keywords:
- EXTERN directive
ms.assetid: 667d703d-3aaf-4139-a586-29bc5dab1aff
ms.openlocfilehash: 30d1b3ae7c6676aeb97b91c7627da859525b9ce1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50497357"
---
# <a name="extern-masm"></a>EXTERN (MASM)

Definisce uno o più variabili esterne, le etichette o simboli denominati *name* il cui tipo è *tipo*.

## <a name="syntax"></a>Sintassi

> EXTERN [[*langtype*]] *name* [[(*altid*)]]: *tipo* [[, [[*langtype*]]  *nome* [[(*altid*)]]: *tipo*]]...

## <a name="remarks"></a>Note

Il *tipo* può essere [ABS](../../assembler/masm/operator-abs.md), che importa *nome* come costante. Uguale allo [EXTRN](../../assembler/masm/extrn.md).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>