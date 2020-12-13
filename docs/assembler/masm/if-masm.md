---
description: 'Ulteriori informazioni su: IF'
title: IF (MASM)
ms.date: 12/17/2019
helpviewer_keywords:
- IF directive
ms.assetid: 82e43712-4f0c-4bf6-90ce-0663e81af707
ms.openlocfilehash: 09b4bd09155ef848ad165b4e8b0d3a093ade0008
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97130209"
---
# <a name="if"></a>IF

Concede l'assembly di *ifstatements* se *expression1* è true (diverso da zero) o *elseifstatements* se *expression1* è false (0) e *expression2* è true.

## <a name="syntax"></a>Sintassi

> **Se** *expression1*\
> *istruzioni If*\
> ⟦**ElseIf** *expression2*\
> *ElseIf-statements*⟧ \
> ⟦**Else**\
> *else-istruzioni*⟧ \
> **ENDIF**

## <a name="remarks"></a>Commenti

Le direttive seguenti possono essere sostituite da [ElseIf](elseif-masm.md): **ELSEIFB**, **ELSEIFDEF (**, **ELSEIFDIF**, **ELSEIFDIFI**, **ELSEIFE**, **ELSEIFIDN**, **ELSEIFIDNI**, **ELSEIFNB e** **ELSEIFNDEF (**. Facoltativamente, assembla *Else-Statements* se l'espressione precedente è false. Si noti che le espressioni vengono valutate in fase di assembly.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
