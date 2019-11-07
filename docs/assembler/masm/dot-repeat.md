---
title: .REPEAT
ms.date: 11/05/2019
f1_keywords:
- .REPEAT
helpviewer_keywords:
- .REPEAT directive
ms.assetid: cb8ad8c6-587b-42f9-a0ad-b5316a24918c
ms.openlocfilehash: 0533397c60c83f22b10c84ec72aa6eb65a71e4c0
ms.sourcegitcommit: 45f1d889df633f0f7e4a8e813b46fa73c9858b81
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2019
ms.locfileid: "73703573"
---
# <a name="repeat-32-bit-masm"></a>. REPEAT (MASM a 32 bit)

Genera codice che ripete l'esecuzione del blocco di *istruzioni* fino a quando `condition` diventa true. [. UNTILCXZ](../../assembler/masm/dot-untilcxz.md), che diventa true quando CX è zero, può essere sostituito da [. FINO a](../../assembler/masm/dot-until.md). Il `condition` è facoltativo con **. UNTILCXZ**. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> .REPEAT<br/>
> istruzioni<br/>
> . Condizione UNTIL

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>