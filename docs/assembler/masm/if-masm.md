---
title: IF (MASM)
ms.date: 08/30/2018
f1_keywords:
- if
helpviewer_keywords:
- IF directive
ms.assetid: 82e43712-4f0c-4bf6-90ce-0663e81af707
ms.openlocfilehash: ed7b9e63bb19dcc16539dbdaaf1f6a7f16566b3c
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74397457"
---
# <a name="if-masm"></a>IF (MASM)

Concede l'assembly di *ifstatements* se *expression1* è true (diverso da zero) o *elseifstatements* se *expression1* è false (0) e *expression2* è true.

## <a name="syntax"></a>Sintassi

> **Se** *expression1*\
> *istruzioni If-* \
> ⟦**ElseIf** *expression2*\
> *ElseIf-statements*⟧ \
> ⟦**ELSE**\
> *else-istruzioni*⟧ \
> **ENDIF**

## <a name="remarks"></a>Note

Le direttive seguenti possono essere sostituite da [ElseIf](../../assembler/masm/elseif-masm.md): **ELSEIFB**, **ELSEIFDEF (** , **ELSEIFDIF**, **ELSEIFDIFI**, **ELSEIFE**, **ELSEIFIDN**, **ELSEIFIDNI**, **ELSEIFNB e** **ELSEIFNDEF (** . Facoltativamente, assembla *Else-Statements* se l'espressione precedente è false. Si noti che le espressioni vengono valutate in fase di assembly.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
