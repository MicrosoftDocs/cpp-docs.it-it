---
title: . SAVEXMM128 | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .SAVEXMM128
dev_langs:
- C++
helpviewer_keywords:
- .SAVEXMM128 directive
ms.assetid: 551eb472-b8d0-47b1-8d82-995d1f485723
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0d44855d3449000c588f7e840753bd734af4b1af
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43689907"
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