---
description: Ulteriori informazioni su:. IF (MASM a 32 bit)
title: .IF
ms.date: 11/05/2019
f1_keywords:
- .IF
helpviewer_keywords:
- .IF directive
ms.assetid: dccc7615-8fc7-4829-9f39-0ee405f6c1e3
ms.openlocfilehash: e6ce9695f90a90665aee1cdaf15167963360fe04
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97131677"
---
# <a name="if-32-bit-masm"></a>. IF (MASM a 32 bit)

Genera codice che verifica *condition1* (ad esempio, AX > 7) ed esegue le *istruzioni* se tale condizione è true. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **. SE** *condition1*\
> *istruzioni*\
> ⟦**.** *Condizione2* ElseIf\
> ⟧ *istruzioni*\
> ⟦**.** In caso contrario\
> ⟧ *istruzioni*\
> **. ENDIF**

## <a name="remarks"></a>Commenti

Se un oggetto [. ALTRIMENTI](dot-else.md) segue, le istruzioni vengono eseguite se la condizione originale è false. Si noti che le condizioni vengono valutate in fase di esecuzione.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
