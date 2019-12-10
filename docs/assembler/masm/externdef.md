---
title: EXTERNDEF
ms.date: 12/06/2019
f1_keywords:
- EXTERNDEF
helpviewer_keywords:
- EXTERNDEF directive
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
ms.openlocfilehash: e757781151bd1bb57940e5c54f7333a5daa93c74
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74987892"
---
# <a name="externdef"></a>EXTERNDEF

Definisce una o più variabili esterne, etichette o simboli chiamati *nome* il cui tipo è *Type*.

## <a name="syntax"></a>Sintassi

> **EXTERNDEF** ⟦ *-tipo di linguaggio*⟧ *nome* __:__ *tipo ⟦* __,__ ⟦*lingua-tipo*⟧ *nome* __:__ *tipo* ... ⟧

## <a name="remarks"></a>Note

L'argomento del *tipo di linguaggio* è valido solo in MASM a 32 bit.

Se il *nome* è definito nel modulo, viene considerato come [public](../../assembler/masm/public-masm.md). Se nel modulo viene fatto riferimento al *nome* , questo viene considerato come [extern](../../assembler/masm/extern-masm.md). Se non viene fatto riferimento al *nome* , questo viene ignorato. Il *tipo* può essere [ABS](../../assembler/masm/operator-abs.md), che importa il *nome* come costante. Utilizzato normalmente nei file di inclusione.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)
