---
description: 'Altre informazioni su: IF1 e IF2'
title: IF1 e IF2
ms.date: 11/21/2019
f1_keywords:
- IF2
- IF1
helpviewer_keywords:
- IF2 directive
- IF2 directive
ms.assetid: a0f75564-b51b-4e39-ad3b-f7421e7ecad6
ms.openlocfilehash: 427edae687846f19aa281db2b625c8cdf68a1707
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97130195"
---
# <a name="if1-and-if2"></a>IF1 e IF2

Il blocco **IF1** viene valutato al primo passaggio di assembly.

Il blocco **IF2** viene valutato in ogni assembly Pass se **Option: SETIF2** è **true**.

## <a name="syntax"></a>Sintassi

> **IF1;;**

> **IF2;;**

## <a name="remarks"></a>Commenti

Per [la](if-masm.md) sintassi completa, vedere.

A differenza della versione 5,1, MASM 6,1 e versioni successive eseguono la maggior parte delle operazioni sul primo passaggio, quindi esegue il numero di passaggi successivi necessari. Invece, MASM 5,1 assembla sempre in due passaggi di origine. Di conseguenza, potrebbe essere necessario modificare o eliminare alcuni costrutti dipendenti dal passaggio in MASM 6,1 e versioni successive.

### <a name="two-pass-directives"></a>Direttive Two-Pass

Per garantire la compatibilità, MASM 6,1 e versioni successive supportano le direttive 5,1 che fanno riferimento a due passaggi. Sono inclusi **. ERR1**, **. ERR2**, **IF1**, **IF2**, **ELSEIF1** e **ELSEIF2**. Per i costrutti di secondo passaggio, è necessario specificare l' [opzione SETIF2](option-masm.md). Senza l' **opzione SETIF2**, **IF2** e **.** Le direttive Err2 generano un errore:

```output
.ERR2 not allowed : single-pass assembler
```

MASM 6,1 e versioni successive gestiscono costrutti di primo passaggio in modo diverso. Tratta **. Direttiva ERR1** come **. ERR** e la direttiva **IF1** come **se**.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
