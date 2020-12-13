---
description: 'Altre informazioni su: EXTERNDEF'
title: EXTERNDEF
ms.date: 12/06/2019
f1_keywords:
- EXTERNDEF
helpviewer_keywords:
- EXTERNDEF directive
ms.assetid: 95a10de6-c345-4428-a2f2-90f7d411dc86
ms.openlocfilehash: b0ffc2154996fc7cea9f0b61917cadf7b776972f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97130325"
---
# <a name="externdef"></a>EXTERNDEF

Definisce una o più variabili esterne, etichette o simboli chiamati *nome* il cui tipo è *Type*.

## <a name="syntax"></a>Sintassi

> **EXTERNDEF** ⟦*-tipo di linguaggio*⟧ *nome*__:__*tipo ⟦* __,__ ⟦*lingua-tipo*⟧ *nome*__:__*tipo* ... ⟧

## <a name="remarks"></a>Commenti

L'argomento del *tipo di linguaggio* è valido solo in MASM a 32 bit.

Se il *nome* è definito nel modulo, viene considerato come [public](public-masm.md). Se nel modulo viene fatto riferimento al *nome* , questo viene considerato come [extern](extern-masm.md). Se non viene fatto riferimento al *nome* , questo viene ignorato. Il *tipo* può essere [ABS](operator-abs.md), che importa il *nome* come costante. Utilizzato normalmente nei file di inclusione.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
