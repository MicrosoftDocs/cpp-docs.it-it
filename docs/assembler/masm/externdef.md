---
title: EXTERNDEF
ms.date: 08/30/2018
f1_keywords:
- EXTERNDEF
helpviewer_keywords:
- EXTERNDEF directive
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
ms.openlocfilehash: 469b49832c171ee78336a0c457f0d269acd3b59d
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74397534"
---
# <a name="externdef"></a>EXTERNDEF

Definisce una o più variabili esterne, etichette o simboli chiamati *nome* il cui tipo è *Type*.

## <a name="syntax"></a>Sintassi

> **EXTERNDEF** ⟦ *-tipo di linguaggio*⟧ *nome* __:__ *tipo ⟦* __,__ ⟦*lingua-tipo*⟧ *nome* __:__ *tipo* ... ⟧

## <a name="remarks"></a>Note

Se il *nome* è definito nel modulo, viene considerato come [public](../../assembler/masm/public-masm.md). Se nel modulo viene fatto riferimento al *nome* , questo viene considerato come [extern](../../assembler/masm/extern-masm.md). Se non viene fatto riferimento al *nome* , questo viene ignorato. Il *tipo* può essere [ABS](../../assembler/masm/operator-abs.md), che importa il *nome* come costante. Utilizzato normalmente nei file di inclusione.

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)
