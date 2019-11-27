---
title: .PUSHFRAME
ms.date: 08/30/2018
f1_keywords:
- .PUSHFRAME
helpviewer_keywords:
- .PUSHFRAME directive
ms.assetid: 17b123d0-4c6d-4fd2-85eb-798e8ad0a73c
ms.openlocfilehash: b0f047278f6250d5ef359f7992df4ea23f4bbd9b
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74398038"
---
# <a name="pushframe"></a>.PUSHFRAME

Genera una voce di codice di rimozione `UWOP_PUSH_MACHFRAME`. Se viene specificato il *codice* facoltativo, alla voce di codice di rimozione viene assegnato un modificatore pari a 1. In caso contrario, il modificatore è 0.

## <a name="syntax"></a>Sintassi

> **. PUSHFRAME** ⟦*codice*⟧;;

## <a name="remarks"></a>Note

. PUSHFRAME consente agli utenti di ml64. exe di specificare il modo in cui una funzione frame viene rilasciata ed è consentita solo all'interno del prologo, che si estende dalla dichiarazione del frame [proc](../../assembler/masm/proc.md) a [. Direttiva ENDPROLOG](../../assembler/masm/dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata`. **. PUSHFRAME** deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende rimuovere la rimozione in una macro per garantire l'accordo.

Per ulteriori informazioni, vedere [MASM per x64 (ml64. exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
