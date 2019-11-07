---
title: .IF
ms.date: 11/05/2019
f1_keywords:
- .IF
helpviewer_keywords:
- .IF directive
ms.assetid: dccc7615-8fc7-4829-9f39-0ee405f6c1e3
ms.openlocfilehash: 83c9ff588e2fe273e24e1d0b1c16517c5eee3365
ms.sourcegitcommit: 45f1d889df633f0f7e4a8e813b46fa73c9858b81
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2019
ms.locfileid: "73703780"
---
# <a name="if-32-bit-masm"></a>. IF (MASM a 32 bit)

Genera codice che verifica `condition1` (ad esempio, AX > 7) ed esegue le *istruzioni* se tale condizione è true. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> . Se condition1<br/>
> istruzioni<br/>
> [[. Condizione2 ELSEIF<br/>
> istruzioni]]<br/>
> [[. ALTRO<br/>
> istruzioni]]<br/>
> .ENDIF

## <a name="remarks"></a>Note

Se un oggetto [. ALTRIMENTI](../../assembler/masm/dot-else.md) segue, le istruzioni vengono eseguite se la condizione originale è false. Si noti che le condizioni vengono valutate in fase di esecuzione.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>