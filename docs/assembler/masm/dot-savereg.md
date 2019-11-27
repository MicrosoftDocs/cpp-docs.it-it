---
title: .SAVEREG
ms.date: 08/30/2018
f1_keywords:
- .SAVEREG
helpviewer_keywords:
- .SAVEREG directive
ms.assetid: 1dbc2ef6-a197-40e7-9e55-fddcae8cef29
ms.openlocfilehash: 324cf0e70a7ad619e5741c9acc18c24a72f54d13
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74397961"
---
# <a name="savereg"></a>.SAVEREG

Genera una `UWOP_SAVE_NONVOL` o una voce di codice di rimozione `UWOP_SAVE_NONVOL_FAR` per il registro e l'*offset (* *reg*) specificati usando l'offset del prologo corrente. MASM sceglierà la codifica più efficiente.

## <a name="syntax"></a>Sintassi

> **. SAVEREG** *reg* __,__ *offset*

## <a name="remarks"></a>Note

**. SAVEREG**consente agli utenti di ml64. exe di specificare il modo in cui una funzione frame viene rilasciata ed è consentita solo all'interno del prologo, che si estende dalla dichiarazione del frame [proc](../../assembler/masm/proc.md) a [. Direttiva ENDPROLOG](../../assembler/masm/dot-endprolog.md) . Queste direttive non generano codice; generano solo `.xdata` e `.pdata`. **. SAVEREG** deve essere preceduto da istruzioni che implementano effettivamente le azioni da riportare. È consigliabile eseguire il wrapping di entrambe le direttive di rimozione e del codice di cui si intende rimuovere la rimozione in una macro per garantire l'accordo.

Per ulteriori informazioni, vedere [MASM per x64 (ml64. exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

## <a name="see-also"></a>Vedere anche

[Guida di riferimento alle direttive](directives-reference.md)
