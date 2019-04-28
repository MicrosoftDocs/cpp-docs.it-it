---
title: .IF
ms.date: 08/30/2018
f1_keywords:
- .IF
helpviewer_keywords:
- .IF directive
ms.assetid: dccc7615-8fc7-4829-9f39-0ee405f6c1e3
ms.openlocfilehash: cf9c594d843c937dd2191bee2a7cebadbc615c82
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62185267"
---
# <a name="if"></a>.IF

Genera il codice che consente di verificare `condition1` (ad esempio, AX > 7) e viene eseguita la *istruzioni* se tale condizione è true.

## <a name="syntax"></a>Sintassi

> . Se condition1<br/>
> istruzioni<br/>
> [[. ELSEIF condizione2<br/>
> istruzioni]]<br/>
> [[.ELSE<br/>
> istruzioni]]<br/>
> .ENDIF

## <a name="remarks"></a>Note

Se un [. ELSE](../../assembler/masm/dot-else.md) indicato di seguito, le relative istruzioni viene eseguite se la condizione originale è false. Si noti che le condizioni vengono valutate in fase di esecuzione.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>