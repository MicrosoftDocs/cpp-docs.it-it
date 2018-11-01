---
title: .SAVEXMM128
ms.date: 08/30/2018
f1_keywords:
- .SAVEXMM128
helpviewer_keywords:
- .SAVEXMM128 directive
ms.assetid: 551eb472-b8d0-47b1-8d82-995d1f485723
ms.openlocfilehash: c29ec47170c5e0f46f02d53f23ab477a79bbdc32
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50507901"
---
# <a name="savexmm128"></a>.SAVEXMM128

Genera una un' `UWOP_SAVE_XMM128` o un `UWOP_SAVE_XMM128_FAR` rimozione di ingresso del codice per il registro XMM specificato e un offset utilizzando l'offset corrente di prologo. MASM sceglierà la codifica più efficiente.

## <a name="syntax"></a>Sintassi

> savexmm128 xmmreg, offset

## <a name="remarks"></a>Note

. SAVEXMM128 ml64.exe gli utenti possono specificare come una funzione di frame viene rimosso e viene consentita solo all'interno di prologo, che si estende dal [PROC](../../assembler/masm/proc.md) dichiarazione FRAME per il [. ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva. Queste direttive non generano codice. solo generano `.xdata` e `.pdata`. . SAVEXMM128 deve essere preceduto da istruzioni che implementano effettivamente le azioni per essere rimosso. È consigliabile eseguire il wrapping di direttive di rimozione sia il codice che dalla necessità di rimozione in una macro per garantire l'accordo.

*offset* deve essere un multiplo di 16.

Per altre informazioni, vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>