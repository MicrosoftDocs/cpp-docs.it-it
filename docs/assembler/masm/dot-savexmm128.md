---
title: .SAVEXMM128
ms.date: 08/30/2018
f1_keywords:
- .SAVEXMM128
helpviewer_keywords:
- .SAVEXMM128 directive
ms.assetid: 551eb472-b8d0-47b1-8d82-995d1f485723
ms.openlocfilehash: 08bc5ab50e15aa59e0c49992d1810c7de20f364e
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74397956"
---
# <a name="savexmm128"></a>.SAVEXMM128

Genera una `UWOP_SAVE_XMM128` o una voce di codice di rimozione `UWOP_SAVE_XMM128_FAR` per il registro e l'offset di XMM specificati usando l'offset del prologo corrente. MASM sceglierà la codifica più efficiente.

## <a name="syntax"></a>Sintassi

> **. SAVEXMM128** *xmmreg* , *offset*

## <a name="remarks"></a>Note

**. SAVEXMM128** consente agli utenti di ml64. exe di specificare il modo in cui una funzione frame viene rilasciata ed è consentita solo all'interno del prologo, che si estende dalla dichiarazione del frame [proc](../../assembler/masm/proc.md) a [. Direttiva ENDPROLOG](../../assembler/masm/dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata`. . SAVEXMM128 deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende rimuovere la rimozione in una macro per garantire l'accordo.

*offset* deve essere un multiplo di 16.

Per ulteriori informazioni, vedere [MASM per x64 (ml64. exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
