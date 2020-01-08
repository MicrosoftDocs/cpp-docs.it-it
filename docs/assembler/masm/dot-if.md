---
title: .IF
ms.date: 11/05/2019
f1_keywords:
- .IF
helpviewer_keywords:
- .IF directive
ms.assetid: dccc7615-8fc7-4829-9f39-0ee405f6c1e3
ms.openlocfilehash: 6992ec8b151a83b3f9fa920997845c20caf0476d
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75317747"
---
# <a name="if-32-bit-masm"></a>. IF (MASM a 32 bit)

Genera codice che verifica *condition1* (ad esempio, ax > 7) ed esegue le *istruzioni* se tale condizione è true. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **. SE** *condition1*\
> \ di *istruzioni*
> ⟦ **. ELSEIF** *Condizione2*\
> ⟧ *istruzioni*\
> ⟦ **. ELSE**\
> ⟧ *istruzioni*\
> **.ENDIF**

## <a name="remarks"></a>Note

Se un oggetto [. ALTRIMENTI](dot-else.md) segue, le istruzioni vengono eseguite se la condizione originale è false. Si noti che le condizioni vengono valutate in fase di esecuzione.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
