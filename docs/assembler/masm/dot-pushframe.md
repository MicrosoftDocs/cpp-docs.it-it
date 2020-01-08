---
title: .PUSHFRAME
description: Viene descritto. PUSHFRAME (direttiva MASM), utilizzata per specificare la modalità di rimozione di una funzione frame.
ms.date: 12/06/2019
f1_keywords:
- .PUSHFRAME
helpviewer_keywords:
- .PUSHFRAME directive
ms.assetid: 17b123d0-4c6d-4fd2-85eb-798e8ad0a73c
ms.openlocfilehash: 0aaec119d26d87fddb1eba505458da1250a5926e
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75317578"
---
# <a name="pushframe"></a>.PUSHFRAME

Genera una voce di codice di rimozione `UWOP_PUSH_MACHFRAME`. Se viene specificata la parola chiave facoltativa del **codice** , alla voce di codice di rimozione viene assegnato un modificatore pari a 1. In caso contrario, il modificatore è 0.

## <a name="syntax"></a>Sintassi

> **. PUSHFRAME** ⟦**codice**⟧;;

## <a name="remarks"></a>Note

. PUSHFRAME consente agli utenti di ml64. exe di specificare la modalità di rimozione di una funzione frame. È consentito solo all'interno del prologo, che si estende dalla dichiarazione del frame [proc](proc.md) a [. Direttiva ENDPROLOG](dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata`. **. PUSHFRAME** deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende eseguire la rimozione in una macro per garantire l'accordo.

Per ulteriori informazioni, vedere [MASM per x64 (ml64. exe)](masm-for-x64-ml64-exe.md).

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
