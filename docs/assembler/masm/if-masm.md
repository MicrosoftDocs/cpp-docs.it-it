---
title: IF (MASM)
ms.date: 08/30/2018
f1_keywords:
- if
helpviewer_keywords:
- IF directive
ms.assetid: 82e43712-4f0c-4bf6-90ce-0663e81af707
ms.openlocfilehash: 2b91698640e028bf91d822c12b85ded651a04d8d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50555786"
---
# <a name="if-masm"></a>IF (MASM)

Concede l'assembly del *ifstatements* se *expression1* è true (diverso da zero) oppure *elseifstatements* se *expression1* è false (0) e *expression2* è true.

## <a name="syntax"></a>Sintassi

> Se *expression1*<br/>
> *ifstatements*<br/>
> [[ELSEIF *expression2*<br/>
> *elseifstatements*]]<br/>
> [[ELSE<br/>
> *parametro elsestatements*]]<br/>
> ENDIF

## <a name="remarks"></a>Note

È possibile sostituire le direttive seguenti per [ELSEIF](../../assembler/masm/elseif-masm.md): **ELSEIFB**, **ELSEIFDEF**, **ELSEIFDIF**, **ELSEIFDIFI** , **ELSEIFE**, **ELSEIFIDN**, **ELSEIFIDNI**, **ELSEIFNB**, e **ELSEIFNDEF** . Facoltativamente, consente di assemblare *parametro elsestatements* se l'espressione precedente è false. Si noti che le espressioni vengono valutate in fase di assembly.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>