---
title: EXTERNDEF
ms.date: 12/06/2019
f1_keywords:
- EXTERNDEF
helpviewer_keywords:
- EXTERNDEF directive
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
ms.openlocfilehash: 2cc5884a7473da9175a6b6af4b4251314deffeb4
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75313392"
---
# <a name="externdef"></a>EXTERNDEF

Definisce una o più variabili esterne, etichette o simboli chiamati *nome* il cui tipo è *Type*.

## <a name="syntax"></a>Sintassi

> **EXTERNDEF** ⟦ *-tipo di linguaggio*⟧ *nome* __:__ *tipo ⟦* __,__ ⟦*lingua-tipo*⟧ *nome* __:__ *tipo* ... ⟧

## <a name="remarks"></a>Note

L'argomento del *tipo di linguaggio* è valido solo in MASM a 32 bit.

Se il *nome* è definito nel modulo, viene considerato come [public](public-masm.md). Se nel modulo viene fatto riferimento al *nome* , questo viene considerato come [extern](extern-masm.md). Se non viene fatto riferimento al *nome* , questo viene ignorato. Il *tipo* può essere [ABS](operator-abs.md), che importa il *nome* come costante. Utilizzato normalmente nei file di inclusione.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
