---
title: IF (MASM)
ms.date: 12/17/2019
f1_keywords:
- if
helpviewer_keywords:
- IF directive
ms.assetid: 82e43712-4f0c-4bf6-90ce-0663e81af707
ms.openlocfilehash: 38d366a3a41e7b08759594899cdcbb2cb84dfbfa
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75317292"
---
# <a name="if"></a>IF

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

Le direttive seguenti possono essere sostituite da [ElseIf](elseif-masm.md): **ELSEIFB**, **ELSEIFDEF (** , **ELSEIFDIF**, **ELSEIFDIFI**, **ELSEIFE**, **ELSEIFIDN**, **ELSEIFIDNI**, **ELSEIFNB e** **ELSEIFNDEF (** . Facoltativamente, assembla *Else-Statements* se l'espressione precedente è false. Si noti che le espressioni vengono valutate in fase di assembly.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
