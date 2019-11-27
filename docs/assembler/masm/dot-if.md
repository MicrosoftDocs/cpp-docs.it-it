---
title: .IF
ms.date: 11/05/2019
f1_keywords:
- .IF
helpviewer_keywords:
- .IF directive
ms.assetid: dccc7615-8fc7-4829-9f39-0ee405f6c1e3
ms.openlocfilehash: e8213052dce8d84d62f90d4bc2653435c2b31434
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74398228"
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

Se un oggetto [. ALTRIMENTI](../../assembler/masm/dot-else.md) segue, le istruzioni vengono eseguite se la condizione originale è false. Si noti che le condizioni vengono valutate in fase di esecuzione.

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
