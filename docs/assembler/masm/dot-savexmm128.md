---
title: .SAVEXMM128
ms.date: 12/17/2019
f1_keywords:
- .SAVEXMM128
helpviewer_keywords:
- .SAVEXMM128 directive
ms.assetid: 551eb472-b8d0-47b1-8d82-995d1f485723
ms.openlocfilehash: 6402b75c10b1400d56923116621f00b4d0908822
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75318254"
---
# <a name="savexmm128"></a>.SAVEXMM128

Genera una `UWOP_SAVE_XMM128` o una voce di codice di rimozione `UWOP_SAVE_XMM128_FAR` per il registro e l'offset di XMM specificati usando l'offset del prologo corrente. MASM sceglierà la codifica più efficiente.

## <a name="syntax"></a>Sintassi

> **. SAVEXMM128** *xmmreg* , *offset*

## <a name="remarks"></a>Note

**. SAVEXMM128** consente agli utenti di ml64. exe di specificare il modo in cui una funzione frame viene rilasciata ed è consentita solo all'interno del prologo, che si estende dalla dichiarazione del frame [proc](proc.md) a [. Direttiva ENDPROLOG](dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata`. . SAVEXMM128 deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende rimuovere la rimozione in una macro per garantire l'accordo.

*offset* deve essere un multiplo di 16.

Per ulteriori informazioni, vedere [MASM per x64 (ml64. exe)](masm-for-x64-ml64-exe.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
