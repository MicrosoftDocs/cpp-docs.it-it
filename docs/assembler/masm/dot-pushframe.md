---
title: .PUSHFRAME
description: Viene descritto. PUSHFRAME (direttiva MASM), utilizzata per specificare la modalità di rimozione di una funzione frame.
ms.date: 12/06/2019
f1_keywords:
- .PUSHFRAME
helpviewer_keywords:
- .PUSHFRAME directive
ms.assetid: 17b123d0-4c6d-4fd2-85eb-798e8ad0a73c
ms.openlocfilehash: 5f951396291ecb12dab500a364f176106c5daa8b
ms.sourcegitcommit: 2cac0150ab3bc8260f866451019b8e22c7e1ac11
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/09/2019
ms.locfileid: "74945852"
---
# <a name="pushframe"></a>.PUSHFRAME

Genera una voce di codice di rimozione `UWOP_PUSH_MACHFRAME`. Se viene specificata la parola chiave facoltativa del **codice** , alla voce di codice di rimozione viene assegnato un modificatore pari a 1. In caso contrario, il modificatore è 0.

## <a name="syntax"></a>Sintassi

> **. PUSHFRAME** ⟦**codice**⟧;;

## <a name="remarks"></a>Note

. PUSHFRAME consente agli utenti di ml64. exe di specificare la modalità di rimozione di una funzione frame. È consentito solo all'interno del prologo, che si estende dalla dichiarazione del frame [proc](../../assembler/masm/proc.md) a [. Direttiva ENDPROLOG](../../assembler/masm/dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata`. **. PUSHFRAME** deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende eseguire la rimozione in una macro per garantire l'accordo.

Per ulteriori informazioni, vedere [MASM per x64 (ml64. exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
